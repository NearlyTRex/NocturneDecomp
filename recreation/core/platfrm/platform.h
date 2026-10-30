#pragma once

#include "common/fwd.h"
#include "common/math/quaternion4f.h"
#include "common/math/vector3f.h"
#include "core/actor/demonactor.h"
#include "core/actor/groundtype.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/fwd.h"
#include "core/platfrm/platformstate.h"

#include <cstddef>
#include <memory>
#include <span>
#include <string>
#include <vector>

namespace nocturne::core {

// A model that moves between two ends, or along a course, carrying what stands on it. The
// virtual functions not ported yet quit when called.
class CPlatform : public CDemonActor {
public:
    static const CDemonActorType kType;
    // The most actors a platform carries.
    static constexpr std::size_t kMaxAttachedActors = 10;

    CPlatform();
    ~CPlatform() override;
    CPlatform(const CPlatform &) = delete;
    CPlatform &operator=(const CPlatform &) = delete;
    CPlatform(CPlatform &&) = delete;
    CPlatform &operator=(CPlatform &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    void renderBackground(int layer_flag) override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    EGroundType getGroundType() override;
    int getBlockVirtualDirectorFlag() override;
    // Always.
    int allowBulletHoles() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;

    void startMovement(float goal_param, float movement_rate);
    void attachActor(CDemonActor *actor);

    [[nodiscard]] const CKeyFramedModelInstance &getModel() const;
    // The events raised as the platform sets off to each end, and as it stops.
    [[nodiscard]] const std::string &getToStartEvent() const;
    [[nodiscard]] const std::string &getToEndEvent() const;
    [[nodiscard]] const std::string &getStopEvent() const;
    [[nodiscard]] const std::string &getStartSound() const;
    [[nodiscard]] const std::string &getStopSound() const;
    [[nodiscard]] const std::string &getActiveSound() const;
    // The course it follows, from the data folder; none for one moving between its ends.
    [[nodiscard]] const std::string &getCourseFilename() const;
    [[nodiscard]] const common::CVector3f &getStartPosition() const;
    [[nodiscard]] const common::CQuaternion4f &getStartOrientation() const;
    [[nodiscard]] const common::CVector3f &getEndPosition() const;
    [[nodiscard]] const common::CQuaternion4f &getEndOrientation() const;
    [[nodiscard]] EPlatformState getState() const;
    // How far along the platform is, from 0 at its start to 1 at its end.
    [[nodiscard]] float getParam() const;
    [[nodiscard]] float getTravelTimeToStart() const;
    [[nodiscard]] float getTravelTimeToEnd() const;
    // Whether the platform moves only once.
    [[nodiscard]] bool isOneShot() const;
    [[nodiscard]] bool isRenderedInBackgroundWhenNotMoving() const;
    // The camera shown while the platform moves, if any.
    [[nodiscard]] const std::string &getCameraWhileMoving() const;
    [[nodiscard]] bool isPlottedAsBoxInShadow() const;
    // Where the platform is moving to, and how fast.
    [[nodiscard]] float getGoalParam() const;
    [[nodiscard]] float getCurrentMovementRate() const;
    [[nodiscard]] std::span<CDemonActor *const> getAttachedActors() const;
    [[nodiscard]] bool isPushed() const;
    // Whether the fog is worked out again as it moves.
    [[nodiscard]] bool isFogRecomputed() const;
    [[nodiscard]] bool isPlottedInShadow() const;

private:
    static constexpr float kDefaultTravelTime = 2.0F;
    // How an actor is turned as it is made: not at all.
    static constexpr common::CQuaternion4f kNoTurn{.w = 1.0F};

    static std::unique_ptr<CDemonActor> create();

    CKeyFramedModelInstance model_;
    std::string to_start_event_;
    std::string to_end_event_;
    std::string stop_event_;
    std::string start_sound_;
    std::string stop_sound_;
    std::string active_sound_;
    std::string course_filename_;
    common::CVector3f start_position_;
    common::CQuaternion4f start_orientation_ = kNoTurn;
    common::CVector3f end_position_;
    common::CQuaternion4f end_orientation_ = kNoTurn;
    EPlatformState state_ = EPlatformState::kAtStart;
    float param_ = 0.0F;
    float travel_time_to_start_ = kDefaultTravelTime;
    float travel_time_to_end_ = kDefaultTravelTime;
    EGroundType ground_type_ = EGroundType::kDefault;
    bool one_shot_ = false;
    bool block_virtual_director_ = false;
    bool render_in_background_when_not_moving_ = false;
    std::string camera_while_moving_;
    bool plot_as_box_in_shadow_ = false;
    float goal_param_ = 0.0F;
    float current_movement_rate_ = 0.0F;
    std::vector<CDemonActor *> attached_actors_;
    bool pushed_ = false;
    bool fog_recomputed_ = false;
    bool plot_in_shadow_ = true;
};

} // namespace nocturne::core
