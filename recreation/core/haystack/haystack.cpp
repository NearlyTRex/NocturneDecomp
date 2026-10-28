#include "core/haystack/haystack.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// nocedit 0x004f0ba0
constinit const CDemonActorType CHaystack::kType =
    makeActorType("CHaystack", &CHero::kType, &CHaystack::create, kVersion);

// deferred: loading the model haystack.dfm, with CDeformableModelInstance::init
// deferred: the defaults the constructor gives Haystack's own fields, with the steps that read
//   them
// nocedit 0x004f0c10
CHaystack::CHaystack() = default;

// nocedit 0x004f1d10
CHaystack::~CHaystack() = default;

// nocedit 0x004f0c00
const CDemonActorType &CHaystack::getActorType() const {
    return kType;
}

// nocedit 0x004f1b50
void CHaystack::archive(CActorArchive &actor_archive) {
    CHero::archive(actor_archive);
}

// nocedit 0x004f0bd0
std::unique_ptr<CDemonActor> CHaystack::create() {
    return std::make_unique<CHaystack>();
}

} // namespace nocturne::core
