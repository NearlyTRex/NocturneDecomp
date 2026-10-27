#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CBloodSplat {
public:
    void initGroundSplat(common::CVector3f *position, EBloodType blood_type);
    void initWallSplat(common::CVector3f *position, common::CVector3f *normal,
                       EBloodType blood_type);
    void setupRenderState();
    void render(int expire_flag);
    void processAge();
    int load(std::FILE *file_handle);
    int save(std::FILE *file_handle);
};

} // namespace nocturne::core
