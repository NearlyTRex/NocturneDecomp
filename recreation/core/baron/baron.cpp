#include "core/baron/baron.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

constinit const CDemonActorType CBaron::kType =
    makeActorType("CBaron", &CHero::kType, &CBaron::create, kVersion);

// deferred: loading the model baron.dfm, with CDeformableModelInstance::init
// deferred: naming the shell's model baronshell.kfm, and the defaults the constructor gives the
//   Baron's own fields, with the steps that read them
// nocedit 0x00412bc0
CBaron::CBaron() = default;

// nocedit 0x00414100
CBaron::~CBaron() = default;

// nocedit 0x00412bb0
const CDemonActorType &CBaron::getActorType() const {
    return kType;
}

// nocedit 0x00412b80
std::unique_ptr<CDemonActor> CBaron::create() {
    return std::make_unique<CBaron>();
}

} // namespace nocturne::core
