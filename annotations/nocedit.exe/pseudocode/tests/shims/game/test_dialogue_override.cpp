// =============================================================================
// DIALOGUE OVERRIDES — a line recorded for one hero, said by another
// =============================================================================

#include "game/dialogue_override.h"
#include "game_support.h"
#include "nocturne_test.h"

#include <cstdio>
#include <cstring>
#include <memory>
#include <string>

using namespace game_support;

namespace {

struct Line {
    char *sound;
    char *text;
    float duration = -1.0f;
};

int say(CDemonActor *speaker, const char *sound, Line *line, int timed = 1) {
    static char sound_buffer[260];
    static char text[] = "Stranger: Gas. Can't breathe.";
    std::snprintf(sound_buffer, sizeof(sound_buffer), "%s", sound);
    line->sound = sound_buffer;
    line->text = text;
    return nocturne_dialogue_override_apply(speaker, &line->sound, &line->text, &line->duration,
                                            timed);
}

std::unique_ptr<CDemonMission> mission(const char *name) {
    std::unique_ptr<CDemonMission> m(new CDemonMission());
    std::snprintf(m->mission_name, sizeof(m->mission_name), "%s", name);
    g_CDemonMissionPtr = m.get();
    return m;
}

} // namespace

// In the gas room, a line recorded for the Stranger and said by another hero
// is captioned with that hero's name, plays no voice, and lasts as long as a
// line with no sound does; the line is found by its stem, whatever its folder,
// extension or case.
NOCTURNE_TEST(the_strangers_line_is_given_to_the_hero_saying_it) {
    stand.reset();
    std::unique_ptr<CDemonMission> m = mission("mine");
    CDemonActor *svetlana = &heroes[0]->base.base;
    stand.hero_types[svetlana] = HERO_TYPE_SVETLANA;
    for (const char *sound : {"a2s3_stranger01.wav", "SOUND\\A2S3_STRANGER01.MP3"}) {
        Line line;
        CHECK_EQ(say(svetlana, sound, &line), 1);
        CHECK_EQ(std::string(line.text), std::string("Svetlana: Gas. Can't breathe."));
        CHECK(line.sound == nullptr);
        CHECK_NEAR(line.duration, (float)std::strlen(line.text) * 0.02f + 0.4f, 1e-5f);
    }
    // Timed by its own sound, the duration is not the override's to set.
    Line untimed;
    CHECK_EQ(say(svetlana, "a2s3_stranger02", &untimed, 0), 1);
    CHECK_EQ(untimed.duration, -1.0f);
    CHECK(std::string(untimed.text).find("gas mask") != std::string::npos);
}

// The Stranger says his own line; another line, another mission, no mission,
// no sound and a speaker who is no hero are all left as they are.
NOCTURNE_TEST(everything_else_is_left_as_it_is) {
    stand.reset();
    std::unique_ptr<CDemonMission> m = mission("MINE");
    CDemonActor *stranger = &heroes[0]->base.base;
    CDemonActor *svetlana = &heroes[1]->base.base;
    stand.hero_types[stranger] = HERO_TYPE_STRANGER;
    stand.hero_types[svetlana] = HERO_TYPE_SVETLANA;
    Line line;
    CHECK_EQ(say(stranger, "a2s3_stranger01.wav", &line), 0);
    CHECK_EQ(say(svetlana, "a2s3_stranger09.wav", &line), 0);
    CHECK_EQ(say(&character(0)->base, "a2s3_stranger01.wav", &line), 0);
    CHECK(line.sound != nullptr);

    char *no_sound = nullptr;
    char *text = line.text;
    float duration = 0.0f;
    CHECK_EQ(nocturne_dialogue_override_apply(svetlana, &no_sound, &text, &duration, 1), 0);

    std::unique_ptr<CDemonMission> other = mission("CASTLE");
    CHECK_EQ(say(svetlana, "a2s3_stranger01.wav", &line), 0);
    g_CDemonMissionPtr = nullptr;
    CHECK_EQ(say(svetlana, "a2s3_stranger01.wav", &line), 0);
}

NOCTURNE_TEST_MAIN()
