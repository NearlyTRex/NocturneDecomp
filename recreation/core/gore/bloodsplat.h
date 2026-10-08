#pragma once

#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CBloodSplat {
public:
    CBloodSplat();
    ~CBloodSplat();

    void initGroundSplat(CVector3f *position, int blood_type);
    void initWallSplat(CVector3f *position, CVector3f *normal, int blood_type);
    void setupRenderState();
    void render(int expire_flag);
    void processAge();
    int load(std::FILE *file_handle);
    int save(std::FILE *file_handle);
};

} // namespace nocturne::core
