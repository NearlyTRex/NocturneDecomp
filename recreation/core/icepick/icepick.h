#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/hero/hero.h"

namespace nocturne::core {

class CIcePick : public CHero {
public:
    CIcePick();
    ~CIcePick() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CDemonActorType *getActorType() override;
    void archive() override;
    void processDamage(SDamageInfo *damage_info) override;
    common::CMatrix3x4f *getCarryObjToBodyXForm(int hand_index,
                                                common::CMatrix3x4f *out_matrix) override;
    void drawWeapon(int drawn) override;
    int isWeaponDrawn() override;
};

} // namespace nocturne::core
