#include "core/gabriela/gabriella.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 3;

} // namespace

constinit const CDemonActorType CGabriella::kType =
    makeActorType("CGabriella", &CHero::kType, &CGabriella::create, kVersion);

// deferred: loading the model gabriela.dfm, with CDeformableModelInstance::init
// deferred: naming the gun's model gabgun.kfm, with the weapon classes
// deferred: the coat's cloth, and the defaults the constructor gives Gabriella's own fields, with
//   the steps that read them
// nocedit 0x004d2b20
CGabriella::CGabriella() = default;

// nocedit 0x004d7660
CGabriella::~CGabriella() = default;

// nocedit 0x004d2b10
const CDemonActorType &CGabriella::getActorType() const {
    return kType;
}

// nocedit 0x004d2ae0
std::unique_ptr<CDemonActor> CGabriella::create() {
    return std::make_unique<CGabriella>();
}

} // namespace nocturne::core
