#pragma once

#include "core/fwd.h"
#include "core/npc/npc.h"

namespace nocturne::core {

class CPassenger : public CNPC {
public:
    CPassenger();
    ~CPassenger() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
