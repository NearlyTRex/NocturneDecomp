#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CBloodPool {
public:
    int setupRenderState();
    void render(int expire_flag);
    void processAge();
    void init(common::CVector3f *position, EBloodType blood_type);
    int load(std::FILE *file_handle);
    int save(std::FILE *file_handle);
};

} // namespace nocturne::core
