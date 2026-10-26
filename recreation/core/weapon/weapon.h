#pragma once

#include "common/fwd.h"
#include "core/actor/demonactor.h"
#include "core/ammo/ammotype.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/fwd.h"
#include "core/weapon/weaponstate.h"

#include <string_view>

namespace nocturne::core {

// Something a hero fires: its model, who carries it, and its ammunition. The virtual functions
// not ported yet quit when called.
class CWeapon : public CDemonActor {
public:
    // Abstract: missions can't hold one.
    static const CDemonActorType kType;
    // The rounds a weapon holds until told otherwise.
    static constexpr int kStartingAmmo = 20;

    CWeapon();
    ~CWeapon() override;
    CWeapon(const CWeapon &) = delete;
    CWeapon &operator=(const CWeapon &) = delete;
    CWeapon(CWeapon &&) = delete;
    CWeapon &operator=(CWeapon &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    void onPickup(CDemonActor *owner) override;
    int canPickup(CDemonActor *picker) override;
    void pickup(CDemonActor *carrier) override;
    void onDropped(common::CVector3f *drop_position) override;
    // Null when nothing carries it.
    CDemonActor *getCarrier() override;
    void archive(CActorArchive &actor_archive) override;
    virtual void onFired();
    virtual void setWeaponState(int weapon_state);
    virtual common::CVector3f *getMuzzlePoint(common::CVector3f *out_point);
    virtual int fire();
    virtual int isReadyToFire();
    virtual float getDamage();
    virtual void renderAimBeam();
    virtual void updateLighting();

    [[nodiscard]] const CKeyFramedModelInstance &getModel() const;
    [[nodiscard]] EWeaponState getWeaponState() const;
    [[nodiscard]] int getAmmoCount() const;
    [[nodiscard]] EAmmoType getAmmoType() const;
    // Seconds of the weapon's own clock.
    [[nodiscard]] float getSimTimer() const;

protected:
    void setModelName(std::string_view filename);

private:
    CKeyFramedModelInstance model_;
    CDemonActor *carried_by_actor_ = nullptr;
    EWeaponState weapon_state_ = EWeaponState::kLyingAround;
    int ammo_count_ = kStartingAmmo;
    EAmmoType ammo_type_ = EAmmoType::kGeneric;
    float sim_timer_ = 0.0F;
};

} // namespace nocturne::core
