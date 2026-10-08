#pragma once

#include "core/fwd.h"
#include "core/hero/hero.h"

namespace nocturne::core {

class CStranger : public CHero {
public:
    CStranger();
    ~CStranger() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    int renderTransparent() override;
    void setPositionAndOrientation(CVector3f *new_position, CVector3f *new_orientation) override;
    void drop(CDemonActor *carrier, CVector3f *drop_position) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    int getGrabbed(CDemonActor *grabber, int grab_type) override;
    void processDamage(SDamageInfo *damage_info) override;
    EDeathState getDeathState() override;
    void dropCarriedObject(int hand_index, CVector3f *drop_direction) override;
    CMatrix3x4f *getCarryObjToBodyXForm(int hand_index, CMatrix3x4f *out_matrix) override;
    void drawWeapon(int drawn) override;
    int isWeaponDrawn() override;
    void reset() override;
};

} // namespace nocturne::core
