#pragma once

#include "core/fwd.h"
#include "core/npc/npc.h"

namespace nocturne::core {

class CHiram : public CNPC {
public:
    CHiram();
    ~CHiram() override;

    void setup() override;
    void process(float delta_time) override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
