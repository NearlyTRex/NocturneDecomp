#include "core/cloth/cloth.h"

#include "common/error/error.h"
#include "common/math/extendedfloat.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/dmodel/keyframedmodels.h"
#include "engine/dosio/dosio.h"
#include "platform/mrglprimitivequad.h"
#include "platform/mrglvertex.h"

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <format>
#include <optional>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

// The model's 24.8 positions in world units.
constexpr float kFromFixed = 1.0F / 256.0F;
// Before version 3 a file's physics were replaced by these.
constexpr float kOldWeight = 0.125F;
constexpr float kOldGravity = 32.0F;
constexpr float kOldDampen = 0.9F;
constexpr float kOldSpring = 0.005F;
constexpr float kOldBodyFriction = 0.5F;
constexpr float kOldFloorFriction = 0.5F;
constexpr float kOldWindArea = 0.05F;
constexpr float kOldMomentOfInertia = 0.15F;
// The versions that first held each field.
constexpr int kDoubleSidedVersion = 2;
constexpr int kWindVersion = 3;

// The squares summed y, x then z on the x87 and the root taken there.
float distance(const common::CVector3f &a, const common::CVector3f &b) {
    const common::CExtendedFloat dx(a.x - b.x);
    const common::CExtendedFloat dy(a.y - b.y);
    const common::CExtendedFloat dz(a.z - b.z);
    return static_cast<float>(std::sqrt((((dy * dy) + (dx * dx)) + (dz * dz)).toDouble()));
}

} // namespace

// The original's fixed tables held 800 points, 50 bones and 900 pins; these take any number.
// nocedit 0x00438ba0
CCloth::CCloth(const engine::CDosIo &dosio, IKeyFramedModels &models)
    : dosio_(dosio), models_(models), model_(dosio) {}

// nocedit 0x00438c00
CCloth::~CCloth() = default;

// Each read past the end leaves its field as it was, as the original's fscanf did. A version 1
// or 2 file's physics are read and replaced by the defaults.
// nocedit 0x00438cf0
void CCloth::load(std::string_view filename) {
    const std::optional<std::string> text = dosio_.readFile("models", filename);
    if (!text) {
        common::displayErrorAndQuit(std::format("CCloth::load - Unable to open file {}", filename));
    }
    common::CTextScanner scanner(*text);
    scanner.skipLine();
    common::scanFormat(scanner, "%d\n", version_);
    if (version_ > kLatestVersion) {
        common::displayErrorAndQuit(
            std::format("{} is version {}, this .EXE is old and can only handle up to version {}",
                        filename, version_, kLatestVersion));
    }
    scanner.skipLine();
    std::string model_name;
    common::scanFormat(scanner, "%s\n", model_name);
    models_.loadOwnedModel(model_, model_name);
    scanner.skipLine();
    if (version_ < kWindVersion) {
        common::scanFormat(scanner, "%f,%f,%f,%f,%f,%f\n", weight_, gravity_, dampen_, spring_,
                           body_friction_, floor_friction_);
        weight_ = kOldWeight;
        gravity_ = kOldGravity;
        dampen_ = kOldDampen;
        spring_ = kOldSpring;
        body_friction_ = kOldBodyFriction;
        floor_friction_ = kOldFloorFriction;
        wind_area_ = kOldWindArea;
        mom_inert_ = kOldMomentOfInertia;
    } else {
        common::scanFormat(scanner, "%f,%f,%f,%f,%f,%f,%f,%f\n", weight_, gravity_, dampen_,
                           spring_, body_friction_, floor_friction_, wind_area_, mom_inert_);
    }
    scanner.skipLine();
    common::scanFormat(scanner, "%f\n", transparency_);
    if (version_ < kDoubleSidedVersion) {
        double_sided_ = false;
    } else {
        scanner.skipLine();
        int double_sided = double_sided_ ? 1 : 0;
        common::scanFormat(scanner, "%d\n", double_sided);
        double_sided_ = double_sided != 0;
    }
    scanner.skipLine();
    int locked_count = static_cast<int>(locked_vertex_indices_.size());
    common::scanFormat(scanner, "%d\n", locked_count);
    allocMemory();
    scanner.skipLine();
    locked_vertex_indices_.resize(static_cast<std::size_t>(std::max(locked_count, 0)));
    for (int &index : locked_vertex_indices_) {
        common::scanFormat(scanner, "%d\n", index);
    }
    initializeConnections();
    scanner.skipLine();
    int bone_count = static_cast<int>(collide_bones_.size());
    common::scanFormat(scanner, "%d\n", bone_count);
    collide_bones_.resize(static_cast<std::size_t>(std::max(bone_count, 0)));
    for (SClothBone &bone : collide_bones_) {
        common::scanFormat(scanner, "\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f, %f\n", bone.name,
                           bone.radius1, bone.radius2, bone.euler1.x, bone.euler1.y, bone.euler1.z,
                           bone.euler2.x, bone.euler2.z, bone.euler2.y, bone.length);
    }
    const std::span<const common::CVector3i> model_vertices = model_.getFrameVertices(0);
    for (std::size_t i = 0; i < model_vertices.size(); ++i) {
        const common::CVector3i &v = model_vertices[i];
        vertices_[i].offset_pos = {.x = static_cast<float>(v.x) * kFromFixed,
                                   .y = static_cast<float>(v.y) * kFromFixed,
                                   .z = static_cast<float>(v.z) * kFromFixed};
    }
}

