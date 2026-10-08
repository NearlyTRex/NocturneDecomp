#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CTrail {
public:
    CTrail();
    ~CTrail();

    void reset();
    void activate(CVector3f *position, float size, float alpha, float lifetime,
                  SMRGLTextureBasic *texture_ptr);
    void process();
    void render();
};

} // namespace nocturne::core
