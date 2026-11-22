#include "core/main/main.h"

#include "core/dfilter/demonfilter.h"
#include "core/dfont/dfont.h"
#include "core/frontend.h"
#include "core/game/game.h"
#include "core/inivar/inivar.h"
#include "core/menu/attractmovies.h"
#include "core/menu/menu.h"
#include "core/mission/demonmission.h"
#include "core/netgame/netgame.h"
#include "core/sound/sound.h"
#include "engine/2d/2d.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/dosio/dosio.h"
#include "engine/dosio/foundfileinfo.h"
#include "engine/dosio/gamefolders.h"
#include "engine/font/bitfont.h"
#include "engine/ncursfx/mouse.h"
#include "engine/package/gamecontent.h"
#include "engine/pod/pod.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "engine/texture/texture.h"
#include "platform/display.h"
#include "support/newmsg/newmsg.h"

#include <cstddef>
#include <format>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

constexpr int kWidth = 640;
constexpr int kHeight = 480;
constexpr int kBitsPerPixel = 32;
constexpr int kPlayerFilterSize = 0x100;
// "Loading..." in every game.
constexpr std::string_view kLoadingLabel = "loading";
// The original measured the text's height by this character's.
constexpr int kLoadingHeightChar = 'X';

const engine::SStartup &getStartup(const SGameSystemOwners &owners) {
    if (!owners.content.startup) {
        displayErrorAndQuit("No package gives the startup screen");
    }
    return *owners.content.startup;
}

common::SExtent getStartingFrontEndMode(const SGameSystemOwners &owners) {
    const CGame &game = owners.ini_owners.game;
    return getFrontEndMode(game.game_pixx, game.game_pixy, owners.special.getUseDirect3D());
}

// A mode the renderer refuses falls back to the layout's own, as setGameRes's does.
bool setStartingFrontEndMode(const SGameSystemOwners &owners) {
    const common::SExtent mode = getStartingFrontEndMode(owners);
    return owners.screen.setScreenResolution(mode.width, mode.height, kBitsPerPixel) ||
           owners.screen.setScreenResolution(kWidth, kHeight, kBitsPerPixel);
}

SFrontEndLayout getScreenLayout(const SGameSystemOwners &owners) {
    return getFrontEndLayout(owners.screen.getWindowWidth(), owners.screen.getWindowHeight());
}

SPictureArea getStartupPicture(const SGameSystemOwners &owners) {
    return getPictureArea(owners.screen.getWindowWidth(), owners.screen.getWindowHeight(),
                          getStartup(owners).fit);
}

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

void showFangs(const SGameSystemOwners &owners) {
    const engine::SStartup &startup = getStartup(owners);
    owners.special.clearScreen();
    engine::CAlphaBitmap loading(owners.dosio, owners.screen, owners.special);
    loading.load(startup.picture, kWidth, kHeight);
    displayInPicture(loading, getStartupPicture(owners),
                     {.x = 0, .y = 0, .width = kWidth, .height = kHeight}, startup.picture_alpha,
                     owners.ini_owners.display.getUpscaler());
}

// The original measured its "Loading..." to centre it, then never drew it; every game draws it.
void showLoadingScreen(const SGameSystemOwners &owners) {
    showFangs(owners);
    const engine::SStartup &startup = getStartup(owners);
    const std::string text = getLabel(owners.content, owners.messages, kLoadingLabel);
    engine::CBitFont &font = owners.ini_owners.fonts.findFont(startup.label_font);
    const SPictureArea picture = getStartupPicture(owners);
    const float scale = picture.getScale();
    font.drawTextScaled(
        text, picture.getX(startup.label_x) - (font.getTextWidthScaled(text, scale) / 2),
        picture.getY(startup.label_y) - (font.getCharHeightScaled(kLoadingHeightChar, scale) / 2),
        startup.label_colour, engine::CBitFont::kNoShadow, scale);
    owners.screen.swapBuffers();
}

// Unpacking a large archive takes a while, so the fangs are up first, drawn from the packages
// already unpacked; without them among those, the screen is left black. The words wait: the
// palette and fonts they need are read from the packages once all are unpacked. A refused mode
// is found fatal when startup sets it again.
void unpackArchives(const SGameSystemOwners &owners) {
    if (!owners.pod.hasArchivesToUnpack()) {
        return;
    }
    if (setStartingFrontEndMode(owners) &&
        owners.dosio.readFile("art", std::format("{}.raw", getStartup(owners).picture))) {
        showFangs(owners);
        owners.screen.swapBuffers();
    }
    owners.pod.unpackArchives();
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
// deferred: reading the save folder and each save's mission name beside findAllSoundFiles, so
//   the save and load pickers open with nothing left to read (the decomp's save_slots.h
//   nocturne_save_slots_prewarm, SAVE_SLOTS), with the save and load pickers
// nocedit 0x00507a60
void initializeGameSystems(const SGameSystemOwners &owners) {
    // The ini is the game's, read before its pods mount, since it sets the checks they mount with.
    owners.pod.setGameChosenHandler([&owners](const engine::SChosenGame &game) {
        owners.game_folders.useGame(game.folder);
        readIniData(owners.ini, owners.file_system, owners.ini_owners);
    });
    owners.pod.init();
    owners.dosio.addGetFileInfoHook(
        [&pod = owners.pod](engine::SFoundFileInfo &info) { return pod.findFile(info); });
    owners.dosio.addGetFileInfoHook([&dosio = owners.dosio](engine::SFoundFileInfo &info) {
        return dosio.findFileNormally(info);
    });
    unpackArchives(owners);
    owners.pod.setGameChosenHandler({});
    // Every package is loaded now, so the control defaults the ini binds over are there.
    readIniControls(owners.ini, owners.ini_owners);
    // The menus are drawn over the title backdrop, so without it nothing can start.
    requireFrontEndStyle("title backdrop", owners.content.front_end.title_backdrop,
                         {kSkySceneBackdrop, kFigureSceneBackdrop, kTiledScrollBackdrop});
    if (owners.content.title) {
        owners.set_title(*owners.content.title);
    }
    owners.messages.readMessageFile("msglist.txt");
    if (const auto translations = owners.content.translations.find(owners.messages.getLanguage());
        translations != owners.content.translations.end()) {
        owners.messages.addTranslations(translations->second);
    }
    owners.texture.initTextureCache();
    // The retail build's dismount cleared the texture cache.
    owners.pod.setDismountHandler([&texture = owners.texture] { texture.clearTextureCache(); });
    owners.two_d.initGraphicsSystem();
    if (!setStartingFrontEndMode(owners)) {
        displayErrorAndQuit("Unable to set 640x480x32bpp.  Please make sure that you have a video "
                            "card with a minimum of 2MB of RAM, and the latest DirectDraw video "
                            "drivers.");
    }
    owners.ini_owners.fonts.initFonts();
    owners.ini_owners.fonts.setOsFontScale(getScreenLayout(owners).scale);
    showFirstRunCalibration(owners);
    const engine::SStartup &startup = getStartup(owners);
    owners.attract_movies.setOpeningPlayed(
        owners.play_movie(startup.movie_directory, startup.movie));
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
