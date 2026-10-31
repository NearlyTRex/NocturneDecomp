#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/fwd.h"
#include "core/hero/hero.h"
#include "core/hero/herobones.h"

#include <memory>

namespace nocturne::core {

// The bones and motions of the Stranger's skeleton his own code poses and plays.
struct SStrangerBones {
    SHeroBones bones;
    int neck = 0;
    int spine1 = 0;
    int pelvis = 0;
    // The motions that start his turns on the spot, left then right.
    int turn_left_start_motion = 0;
    int turn_right_start_motion = 0;
};

// The hero the Stranger. The virtual functions not ported yet quit when called.
class CStranger : public CHero {
public:
    static const CDemonActorType kType;

    explicit CStranger(CActor &classes);
    ~CStranger() override;
    CStranger(const CStranger &) = delete;
    CStranger &operator=(const CStranger &) = delete;
    CStranger(CStranger &&) = delete;
    CStranger &operator=(CStranger &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    void setPositionAndOrientation(common::CVector3f *new_position,
                                   common::CVector3f *new_orientation) override;
    void drop(CDemonActor *carrier, common::CVector3f *drop_position) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;
    int getGrabbed(CDemonActor *grabber, int grab_type) override;
    void processDamage(SDamageInfo *damage_info) override;
    EDeathState getDeathState() override;
    void dropCarriedObject(int hand_index, common::CVector3f *drop_direction) override;
    common::CMatrix3x4f *getCarryObjToBodyXForm(int hand_index,
                                                common::CMatrix3x4f *out_matrix) override;
    void drawWeapon(int drawn) override;
    int isWeaponDrawn() override;
    void reset() override;

    // The ladder the Stranger was on the way down; null for none.
    [[nodiscard]] CDemonActor *getLadderToDescend() const;
    [[nodiscard]] bool areGunsDrawn() const;
    // The weapon in the Stranger's hands; null for none.
    [[nodiscard]] CDemonActor *getWeapon() const;
    // The action waiting to start, 0 for none.
    [[nodiscard]] int getActionPending() const;
    [[nodiscard]] const SStrangerBones &getBones() const;
    // Where his right hand and right upper arm are as he picks something up, in his model's space:
    // the reach his arm is aimed by.
    [[nodiscard]] const common::CVector3f &getPickupRightHandPosition() const;
    [[nodiscard]] const common::CVector3f &getPickupRightUpperArmPosition() const;
    [[nodiscard]] const CKeyFramedModelInstance &getHat() const;
    [[nodiscard]] int getHeadPart() const;

private:
    static std::unique_ptr<CDemonActor> create(CActor &classes);

    SStrangerBones bones_;
    common::CVector3f pickup_right_hand_position_;
    common::CVector3f pickup_right_upper_arm_position_;
    CKeyFramedModelInstance hat_;
    int head_part_ = 0;
    CDemonActor *ladder_to_descend_ = nullptr;
    bool guns_drawn_ = false;
    CDemonActor *weapon_ = nullptr;
    int action_pending_ = 0;
};

} // namespace nocturne::core
