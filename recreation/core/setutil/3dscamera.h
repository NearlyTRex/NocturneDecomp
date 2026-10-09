#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class C3DSCamera {
public:
    C3DSCamera();
    ~C3DSCamera();

    void free();
    void load(std::FILE *file_handle);
    void loadPVS(std::FILE *file_handle);
    void apply(CDemonCamera *camera);
    int testSphereInFrustum(common::CVector3f *world_position, float radius);
};

} // namespace nocturne::core
