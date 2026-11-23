#include "core/barrier/barrier.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/box/boundingbox3d.h"
#include "core/set/demonset.h"

#include <memory>
#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;
// The version that first held the classes stopped and the path grid flag.
constexpr int kEffectVersion = 2;
// How far the box reaches below the barrier's foot and above its top.
constexpr float kBoxMargin = 0.1F;

} // namespace

// nocedit 0x004142e0
// bw1 0x004108c0
// bw2 0x00410d40
// bw3 0x0040eb50
CBoundingBox3D *CBarrier::getBoundingBox(CBoundingBox3D *out_box) {
    constexpr float kHalf = 0.5F;
    out_box->min = {.x = -size_.x * kHalf, .y = -kBoxMargin, .z = -size_.z * kHalf};
    out_box->max = {.x = size_.x * kHalf, .y = size_.y + kBoxMargin, .z = kHalf * size_.z};
    return out_box;
}

// nocedit 0x004143e0
void CBarrier::updateCollisionData(CDemonSet &set) {
    if (add_to_path_grid_) {
        set.castVoxelShadow(*this);
    }
}

// nocedit 0x00414150
constinit const CDemonActorType CBarrier::kType =
    makeActorType("CBarrier", &CDemonActor::kType, &CBarrier::create, kVersion);

// nocedit 0x004141c0
CBarrier::CBarrier() = default;

// nocedit 0x00414670
CBarrier::~CBarrier() = default;

// nocedit 0x004141b0
const CDemonActorType &CBarrier::getActorType() const {
    return kType;
}

// nocedit 0x00414180
// bw1 0x00410800
// bw2 0x00410c80
// bw3 0x0040ea90
std::unique_ptr<CDemonActor> CBarrier::create(CActor & /*classes*/) {
    return std::make_unique<CBarrier>();
}

// The original draws a barrier as transparent while the mission is in the editor, which the game
// never is.
// nocedit 0x00414210
// bw2 0x00410d00
void CBarrier::setup() {
    CDemonActor::setup();
    setRenderable(false);
    setTransparent(false);
}

// nocedit 0x00414340
// bw2 0x00410dc0
void CBarrier::archive(CActorArchive &actor_archive) {
    CDemonActor::archive(actor_archive);
    actor_archive.archiveVector(size_, "size");
    if (actor_archive.getSavedVersion(kType) < kEffectVersion) {
        return;
    }
    actor_archive.archiveString(effect_class_name_list_, "effectClassNameList");
    actor_archive.archiveFlag(add_to_path_grid_, "addToPathGrid");
}

const common::CVector3f &CBarrier::getSize() const {
    return size_;
}

const std::string &CBarrier::getEffectClassNameList() const {
    return effect_class_name_list_;
}

bool CBarrier::isAddedToPathGrid() const {
    return add_to_path_grid_;
}

} // namespace nocturne::core
