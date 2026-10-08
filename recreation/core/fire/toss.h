#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CToss {
public:
    CToss();
    ~CToss();

    void reset();
    void create(int toss_type, CVector3f *position, UOrientationVector *orientation,
                CVector3f *velocity, float fuse_time);
    void process();
    void render();
};

} // namespace nocturne::core
