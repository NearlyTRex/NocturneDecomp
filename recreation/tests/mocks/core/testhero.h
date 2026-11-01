#pragma once

#include "common/math/vector3f.h"
#include "core/actor/demonactortype.h"
#include "core/hero/hero.h"

namespace nocturne::core {

inline const CDemonActorType kTestHeroType = makeActorType("CTestHero", &CHero::kType, nullptr, 1);

// A hero from the last mission, which counts how often it is set up and does nothing else of its
// own.
class CTestHero : public CHero {
public:
    using CHero::CHero;

    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return kTestHeroType;
    }

    void setup() override {
        ++setups;
    }

    void updateCollisionData(CDemonSet & /*set*/) override {}

    void drawWeapon(int /*drawn*/) override {}

    int isWeaponDrawn() override {
        return 0;
    }

    void setPositionAndOrientation(common::CVector3f * /*new_position*/,
                                   common::CVector3f * /*new_orientation*/) override {}

    void setWalkTarget(CDemonActor * /*target*/, float /*min_distance*/,
                       float /*max_distance*/) override {}

    int setups = 0;
};

} // namespace nocturne::core
