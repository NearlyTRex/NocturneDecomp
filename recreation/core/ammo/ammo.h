#pragma once

#include "core/actor/demonactor.h"
#include "core/ammo/ammotype.h"
#include "core/dmodel/keyframedmodelinstance.h"
#include "core/fwd.h"

#include <memory>
#include <string>

namespace nocturne::core {

// Rounds for a weapon class: its model, the class it loads, and how many of which kind. The
// virtual functions not ported yet quit when called.
class CAmmo : public CDemonActor {
public:
    static const CDemonActorType kType;
    // The rounds it holds until told otherwise.
    static constexpr int kStartingAmmo = 20;

    CAmmo();
    ~CAmmo() override;
    CAmmo(const CAmmo &) = delete;
    CAmmo &operator=(const CAmmo &) = delete;
    CAmmo(CAmmo &&) = delete;
    CAmmo &operator=(CAmmo &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    ECollisionType getCollisionType(SCollisionInfo *collision_info) override;
    int canPickup(CDemonActor *picker) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void archive(CActorArchive &actor_archive) override;

    void setWeaponClass(char *weapon_class_name);
    void setAmmoCount(int ammo_count);

    [[nodiscard]] const CKeyFramedModelInstance &getModel() const;
    // The weapon class the rounds are for.
    [[nodiscard]] const std::string &getWeaponClassName() const;
    [[nodiscard]] int getAmmoCount() const;
    [[nodiscard]] EAmmoType getAmmoType() const;

private:
    static std::unique_ptr<CDemonActor> create();

    CKeyFramedModelInstance model_;
    std::string weapon_class_name_ = "CGun";
    int ammo_count_ = kStartingAmmo;
    EAmmoType ammo_type_ = EAmmoType::kGeneric;
};

} // namespace nocturne::core
