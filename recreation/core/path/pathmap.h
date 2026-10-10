#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

namespace nocturne::core {

class CPathMap {
public:
    CPathMap();
    ~CPathMap();

    void updateIfNeeded(common::CVector3f *source_position, int force_update);
    int findPathWithRetry(common::CVector3f *dest_position, common::CVector3f *out_euler_angles,
                          int direction_hint);
    void renderPathMap(int depth, int red, int green, int fog);
    void reset();
    void setupPathSearch();
};

} // namespace nocturne::core
