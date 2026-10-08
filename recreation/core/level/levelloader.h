#pragma once

namespace nocturne::core {

class CLevelLoader {
public:
    void reset();
    void show(int total_frames, int use_custom_viewport, int image_variant);
    void update(char *text, int clear_screen);
    void cleanup();
};

} // namespace nocturne::core
