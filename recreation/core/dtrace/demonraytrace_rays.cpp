#include "common/math/fixed.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcube/demoncube.h"
#include "core/dtrace/demonraytrace.h"

#include <cmath>
#include <cstdint>

namespace nocturne::core {
namespace {

// The ray's length, in the steps the walk counts its cells in.
constexpr float kRayStepScale = 268435456.0F;
// What rayVoxelIntersection gives for a ray that meets nothing, and the ground type it reports
// then.
constexpr float kNoHit = -1.0F;
constexpr int kMissedGroundType = 1;

// A coordinate's cell, as the CRT's floor and then its chopping round give it.
int floorToCell(float grid_coordinate) {
    return common::truncateToInt(std::floor(static_cast<double>(grid_coordinate)));
}

int chop(double value) {
    return common::truncateToInt(value);
}

// The cells a ray crosses, in the order it crosses them: a 3D DDA whose three error terms weigh
// each axis's next boundary against the others in 2^28ths of the ray's length.
class CCellWalk {
public:
    // A walk of one cell, the start's, which takes no step.
    explicit CCellWalk(const common::CVector3i &start_cell) : cell_(start_cell) {}

    // From the start cell to the end's, one cell per boundary crossed. grid_start is the start
    // in cells, world_delta the ray, and extent each axis's crossing in steps.
    CCellWalk(const common::CVector3i &start_cell, const common::CVector3i &end_cell,
              const common::CVector3f &grid_start, const common::CVector3f &world_delta,
              const common::CVector3i &extent)
        : cell_(start_cell), extent_(extent) {
        const auto axis = [](int start, int end, float position, float delta, int &direction,
                             float &to_boundary) {
            if (delta < 0.0F) {
                direction = -1;
                to_boundary = position - static_cast<float>(start);
                return start - end;
            }
            direction = 1;
            to_boundary = static_cast<float>(start + 1) - position;
            return end - start;
        };
        float to_x = 0.0F;
        float to_y = 0.0F;
        float to_z = 0.0F;
        const int crossings_x =
            axis(start_cell.x, end_cell.x, grid_start.x, world_delta.x, direction_.x, to_x);
        const int crossings_y =
            axis(start_cell.y, end_cell.y, grid_start.y, world_delta.y, direction_.y, to_y);
        const int crossings_z =
            axis(start_cell.z, end_cell.z, grid_start.z, world_delta.z, direction_.z, to_z);
        cells_left_ = crossings_x + 1 + crossings_y + crossings_z;
        const auto weigh = [](int a, float to_a, int b, float to_b) {
            return chop((static_cast<double>(a) * to_a) - (static_cast<double>(b) * to_b));
        };
        x_against_y_ = weigh(extent.y, to_x, extent.x, to_y);
        z_against_y_ = weigh(extent.y, to_z, extent.z, to_y);
        x_against_z_ = weigh(extent.z, to_x, extent.x, to_z);
    }

    [[nodiscard]] const common::CVector3i &getCell() const {
        return cell_;
    }

