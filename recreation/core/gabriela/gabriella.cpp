#include "core/gabriela/gabriella.h"

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/motion/motionlist.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/skeleton.h"

#include <memory>
#include <string_view>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 3;
// Versions 2 and 3 held what the hero was on the way to, which CHero holds from its version 7,
// and version 2 alone what each hand carries.
constexpr int kInteractionVersion = 2;
constexpr int kCarryVersion = 2;

} // namespace

// nocedit 0x004d2910
constinit const CDemonActorType CGabriella::kType =
    makeActorType("CGabriella", &CHero::kType, &CGabriella::create, kVersion);

// deferred: naming the gun's model gabgun.kfm, with the weapon classes
// deferred: the coat's cloth, and the defaults the constructor gives Gabriella's own fields, with
//   the steps that read them
// deferred: a player Gabriella picking up from the action button at the head of its chain,
//   within 5 units up or down rather than 2 (the decomp's hero_gabriella.h PICKUP IS ON THE WRONG
//   BUTTON), with CGabriella::process and findAndPickupNearbyObject
// deferred: strafe input asking for STRAFE_L or STRAFE_R, through STAND where no route reaches
//   it, played faster while a strafe plays untweened (STRAFES ARE NEVER SELECTED, STRAFES PLAY
//   TOO SLOWLY), with CGabriella::process
// deferred: turn input alone held 0.15 s asking for TURN_LEFT or TURN_RIGHT, chained step to step
//   with a 0.2 s crossfade at 0.8 of the authored rate (TURNS IN PLACE ARE NEVER SELECTED), with
//   CGabriella::process
// deferred: the climb starting only from STAND, a press held up to 0.5 s while she settles, the
//   ladder let go when LADDER has no weight, the Stranger's ladder test and eased placement, and
//   the climb played faster (THE LADDER), with CGabriella::process and tryClimbLadder
// deferred: an action press with the weapon away and nothing to interact with kicking an enemy in
//   reach in front, 10 to 15 damage from the left foot at a fixed frame and a shove back (AN
//   UNARMED KICK), with CGabriella::process and processMotionEvents
// deferred: a press a pickup, kick or draw used reading as released until let go (ONE PRESS, ONE
//   ACTION), with CGabriella::process
// deferred: dynamite's fuse lit on the first frame of the charge and burning 3.5 s, aimed and
//   charged to 70 by the Stranger's rules, thrown one-armed with a wind-up and swing, the next
//   stick fetched from her hip, a burnt-out stick dropped at her feet, and the throw's arc drawn
//   while charging (DYNAMITE IS THROWN UNLIT), with CGabriella::process, renderOpaque and
//   updateWeaponAndAimAnimation
// deferred: a new selection holstering the weapon in hand and drawing the new one at her hip,
//   with her own code seeing the weapon in hand and the rest the selection (A SWITCH SWAPS THE
//   WEAPON IN HER HAND), with CGabriella::process and renderOpaque
// deferred: a held fire repeating once the weapon is ready, a pump-action shot's recoil, pump and
//   shell, and a shot pending on the weapon's refire dropped (FIRE AS THE STRANGER FIRES), with
//   CGabriella::process and tryFireWeapon
// deferred: a carried throwable charged and thrown from the action button with her left arm's
//   swing and arc, anything else put down through PUTDOWN when the floor ahead takes it (A
//   CARRIED PART IS PUT DOWN OR THROWN), with CGabriella::process and dropCarriedObject
// deferred: a player's use_item going to CHero::tryUseSelectedItem (USE_ITEM USES THE SELECTED
//   ITEM), with CGabriella::process
// deferred: the gas mask raised to her face and lowered by a posed right arm stepping
//   is_wearing_gas_mask through 0, 1 and 2, and drawn in her hand or on her head (THE GAS MASK),
//   with CGabriella::process and renderOpaque
// nocedit 0x004d2b20
CGabriella::CGabriella(CActor &classes) : CHero(classes) {
    getModel().init("gabriela.dfm");
}

// nocedit 0x004d7660
CGabriella::~CGabriella() = default;

// Her model is named again and found a third time. The original keeps the bones and motions for
// every Gabriella in one global; here each keeps her own.
// deferred: her coat, gabcoat.cth, loaded and set up on her model where she stands, with
//   CCloth::load and CCloth::setup
// deferred: her left hand as the bone her first hand carries at, with getCarryObjToBodyXForm
// nocedit 0x004d2c40
void CGabriella::setup() {
    CHero::setup();
    CDeformableModelInstance &model = getModel();
    model.init("gabriela.dfm");
    model.preCache();
    const CSkeleton &skeleton = *model.getSkeletonPtr();
    const auto bone = [&skeleton](std::string_view name) { return skeleton.findBone(name, true); };
    parts_.head = bone("Bip01 head");
    parts_.left_clavicle = bone("Bip01 L Clavicle");
    parts_.right_clavicle = bone("Bip01 R Clavicle");
    parts_.left_upper_arm = bone("Bip01 L UpperArm");
    parts_.right_upper_arm = bone("Bip01 R UpperArm");
    parts_.left_forearm = bone("Bip01 L ForeArm");
    parts_.right_forearm = bone("Bip01 R ForeArm");
    parts_.left_foot = bone("Bip01 L Foot");
    parts_.right_foot = bone("Bip01 R Foot");
    parts_.left_thigh = bone("Bip01 L Thigh");
    parts_.right_thigh = bone("Bip01 R Thigh");
    parts_.left_calf = bone("Bip01 L Calf");
    parts_.right_calf = bone("Bip01 R Calf");
    parts_.left_hand = bone("Bip01 L Hand");
    parts_.right_hand = bone("Bip01 R Hand");
    parts_.spine2 = bone("Bip01 Spine2");
    parts_.spine = bone("Bip01 Spine");
    const CMotionList &motions = *model.getMotionList();
    parts_.draw_motion = motions.findMotionIndex("gab draw", true);
    parts_.shoot_motion = motions.findMotionIndex("gab shoot", true);
    parts_.crossbow_shoot_motion = motions.findMotionIndex("gab crossbow shoot", true);
    clearPushLeverAndLadder();
}

const SGabriellaParts &CGabriella::getParts() const {
    return parts_;
}

// nocedit 0x004d2b10
const CDemonActorType &CGabriella::getActorType() const {
    return kType;
}

// The original also stopped reading what Gabriella was on the way to from version 4, which is past
// the latest a mission can hold.
// nocedit 0x004d6090
void CGabriella::archive(CActorArchive &actor_archive) {
    CHero::archive(actor_archive);
    const int saved_version = actor_archive.getSavedVersion(kType);
    if (saved_version >= kInteractionVersion) {
        archiveInteractionTargets(actor_archive);
    }
    if (saved_version == kCarryVersion) {
        archiveCarryObjects(actor_archive);
    }
}

// nocedit 0x004d2ae0
std::unique_ptr<CDemonActor> CGabriella::create(CActor &classes) {
    return std::make_unique<CGabriella>(classes);
}

} // namespace nocturne::core
