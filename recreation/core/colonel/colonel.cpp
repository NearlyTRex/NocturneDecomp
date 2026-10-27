#include "core/colonel/colonel.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// nocedit 0x0043f770
constinit const CDemonActorType CColonel::kType =
    makeActorType("CColonel", &CHero::kType, &CColonel::create, kVersion);

// deferred: loading the model colonel.dfm, with CDeformableModelInstance::init
// deferred: the defaults the constructor gives the Colonel's own fields, with the steps that read
//   them
// deferred: a player Colonel's pistol: draw plays "draw" and puts it in his right hand, the arm
//   aims at the nearest enemy in a 30 degree cone with the laser sight, fire shoots and plays
//   "shoot", both layered from Spine2 up so he keeps moving, the reserve topped up after each
//   shot (the decomp's hero_colonel.h), with CColonel::process and renderOpaque
// deferred: a player Colonel killed going to DIE and DEAD, where the original asks for DAMAGE2
//   and DAMAGE3 and he stands back up (the decomp's nocturne_colonel_death_state), with
//   CColonel::processDamage
// deferred: a player Colonel breaking free of a grab dealing every enemy in reach 10 to 15
//   damage and shoving it back (the decomp's nocturne_colonel_push_off and hero_shove.h), with
//   CColonel::process
// nocedit 0x0043f7e0
CColonel::CColonel() = default;

// nocedit 0x00440670
CColonel::~CColonel() = default;

// nocedit 0x0043f7d0
const CDemonActorType &CColonel::getActorType() const {
    return kType;
}

// nocedit 0x00440490
void CColonel::archive(CActorArchive &actor_archive) {
    CHero::archive(actor_archive);
}

// nocedit 0x0043f7a0
std::unique_ptr<CDemonActor> CColonel::create() {
    return std::make_unique<CColonel>();
}

} // namespace nocturne::core
