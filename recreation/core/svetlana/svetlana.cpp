#include "core/svetlana/svetlana.h"

#include "common/math/vector3f.h"
#include "core/actor/actor.h"
#include "core/actor/demonactortype.h"
#include "core/game/game.h"
#include "core/hero/herobones.h"
#include "core/skeleton/deformablemodel.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/skeleton.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// nocedit 0x005d87e0
constinit const CDemonActorType CSvetlana::kType =
    makeActorType("CSvetlana", &CHero::kType, &CSvetlana::create, kVersion);

// deferred: the defaults the constructor gives Svetlana's own fields, with the steps that read
//   them
// deferred: a player Svetlana grabbed through CHero::getGrabbed, where the original refuses every
//   grab, which the NPC keeps (the decomp's hero_svetlana.h), with CSvetlana::getGrabbed
// deferred: a player Svetlana at zero hit points not regenerating, so the death check sees her
//   (the decomp's hero_death.h nocturne_hero_regenerates), with CSvetlana::process
// nocedit 0x005d8850
CSvetlana::CSvetlana(CActor &classes)
    : CHero(classes), game_(classes.getGame()),
      cape_(classes.getDosIo(), classes.getKeyFramedModels()),
      hair_(classes.getDosIo(), classes.getKeyFramedModels()) {
    getModel().init("svetlana.dfm");
}

// nocedit 0x005d9f50
CSvetlana::~CSvetlana() = default;

// With nudity off she wears svetlanax.dfm. The original keeps the bones for every Svetlana in one
// global; here each keeps her own. Each bone and part is fatal when her model hasn't it.
// deferred: her blades not drawn, with CSvetlana::drawWeapon and isWeaponDrawn
// deferred: no sound playing, with CSvetlana::process
// nocedit 0x005d88e0
void CSvetlana::setup() {
    CDeformableModelInstance &model = getModel();
    model.init(game_.nudity_flag == 0 ? "svetlanax.dfm" : "svetlana.dfm");
    CHero::setup();
    const CSkeleton &skeleton = *model.getSkeletonPtr();
    bones_ = findHeroBones(skeleton);
    blade_bone_ = skeleton.findBone("Bipblade01", true);
    ribbon_bone_ = skeleton.findBone("BipR14", true);
    const common::CVector3f &position = getLocation().position;
    const common::CVector3f &orientation = getOrientation();
    cape_.load("svetcape.cth");
    cape_.setup(position, orientation, &model);
    hair_.load("svethair.cth");
    hair_.setup(position, orientation, &model);
    const CDeformableModel &parts = *model.getModelPtr();
    left_blade_part_ = parts.findPartByName("lblade01", true);
    right_blade_part_ = parts.findPartByName("rblade02", true);
}

const SHeroBones &CSvetlana::getBones() const {
    return bones_;
}

int CSvetlana::getBladeBone() const {
    return blade_bone_;
}

int CSvetlana::getRibbonBone() const {
    return ribbon_bone_;
}

int CSvetlana::getLeftBladePart() const {
    return left_blade_part_;
}

int CSvetlana::getRightBladePart() const {
    return right_blade_part_;
}

const CCloth &CSvetlana::getCape() const {
    return cape_;
}

const CCloth &CSvetlana::getHair() const {
    return hair_;
}

// nocedit 0x005d8840
const CDemonActorType &CSvetlana::getActorType() const {
    return kType;
}

// nocedit 0x005d9bb0
void CSvetlana::archive(CActorArchive &actor_archive) {
    CHero::archive(actor_archive);
}

// nocedit 0x005d8810
std::unique_ptr<CDemonActor> CSvetlana::create(CActor &classes) {
    return std::make_unique<CSvetlana>(classes);
}

} // namespace nocturne::core
