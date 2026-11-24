#include "core/skeleton/deformablemodel.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/scan.h"
#include "core/skeleton/deformablemodelmanager.h"
#include "core/skeleton/skeleton.h"
#include "engine/drender/demonrenderer.h"

#include <algorithm>
#include <cstddef>
#include <format>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

using common::toCount;

// nocedit 0x0059a160
// bw1 0x00563690
// bw2 0x00541020
// bw3 0x00548230
CDeformableModel::CDeformableModel(const SDeformableModelOwners &owners) : owners_(owners) {}

// nocedit 0x0059a270
// bw1 0x005637b0
// bw2 0x00541140
// bw3 0x00548350
CDeformableModel::~CDeformableModel() = default;

// The original kept the bone tables, as this does.
// nocedit 0x0059a2b0
void CDeformableModel::free() {
    lods_.clear();
    meshes_.clear();
    num_textures_ = 0;
    texture_sets_.clear();
    parts_.clear();
}

// Every level of detail starts at a pixel height of 1, casting more than its shadow.
// nocedit 0x0059a3f0
void CDeformableModel::allocMemory(int num_lods, int num_texture_sets, int num_textures,
                                   int num_parts) {
    free();
    const auto fail = [](std::string_view what, int most, int requested) {
        common::displayErrorAndQuit(
            std::format("Too many {} in CDeformableModel::allocMemory.  Max is {}, requested {}.",
                        what, most, requested));
    };
    if (num_texture_sets > kMaxTextureSets) {
        fail("texture sets", kMaxTextureSets, num_texture_sets);
    }
    if (num_textures > kMaxTextures) {
        fail("textures", kMaxTextures, num_textures);
    }
    if (num_parts > kMaxParts) {
        fail("parts", kMaxParts, num_parts);
    }
    if (num_lods > kMaxLods) {
        fail("LODs", kMaxLods, num_lods);
    }
    num_textures_ = num_textures;
    parts_.assign(toCount(num_parts), {});
    lods_.assign(toCount(num_lods), SLod{.pixel_height = 1, .shadow_only_flag = false});
    meshes_.assign(toCount(num_lods), {});
    texture_sets_.assign(toCount(num_texture_sets),
                         std::vector<platform::SMRGLTextureBasic>(toCount(num_textures)));
}

// The original quit when it couldn't allocate, which a failed allocation does here, and on a level
// of detail it doesn't have, which loadStream never asks for.
// nocedit 0x0059a510
// bw1 0x005639e0
// bw2 0x00541370
// bw3 0x00548580
void CDeformableModel::allocLOD(int lod_index, int vertex_count, int tri_count, int cap_tri_count) {
    SLodMesh &mesh = meshes_.at(static_cast<std::size_t>(lod_index));
    mesh.tri_count = tri_count;
    mesh.cap_tri_count = cap_tri_count;
    mesh.vertices.assign(toCount(vertex_count), {});
    mesh.faces.assign(toCount(tri_count) + toCount(cap_tri_count), {});
    mesh.face_textures.assign(mesh.faces.size(), 0);
    mesh.cap_parts.assign(toCount(cap_tri_count), 0);
}

// nocedit 0x0059a780
// bw1 0x00563bb0
// bw2 0x00541540
// bw3 0x00548750
void CDeformableModel::captureTextures() {
    bindSkeleton(owners_.models.loadSkeleton(model_name_));
    for (std::vector<platform::SMRGLTextureBasic> &set : texture_sets_) {
        for (platform::SMRGLTextureBasic &texture : set) {
            owners_.renderer.captureTexture(texture);
        }
    }
}

// nocedit 0x0059c1f0
void CDeformableModel::bindSkeleton(CSkeleton &skeleton) {
    skeleton_ptr_ = &skeleton;
    computeBoneBoundsAndFlags();
    computeFarthestChildBones();
}

// nocedit 0x0059a810
CSkeleton *CDeformableModel::getSkeletonPtr() {
    if (skeleton_ptr_ == nullptr) {
        common::displayErrorAndQuit(
            "Tried to do something with the skeleton, but skeleton ptr not set!");
    }
    return skeleton_ptr_;
}

// nocedit 0x0059a860
// bw1 0x00563c90
// bw2 0x00541620
// bw3 0x00548830
common::CVector3f *CDeformableModel::getVertexPoolPtr(int index) {
    return &bone_origins_.at(static_cast<std::size_t>(index));
}

// nocedit 0x0059c240
// bw1 0x00565780
// bw2 0x00543100
// bw3 0x0054a310
int CDeformableModel::findPartByName(std::string_view part_name, bool error_if_not_found) const {
    for (std::size_t i = 0; i < parts_.size(); ++i) {
        if (common::equalsIgnoringAsciiCase(parts_[i].part_name, part_name)) {
            return static_cast<int>(i);
        }
    }
    if (error_if_not_found) {
        common::displayErrorAndQuit(
            std::format("Can't find part {} in model {}", part_name, model_filename_));
    }
    return -1;
}

const std::string &CDeformableModel::getModelFilename() const {
    return model_filename_;
}

const std::string &CDeformableModel::getModelName() const {
    return model_name_;
}

std::span<const SLod> CDeformableModel::getLods() const {
    return lods_;
}

std::span<const SLodMesh> CDeformableModel::getLodMeshes() const {
    return meshes_;
}

// The original's triangle took 22 bytes, a cap's part 4 more, and a vertex 52.
// nocedit 0x0059dd60
// bw1 0x00567310
// bw2 0x00544c70
// bw3 0x0054bea0
int CDeformableModel::calculateMemorySize() const {
    constexpr int kTriangleBytes = 0x16;
    constexpr int kCapPartBytes = 4;
    constexpr int kVertexBytes = 0x34;
    int bytes = 0;
    for (const SLodMesh &mesh : meshes_) {
        bytes += ((mesh.tri_count + mesh.cap_tri_count) * kTriangleBytes) +
                 (mesh.cap_tri_count * kCapPartBytes) +
                 (static_cast<int>(mesh.vertices.size()) * kVertexBytes);
    }
    return bytes;
}

std::span<const SPart> CDeformableModel::getParts() const {
    return parts_;
}

std::span<const std::vector<platform::SMRGLTextureBasic>> CDeformableModel::getTextureSets() const {
    return texture_sets_;
}

const common::CVector3f &CDeformableModel::getModelScale() const {
    return model_scale_;
}

const common::CVector3f &CDeformableModel::getBias() const {
    return bias_;
}

std::span<const CBoundingBox3D> CDeformableModel::getBoneBounds() const {
    return bone_bounds_;
}

std::span<const int> CDeformableModel::getBoneFlags() const {
    return bone_flags_;
}

std::span<const int> CDeformableModel::getBoneToPartMap() const {
    return bone_to_part_map_;
}

std::span<const int> CDeformableModel::getFarthestChildBones() const {
    return farthest_child_bone_;
}

} // namespace nocturne::core
