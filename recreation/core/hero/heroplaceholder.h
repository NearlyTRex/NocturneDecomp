#pragma once

#include "core/actor/demonactor.h"
#include "core/fwd.h"

namespace nocturne::core {

class CHeroPlaceholder : public CDemonActor {
public:
    CHeroPlaceholder();
    ~CHeroPlaceholder() override;

    int renderTransparent() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    CDemonActorType *getActorType() override;
    void archive() override;

    CHero *createHero(EHeroType hero_type);
};

} // namespace nocturne::core
