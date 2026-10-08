#pragma once

#include "core/fwd.h"

namespace nocturne::core {

class CFilterFX {
public:
    CFilterFX();
    ~CFilterFX();

    void openMovie(char *filename);
    void process();
};

} // namespace nocturne::core
