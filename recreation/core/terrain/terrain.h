#pragma once

#include "core/fwd.h"

namespace nocturne::core {

// The ground the train set adds, from data\junk.*.
class CTerrain {
public:
    explicit CTerrain(CGround &ground);

    void init();
    void free();
    void render(int render_pass);
    void process();

private:
    CGround &ground_;
};

} // namespace nocturne::core
