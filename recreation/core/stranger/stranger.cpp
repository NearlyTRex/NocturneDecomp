#include "core/stranger/stranger.h"

#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/charactr/deathstate.h"
#include "core/event/eventconditions.h"
#include "core/motion/motionlist.h"
#include "core/skeleton/deformablemodel.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/skeleton.h"

#include <memory>
#include <string_view>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 9;
// Versions 2 to 4 held what the hero was on the way to, which CHero holds from its version 7, and
// version 2 alone what each hand carries.
constexpr int kInteractionVersion = 2;
constexpr int kNoInteractionVersion = 5;
constexpr int kCarryVersion = 2;
// The versions that first held the ladder to descend, whether the guns are drawn, the weapon, the
// pending action and the layer action.
constexpr int kLadderVersion = 4;
constexpr int kGunsVersion = 6;
constexpr int kWeaponVersion = 7;
constexpr int kActionVersion = 8;
constexpr int kLayerActionVersion = 9;
// The frame of his pickup motion at which his arm is at full reach.
constexpr float kPickupReachFrame = 22.0F;

// Each fatal when the skeleton hasn't it, looked for in the order his setup looks: as a hero's,
// with his neck before the spine and his pelvis after it.
SStrangerBones findStrangerBones(const CSkeleton &skeleton) {
    const auto bone = [&skeleton](std::string_view name) { return skeleton.findBone(name, true); };
    SStrangerBones found;
    SHeroBones &bones = found.bones;
    bones.head = bone("Bip01 head");
    bones.left_clavicle = bone("Bip01 L Clavicle");
    bones.right_clavicle = bone("Bip01 R Clavicle");
    bones.left_upper_arm = bone("Bip01 L UpperArm");
    bones.right_upper_arm = bone("Bip01 R UpperArm");
    bones.left_forearm = bone("Bip01 L ForeArm");
    bones.right_forearm = bone("Bip01 R ForeArm");
    bones.left_foot = bone("Bip01 L Foot");
    bones.right_foot = bone("Bip01 R Foot");
    bones.left_thigh = bone("Bip01 L Thigh");
    bones.right_thigh = bone("Bip01 R Thigh");
    bones.left_calf = bone("Bip01 L Calf");
    bones.right_calf = bone("Bip01 R Calf");
    bones.left_hand = bone("Bip01 L Hand");
    bones.right_hand = bone("Bip01 R Hand");
    found.neck = bone("Bip01 Neck");
    bones.spine2 = bone("Bip01 Spine2");
    found.spine1 = bone("Bip01 Spine1");
    bones.spine = bone("Bip01 Spine");
    found.pelvis = bone("Bip01 Pelvis");
    return found;
}

} // namespace

// nocedit 0x005bae80
constinit const CDemonActorType CStranger::kType =
    makeActorType("CStranger", &CHero::kType, &CStranger::create, kVersion);

// deferred: naming the gun's model gat.kfm, with the weapon classes
// deferred: adding the layer actions that draw each weapon, with addLayerAction
// deferred: the defaults the constructor gives the Stranger's aiming, recoil, melee, turning,
//   carried object and airborne fields, with the steps that read them
// nocedit 0x005bb120
CStranger::CStranger(CActor &classes)
    : CHero(classes), events_(classes.getEvents()), hat_(classes.getKeyFramedModels()) {
    getModel().init("stranger.dfm");
}

// nocedit 0x005c69c0
CStranger::~CStranger() = default;

// A mission keeps him alive through anything while strangerCannotDie holds.
// nocedit 0x005c67c0
EDeathState CStranger::getDeathState() {
    if (events_.evaluateCondition("strangerCannotDie")) {
        return EDeathState::DEATH_STATE_ALIVE;
    }
    return CCharacter::getDeathState();
}

// The original keeps the bones and motions for every Stranger in one global; here each keeps his
// own. Each bone, motion and part is fatal when his model hasn't it. He is left in the pickup pose
// he was measured in.
// deferred: his hands as the bones each hand carries at, with getCarryObjToBodyXForm
// deferred: posing him as his motion, turn and aim have him, with updateProceduralAnimation
// deferred: clearing his grab timer, ladder blend, fall speed and goggle sounds, with the steps
//   that read them
// nocedit 0x005bb4b0
void CStranger::setup() {
    CHero::setup();
    CDeformableModelInstance &model = getModel();
    bones_ = findStrangerBones(*model.getSkeletonPtr());
    const CMotionList &motions = *model.getMotionList();
    bones_.turn_left_start_motion = motions.findMotionIndex("turnlstart", true);
    bones_.turn_right_start_motion = motions.findMotionIndex("turnrstart", true);
    model.updateMotionAtFrame(motions.findMotionIndex("pickup", true), kPickupReachFrame);
    model.getBoneModelPosition(&pickup_right_hand_position_, bones_.bones.right_hand);
    model.getBoneModelPosition(&pickup_right_upper_arm_position_, bones_.bones.right_upper_arm);
    hat_.setModelName("stranger-hat.kfm");
    hat_.preCache();
    head_part_ = model.getModelPtr()->findPartByName("head01", true);
}

// nocedit 0x005bb110
const CDemonActorType &CStranger::getActorType() const {
    return kType;
}

// nocedit 0x005c2fe0
void CStranger::archive(CActorArchive &actor_archive) {
    CHero::archive(actor_archive);
    const int saved_version = actor_archive.getSavedVersion(kType);
    if (saved_version >= kInteractionVersion && saved_version < kNoInteractionVersion) {
        archiveInteractionTargets(actor_archive);
    }
    if (saved_version == kCarryVersion) {
        archiveCarryObjects(actor_archive);
    }
    if (saved_version >= kLadderVersion) {
        actor_archive.archiveActor(ladder_to_descend_, "ladderToDescend");
    }
    if (saved_version >= kGunsVersion) {
        actor_archive.archiveFlag(guns_drawn_, "gunsDrawn");
    }
    if (saved_version >= kWeaponVersion) {
        actor_archive.archiveActor(weapon_, "weapon");
    }
    if (saved_version >= kActionVersion) {
        actor_archive.archiveInteger(action_pending_, "actionPending");
    }
    if (saved_version >= kLayerActionVersion) {
        archiveLayerAction(actor_archive);
    }
}

CDemonActor *CStranger::getLadderToDescend() const {
    return ladder_to_descend_;
}

bool CStranger::areGunsDrawn() const {
    return guns_drawn_;
}

CDemonActor *CStranger::getWeapon() const {
    return weapon_;
}

int CStranger::getActionPending() const {
    return action_pending_;
}

const SStrangerBones &CStranger::getBones() const {
    return bones_;
}

const common::CVector3f &CStranger::getPickupRightHandPosition() const {
    return pickup_right_hand_position_;
}

const common::CVector3f &CStranger::getPickupRightUpperArmPosition() const {
    return pickup_right_upper_arm_position_;
}

const CKeyFramedModelInstance &CStranger::getHat() const {
    return hat_;
}

int CStranger::getHeadPart() const {
    return head_part_;
}

// nocedit 0x005bb0e0
std::unique_ptr<CDemonActor> CStranger::create(CActor &classes) {
    return std::make_unique<CStranger>(classes);
}

} // namespace nocturne::core
