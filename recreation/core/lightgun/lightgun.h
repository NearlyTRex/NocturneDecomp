#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

#include <memory>

namespace nocturne::core {

// The heroes' light gun, whose beam burns the creatures light hurts. The virtual functions not
// ported yet quit when called.
class CLightGun : public CWeapon {
public:
    static const CDemonActorType kType;

    CLightGun();
    ~CLightGun() override;
    CLightGun(const CLightGun &) = delete;
    CLightGun &operator=(const CLightGun &) = delete;
    CLightGun(CLightGun &&) = delete;
    CLightGun &operator=(CLightGun &&) = delete;

    void process(float delta_time) override;
    [[nodiscard]] const CDemonActorType &getActorType() const override;
    int fire() override;
    float getDamage() override;
    void renderAimBeam() override;

private:
    static std::unique_ptr<CDemonActor> create(CActor &classes);
};

} // namespace nocturne::core
