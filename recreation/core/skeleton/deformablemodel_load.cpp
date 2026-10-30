#include "common/error/error.h"
#include "common/text/scan.h"
#include "common/text/scanformat.h"
#include "common/text/textlines.h"
#include "common/text/textscanner.h"
#include "core/skeleton/deformablemodel.h"
#include "engine/dosio/dosio.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

// From version 3 a file has levels of detail, from 5 texture sets, from 6 each part's dominant
// bone, and from 7 each bone's part.
constexpr int kLodVersion = 3;
constexpr int kTextureSetVersion = 5;
constexpr int kDominantBoneVersion = 6;
constexpr int kBonePartVersion = 7;
// From 2 a file has its scale, and from 4 its bias.
constexpr int kScaleVersion = 2;
constexpr int kBiasVersion = 4;
// A triangle's texture coordinates are 8.8 in the file, and 0.16 once read.
constexpr unsigned kUvShift = 8;

[[noreturn]] void failCorrupt() {
    common::displayErrorAndQuit("Deformable model file is corrupt");
}

using common::toCount;

std::uint16_t toUv(int file_value) {
    return static_cast<std::uint16_t>(static_cast<std::uint32_t>(file_value) >> kUvShift);
}

} // namespace

// nocedit 0x0059b8d0
void CDeformableModel::load(std::string_view filename) {
    model_filename_ = filename;
    const std::optional<std::string> file = owners_.dosio.readFile("models", filename);
    if (!file) {
        common::displayErrorAndQuit(
            std::format("CDeformableModel::load - Can't open {}", filename));
    }
    const std::string text = common::toTextMode(*file);
    common::CTextScanner scanner(text);
    loadStream(scanner);
}

// Each group of fields follows a comment line, which is passed over. The original also quit on a
// read error, which reading the whole file first can't have.
// nocedit 0x0059b970
void CDeformableModel::loadStream(common::CTextScanner &scanner) {
    scanner.skipLine();
    int version = 0;
    if (common::scanFormat(scanner, "%d\n", version) != 1) {
        failCorrupt();
    }
    if (version > kLatestVersion) {
        common::displayErrorAndQuit(std::format(
            "Can't load model of version {}, this .exe can only handle up to version {}", version,
            kLatestVersion));
    }
    int bone_count = 0;
    loadCounts(scanner, version, bone_count);
    scanner.skipLine();
    if (common::scanFormat(scanner, "%[^\n]\n", model_name_) != 1) {
        failCorrupt();
    }
    scanner.skipLine();
    loadParts(scanner, version);
    loadMeshes(scanner);
    loadTail(scanner, version, bone_count);
}

// A file before version 3 has one level of detail and one texture set. More bones than the
// tables hold is corrupt, where the original overran them.
void CDeformableModel::loadCounts(common::CTextScanner &scanner, int version, int &bone_count) {
    scanner.skipLine();
    if (version < kLodVersion) {
        int vertex_count = 0;
        int tri_count = 0;
        int cap_tri_count = 0;
        int texture_count = 0;
        int part_count = 0;
        if (common::scanFormat(scanner, "%d,%d,%d,%d,%d,%d\n", vertex_count, tri_count,
                               cap_tri_count, texture_count, bone_count, part_count) != 6) {
            failCorrupt();
        }
        allocMemory(1, 1, texture_count, part_count);
        allocLOD(0, vertex_count, tri_count, cap_tri_count);
    } else {
        int lod_count = 0;
        int set_count = 1;
        int texture_count = 0;
        int part_count = 0;
        const bool read =
            version < kTextureSetVersion
                ? common::scanFormat(scanner, "%d,%d,%d,%d\n", lod_count, texture_count, bone_count,
                                     part_count) == 4
                : common::scanFormat(scanner, "%d,%d,%d,%d,%d\n", lod_count, set_count,
                                     texture_count, bone_count, part_count) == 5;
        if (!read) {
            failCorrupt();
        }
        allocMemory(lod_count, set_count, texture_count, part_count);
        scanner.skipLine();
        for (std::size_t i = 0; i < meshes_.size(); ++i) {
            int vertex_count = 0;
            int tri_count = 0;
            int cap_tri_count = 0;
            int shadow_only = 0;
            if (common::scanFormat(scanner, "%d,%d,%d,%d,%d\n", vertex_count, tri_count,
                                   cap_tri_count, lods_[i].pixel_height, shadow_only) != 5) {
                failCorrupt();
            }
            lods_[i].shadow_only_flag = shadow_only != 0;
            allocLOD(static_cast<int>(i), vertex_count, tri_count, cap_tri_count);
        }
    }
    if (bone_count > kMaxBones) {
        failCorrupt();
    }
}

