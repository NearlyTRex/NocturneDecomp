#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CCrater {
public:
    CCrater();
    ~CCrater();

    void reset();
    void activate(common::CVector3f *center_position, float radius);
    void process();
    void render();
    void load(std::FILE *file_handle);
    void save(std::FILE *file_handle);
};

} // namespace nocturne::core
