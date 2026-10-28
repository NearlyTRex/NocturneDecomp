#pragma once

#include "core/fwd.h"
#include "core/weapon/weapon.h"

#include <memory>

namespace nocturne::core {

// The heroes' gun. The virtual functions not ported yet quit when called.
class CGun : public CWeapon {
public:
    static const CDemonActorType kType;

    CGun();
    ~CGun() override;
    CGun(const CGun &) = delete;
    CGun &operator=(const CGun &) = delete;
    CGun(CGun &&) = delete;
    CGun &operator=(CGun &&) = delete;

    [[nodiscard]] const CDemonActorType &getActorType() const override;
    int fire() override;
    float getDamage() override;

private:
    static std::unique_ptr<CDemonActor> create();
};

} // namespace nocturne::core
