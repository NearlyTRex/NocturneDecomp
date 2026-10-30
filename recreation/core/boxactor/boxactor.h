#pragma once

#include "common/fwd.h"
#include "common/math/vector3f.h"
#include "core/actor/demonactor.h"
#include "core/actor/groundtype.h"
#include "core/box/box.h"
#include "core/boxactor/boxpickuptype.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/fwd.h"

#include <memory>
#include <string>

namespace nocturne::core {

// A model in the set that can be searched, carried or pushed, its physics in a box. The virtual
// functions not ported yet quit when called.
class CBoxActor : public CDemonActor {
public:
    static const CDemonActorType kType;

    CBoxActor();
    ~CBoxActor() override;
    CBoxActor(const CBoxActor &) = delete;
    CBoxActor &operator=(const CBoxActor &) = delete;
    CBoxActor(CBoxActor &&) = delete;
    CBoxActor &operator=(CBoxActor &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    EGroundType getGroundType() override;
    int getBlockVirtualDirectorFlag() override;
    void setPositionAndOrientation(common::CVector3f *new_position,
                                   common::CVector3f *new_orientation) override;
    void onPickup(CDemonActor *owner) override;
    int getAllowedMeleeAttackTypes() override;
    // Its pickup type for a hero, or for anyone when it is carried; 0 otherwise.
    int canPickup(CDemonActor *picker) override;
    void pickup(CDemonActor *carrier) override;
    void onDropped(common::CVector3f *drop_position) override;
    CDemonActor *getCarrier() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;

    void resolveRayPush(common::CVector3f *ray_origin, common::CVector3f *ray_direction);

    [[nodiscard]] const CKeyFramedModelInstance &getModel() const;
    // 0 for a box the physics doesn't move.
    [[nodiscard]] float getWeightInPounds() const;
    // The model's animation rate, in frames a second.
    [[nodiscard]] float getFps() const;
    // How fast the box turns about each axis.
    [[nodiscard]] const common::CVector3f &getRpm() const;
    [[nodiscard]] const std::string &getLoopWavName() const;
    [[nodiscard]] const std::string &getCollisionWavName() const;
    [[nodiscard]] EBoxPickupType getPickupType() const;
    [[nodiscard]] bool canBePushed() const;
    [[nodiscard]] CDemonActor *getPushedBy() const;
    [[nodiscard]] const CBox &getPhysicsBox() const;
    [[nodiscard]] bool isPlottedInShadow() const;
    [[nodiscard]] bool isCollisionEnabled() const;
    [[nodiscard]] bool isDrawnWithoutNormals() const;
    // The actor whose bounds the box is kept within, if any.
    [[nodiscard]] CDemonActor *getConstrainExtentsActor() const;
    // The event raised as the box is used.
    [[nodiscard]] const std::string &getUseEvent() const;
    [[nodiscard]] const std::string &getPushSound() const;

private:
    static constexpr float kDefaultFps = 20.0F;

    static std::unique_ptr<CDemonActor> create();

    CKeyFramedModelInstance model_;
    float weight_in_pounds_ = 0.0F;
    float fps_ = kDefaultFps;
    common::CVector3f rpm_;
    std::string loop_wav_name_;
    std::string collision_wav_name_;
    EBoxPickupType pickup_type_ = EBoxPickupType::kCant;
    CDemonActor *carrier_ = nullptr;
    bool can_be_pushed_ = false;
    CDemonActor *pushed_by_ = nullptr;
    EGroundType ground_type_ = EGroundType::kDefault;
    CBox physics_box_;
    bool plot_in_shadow_ = true;
    bool collision_enabled_ = true;
    bool dont_use_normals_ = false;
    CDemonActor *constrain_extents_actor_ = nullptr;
    std::string use_event_;
    int allowed_melee_attack_types_ = 0;
    std::string push_sound_;
    bool block_virtual_director_ = false;
};

} // namespace nocturne::core
