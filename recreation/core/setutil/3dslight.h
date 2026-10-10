#pragma once

#include "core/fwd.h"

#include <cstdio>

namespace nocturne::core {

class C3DSLight {
public:
    C3DSLight();

    void load(std::FILE *file_handle);
    CDemonLight *create();
    void apply(CDemonLight *light);
    void doNothing();
    void process(CDemonLight *light, int apply_filter_flag);
    void advanceFilter(CDemonLight *light);
    void setFilterFrame(int frame_index, CDemonLight *light);
    void addFilter(char *filter_name, float duration, int filter_mode);
    int isVisible();
};

} // namespace nocturne::core
