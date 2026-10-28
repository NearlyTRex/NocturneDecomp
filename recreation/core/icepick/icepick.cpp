#include "core/icepick/icepick.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// nocedit 0x004f7d80
constinit const CDemonActorType CIcePick::kType =
    makeActorType("CIcePick", &CHero::kType, &CIcePick::create, kVersion);

// deferred: loading the model icepick.dfm, with CDeformableModelInstance::init
// deferred: the defaults the constructor gives Ice Pick's own fields, with the steps that read
//   them
// deferred: 300 hit points, and 300 the most, where the original left the most at CCharacter's
//   100, so health items and the health bar measure against Ice Pick's own (the decomp's HERO_ACTIONS
//   in the constructor), with CCharacter's hit point setters
// nocedit 0x004f7df0
CIcePick::CIcePick() = default;

// nocedit 0x004f97e0
CIcePick::~CIcePick() = default;

// nocedit 0x004f7de0
const CDemonActorType &CIcePick::getActorType() const {
    return kType;
}

// nocedit 0x004f9590
void CIcePick::archive(CActorArchive &actor_archive) {
    CHero::archive(actor_archive);
}

// nocedit 0x004f7db0
std::unique_ptr<CDemonActor> CIcePick::create() {
    return std::make_unique<CIcePick>();
}

} // namespace nocturne::core