// A point for each of the model's vertices, keeping those it had.
// nocedit 0x00438c50
void CCloth::allocMemory() {
    vertices_.resize(static_cast<std::size_t>(model_.getVertexCount()));
    vertex_order_.assign(vertices_.size(), 0);
}

// A point not yet tied to the other is tied to it when the other is as high or higher.
void CCloth::tie(SClothVertex &vertex, int other) {
    const SClothVertex &tied = vertices_[static_cast<std::size_t>(other)];
    if (std::ranges::contains(vertex.connected_indices, other) ||
        !(vertex.offset_pos.y <= tied.offset_pos.y)) {
        return;
    }
    vertex.connected_indices.push_back(other);
    vertex.rest_lengths.push_back(distance(vertex.position, tied.position));
    if (vertex.connected_indices.size() > SClothVertex::kMaxConnections) {
        common::displayErrorAndQuit("Too many connecting verticies");
    }
}

// Each point is tied to the corners it shares an edge with that are as high or higher, and its
// pin is taken out. More than kMaxConnections is fatal.
// nocedit 0x004394e0
void CCloth::initializeConnections() {
    const std::span<const platform::SMRGLPrimitiveQuad> polygons = model_.getPolygons();
    for (std::size_t i = 0; i < vertices_.size(); ++i) {
        SClothVertex &vertex = vertices_[i];
        vertex.connected_indices.clear();
        vertex.rest_lengths.clear();
        vertex.locked = false;
        const auto self = static_cast<int>(i);
        for (const platform::SMRGLPrimitiveQuad &polygon : polygons) {
            const std::span<const platform::SMRGLVertex> corners = polygon.vertices;
            if (std::ranges::none_of(corners, [self](const platform::SMRGLVertex &corner) {
                    return corner.vertex_index == self;
                })) {
                continue;
            }
            for (std::size_t c = 0; c < corners.size(); ++c) {
                const int from = corners[c].vertex_index;
                const int to = corners[(c + 1) % corners.size()].vertex_index;
                if (from == self || to == self) {
                    tie(vertex, from == self ? to : from);
                }
            }
        }
    }
}

const CKeyFramedModel &CCloth::getModel() const {
    return model_;
}

std::span<const SClothVertex> CCloth::getVertices() const {
    return vertices_;
}

std::span<const SClothBone> CCloth::getCollideBones() const {
    return collide_bones_;
}

std::span<const int> CCloth::getLockedVertexIndices() const {
    return locked_vertex_indices_;
}

std::span<const int> CCloth::getVertexOrder() const {
    return vertex_order_;
}

int CCloth::getVersion() const {
    return version_;
}

float CCloth::getWeight() const {
    return weight_;
}

float CCloth::getGravity() const {
    return gravity_;
}

float CCloth::getDampen() const {
    return dampen_;
}

float CCloth::getSpring() const {
    return spring_;
}

float CCloth::getBodyFriction() const {
    return body_friction_;
}

float CCloth::getFloorFriction() const {
    return floor_friction_;
}

float CCloth::getWindArea() const {
    return wind_area_;
}

float CCloth::getMomentOfInertia() const {
    return mom_inert_;
}

float CCloth::getTransparency() const {
    return transparency_;
}

bool CCloth::isDoubleSided() const {
    return double_sided_;
}

} // namespace nocturne::core
