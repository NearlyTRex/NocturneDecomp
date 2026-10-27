#include "core/barrier/barrier.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"

#include <memory>
#include <string>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;
// The version that first held the classes stopped and the path grid flag.
constexpr int kEffectVersion = 2;

} // namespace

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
std::unique_ptr<CDemonActor> CBarrier::create() {
    return std::make_unique<CBarrier>();
}

// nocedit 0x00414340
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