    // To the next cell; false once the ray's last has been walked.
    bool step() {
        if (--cells_left_ < 1) {
            return false;
        }
        if (x_against_y_ < 0) {
            if (x_against_z_ < 0) {
                cell_.x += direction_.x;
                x_against_y_ += extent_.y;
                x_against_z_ += extent_.z;
                return true;
            }
        } else if (z_against_y_ >= 0) {
            cell_.y += direction_.y;
            x_against_y_ -= extent_.x;
            z_against_y_ -= extent_.z;
            return true;
        }
        cell_.z += direction_.z;
        z_against_y_ += extent_.y;
        x_against_z_ -= extent_.x;
        return true;
    }

private:
    common::CVector3i cell_;
    common::CVector3i extent_;
    common::CVector3i direction_;
    int cells_left_ = 1;
    int x_against_y_ = 0;
    int z_against_y_ = 0;
    int x_against_z_ = 0;
};

common::CVector3f subtract(const common::CVector3f &a, const common::CVector3f &b) {
    return {.x = a.x - b.x, .y = a.y - b.y, .z = a.z - b.z};
}

float length(const common::CVector3f &v) {
    return std::sqrt((v.z * v.z) + (v.x * v.x) + (v.y * v.y));
}

// Whether both cells are past the same face of a grid of that many cells.
bool isBesideGrid(const common::CVector3i &start_cell, const common::CVector3i &end_cell,
                  const common::CVector3i &grid) {
    return (start_cell.x < 0 && end_cell.x < 0) || (start_cell.y < 0 && end_cell.y < 0) ||
           (start_cell.z < 0 && end_cell.z < 0) ||
           (start_cell.x >= grid.x && end_cell.x >= grid.x) ||
           (start_cell.y >= grid.y && end_cell.y >= grid.y) ||
           (start_cell.z >= grid.z && end_cell.z >= grid.z);
}

} // namespace

// A ray that starts and ends on the same side of the grid on any axis, or whose length is 0
// over more than one cell, meets nothing and reports no ground type.
// unverified: the cells' positions, fractions and error terms, worked in floats and doubles
//   where the original kept the x87's precision, against a machine-code oracle
// nocedit 0x00495b70
// nocturne 0x00467a00
// bw1 0x0048b150
// bw2 0x00472c60
// bw3 0x00473cd0
float CDemonRaytrace::rayVoxelIntersection(const common::CVector3f &ray_start,
                                           const common::CVector3f &ray_end,
                                           common::CVector3f *out_normal,
                                           int *out_ground_type) const {
    const common::CVector3f start{.x = (ray_start.x - bbox_min_.x) / cell_size_.x,
                                  .y = (ray_start.y - bbox_min_.y) / cell_size_.y,
                                  .z = (ray_start.z - bbox_min_.z) / cell_size_.z};
    const common::CVector3f end{.x = (ray_end.x - bbox_min_.x) / cell_size_.x,
                                .y = (ray_end.y - bbox_min_.y) / cell_size_.y,
                                .z = (ray_end.z - bbox_min_.z) / cell_size_.z};
    const common::CVector3i start_cell{
        .x = floorToCell(start.x), .y = floorToCell(start.y), .z = floorToCell(start.z)};
    const common::CVector3i end_cell{
        .x = floorToCell(end.x), .y = floorToCell(end.y), .z = floorToCell(end.z)};
    if (isBesideGrid(start_cell, end_cell, grid_coord_)) {
        return kNoHit;
    }
    const common::CVector3f delta = subtract(ray_end, ray_start);
    CCellWalk walk(start_cell);
    if (start_cell.x != end_cell.x || start_cell.y != end_cell.y || start_cell.z != end_cell.z) {
        const float ray_length = length(delta);
        if (ray_length <= 0.0F) {
            return kNoHit;
        }
        const float scale = kRayStepScale / ray_length;
        const common::CVector3i extent{.x = chop(std::abs(end.x - start.x) * scale),
                                       .y = chop(std::abs(end.y - start.y) * scale),
                                       .z = chop(std::abs(end.z - start.z) * scale)};
        walk = CCellWalk(start_cell, end_cell, start, delta, extent);
    }
    float nearest = CDemonCube::kNoTriangleMet;
    do {
        const common::CVector3i &cell = walk.getCell();
        const CDemonCube *cube = getCubeAt(cell.x, cell.y, cell.z);
        if (cube == nullptr) {
            continue;
        }
        common::CVector3f normal;
        std::uint32_t ground_type = 0;
        const float along = cube->rayIntersectTriangles(ray_start, delta, normal, ground_type);
        if (along < nearest) {
            if (out_normal != nullptr) {
                *out_normal = normal;
            }
            nearest = along;
            if (out_ground_type != nullptr) {
                *out_ground_type = static_cast<int>(ground_type);
            }
        }
        if (nearest <= 1.0F) {
            return nearest;
        }
    } while (walk.step());
    if (out_ground_type != nullptr) {
        *out_ground_type = kMissedGroundType;
    }
    return kNoHit;
}

// The start's cell is its position chopped toward zero, not floored as the end's is, and only x
// is scaled by the cell's reciprocal; each axis's crossing is weighed by the ray's own length
// along it, not by the cells it crosses. A ray of length 0 over more than one cell is clear.
// unverified: the cells' positions, fractions and error terms, worked in floats and doubles
//   where the original kept the x87's precision, against a machine-code oracle
// nocedit 0x00496220
// nocturne 0x004680b0
// bw1 0x0048b880
// bw2 0x00473390
// bw3 0x00474400
bool CDemonRaytrace::rayVoxelGridTest(const common::CVector3f &start_pos,
                                      const common::CVector3f &end_pos) const {
    const float x_scale = 1.0F / cell_size_.x;
    const common::CVector3f start{.x = (start_pos.x - bbox_min_.x) * x_scale,
                                  .y = (start_pos.y - bbox_min_.y) / cell_size_.y,
                                  .z = (start_pos.z - bbox_min_.z) / cell_size_.z};
    const common::CVector3i start_cell{.x = chop(start.x), .y = chop(start.y), .z = chop(start.z)};
    const common::CVector3i end_cell{.x = floorToCell((end_pos.x - bbox_min_.x) * x_scale),
                                     .y = floorToCell((end_pos.y - bbox_min_.y) / cell_size_.y),
                                     .z = floorToCell((end_pos.z - bbox_min_.z) / cell_size_.z)};
    const common::CVector3f delta = subtract(end_pos, start_pos);
    CCellWalk walk(start_cell);
    if (start_cell.x != end_cell.x || start_cell.y != end_cell.y || start_cell.z != end_cell.z) {
        const float ray_length = length(delta);
        if (ray_length <= 0.0F) {
            return false;
        }
        const float scale = kRayStepScale / ray_length;
        const common::CVector3i extent{.x = chop(std::abs(delta.x) * scale),
                                       .y = chop(std::abs(delta.y) * scale),
                                       .z = chop(std::abs(delta.z) * scale)};
        walk = CCellWalk(start_cell, end_cell, start, delta, extent);
    }
    do {
        const common::CVector3i &cell = walk.getCell();
        const CDemonCube *cube = getCubeAt(cell.x, cell.y, cell.z);
        if (cube == nullptr) {
            continue;
        }
        common::CVector3f normal;
        std::uint32_t ground_type = 0;
        const float along = cube->rayIntersectTriangles(start_pos, delta, normal, ground_type);
        // The original also checked it wasn't negative, which a cube's test never is.
        if (along <= 1.0F) {
            return true;
        }
    } while (walk.step());
    return false;
}

} // namespace nocturne::core
