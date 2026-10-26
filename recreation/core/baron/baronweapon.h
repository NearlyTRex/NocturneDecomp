#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

#include <memory>

namespace nocturne::core {

// The Baron's weapon. The virtual functions not ported yet quit when called.
class CBaronWeapon : public CWeapon {
public:
    static const CDemonActorType kType;

    CBaronWeapon();
    ~CBaronWeapon() override;
    CBaronWeapon(const CBaronWeapon &) = delete;
    CBaronWeapon &operator=(const CBaronWeapon &) = delete;
    CBaronWeapon(CBaronWeapon &&) = delete;
    CBaronWeapon &operator=(CBaronWeapon &&) = delete;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    void setWeaponState(int weapon_state) override;
    int fire() override;
    int isReadyToFire() override;
    void renderAimBeam() override;

private:
    static std::unique_ptr<CDemonActor> create();
};

} // namespace nocturne::core
