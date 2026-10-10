#pragma once

#include "core/charactr/character.h"
#include "core/fwd.h"

namespace nocturne::core {

class CBat : public CCharacter {
public:
    CBat();
    ~CBat() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
