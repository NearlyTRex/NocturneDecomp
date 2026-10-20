#include "core/svetlana/svetlana.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

constinit const CDemonActorType CSvetlana::kType =
    makeActorType("CSvetlana", &CHero::kType, &CSvetlana::create, kVersion);

// deferred: loading the model svetlana.dfm, with CDeformableModelInstance::init
// deferred: the cape's and hair's cloth, and the defaults the constructor gives Svetlana's own
//   fields, with the steps that read them
// nocedit 0x005d8850
CSvetlana::CSvetlana() = default;

// nocedit 0x005d9f50
CSvetlana::~CSvetlana() = default;

// nocedit 0x005d8840
const CDemonActorType &CSvetlana::getActorType() const {
    return kType;
}

// nocedit 0x005d8810
std::unique_ptr<CDemonActor> CSvetlana::create() {
    return std::make_unique<CSvetlana>();
}

} // namespace nocturne::core
