#include "core/icepick/icepick.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

constinit const CDemonActorType CIcePick::kType =
    makeActorType("CIcePick", &CHero::kType, &CIcePick::create, kVersion);

// deferred: loading the model icepick.dfm, with CDeformableModelInstance::init
// deferred: the defaults the constructor gives Ice Pick's own fields, with the steps that read
//   them
// nocedit 0x004f7df0
CIcePick::CIcePick() = default;

// nocedit 0x004f97e0
CIcePick::~CIcePick() = default;

// nocedit 0x004f7de0
const CDemonActorType &CIcePick::getActorType() const {
    return kType;
}

// nocedit 0x004f7db0
std::unique_ptr<CDemonActor> CIcePick::create() {
    return std::make_unique<CIcePick>();
}

} // namespace nocturne::core
