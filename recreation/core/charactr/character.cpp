#include "core/charactr/character.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 6;

} // namespace

constinit const CDemonActorType CCharacter::kType =
    makeActorType("CCharacter", &CDemonActor::kType, nullptr, kVersion);

// deferred: the cloth, collision points, fires and flames, and the defaults the constructor gives
//   the movement, walking, looking, carrying, health, layer action and smoking fields, with the
//   steps that read them
// nocedit 0x00427e20
CCharacter::CCharacter() = default;

// nocedit 0x0042f9f0
CCharacter::~CCharacter() = default;

CDeformableModelInstance &CCharacter::getModel() {
    return model_;
}

} // namespace nocturne::core
