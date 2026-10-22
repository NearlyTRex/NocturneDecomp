#include "core/moloch/moloch.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

constinit const CDemonActorType CMoloch::kType =
    makeActorType("CMoloch", &CHero::kType, &CMoloch::create, kVersion);

// deferred: loading the human model moloch_h.dfm, with CDeformableModelInstance::init
// deferred: the morph, the events that change Moloch's form, and the defaults the constructor
//   gives its own fields, with the steps that read them
// nocedit 0x00528b30
CMoloch::CMoloch() = default;

// nocedit 0x00528bf0
CMoloch::~CMoloch() = default;

// nocedit 0x00528b20
const CDemonActorType &CMoloch::getActorType() const {
    return kType;
}

// nocedit 0x00528af0
std::unique_ptr<CDemonActor> CMoloch::create() {
    return std::make_unique<CMoloch>();
}

} // namespace nocturne::core
