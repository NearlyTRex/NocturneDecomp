#pragma once

#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CDemonTriangle {
public:
    CDemonTriangle();
    ~CDemonTriangle();

    void readDataBinary(std::FILE *file_handle);
    void buildCollision(CVector3f *vertex1, CVector3f *vertex2, CVector3f *vertex3);
};

} // namespace nocturne::core
