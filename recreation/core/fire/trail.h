#pragma once

#include "common/fwd.h"
#include "platform/fwd.h"

namespace nocturne::core {

class CTrail {
public:
    void reset();
    void activate(common::CVector3f *position, float size, float alpha, float lifetime,
                  platform::SMRGLTextureBasic *texture_ptr);
    void process();
    void render();
};

} // namespace nocturne::core
