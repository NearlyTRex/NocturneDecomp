#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "core/actor/demonactor.h"
#include "core/actor/groundtype.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/door/doortype.h"
#include "core/event/rulelist.h"
#include "core/fwd.h"

#include <cstdint>
#include <memory>
#include <string>

namespace nocturne::core {

// A door in the set, opened and closed by events, keys and its rules. The virtual functions not
// ported yet quit when called.
class CDoor : public CDemonActor {
public:
    static const CDemonActorType kType;

    CDoor();
    ~CDoor() override;
    CDoor(const CDoor &) = delete;
    CDoor &operator=(const CDoor &) = delete;
    CDoor(CDoor &&) = delete;
    CDoor &operator=(CDoor &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    void renderBackground(int layer_flag) override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    EGroundType getGroundType() override;
    int getBlockVirtualDirectorFlag() override;
    int allowBulletHoles() override;
    void updateCollisionData() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;

    void onOpened();
    void setSwingRange(float swing_range);
    common::CVector3f *getOpenStandPos(common::CVector3f *out_pos, common::CVector3f *direction,
                                       common::CVector3f *actor_pos);
    int getMoveType(CDemonActor *opener);
    std::uint32_t onLocked();

    [[nodiscard]] const CKeyFramedModelInstance &getModel() const;
    [[nodiscard]] EDoorType getDoorType() const;
    [[nodiscard]] EDoorSide getDoorSide() const;
    [[nodiscard]] EDoorState getDoorState() const;
    [[nodiscard]] EDoorSwing getDoorSwing() const;
    // The events that open and close the door.
    [[nodiscard]] const std::string &getOpenEvent() const;
    [[nodiscard]] const std::string &getCloseEvent() const;
    [[nodiscard]] const std::string &getOpenSound() const;
    [[nodiscard]] const std::string &getCloseSound() const;
    [[nodiscard]] const std::string &getLockedSound() const;
    // The keys that open the door, a bit each; none for a door that isn't locked.
    [[nodiscard]] int getKeyMask() const;
    // Where the door is when closed, and how it is turned.
    [[nodiscard]] const common::CVector3f &getOriginalPosition() const;
    [[nodiscard]] const common::CVector3f &getOriginalOrientation() const;
    // How far open the door is, out of the most it opens.
    [[nodiscard]] float getParam() const;
    [[nodiscard]] float getMaxParam() const;
    [[nodiscard]] float getOpenSpeed() const;
    [[nodiscard]] float getCloseSpeed() const;
    // The events the door raises once open and once closed.
    [[nodiscard]] const std::string &getEventWhenOpen() const;
    [[nodiscard]] const std::string &getEventWhenClosed() const;
    // Whether the door opens only once.
    [[nodiscard]] bool isOneShot() const;
    // What the door runs as it is asked to open.
    [[nodiscard]] const CRuleList &getOpenRules() const;
    [[nodiscard]] bool isPlottedAsBoxInShadow() const;
    [[nodiscard]] EDoorOpenSides getAllowedSides() const;
    [[nodiscard]] float getSwingRange() const;

private:
    static std::unique_ptr<CDemonActor> create(CActor &classes);

    CKeyFramedModelInstance model_;
    EDoorType door_type_ = EDoorType::kSwing;
    EDoorSide door_side_ = EDoorSide::kRight;
    EDoorState door_state_ = EDoorState::kClosed;
    EDoorSwing door_swing_ = EDoorSwing::kClockwise;
    std::string open_event_ = "defaultDoorOpen";
    std::string close_event_ = "defaultDoorClose";
    std::string open_sound_;
    std::string close_sound_;
    std::string locked_sound_ = "door-locked.wav";
    int key_mask_ = 0;
    common::CVector3f original_position_;
    common::CVector3f original_orientation_;
    float param_ = 0.0F;
    float max_param_ = 1.0F;
    float open_speed_ = 1.0F;
    float close_speed_ = 1.0F;
    EGroundType ground_type_ = EGroundType::kDefault;
    std::string event_when_open_;
    std::string event_when_closed_;
    bool one_shot_ = false;
    CRuleList open_rules_;
    bool block_virtual_director_ = true;
    bool plot_as_box_in_shadow_ = false;
    EDoorOpenSides allowed_sides_ = EDoorOpenSides::kBoth;
    bool allow_bullet_holes_ = true;
    float swing_range_ = 0.0F;
};

} // namespace nocturne::core
