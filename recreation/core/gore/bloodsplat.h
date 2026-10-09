#pragma once

#include "common/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CBloodSplat {
public:
    void initGroundSplat(common::CVector3f *position, int blood_type);
    void initWallSplat(common::CVector3f *position, common::CVector3f *normal, int blood_type);
    void setupRenderState();
    void render(int expire_flag);
    void processAge();
    int load(std::FILE *file_handle);
    int save(std::FILE *file_handle);
};

} // namespace nocturne::core
