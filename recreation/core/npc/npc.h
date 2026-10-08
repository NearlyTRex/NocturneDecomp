#pragma once

#include "core/charactr/character.h"
#include "core/fwd.h"

namespace nocturne::core {

class CNPC : public CCharacter {
public:
    CNPC();
    ~CNPC() override;

    void setup() override;
    void process(float delta_time) override;
    void renderBackground(int layer_flag) override;
    CPathMap *getPathMap() override;
    CDemonActorType *getActorType() override;
    void archive() override;
    int isInvulnerable() override;
    void processDamage(SDamageInfo *damage_info) override;
};

} // namespace nocturne::core
