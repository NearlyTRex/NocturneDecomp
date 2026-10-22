#include "core/scat/scat.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

constinit const CDemonActorType CScat::kType =
    makeActorType("CScat", &CHero::kType, &CScat::create, kVersion);

// deferred: loading the model scat.dfm, with CDeformableModelInstance::init
// deferred: creating Scat's default weapon, with the weapon classes
// deferred: adding the layer actions that draw the pistols, with addLayerAction
// deferred: the defaults the constructor gives Scat's own fields, with the steps that read them
// nocedit 0x00556ed0
CScat::CScat() = default;

// nocedit 0x00559160
CScat::~CScat() = default;

// nocedit 0x00556ec0
const CDemonActorType &CScat::getActorType() const {
    return kType;
}

// nocedit 0x00556e90
std::unique_ptr<CDemonActor> CScat::create() {
    return std::make_unique<CScat>();
}

} // namespace nocturne::core
