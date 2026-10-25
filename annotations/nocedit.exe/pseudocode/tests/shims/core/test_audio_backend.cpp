// =============================================================================
// AUDIO BACKEND — the sound device's name, as the Options screen shows it
// =============================================================================
//
// SDL's driver id, spelled the way its project spells it; "SDL Audio" before
// there is a driver to name; an id with no spelling here, as SDL gave it.

#define SDL_MAIN_HANDLED

#include "core/audio_backend.h"
#include "nocturne_test.h"
#include "sdl_support.h"

#include <string>

namespace {

using sdl_support::stand;

std::string name() {
    return nocturne_audio_backend_name();
}

} // namespace

NOCTURNE_TEST(each_driver_is_named_the_way_its_project_names_it) {
    stand.reset();
    CHECK_EQ(name(), std::string("SDL Audio"));
    stand.audio_up = 1;
    CHECK_EQ(name(), std::string("SDL Audio"));
    stand.driver = "";
    CHECK_EQ(name(), std::string("SDL Audio"));
    stand.driver = "pipewire";
    CHECK_EQ(name(), std::string("PipeWire"));
    stand.driver = "dummy";
    CHECK_EQ(name(), std::string("No Audio"));
    stand.driver = "emscripten";
    CHECK_EQ(name(), std::string("emscripten"));
}

NOCTURNE_TEST_MAIN()
