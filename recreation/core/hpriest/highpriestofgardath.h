#pragma once

#include "core/fwd.h"
#include "core/npc/npc.h"

namespace nocturne::core {

class CHighPriestOfGardath : public CNPC {
public:
    CHighPriestOfGardath();
    ~CHighPriestOfGardath() override;

    void process(float delta_time) override;
    CDemonActorType *getActorType() override;
    void archive() override;
    void processDamage(SDamageInfo *damage_info) override;
};

} // namespace nocturne::core
