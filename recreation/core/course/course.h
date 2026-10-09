#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

class CCourse {
public:
    CCourse();
    ~CCourse();

    void load(char *filename);
    void free();
    void evaluate(float time, common::CVector3f *out_pos, common::CVector3f *out_euler);
};

} // namespace nocturne::core
