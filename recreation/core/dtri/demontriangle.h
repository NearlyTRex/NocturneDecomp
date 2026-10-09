#pragma once

#include "common/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CDemonTriangle {
public:
    void readDataBinary(std::FILE *file_handle);
    void buildCollision(common::CVector3f *vertex1, common::CVector3f *vertex2,
                        common::CVector3f *vertex3);
};

} // namespace nocturne::core
