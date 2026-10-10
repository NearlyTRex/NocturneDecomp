#pragma once

#include "core/fwd.h"
#include "core/hero/hero.h"

namespace nocturne::core {

class CMoloch : public CHero {
public:
    CMoloch();
    ~CMoloch() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CDemonActorType *getActorType() override;
    void archive() override;
    void drawWeapon(int drawn) override;
    int isWeaponDrawn() override;
};

} // namespace nocturne::core
