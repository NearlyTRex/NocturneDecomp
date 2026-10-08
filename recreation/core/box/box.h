#pragma once

#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CBox {
public:
    CBox();
    ~CBox();

    void setupCorners(CVector3f *position, CVector3f *orientation, CVector3f *extents,
                      float volume);
    void process(float delta_time);
    void processPhysics(float delta_time);
    void loadFromFile(std::FILE *file_handle);
    void saveToFile(std::FILE *file_handle, char *indent_prefix);
    void setupVelocities(CVector3f *linear_velocity, CVector3f *angular_velocity);
};

} // namespace nocturne::core
