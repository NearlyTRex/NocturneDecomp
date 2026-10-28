#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "core/actor/demonactor.h"
#include "core/fwd.h"
#include "core/trigger/triggercause.h"
#include "core/trigger/triggereventtype.h"
#include "core/trigger/triggershape.h"

#include <memory>
#include <string>

namespace nocturne::core {

// A volume in the set that raises events when what it watches for sets it off. The virtual
// functions not ported yet quit when called.
class CTrigger : public CDemonActor {
public:
    static const CDemonActorType kType;

    CTrigger();
    ~CTrigger() override;
    CTrigger(const CTrigger &) = delete;
    CTrigger &operator=(const CTrigger &) = delete;
    CTrigger(CTrigger &&) = delete;
    CTrigger &operator=(CTrigger &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderTransparent() override;
    // Centred on the trigger, from just below its floor to just above its height.
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int getTargetPoints(common::CVector3f *out_points_array) override;
    float evaluateTriggerCondition(CDemonActor *querying_actor,
                                   common::CVector3f *query_position) override;
    int processActionButton() override;
    void onLaserHit(SLaserInfo *laser_info) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;

    void onProjectileHit();
    int acceptsDamageFrom(CDemonActor *actor);
    void applyDamage(float hit_points);

    // Width, height and depth.
    [[nodiscard]] const common::CVector3f &getTriggerSize() const;
    [[nodiscard]] ETriggerShape getTriggerShape() const;
    [[nodiscard]] ETriggerEventType getEventType() const;
    [[nodiscard]] const std::string &getOnEvent() const;
    [[nodiscard]] const std::string &getOffEvent() const;
    [[nodiscard]] int getTriggerState() const;
    [[nodiscard]] ETriggerCause getTriggerCause() const;
    // The actor, or the wildcard over actors, that sets off an actor trigger.
    [[nodiscard]] const std::string &getActorTriggerName() const;
    // The classes that set off an actor trigger.
    [[nodiscard]] const std::string &getActorTriggerTypes() const;
    [[nodiscard]] bool isPressurePlate() const;
    // The light levels between which a light trigger is set off.
    [[nodiscard]] float getLightMin() const;
    [[nodiscard]] float getLightMax() const;
    [[nodiscard]] int getLaserType() const;
    // What a damage trigger takes before it is set off.
    [[nodiscard]] float getHitPoints() const;
    // How near an actor has to be before the trigger tests it.
    [[nodiscard]] float getTestRadius() const;
    [[nodiscard]] bool isAutoAimAtMe() const;
    // The actors whose damage sets off a damage trigger; empty for any.
    [[nodiscard]] const std::string &getDamageActorWildcard() const;

protected:
    void setTriggerSize(const common::CVector3f &trigger_size);

private:
    // The width, height and depth a trigger has until told otherwise.
    static constexpr common::CVector3f kDefaultTriggerSize{.x = 5.0F, .y = 9.0F, .z = 5.0F};
    static constexpr float kFullHitPoints = 100.0F;
    static constexpr float kUntestedRadius = 99999.9F;

    static std::unique_ptr<CDemonActor> create();
    void calculateTestRadius();
    void archiveFieldsByVersion(CActorArchive &actor_archive, int saved_version);

    common::CVector3f trigger_size_ = kDefaultTriggerSize;
    ETriggerShape trigger_shape_ = ETriggerShape::kBox;
    ETriggerEventType event_type_ = ETriggerEventType::kMomentary;
    std::string on_event_;
    std::string off_event_;
    int trigger_state_ = 0;
    ETriggerCause trigger_cause_ = ETriggerCause::kHero;
    std::string actor_trigger_name_ = "nobody";
    std::string actor_trigger_types_ = "CDemonActor";
    bool pressure_plate_ = false;
    float light_min_ = 0.25F;
    float light_max_ = 1.0F;
    int laser_type_ = 1;
    float hit_points_ = kFullHitPoints;
    float test_radius_ = kUntestedRadius;
    bool auto_aim_at_me_ = true;
    std::string damage_actor_wildcard_;
};

} // namespace nocturne::core
