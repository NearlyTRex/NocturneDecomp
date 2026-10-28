// =============================================================================
// SOUND OPTIONS — the mixer's levels, the output format and the device
// =============================================================================
//
// What each line reads and how a press moves it: the three channels in fifths
// with Off below the lowest, Movie Vol the same way without a channel, the
// output format stepped and the device reopened in it, and the spectrum drawn
// behind the lines.

#include "front_support.h"
#include "game/sound_options.h"
#include "nocturne_test.h"

#include <string>
#include <vector>

namespace {

using front_support::last;
using front_support::lines_of;
using front_support::Press;
using front_support::stand;

enum { MUTE, EFFECTS, DIALOG, MUSIC, MOVIE, RATE, QUALITY, TYPE, DEVICE, MIXING };

const char kSound[] = "Sound Options";

Press pick(int line, bool left = false) {
    Press press;
    press.line = line;
    press.left = left;
    return press;
}

void sound(std::initializer_list<Press> presses) {
    stand.presses = presses;
    nocturne_sound_options_menu();
}

std::string line(int index) {
    return lines_of(kSound).at((size_t)index);
}

} // namespace

NOCTURNE_TEST(the_lines_read_the_mixer) {
    stand.reset();
    sound({});
    const std::vector<std::string> lines = {"Sound : On",
                                            "Sound effects : 100%.",
                                            "Dialog : 100%.",
                                            "Music Vol : 100%.",
                                            "Movie Vol : 100%.",
                                            "Output rate : 22050hz",
                                            "Output quality : 16bit",
                                            "Output type : STEREO",
                                            "Device : Speakers"};
    CHECK(lines_of(kSound) == lines);
    CHECK_EQ(last().y, NOCTURNE_MENU_TITLE_Y);
    CHECK(stand.in_order({"saveClockTime", "moon", "swap"}));

    stand.reset();
    stand.muted = 1;
    stand.channel_on[0] = 0;
    stand.channel_on[1] = 0;
    stand.channel_on[2] = 0;
    stand.movie_level = 0.0f;
    stand.channels = 1;
    stand.device_mixes = 1;
    sound({});
    CHECK_EQ(line(MUTE), std::string("Sound : Muted"));
    CHECK_EQ(line(EFFECTS), std::string("Sound effects : Off"));
    CHECK_EQ(line(DIALOG), std::string("Dialog : Off"));
    CHECK_EQ(line(MUSIC), std::string("Music Vol : Off"));
    CHECK_EQ(line(MOVIE), std::string("Movie Vol : Off"));
    CHECK_EQ(line(TYPE), std::string("Output type : MONO"));
    CHECK_EQ(line(MIXING), std::string("Hardware mixing: Off"));

    // A device past the list, or none, is nameless and mixes nothing.
    stand.reset();
    stand.device = 3;
    stand.device_mixes = 1;
    stand.mixing = 1;
    sound({});
    CHECK_EQ(line(DEVICE), std::string("Device : "));
    CHECK_EQ(lines_of(kSound).size(), (size_t)9);

    stand.reset();
    stand.device = -1;
    sound({});
    CHECK_EQ(line(DEVICE), std::string("Device : "));

    stand.reset();
    stand.device_mixes = 1;
    stand.mixing = 1;
    sound({});
    CHECK_EQ(line(MIXING), std::string("Hardware mixing: On"));
}

// Muting stops the music; unmuting starts it again.
NOCTURNE_TEST(mute_toggles) {
    stand.reset();
    sound({pick(MUTE)});
    CHECK_EQ(stand.muted, 1);
    CHECK_EQ(stand.count("soundConfigure"), 0);
    sound({pick(MUTE)});
    CHECK_EQ(stand.muted, 0);
    CHECK_EQ(stand.count("soundConfigure"), 1);
}

// A channel steps in fifths of its range; past full or below the lowest it is
// switched off, and from off back is full and on is the lowest.
NOCTURNE_TEST(a_channel_steps_in_fifths) {
    const struct {
        int line;
        int channel;
        float scale;
        bool on;
        float from;
        bool left;
        float to;
        bool on_after;
    } cases[] = {
        {EFFECTS, 0, 0.25f, true, 1.0f, false, 0.0f, false},
        {EFFECTS, 0, 0.25f, true, 1.0f, true, 0.8f, true},
        {EFFECTS, 0, 0.25f, true, 0.1f, true, 0.0f, false},
        {EFFECTS, 0, 0.25f, false, 0.0f, false, 0.2f, true},
        {EFFECTS, 0, 0.25f, false, 0.0f, true, 1.0f, true},
        {DIALOG, 2, 1.0f, true, 0.8f, false, 1.0f, true},
        {DIALOG, 2, 1.0f, true, 0.4f, false, 0.6f, true},
        {MUSIC, 1, 0.25f, true, 0.9f, false, 0.0f, false},
    };
    for (const auto &c : cases) {
        stand.reset();
        stand.channel_on[c.channel] = c.on ? 1 : 0;
        stand.channel_level[c.channel] = c.from * c.scale;
        sound({pick(c.line, c.left)});
        const std::string note = std::to_string(c.line) + " from " + std::to_string(c.from);
        CHECK_AT(stand.channel_level[c.channel] > c.to * c.scale - 0.001f &&
                     stand.channel_level[c.channel] < c.to * c.scale + 0.001f,
                 note);
        CHECK_EQ_AT(stand.channel_on[c.channel], c.on_after ? 1 : 0, note);
    }

    // Effects play a shot at the new level; the music, switched on, restarts.
    stand.reset();
    sound({pick(EFFECTS)});
    CHECK(stand.in_order({"pushSfx", "startSfx colt45-0.wav", "popSfx"}));
    stand.reset();
    stand.channel_on[1] = 0;
    sound({pick(MUSIC)});
    CHECK_EQ(stand.count("soundConfigure"), 1);
    stand.reset();
    stand.channel_on[2] = 0;
    sound({pick(DIALOG)});
    CHECK_EQ(stand.count("soundConfigure"), 0);
}

