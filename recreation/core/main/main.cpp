#include "core/main/main.h"

#include "core/dfilter/demonfilter.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/inivar/inivar.h"
#include "core/menu/menu.h"
#include "core/mission/demonmission.h"
#include "core/netgame/netgame.h"
#include "core/sound/sound.h"
#include "engine/2d/2d.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/dosio/dosio.h"
#include "engine/dosio/foundfileinfo.h"
#include "engine/ncursfx/mouse.h"
#include "engine/pod/pod.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "engine/texture/texture.h"
#include "support/newmsg/newmsg.h"

#include <cstddef>

namespace nocturne::core {
namespace {

constexpr int kWidth = 640;
constexpr int kHeight = 480;
constexpr int kBitsPerPixel = 32;
constexpr int kLoadingAlpha = 0x8000;
constexpr int kPlayerFilterSize = 0x100;

// The first run starts in 640x480 without acceleration and shows the calibration screens once,
// in the small editor font initFonts has just loaded.
void showFirstRunCalibration(const SGameSystemOwners &owners) {
    CGame &game = owners.ini_owners.game;
    if (game.first_time_flag == 0) {
        return;
    }
    game.game_pixx = kWidth;
    game.first_time_flag = 0;
    game.game_pixy = kHeight;
    owners.special.setUseDirect3D(false);
    game.game_bpp = kBitsPerPixel;
    owners.menu.showCalibrationTest();
}

// The original also measured a "Loading..." it never drew.
void showLoadingScreen(const SGameSystemOwners &owners) {
    owners.special.clearScreen();
    engine::CAlphaBitmap loading(owners.dosio, owners.screen, owners.special);
    loading.load("fangs", kWidth, kHeight);
    loading.display(0, 0, kLoadingAlpha);
    owners.screen.swapBuffers();
}

// Eight spots growing an eighth brighter each, and a larger one per player growing a quarter.
void initFilters(const SGameSystemOwners &owners) {
    for (std::size_t i = 0; i < owners.global_filters.size(); ++i) {
        owners.global_filters[i].init((static_cast<float>(i) * 0.125F) + 0.125F, 0);
    }
    for (std::size_t i = 0; i < owners.player_filters.size(); ++i) {
        owners.player_filters[i] = CDemonFilter(kPlayerFilterSize, kPlayerFilterSize);
        owners.player_filters[i].init((static_cast<float>(i) * 0.25F) + 0.25F, 0);
    }
}

} // namespace

// The trig tables are built with CMatrix; flattn's doNothing and retail's
// CForceFeedback::processEvent are empty and aren't called. The full-screen quad depth and the
// initialised flag are CSpecial's constants. The original also redirected stderr to stderr.txt,
// which nothing writes, quitting with "Please copy Nocturne to your hard drive" when it was
// read-only; set g_SoftwareRenderingForced when PROCESSOR_LEVEL is set, which nothing reads; set
// g_AGPTextureMode to 2 for writeIniData's useAGPFlag, whose line is left as it is; checked for
// MMX, which every host has; warned below 64MB of RAM and 200MB of swap, which no host the
// enhanced game runs on is short of; and set a Matrox driver's registry value.
// deferred: arming the attract movies only when opening.avi played this launch (the decomp's
//   attract.h nocturne_attract_set_opening_played), with the attract movies
// deferred: reading the save folder and each save's mission name beside findAllSoundFiles, so
//   the save and load pickers open with nothing left to read (the decomp's save_slots.h
//   nocturne_save_slots_prewarm, SAVE_SLOTS), with the save and load pickers
// nocedit 0x00507a60
void initializeGameSystems(const SGameSystemOwners &owners) {
    readIniData(owners.ini, owners.file_system, owners.ini_owners);
    owners.pod.init();
    owners.dosio.addGetFileInfoHook(
        [&pod = owners.pod](engine::SFoundFileInfo &info) { return pod.findFile(info); });
    owners.dosio.addGetFileInfoHook([&dosio = owners.dosio](engine::SFoundFileInfo &info) {
        return dosio.findFileNormally(info);
    });
    owners.messages.readMessageFile("msglist.txt");
    owners.texture.initTextureCache();
    // The retail build's dismount cleared the texture cache.
    owners.pod.setDismountHandler([&texture = owners.texture] { texture.clearTextureCache(); });
    owners.two_d.initGraphicsSystem();
    if (!owners.screen.setScreenResolution(kWidth, kHeight, kBitsPerPixel)) {
        displayErrorAndQuit("Unable to set 640x480x32bpp.  Please make sure that you have a video "
                            "card with a minimum of 2MB of RAM, and the latest DirectDraw video "
                            "drivers.");
    }
    owners.ini_owners.fonts.initFonts();
    showFirstRunCalibration(owners);
    owners.play_movie("video", "opening.avi");
    showLoadingScreen(owners);
    owners.sound.findAllSoundFiles();
    owners.mission.reset();
    initFilters(owners);
    owners.mouse.load();
    owners.net_game.init();
}

// A jump to showMainGameMenu in the original.
// nocedit 0x00507a50
int enterMainGameMenu(CMenu &menu) {
    return menu.showMainGameMenu();
}

} // namespace nocturne::core