// From version 3 a part's fields aren't checked, so a short line leaves the rest as they were.
void CDeformableModel::loadParts(common::CTextScanner &scanner, int version) {
    for (SPart &part : parts_) {
        part.tri_counts.assign(meshes_.size(), 0);
        part.cap_tri_counts.assign(meshes_.size(), 0);
        int adj_count = 0;
        if (version < kLodVersion) {
            if (common::scanFormat(scanner, "\"%[^\"]\",%d,%d,%d\n", part.part_name,
                                   part.tri_counts[0], part.cap_tri_counts[0], adj_count) != 4) {
                failCorrupt();
            }
            part.adj_part_list.assign(toCount(adj_count), 0);
            for (int &adjacent : part.adj_part_list) {
                if (common::scanFormat(scanner, "%d\n", adjacent) != 1) {
                    failCorrupt();
                }
            }
            continue;
        }
        if (version < kDominantBoneVersion) {
            common::scanFormat(scanner, "\"%[^\"]\", %d\n", part.part_name, adj_count);
        } else {
            common::scanFormat(scanner, "\"%[^\"]\", %d, %d\n", part.part_name, part.dominant_bone,
                               adj_count);
        }
        part.adj_part_list.assign(toCount(adj_count), 0);
        for (int &adjacent : part.adj_part_list) {
            common::scanFormat(scanner, "%d\n", adjacent);
        }
        for (std::size_t lod = 0; lod < meshes_.size(); ++lod) {
            common::scanFormat(scanner, "%d,%d\n", part.tri_counts[lod], part.cap_tri_counts[lod]);
        }
    }
}

// Every level's vertices, then every level's triangles, then every level's caps.
void CDeformableModel::loadMeshes(common::CTextScanner &scanner) {
    scanner.skipLine();
    for (SLodMesh &mesh : meshes_) {
        for (SVert &vertex : mesh.vertices) {
            loadVertex(scanner, vertex);
        }
    }
    scanner.skipLine();
    for (SLodMesh &mesh : meshes_) {
        loadFaces(scanner, mesh);
    }
    scanner.skipLine();
    for (SLodMesh &mesh : meshes_) {
        for (int &part : mesh.cap_parts) {
            if (common::scanFormat(scanner, "%d\n", part) != 1) {
                failCorrupt();
            }
        }
    }
}

// A vertex following more than three bones, or a bone past the tables, is corrupt, where the
// original overran them.
void CDeformableModel::loadVertex(common::CTextScanner &scanner, SVert &vertex) {
    int influences = 0;
    if (common::scanFormat(scanner, "%d\n", influences) != 1) {
        failCorrupt();
    }
    vertex.num_bone_influences = static_cast<std::uint8_t>(influences);
    if (vertex.num_bone_influences > SVert::kMaxBones) {
        failCorrupt();
    }
    for (std::size_t i = 0; i < vertex.num_bone_influences; ++i) {
        int bone = 0;
        common::CVector3f &offset = vertex.bone_offsets.at(i);
        if (common::scanFormat(scanner, "%d,%f,%f,%f,%f\n", bone, vertex.bone_weights.at(i),
                               offset.x, offset.y, offset.z) != 5) {
            failCorrupt();
        }
        vertex.bone_indices.at(i) = static_cast<std::uint8_t>(bone);
        if (vertex.bone_indices.at(i) >= kMaxBones) {
            failCorrupt();
        }
    }
}

void CDeformableModel::loadFaces(common::CTextScanner &scanner, SLodMesh &mesh) {
    for (std::size_t i = 0; i < mesh.faces.size(); ++i) {
        std::array<int, 3> index{};
        std::array<int, 3> u{};
        std::array<int, 3> v{};
        if (common::scanFormat(scanner, "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", mesh.face_textures[i],
                               index[0], u[0], v[0], index[1], u[1], v[1], index[2], u[2],
                               v[2]) != 10) {
            failCorrupt();
        }
        mesh.faces[i] = {.vertex_indices = {.vertex_index_0 = static_cast<std::uint16_t>(index[0]),
                                            .vertex_index_1 = static_cast<std::uint16_t>(index[1]),
                                            .vertex_index_2 = static_cast<std::uint16_t>(index[2])},
                         .u_coord_0 = toUv(u[0]),
                         .u_coord_1 = toUv(u[1]),
                         .u_coord_2 = toUv(u[2]),
                         .v_coord_0 = toUv(v[0]),
                         .v_coord_1 = toUv(v[1]),
                         .v_coord_2 = toUv(v[2])};
    }
}

// Before version 2 the scale is 1 and before 4 the bias nothing; a file before 7 works out each
// bone's part.
void CDeformableModel::loadTail(common::CTextScanner &scanner, int version, int bone_count) {
    scanner.skipLine();
    for (std::vector<platform::SMRGLTextureBasic> &set : texture_sets_) {
        for (platform::SMRGLTextureBasic &texture : set) {
            if (common::scanFormat(scanner, "%[^\n]\n", texture.texture_name) != 1) {
                failCorrupt();
            }
        }
    }
    scanner.skipLine();
    for (std::size_t i = 0; i < toCount(bone_count); ++i) {
        common::CVector3f &origin = bone_origins_[i];
        if (common::scanFormat(scanner, "%f,%f,%f\n", origin.x, origin.y, origin.z) != 3) {
            failCorrupt();
        }
    }
    model_scale_ = {.x = 1.0F, .y = 1.0F, .z = 1.0F};
    if (version >= kScaleVersion) {
        scanner.skipLine();
        if (common::scanFormat(scanner, "%f,%f,%f\n", model_scale_.x, model_scale_.y,
                               model_scale_.z) != 3) {
            failCorrupt();
        }
    }
    bias_ = {};
    if (version >= kBiasVersion) {
        scanner.skipLine();
        common::scanFormat(scanner, "%f,%f,%f\n", bias_.x, bias_.y, bias_.z);
    }
    if (version >= kBonePartVersion) {
        scanner.skipLine();
        for (std::size_t i = 0; i < toCount(bone_count); ++i) {
            common::scanFormat(scanner, "%d\n", bone_to_part_map_[i]);
        }
        return;
    }
    computePartDominantBones();
}

} // namespace nocturne::core