// Movie Vol steps the same way, its Off a level of 0.
NOCTURNE_TEST(movie_vol_steps_in_fifths) {
    const struct {
        float from;
        bool left;
        float to;
    } cases[] = {{0.0f, true, 1.0f},  {0.1f, true, 0.0f},  {0.6f, true, 0.4f},
                 {0.9f, false, 0.0f}, {0.8f, false, 1.0f}, {0.2f, false, 0.4f}};
    for (const auto &c : cases) {
        stand.reset();
        stand.movie_level = c.from;
        sound({pick(MOVIE, c.left)});
        CHECK_AT(stand.movie_level > c.to - 0.001f && stand.movie_level < c.to + 0.001f,
                 std::to_string(c.from));
    }
    stand.reset();
    stand.movie_level = 0.6f;
    sound({});
    CHECK_EQ(line(MOVIE), std::string("Movie Vol : 60%."));
}

// The rate steps through 11050, 22050 and 44100 either way; a card with 3D
// sound stays at 44100. A change reopens the device in it.
NOCTURNE_TEST(the_rate_steps) {
    const struct {
        int from;
        bool left;
        int to;
    } cases[] = {{22050, false, 44100}, {44100, false, 11050}, {11050, false, 22050},
                 {22050, true, 11050},  {44100, true, 22050},  {11050, true, 44100}};
    for (const auto &c : cases) {
        stand.reset();
        stand.rate = c.from;
        sound({pick(RATE, c.left)});
        CHECK_EQ_AT(stand.rate, c.to, std::to_string(c.from));
        CHECK(stand.in_order({"resetDevice", "soundConfigure"}));
    }
    stand.reset();
    stand.rate = 44100;
    stand.hardware_3d = 1;
    sound({pick(RATE)});
    CHECK_EQ(stand.rate, 44100);
    CHECK_EQ(stand.count("resetDevice"), 0);
}

NOCTURNE_TEST(the_format_steps) {
    stand.reset();
    sound({pick(QUALITY), pick(QUALITY), pick(TYPE), pick(TYPE)});
    CHECK_EQ(stand.bits, 16);
    CHECK_EQ(stand.channels, 2);
    CHECK_EQ(stand.count("resetDevice"), 4);

    stand.reset();
    stand.hardware_3d = 1;
    sound({pick(QUALITY), pick(TYPE)});
    CHECK_EQ(stand.bits, 16);
    CHECK_EQ(stand.channels, 2);
    CHECK_EQ(stand.count("resetDevice"), 0);

    stand.reset();
    stand.bits = 8;
    stand.channels = 1;
    stand.hardware_3d = 1;
    sound({pick(QUALITY), pick(TYPE)});
    CHECK_EQ(stand.bits, 16);
    CHECK_EQ(stand.channels, 2);
}

// The device is picked from a list of them, and reopened; a card with 3D
// sound is opened in its own format.
NOCTURNE_TEST(the_device_is_picked) {
    stand.reset();
    stand.sound_devices = {"Speakers", "Headphones"};
    stand.list_choices = {1};
    sound({pick(DEVICE)});
    CHECK(stand.rows == std::vector<std::string>({"Speakers", "Headphones"}));
    CHECK_EQ(stand.list_title, std::string("Select sound device"));
    CHECK_EQ(stand.list_initial, 0);
    CHECK_EQ(stand.device, 1);
    CHECK(stand.in_order({"closeDevice", "initDevice", "soundConfigure", "listGone"}));
    CHECK_EQ(stand.count("outputMode"), 0);

    stand.reset();
    stand.hardware_3d = 1;
    stand.list_choices = {0};
    sound({pick(DEVICE)});
    CHECK(stand.in_order({"initDevice", "outputMode", "soundConfigure"}));

    // Backed out of, nothing is reopened.
    stand.reset();
    sound({pick(DEVICE)});
    CHECK_EQ(stand.count("closeDevice"), 0);
    CHECK_EQ(stand.count("listGone"), 1);

    stand.reset();
    stand.device_mixes = 1;
    sound({pick(MIXING)});
    CHECK_EQ(stand.mixing, 1);
    CHECK(stand.in_order({"closeDevice", "initDevice", "soundConfigure"}));
}

// While sound plays, a bar every 4 pixels across each channel's share of the
// width, less a twentieth either side; the clock behind it wraps.
NOCTURNE_TEST(the_spectrum_behind_the_lines) {
    stand.reset();
    stand.busy = 1;
    g_GlobalDeltaTimeInt = 1;
    g_AudioVisualizationCounter = 0x7fff0;
    sound({});
    CHECK_EQ(stand.bars, 2 * 64);
    CHECK_EQ(g_AudioVisualizationCounter, 0x7fff0 + 0x18 - 0x80000);

    stand.reset();
    sound({});
    CHECK_EQ(stand.bars, 0);
    CHECK_EQ(g_AudioVisualizationCounter, 0);

    stand.reset();
    stand.busy = 1;
    stand.channels = 0;
    sound({});
    CHECK_EQ(stand.bars, 0);
}

NOCTURNE_TEST_MAIN()
