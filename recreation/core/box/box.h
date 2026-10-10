#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CBox {
public:
    CBox();
    ~CBox();

    void setupCorners(common::CVector3f *position, common::CVector3f *orientation,
                      common::CVector3f *extents, float volume);
    void process(float delta_time);
    void processPhysics(float delta_time);
    void loadFromFile(std::FILE *file_handle);
    void saveToFile(std::FILE *file_handle, char *indent_prefix);
    void setupVelocities(common::CVector3f *linear_velocity, common::CVector3f *angular_velocity);
};

} // namespace nocturne::core
