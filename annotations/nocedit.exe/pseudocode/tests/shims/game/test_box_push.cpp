// =============================================================================
// BOX PUSH — the scrape of a pushed box, each time it moves
// =============================================================================
//
// A shove plays the box's push sound when the last one has finished, through
// the box's own playAmbientSound and under the handle stopPushingBox kills;
// while it still plays, a shove adds nothing.

#include "game/box_push.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <string>
#include <vector>

namespace {

std::vector<std::string> s_played; // playAmbientSound, by sound name
unsigned s_next_handle = 0;
unsigned s_playing = 0; // the handle isSfxPlaying says is still going

uint play_ambient(CDemonActor *, char *sound_name) {
    s_played.push_back(sound_name);
    return ++s_next_handle;
}

CBoxActor *box() {
    static CDemonActor_vtable vtable = {};
    static CBoxActor actor = {};
    vtable.playAmbientSound = play_ambient;
    actor.base.vtable._ub = &vtable;
    snprintf(actor.push_sound, sizeof(actor.push_sound), "%s", "statue.wav");
    return &actor;
}

void reset() {
    s_played.clear();
    s_next_handle = 0;
    s_playing = 0;
}

} // namespace

int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle) {
    return sfx_handle != 0 && sfx_handle == s_playing;
}

NOCTURNE_TEST(a_shove_scrapes_once_the_last_scrape_is_done) {
    reset();
    CBoxActor *statue = box();
    statue->push_sfx_handle = 7; // the push's first scrape, still going
    s_playing = 7;
    nocturne_box_push_sound(statue);
    CHECK(s_played.empty());
    CHECK_EQ(statue->push_sfx_handle, 7u);

    // Finished: the next shove scrapes again, under a handle the push can kill.
    s_playing = 0;
    nocturne_box_push_sound(statue);
    CHECK_EQ(s_played.size(), (size_t)1);
    CHECK_EQ(s_played[0], std::string("statue.wav"));
    CHECK_EQ(statue->push_sfx_handle, 1u);

    // And that one, while it plays, is not doubled.
    s_playing = 1;
    nocturne_box_push_sound(statue);
    CHECK_EQ(s_played.size(), (size_t)1);
}

NOCTURNE_TEST_MAIN()
