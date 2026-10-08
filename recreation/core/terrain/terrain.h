#pragma once

namespace nocturne::core {

class CTerrain {
public:
    void init();
    void free();
    void render(int render_pass);
    void process();
};

} // namespace nocturne::core
