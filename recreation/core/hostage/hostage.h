#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/npc/npc.h"

namespace nocturne::core {

class CHostage : public CNPC {
public:
    CHostage();
    ~CHostage() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    void renderBackground(int layer_flag) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    int isGrabbable(CDemonActor *grabber) override;
    int canBeGrabbed(CDemonActor *grabber, int grab_type) override;
    int getGrabbed(CDemonActor *grabber, int grab_type) override;
    void processDamage(SDamageInfo *damage_info) override;
    common::CMatrix3x4f *getCarryObjToBodyXForm(int hand_index,
                                                common::CMatrix3x4f *out_matrix) override;
};

} // namespace nocturne::core
