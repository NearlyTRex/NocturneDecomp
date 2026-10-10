#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

class CToss {
public:
    CToss();
    ~CToss();

    void reset();
    void create(int toss_type, common::CVector3f *position, common::UOrientationVector *orientation,
                common::CVector3f *velocity, float fuse_time);
    void process();
    void render();
};

} // namespace nocturne::core
