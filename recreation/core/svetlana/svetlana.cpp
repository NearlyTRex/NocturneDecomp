#include "core/svetlana/svetlana.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// nocedit 0x005d87e0
constinit const CDemonActorType CSvetlana::kType =
    makeActorType("CSvetlana", &CHero::kType, &CSvetlana::create, kVersion);

// deferred: loading the model svetlana.dfm, with CDeformableModelInstance::init
// deferred: the cape's and hair's cloth, and the defaults the constructor gives Svetlana's own
//   fields, with the steps that read them
// deferred: a player Svetlana grabbed through CHero::getGrabbed, where the original refuses every
//   grab, which the NPC keeps (the decomp's hero_svetlana.h), with CSvetlana::getGrabbed
// deferred: a player Svetlana at zero hit points not regenerating, so the death check sees her
//   (the decomp's hero_death.h nocturne_hero_regenerates), with CSvetlana::process
// nocedit 0x005d8850
CSvetlana::CSvetlana() = default;

// nocedit 0x005d9f50
CSvetlana::~CSvetlana() = default;

// nocedit 0x005d8840
const CDemonActorType &CSvetlana::getActorType() const {
    return kType;
}

// nocedit 0x005d9bb0
void CSvetlana::archive(CActorArchive &actor_archive) {
    CHero::archive(actor_archive);
}

// nocedit 0x005d8810
std::unique_ptr<CDemonActor> CSvetlana::create() {
    return std::make_unique<CSvetlana>();
}

} // namespace nocturne::core
