#pragma once

#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class CMotionList {
public:
    CMotionList();

    void load(std::FILE *file_handle);
    int findMotionIndex(char *motion_name, int error_on_not_found);
    int findStateIndex(char *state_name, int error_on_not_found);
};

} // namespace nocturne::core
