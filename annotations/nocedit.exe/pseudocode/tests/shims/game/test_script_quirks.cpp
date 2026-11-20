// =============================================================================
// SCRIPT QUIRKS — corrections to the shipped mission scripts
// =============================================================================

#include "game/script_quirks.h"
#include "game_support.h"
#include "nocturne_test.h"

#include <cstdio>
#include <cstring>
#include <memory>
#include <string>
#include <vector>

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
    return nocturne_script_quirk_dialogue(speaker, &line->sound, &line->text, &line->duration,
                                          timed);
}

std::unique_ptr<CDemonMission> mission(const char *name) {
    std::unique_ptr<CDemonMission> m(new CDemonMission());
    std::snprintf(m->mission_name, sizeof(m->mission_name), "%s", name);
    g_CDemonMissionPtr = m.get();
    return m;
}

const char kWerewolfIf[] = "if (isOfType(@whotokill, CWerewolf))";

// A parsed script of four lines: `if_text` on source line `if_line`, then
// three commands, with next_cmd on the first of them as CScript::step leaves
// it after a false if.
struct Script {
    std::vector<std::string> texts;
    std::vector<SScriptLine> lines;
    CScript script = {};

    Script(const char *if_text, int if_line) {
        texts = {if_text, "killCharacter(@whotokill, fallapart, -16, 25, 45, 40)", "idle",
                 "deleteactor(@whotokill)"};
        for (size_t i = 0; i < texts.size(); i++) {
            SScriptLine line = {};
            line.line_number = if_line + (int)i;
            line.text = &texts[i][0];
            lines.push_back(line);
        }
        script.parsed_lines = lines.data();
        script.parsed_line_count = (int)lines.size();
        script.next_cmd = 1;
    }
};

} // namespace

// TRAIN.SCR's werewolf branch: a false test skips all three of its commands,
// one skipCommands at a time, whatever the case of the mission or the line.
NOCTURNE_TEST(the_train_werewolf_branch_skips_its_whole_body) {
    stand.reset();
    std::unique_ptr<CDemonMission> m = mission("train");
    Script s("IF (isOfType(@whotokill, CWerewolf))", 226);
    CHECK_EQ(nocturne_script_quirk_skip_if_body(&s.script), 4);
    CHECK_EQ(stand.skipped.size(), (size_t)3);
    if (stand.skipped.size() == 3) {
        CHECK_EQ(stand.skipped[0], 1);
        CHECK_EQ(stand.skipped[2], 3);
    }
}

// A skip that fails stops there and answers the failure.
NOCTURNE_TEST(a_failed_skip_is_answered) {
    stand.reset();
    std::unique_ptr<CDemonMission> m = mission("TRAIN");
    Script s(kWerewolfIf, 226);
    stand.skip_fails_at = 2;
    CHECK_EQ(nocturne_script_quirk_skip_if_body(&s.script), -1);
    CHECK_EQ(stand.skipped.size(), (size_t)2);
}

// Another line, other text on that line, another mission, no mission, or
// next_cmd outside the script: the shipped single skip.
NOCTURNE_TEST(any_other_if_skips_one_command) {
    stand.reset();
    std::unique_ptr<CDemonMission> m = mission("TRAIN");
    Script moved(kWerewolfIf, 227);
    CHECK_EQ(nocturne_script_quirk_skip_if_body(&moved.script), 2);
    Script edited("if (isOfType(@whotokill, CZombie))", 226);
    CHECK_EQ(nocturne_script_quirk_skip_if_body(&edited.script), 2);
    // A dialogue entry's mission is not an if entry's.
    std::unique_ptr<CDemonMission> mine = mission("MINE");
    Script in_mine(kWerewolfIf, 226);
    CHECK_EQ(nocturne_script_quirk_skip_if_body(&in_mine.script), 2);
    g_CDemonMissionPtr = nullptr;
    Script nowhere(kWerewolfIf, 226);
    CHECK_EQ(nocturne_script_quirk_skip_if_body(&nowhere.script), 2);

    std::unique_ptr<CDemonMission> train = mission("TRAIN");
    Script first(kWerewolfIf, 226);
    first.script.next_cmd = 0;
    CHECK_EQ(nocturne_script_quirk_skip_if_body(&first.script), 1);
    Script past(kWerewolfIf, 226);
    past.script.next_cmd = 5;
    CHECK_EQ(nocturne_script_quirk_skip_if_body(&past.script), 6);
}

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
    // Timed by its own sound, the duration is not the quirk's to set.
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
    CHECK_EQ(nocturne_script_quirk_dialogue(svetlana, &no_sound, &text, &duration, 1), 0);

    // An if entry's mission is not a dialogue entry's.
    std::unique_ptr<CDemonMission> train = mission("TRAIN");
    CHECK_EQ(say(svetlana, "a2s3_stranger01.wav", &line), 0);
    g_CDemonMissionPtr = nullptr;
    CHECK_EQ(say(svetlana, "a2s3_stranger01.wav", &line), 0);
}

NOCTURNE_TEST_MAIN()
