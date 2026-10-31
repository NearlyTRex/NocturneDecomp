#include "core/skeleton/deformablemodelinstance.h"

#include "common/error/error.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/box/boundingbox3d.h"
#include "core/skeleton/deformablemodel.h"
#include "core/skeleton/deformablemodels.h"
#include "core/skeleton/partvisibility.h"
#include "core/skeleton/pose.h"
#include "core/skeleton/skeleton.h"

#include <cstddef>
#include <format>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::core {

// deferred: the root motion gathered, and which bones a partial pose builds on, with
//   getRootMotionDelta and updateMotion's partial poses
// nocedit 0x0059ddc0
CDeformableModelInstance::CDeformableModelInstance(IDeformableModels &models) : models_(models) {}

// nocedit 0x0059de40
CDeformableModelInstance::~CDeformableModelInstance() = default;

// nocedit 0x005a0410
void CDeformableModelInstance::showAllParts() {
    part_visibility_.fill(EPartVisibility::kShown);
}

// nocedit 0x005a0430
void CDeformableModelInstance::clearAllTextureSetIndices() {
    part_texture_sets_.fill(kFirstTextureSet);
}

// nocedit 0x005a0840
void CDeformableModelInstance::init(std::string_view model_name) {
    model_name_ = model_name;
    model_ptr_ = nullptr;
    showAllParts();
    clearAllTextureSetIndices();
    cached_skinned_lod_index_ = kNoSkinnedLod;
}

// nocedit 0x005a07a0
CDeformableModel *CDeformableModelInstance::getModelPtr() {
    if (model_ptr_ == nullptr) {
        if (!model_name_.empty()) {
            common::displayErrorAndQuit(
                std::format("Tried to do something with model {}, but modelPtr not set.  "
                            "(CDeformableModelInstance::preCache not called.",
                            model_name_));
        }
        common::displayErrorAndQuit(
            "CDeformableModelInstance::getModelPtr - modelPtr=NULL, and no name specified.");
    }
    return model_ptr_;
}

// nocedit 0x005a0820
CSkeleton *CDeformableModelInstance::getSkeletonPtr() {
    return getModelPtr()->getSkeletonPtr();
}

// nocedit 0x005a0450
void CDeformableModelInstance::preCache() {
    initializeFromModel(models_.getDeformableModel(model_name_));
}

// nocedit 0x005a0480
void CDeformableModelInstance::initializeFromModel(CDeformableModel &model) {
    model_ptr_ = &model;
    const CSkeleton &skeleton = *getSkeletonPtr();
    setMotionList(skeleton.getMotionList());
    const common::CVector3f &model_scale = model.getModelScale();
    root_offset_scale_ = {.x = model_scale.x * scale_factor_,
                          .y = model_scale.y * scale_factor_,
                          .z = model_scale.z * scale_factor_};
    const std::span<const SBone> bones = skeleton.getBones();
    for (std::size_t i = 0; i < bones.size(); ++i) {
        common::CVector3f &origin = bone_origins_.at(i);
        origin = *model.getVertexPoolPtr(static_cast<int>(i));
        rest_bone_scales_.at(i) = scale_factor_;
        if (bones[i].parent_index < 0) {
            origin = {.x = scale_factor_ * origin.x,
                      .y = scale_factor_ * origin.y,
                      .z = scale_factor_ * origin.z};
        }
    }
    allocPointList();
    computeBoundingBoxFromVertices();
    updateAnimationAndTransforms();
}

// The original quit when it couldn't have the room, where this throws.
// nocedit 0x0059deb0
void CDeformableModelInstance::allocPointList() {
    free();
    const std::span<const SLodMesh> meshes = getModelPtr()->getLodMeshes();
    skinned_vertices_.assign(meshes.empty() ? 0 : meshes.front().vertices.size(), {});
    cached_skinned_lod_index_ = kNoSkinnedLod;
}

// nocedit 0x0059df40
void CDeformableModelInstance::free() {
    skinned_vertices_ = {};
}

const std::string &CDeformableModelInstance::getModelName() const {
    return model_name_;
}

float CDeformableModelInstance::getScaleFactor() const {
    return scale_factor_;
}

void CDeformableModelInstance::setScaleFactor(float scale_factor) {
    scale_factor_ = scale_factor;
}

const SPose &CDeformableModelInstance::getPose() const {
    return bone_transform_;
}

std::span<const common::CVector3i> CDeformableModelInstance::getSkinnedVertices() const {
    return skinned_vertices_;
}

int CDeformableModelInstance::getCachedSkinnedLodIndex() const {
    return cached_skinned_lod_index_;
}

const CBoundingBox3D &CDeformableModelInstance::getBoundingBox() const {
    return bounding_box_;
}

EBoneUpdateMode CDeformableModelInstance::getBoneUpdateMode() const {
    return bone_update_mode_;
}

void CDeformableModelInstance::setBoneUpdateMode(EBoneUpdateMode mode) {
    bone_update_mode_ = mode;
}

EPartVisibility CDeformableModelInstance::getPartVisibility(std::size_t part) const {
    return part_visibility_.at(part);
}

void CDeformableModelInstance::setPartVisibility(std::size_t part, EPartVisibility visibility) {
    part_visibility_.at(part) = visibility;
}

int CDeformableModelInstance::getPartTextureSet(std::size_t part) const {
    return part_texture_sets_.at(part);
}

void CDeformableModelInstance::setPartTextureSet(std::size_t part, int texture_set) {
    part_texture_sets_.at(part) = texture_set;
}

} // namespace nocturne::core
