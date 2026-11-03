#pragma once

#include "core/box/boundingbox3d.h"

#include <gtest/gtest.h>

#include <string>

namespace nocturne::core {

// A key-framed model file of one frame, from the origin to one unit along x and y and flat.
inline std::string oneFrameModel() {
    return "/\n5\n;\n3,1,1,0,1\n;\n1\n;\n0,0,0\n256,0,0\n0,256,0\n"
           ";\n0,3, 0,0,0, 1,0,0, 2,0,0\n;\nSKIN.RAW\n";
}

// That model's frame's box.
inline void expectOneFrameBounds(const CBoundingBox3D &box) {
    EXPECT_EQ(box.min.x, 0.0F);
    EXPECT_EQ(box.min.y, 0.0F);
    EXPECT_EQ(box.min.z, 0.0F);
    EXPECT_EQ(box.max.x, 1.0F);
    EXPECT_EQ(box.max.y, 1.0F);
    EXPECT_EQ(box.max.z, 0.0F);
}

} // namespace nocturne::core
