#include "core/stranger/stranger.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 9;

} // namespace

constinit const CDemonActorType CStranger::kType =
    makeActorType("CStranger", &CHero::kType, &CStranger::create, kVersion);

// deferred: loading the model stranger.dfm, with CDeformableModelInstance::init
// deferred: naming the gun's model gat.kfm, with the weapon classes
// deferred: adding the layer actions that draw each weapon, with addLayerAction
// deferred: the defaults the constructor gives the Stranger's own fields, with the steps that read
//   them
// nocedit 0x005bb120
CStranger::CStranger() = default;

// nocedit 0x005c69c0
CStranger::~CStranger() = default;

// nocedit 0x005bb110
const CDemonActorType &CStranger::getActorType() const {
    return kType;
}

// nocedit 0x005bb0e0
std::unique_ptr<CDemonActor> CStranger::create() {
    return std::make_unique<CStranger>();
}

} // namespace nocturne::core
