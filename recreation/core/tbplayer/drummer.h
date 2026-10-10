#pragma once

#include "common/fwd.h"
#include "core/fwd.h"
#include "core/npc/npc.h"

namespace nocturne::core {

class CDrummer : public CNPC {
public:
    CDrummer();
    ~CDrummer() override;

    void setup() override;
    CDemonActorType *getActorType() override;
    void processDamage(SDamageInfo *damage_info) override;
    common::CMatrix3x4f *getCarryObjToBodyXForm(int hand_index,
                                                common::CMatrix3x4f *out_matrix) override;
};

} // namespace nocturne::core
