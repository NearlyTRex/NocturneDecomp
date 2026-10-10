#pragma once

#include "core/dest/actordestination.h"
#include "core/fwd.h"

namespace nocturne::core {

class CFilmProjector : public CActorDestination {
public:
    CFilmProjector();
    ~CFilmProjector() override;

    void setup() override;
    void process(float delta_time) override;
    int renderOpaque() override;
    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override;
    CDemonActorType *getActorType() override;
    void archive() override;
};

} // namespace nocturne::core
