#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CCourse {
public:
    CCourse();
    ~CCourse();

    void load(char *filename);
    void free();
    void evaluate(float time, CVector3f *out_pos, CVector3f *out_euler);
};

} // namespace nocturne::core
