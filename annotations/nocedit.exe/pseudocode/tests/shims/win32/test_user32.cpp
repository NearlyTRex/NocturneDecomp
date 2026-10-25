// =============================================================================
// USER32 — the window, its messages and the clipboard, on SDL
// =============================================================================
//
// The game reads input as Win32 messages: WM_KEYDOWN with a DirectInput
// scancode in lParam, WM_CHAR with what was typed, mouse messages with the point
// in its own 640x480, and WM_ACTIVATEAPP for focus. The pump turns SDL's events
// into those. Each case pushes the SDL events a device would make and reads back
// the messages the game's loop would see. SDL runs on its dummy video driver.
//
// The first case runs before any window exists, so the cases are in the order
// they have to be.

#include "gl/window_mode.h"
#include "globals/globals_610000.h"
#include "movie_writer.h"
#include "nocturne_test.h"
#include "sdl_support.h"
#include "system/user32.h"
#include "win32/shim_init.h"
#include "win32/text_input.h"
#include "win32/window_message.h"

// The test's own main(), which SDL would otherwise rename on Windows.
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <string>
#include <vector>
#if !defined(_WIN32)
#include <csignal>
#include <sys/wait.h>
#include <unistd.h>
#endif

extern SDL_Window *g_sdlWindow;
extern bool g_sdlWindowReadyToShow;

namespace {

using sdl_support::stand;

const UINT kKeyDown = 0x0100, kKeyUp = 0x0101, kChar = 0x0102;
const UINT kActivateApp = 0x001C, kDestroy = 0x0002, kQuit = 0x0012;
const UINT kMouseMove = 0x0200, kSetCursor = 0x0020, kMciNotify = 0x3b9;
const UINT kRemove = 1;

void start() {
    SDL_setenv("SDL_VIDEODRIVER", "dummy", 1);
    SDL_setenv("SDL_AUDIODRIVER", "dummy", 1);
    SDL_InitSubSystem(SDL_INIT_VIDEO);
    shims_init_user32();
    shims_init_mmsystem();
}

// Every message the pump has, taken off the queue.
std::vector<MSG> drain() {
    std::vector<MSG> got;
    MSG msg;
    while (g_PeekMessageAFunc(&msg, 0, 0, 0, kRemove))
        got.push_back(msg);
    return got;
}

void push_key(Uint32 type, SDL_Scancode scancode, SDL_Keycode sym, Uint16 mod = 0,
              Uint8 repeat = 0) {
    SDL_Event ev;
    memset(&ev, 0, sizeof(ev));
    ev.type = type;
    ev.key.keysym.scancode = scancode;
    ev.key.keysym.sym = sym;
    ev.key.keysym.mod = mod;
    ev.key.repeat = repeat;
    SDL_PushEvent(&ev);
}

// What one key press makes: its WM_KEYDOWN's lParam and the WM_CHAR, or 0.
struct Press {
    unsigned long lparam = 0;
    int typed = 0;
};

Press press(SDL_Scancode scancode, SDL_Keycode sym, Uint16 mod = 0, Uint8 repeat = 0) {
    push_key(SDL_KEYDOWN, scancode, sym, mod, repeat);
    Press p;
    for (const MSG &m : drain()) {
        if (m.message == kKeyDown)
            p.lparam = (unsigned long)m.lParam;
        if (m.message == kChar)
            p.typed = (int)m.wParam;
    }
    return p;
}

unsigned scancode_of(const Press &p) {
    return (unsigned)(p.lparam >> 16) & 0xffu;
}

// Answers with the message plus its wParam, so a test can see it was called
// with both.
LRESULT echo_proc(HWND, UINT message, WPARAM wparam, LPARAM) {
    return (LRESULT)(message + wparam);
}

} // namespace

// -----------------------------------------------------------------------------
// Before there is a window
// -----------------------------------------------------------------------------

// Asked about a window before one is made, the shim answers for the game's
// default 640x480 and does nothing it would need a window for.
NOCTURNE_TEST(before_the_window_is_made_the_answers_are_the_defaults) {
    // With no video driver to be had there is no window, GL or not.
    shims_init_user32();
    SDL_setenv("SDL_VIDEODRIVER", "no_such_driver", 1);
    CHECK_EQ(g_CreateWindowExAFunc(0, "Nocturne", nullptr, 0, 0, 0, 0, 0, 0, 0, 0, nullptr),
             (HWND)0);
    CHECK_EQ(stand.icons, 1);
    stand.icons = 0;
    start();
    RECT rect;
    CHECK(g_GetClientRectFunc(0, &rect));
    CHECK_EQ(rect.right, 640L);
    CHECK_EQ(rect.bottom, 480L);
    CHECK(!g_GetClientRectFunc(0, nullptr));
    CHECK(!g_IsIconicFunc(0));
    CHECK_EQ(g_FindWindowAFunc(nullptr, nullptr), (HWND)0);
    CHECK(g_MoveWindowFunc(0, 0, 0, 100, 100, 1));
    CHECK(g_ShowWindowFunc(0, 1));
    CHECK(g_BringWindowToTopFunc(0));
    CHECK(g_SetForegroundWindowFunc(0));
    CHECK(g_SetCursorPosFunc(1, 1));
}

// -----------------------------------------------------------------------------
// The window
// -----------------------------------------------------------------------------

// Made hidden at the size asked, or 640x480; given its icon; and with the
// WM_ACTIVATEAPP the game's loop waits for already queued.
NOCTURNE_TEST(the_window_is_made_hidden_and_reports_itself_active) {
    start();
    HWND hwnd = g_CreateWindowExAFunc(0, "Nocturne", nullptr, 0, 0, 0, 0, 0, 0, 0, 0, nullptr);
    CHECK(g_sdlWindow != nullptr);
    CHECK_EQ(stand.icons, 1);
    CHECK((SDL_GetWindowFlags(g_sdlWindow) & SDL_WINDOW_HIDDEN) != 0);
    RECT rect;
    g_GetClientRectFunc(hwnd, &rect);
    CHECK_EQ(rect.right, 640L);
    CHECK_EQ(rect.bottom, 480L);
    CHECK_EQ(g_FindWindowAFunc("Nocturne", nullptr), hwnd);

    std::vector<MSG> first = drain();
    CHECK(!first.empty());
    if (!first.empty()) {
        CHECK_EQ(first[0].message, kActivateApp);
        CHECK_EQ(first[0].wParam, (WPARAM)1);
    }

    // Shown only once the display mode has set the real size.
    CHECK(g_ShowWindowFunc(hwnd, 1));
    CHECK((SDL_GetWindowFlags(g_sdlWindow) & SDL_WINDOW_HIDDEN) != 0);
    g_sdlWindowReadyToShow = true;
    g_ShowWindowFunc(hwnd, 1);
    CHECK((SDL_GetWindowFlags(g_sdlWindow) & SDL_WINDOW_SHOWN) != 0);
    g_ShowWindowFunc(hwnd, 0);
    CHECK((SDL_GetWindowFlags(g_sdlWindow) & SDL_WINDOW_HIDDEN) != 0);
    CHECK(!g_IsIconicFunc(hwnd));

    // Only the game's own window may be moved; the movie's child window is not.
    CHECK(g_MoveWindowFunc(hwnd ^ 1, 0, 0, 100, 100, 1));
    g_GetClientRectFunc(hwnd, &rect);
    CHECK_EQ(rect.right, 640L);
    CHECK(g_MoveWindowFunc(hwnd, 10, 10, 800, 600, 1));
    g_GetClientRectFunc(hwnd, &rect);
    CHECK_EQ(rect.right, 800L);
    CHECK_EQ(rect.bottom, 600L);
    // Where the window is the screen, nothing moves it.
    g_nocturne_fixed_display = 1;
    CHECK(g_MoveWindowFunc(hwnd, 0, 0, 320, 200, 1));
    g_GetClientRectFunc(hwnd, &rect);
    CHECK_EQ(rect.right, 800L);
    g_nocturne_fixed_display = 0;

    CHECK(g_BringWindowToTopFunc(hwnd));
    CHECK(g_SetForegroundWindowFunc(hwnd));
    CHECK(g_SetCursorPosFunc(5, 5));
    CHECK_EQ(g_SetFocusFunc(hwnd), hwnd);
    CHECK_EQ(g_GetLastActivePopupFunc(hwnd), hwnd);
    drain();

    // A second window takes the size and title it was given.
    g_CreateWindowExAFunc(0, "Nocturne", "Title", 0, 0, 0, 320, 200, 0, 0, 0, nullptr);
    g_GetClientRectFunc(0, &rect);
    CHECK_EQ(rect.right, 320L);
    CHECK_EQ(std::string(SDL_GetWindowTitle(g_sdlWindow)), std::string("Title"));
    drain();
}

// -----------------------------------------------------------------------------
// Messages
// -----------------------------------------------------------------------------

// A message is looked at, then taken; an empty queue is the end of the pump,
// where the gamepad is sampled.
NOCTURNE_TEST(a_message_is_looked_at_then_taken) {
    start();
    drain();
    g_PostQuitMessageFunc(3);
    MSG msg;
    CHECK(g_PeekMessageAFunc(&msg, 0, 0, 0, 0));
    CHECK_EQ(msg.message, kQuit);
    CHECK_EQ(msg.wParam, (WPARAM)3);
    CHECK(g_PeekMessageAFunc(nullptr, 0, 0, 0, 0));
    CHECK(g_PeekMessageAFunc(&msg, 0, 0, 0, kRemove));
    const int pumps = stand.gamepad_pumps;
    CHECK(!g_PeekMessageAFunc(&msg, 0, 0, 0, kRemove));
    CHECK_EQ(stand.gamepad_pumps, pumps + 1);
}

// The class's window procedure gets each dispatched message and its answer comes
// back; with none registered, nothing does.
NOCTURNE_TEST(dispatch_calls_the_registered_procedure) {
    start();
    MSG msg;
    memset(&msg, 0, sizeof(msg));
    msg.message = 0x10;
    msg.wParam = 5;
    CHECK_EQ(g_DispatchMessageAFunc(&msg), (LRESULT)0);
    CHECK_EQ(g_RegisterClassAFunc(nullptr), (ATOM)1);
    CHECK_EQ(g_DispatchMessageAFunc(&msg), (LRESULT)0);
    WNDCLASSA cls;
    memset(&cls, 0, sizeof(cls));
    cls.lpfnWndProc = echo_proc;
    CHECK_EQ(g_RegisterClassAFunc(&cls), (ATOM)1);
    CHECK_EQ(g_DispatchMessageAFunc(&msg), (LRESULT)0x15);
    CHECK_EQ(g_DispatchMessageAFunc(nullptr), (LRESULT)0);
    CHECK(g_TranslateMessageFunc(&msg));
    CHECK_EQ(g_DefWindowProcAFunc(0, 0, 0, 0), (LRESULT)0);
}

// Closing the window is WM_DESTROY; focus coming and going is WM_ACTIVATEAPP,
// arming the focus trace as it comes; other window events and other SDL events
// are nothing.
NOCTURNE_TEST(window_events_are_destroy_and_activation) {
    start();
    drain();
    SDL_Event ev;
    memset(&ev, 0, sizeof(ev));
    ev.type = SDL_QUIT;
    SDL_PushEvent(&ev);
    ev.type = SDL_WINDOWEVENT;
    ev.window.event = SDL_WINDOWEVENT_FOCUS_LOST;
    SDL_PushEvent(&ev);
    ev.window.event = SDL_WINDOWEVENT_FOCUS_GAINED;
    SDL_PushEvent(&ev);
    ev.window.event = SDL_WINDOWEVENT_MOVED;
    SDL_PushEvent(&ev);
    ev.type = SDL_USEREVENT;
    SDL_PushEvent(&ev);
    const int arms = stand.focus_arms;
    std::vector<MSG> got = drain();
    CHECK_EQ(got.size(), (size_t)3);
    if (got.size() == 3) {
        CHECK_EQ(got[0].message, kDestroy);
        CHECK_EQ(got[1].message, kActivateApp);
        CHECK_EQ(got[1].wParam, (WPARAM)0);
        CHECK_EQ(got[2].wParam, (WPARAM)1);
    }
    CHECK_EQ(stand.focus_arms, arms + 1);
}

// -----------------------------------------------------------------------------
// Keys
// -----------------------------------------------------------------------------

// Every key the game binds arrives as the DirectInput scancode it was bound by.
NOCTURNE_TEST(each_key_arrives_as_its_directinput_scancode) {
    start();
    drain();
    struct Key {
        SDL_Scancode sc;
        unsigned dik;
    };
    const Key keys[] = {
        {SDL_SCANCODE_A, 0x1E},
        {SDL_SCANCODE_Z, 0x2C},
        {SDL_SCANCODE_1, 0x02},
        {SDL_SCANCODE_9, 0x0A},
        {SDL_SCANCODE_0, 0x0B},
        {SDL_SCANCODE_ESCAPE, 0x01},
        {SDL_SCANCODE_RETURN, 0x1C},
        {SDL_SCANCODE_BACKSPACE, 0x0E},
        {SDL_SCANCODE_TAB, 0x0F},
        {SDL_SCANCODE_SPACE, 0x39},
        {SDL_SCANCODE_MINUS, 0x0C},
        {SDL_SCANCODE_EQUALS, 0x0D},
        {SDL_SCANCODE_LEFTBRACKET, 0x1A},
        {SDL_SCANCODE_RIGHTBRACKET, 0x1B},
        {SDL_SCANCODE_BACKSLASH, 0x2B},
        {SDL_SCANCODE_SEMICOLON, 0x27},
        {SDL_SCANCODE_APOSTROPHE, 0x28},
        {SDL_SCANCODE_GRAVE, 0x29},
        {SDL_SCANCODE_COMMA, 0x33},
        {SDL_SCANCODE_PERIOD, 0x34},
        {SDL_SCANCODE_SLASH, 0x35},
        {SDL_SCANCODE_CAPSLOCK, 0x3A},
        {SDL_SCANCODE_F1, 0x3B},
        {SDL_SCANCODE_F2, 0x3C},
        {SDL_SCANCODE_F3, 0x3D},
        {SDL_SCANCODE_F4, 0x3E},
        {SDL_SCANCODE_F5, 0x3F},
        {SDL_SCANCODE_F6, 0x40},
        {SDL_SCANCODE_F7, 0x41},
        {SDL_SCANCODE_F8, 0x42},
        {SDL_SCANCODE_F9, 0x43},
        {SDL_SCANCODE_F10, 0x44},
        {SDL_SCANCODE_F11, 0x57},
        {SDL_SCANCODE_F12, 0x58},
        {SDL_SCANCODE_INSERT, 0x52},
        {SDL_SCANCODE_DELETE, 0x53},
        {SDL_SCANCODE_HOME, 0x47},
        {SDL_SCANCODE_END, 0x4F},
        {SDL_SCANCODE_PAGEUP, 0x49},
        {SDL_SCANCODE_PAGEDOWN, 0x51},
        {SDL_SCANCODE_UP, 0x48},
        {SDL_SCANCODE_DOWN, 0x50},
        {SDL_SCANCODE_LEFT, 0x4B},
        {SDL_SCANCODE_RIGHT, 0x4D},
        {SDL_SCANCODE_LSHIFT, 0x2A},
        {SDL_SCANCODE_RSHIFT, 0x36},
        {SDL_SCANCODE_LCTRL, 0x1D},
        {SDL_SCANCODE_RCTRL, 0x1D},
        {SDL_SCANCODE_LALT, 0x38},
        {SDL_SCANCODE_RALT, 0x38},
        {SDL_SCANCODE_NUMLOCKCLEAR, 0x45},
        {SDL_SCANCODE_KP_DIVIDE, 0x35},
        {SDL_SCANCODE_KP_MULTIPLY, 0x37},
        {SDL_SCANCODE_KP_MINUS, 0x4A},
        {SDL_SCANCODE_KP_PLUS, 0x4E},
        {SDL_SCANCODE_KP_ENTER, 0x1C},
        {SDL_SCANCODE_KP_0, 0x52},
        {SDL_SCANCODE_KP_1, 0x4F},
        {SDL_SCANCODE_KP_2, 0x50},
        {SDL_SCANCODE_KP_3, 0x51},
        {SDL_SCANCODE_KP_4, 0x4B},
        {SDL_SCANCODE_KP_5, 0x4C},
        {SDL_SCANCODE_KP_6, 0x4D},
        {SDL_SCANCODE_KP_7, 0x47},
        {SDL_SCANCODE_KP_8, 0x48},
        {SDL_SCANCODE_KP_9, 0x49},
        {SDL_SCANCODE_KP_PERIOD, 0x53},
        {SDL_SCANCODE_PRINTSCREEN, 0},
    };
    for (const Key &k : keys) {
        const Press p = press(k.sc, 0);
        CHECK_EQ(scancode_of(p), k.dik);
    }
}

// The keys that share a scancode with a number-pad key are told apart by the
// extended bit, as Win32 does.
NOCTURNE_TEST(extended_keys_carry_the_extended_bit) {
    start();
    drain();
    const SDL_Scancode extended[] = {
        SDL_SCANCODE_INSERT,    SDL_SCANCODE_DELETE,   SDL_SCANCODE_HOME,  SDL_SCANCODE_END,
        SDL_SCANCODE_PAGEUP,    SDL_SCANCODE_PAGEDOWN, SDL_SCANCODE_UP,    SDL_SCANCODE_DOWN,
        SDL_SCANCODE_LEFT,      SDL_SCANCODE_RIGHT,    SDL_SCANCODE_RCTRL, SDL_SCANCODE_RALT,
        SDL_SCANCODE_KP_DIVIDE, SDL_SCANCODE_KP_ENTER,
    };
    for (SDL_Scancode sc : extended)
        CHECK_EQ(press(sc, 0).lparam & 0x01000000ul, 0x01000000ul);
    CHECK_EQ(press(SDL_SCANCODE_KP_8, 0).lparam & 0x01000000ul, 0ul);
}

// A held key's repeats say so, and a release always does.
NOCTURNE_TEST(repeats_and_releases_carry_the_transition_bits) {
    start();
    drain();
    CHECK_EQ(press(SDL_SCANCODE_A, 'a').lparam & 0x40000000ul, 0ul);
    CHECK_EQ(press(SDL_SCANCODE_A, 'a', 0, 1).lparam & 0x40000000ul, 0x40000000ul);
    push_key(SDL_KEYUP, SDL_SCANCODE_A, 'a');
    std::vector<MSG> got = drain();
    CHECK_EQ(got.size(), (size_t)1);
    if (!got.empty()) {
        CHECK_EQ(got[0].message, kKeyUp);
        CHECK_EQ((unsigned long)got[0].lParam & 0xC0000000ul, 0xC0000000ul);
        CHECK_EQ(((unsigned long)got[0].lParam >> 16) & 0xffu, 0x1Eul);
    }
}

// What a key types: letters by Shift and Caps Lock, the US layout's shifted
// symbols, the number pad by Num Lock, and the control characters Win32 sends.
NOCTURNE_TEST(a_key_types_what_win32_would_type) {
    start();
    SDL_StopTextInput(); // what a console has outside a prompt
    drain();
    CHECK_EQ(press(SDL_SCANCODE_A, 'a').typed, (int)'a');
    CHECK_EQ(press(SDL_SCANCODE_A, 'a', KMOD_LSHIFT).typed, (int)'A');
    CHECK_EQ(press(SDL_SCANCODE_A, 'a', KMOD_CAPS).typed, (int)'A');
    CHECK_EQ(press(SDL_SCANCODE_A, 'a', KMOD_CAPS | KMOD_RSHIFT).typed, (int)'a');
    CHECK_EQ(press(SDL_SCANCODE_1, '1', KMOD_CAPS).typed, (int)'1');

    const char *plain = "1234567890-=[]\\;',./`";
    const char *shifted = "!@#$%^&*()_+{}|:\"<>?~";
    for (size_t i = 0; plain[i]; ++i) {
        CHECK_EQ(press(SDL_SCANCODE_UNKNOWN, plain[i], KMOD_SHIFT).typed, (int)shifted[i]);
    }
    CHECK_EQ(press(SDL_SCANCODE_SPACE, ' ', KMOD_SHIFT).typed, (int)' ');
    // Past 'z' is not a letter, whatever Caps Lock says.
    CHECK_EQ(press(SDL_SCANCODE_UNKNOWN, '{', KMOD_CAPS).typed, (int)'{');

    // The number pad.
    CHECK_EQ(press(SDL_SCANCODE_KP_1, SDLK_KP_1, KMOD_NUM).typed, (int)'1');
    CHECK_EQ(press(SDL_SCANCODE_KP_0, SDLK_KP_0, KMOD_NUM).typed, (int)'0');
    CHECK_EQ(press(SDL_SCANCODE_KP_PERIOD, SDLK_KP_PERIOD, KMOD_NUM).typed, (int)'.');
    CHECK_EQ(press(SDL_SCANCODE_KP_7, SDLK_KP_7).typed, 0); // Num Lock off: Home
    CHECK_EQ(press(SDL_SCANCODE_KP_DIVIDE, SDLK_KP_DIVIDE).typed, (int)'/');
    CHECK_EQ(press(SDL_SCANCODE_KP_MULTIPLY, SDLK_KP_MULTIPLY).typed, (int)'*');
    CHECK_EQ(press(SDL_SCANCODE_KP_MINUS, SDLK_KP_MINUS).typed, (int)'-');
    CHECK_EQ(press(SDL_SCANCODE_KP_PLUS, SDLK_KP_PLUS).typed, (int)'+');
    CHECK_EQ(press(SDL_SCANCODE_KP_ENTER, SDLK_KP_ENTER).typed, (int)'\r');

    // Control characters, and keys that type nothing.
    CHECK_EQ(press(SDL_SCANCODE_BACKSPACE, SDLK_BACKSPACE).typed, 0x08);
    CHECK_EQ(press(SDL_SCANCODE_TAB, SDLK_TAB).typed, 0x09);
    CHECK_EQ(press(SDL_SCANCODE_RETURN, SDLK_RETURN).typed, 0x0D);
    CHECK_EQ(press(SDL_SCANCODE_ESCAPE, SDLK_ESCAPE).typed, 0x1B);
    CHECK_EQ(press(SDL_SCANCODE_F1, SDLK_F1).typed, 0);
    CHECK_EQ(press(SDL_SCANCODE_DELETE, SDLK_DELETE).typed, 0);
    CHECK_EQ(press(SDL_SCANCODE_UNKNOWN, 0x05).typed, 0);
}

// What SDL's text input sends, as the bytes the game's font indexes: ASCII and
// Latin-1 as they are, anything past them or broken not at all.
NOCTURNE_TEST(text_input_types_in_the_keyboards_own_layout) {
    start();
    SDL_StartTextInput();
    drain();
    SDL_Event ev;
    memset(&ev, 0, sizeof(ev));
    ev.type = SDL_TEXTINPUT;
    // "a", e-acute, the euro sign, a lone continuation byte, a cut-short
    // two-byte lead, "Z", a four-byte emoji, DEL, a control character, then
    // "!".
    const char text[] = "a\xc3\xa9\xe2\x82\xac\x80\xc3"
                        "Z\xf0\x9f\x98\x80\x7f\x01!";
    memcpy(ev.text.text, text, sizeof(text));
    SDL_PushEvent(&ev);
    std::vector<int> typed;
    for (const MSG &m : drain()) {
        if (m.message == kChar)
            typed.push_back((int)m.wParam);
    }
    CHECK_EQ(typed.size(), (size_t)4);
    if (typed.size() == 4) {
        CHECK_EQ(typed[0], (int)'a');
        CHECK_EQ(typed[1], 0xe9);
        CHECK_EQ(typed[2], (int)'Z');
        CHECK_EQ(typed[3], (int)'!');
    }

    // With text input on, a key types only what has no text.
    CHECK_EQ(press(SDL_SCANCODE_A, 'a').typed, 0);
    CHECK_EQ(press(SDL_SCANCODE_BACKSPACE, SDLK_BACKSPACE).typed, 0x08);
    CHECK_EQ(press(SDL_SCANCODE_KP_ENTER, SDLK_KP_ENTER).typed, (int)'\r');
}

// A prompt turns text input on only where it was off, and off again only once
// the outermost prompt is done.
NOCTURNE_TEST(a_prompt_asks_for_text_input_while_it_is_up) {
    start();
    SDL_StopTextInput();
    nocturne_text_input_end(); // nothing up: nothing to undo
    CHECK(!SDL_IsTextInputActive());
    nocturne_text_input_begin();
    nocturne_text_input_begin();
    CHECK(SDL_IsTextInputActive());
    nocturne_text_input_end();
    CHECK(SDL_IsTextInputActive());
    nocturne_text_input_end();
    CHECK(!SDL_IsTextInputActive());

    // Already on, as the desktop has it: left on.
    SDL_StartTextInput();
    nocturne_text_input_begin();
    nocturne_text_input_end();
    CHECK(SDL_IsTextInputActive());
}

// -----------------------------------------------------------------------------
// The mouse
// -----------------------------------------------------------------------------

// The point is in the game's logical 640x480, whatever the window's size.
NOCTURNE_TEST(the_mouse_reports_in_the_games_own_coordinates) {
    start();
    drain();
    stand.logical_scale = 2;
    SDL_Event ev;
    memset(&ev, 0, sizeof(ev));
    ev.type = SDL_MOUSEMOTION;
    ev.motion.x = 200;
    ev.motion.y = 100;
    SDL_PushEvent(&ev);
    std::vector<MSG> got = drain();
    // WM_SETCURSOR comes first, over the client area for a mouse move.
    CHECK_EQ(got.size(), (size_t)2);
    if (got.size() == 2) {
        CHECK_EQ(got[0].message, kSetCursor);
        CHECK_EQ((long)got[0].lParam, ((long)kMouseMove << 16) | 1L);
        CHECK_EQ(got[1].message, kMouseMove);
        CHECK_EQ((long)got[1].lParam, (50L << 16) | 100L);
    }

    // Left, right and middle, down and up; another button is nothing.
    struct Button {
        Uint8 button;
        UINT down;
        UINT up;
    };
    const Button buttons[] = {
        {SDL_BUTTON_LEFT, 0x0201, 0x0202},
        {SDL_BUTTON_RIGHT, 0x0204, 0x0205},
        {SDL_BUTTON_MIDDLE, 0x0207, 0x0208},
    };
    for (const Button &b : buttons) {
        memset(&ev, 0, sizeof(ev));
        ev.button.button = b.button;
        ev.button.x = 20;
        ev.button.y = 40;
        ev.type = SDL_MOUSEBUTTONDOWN;
        SDL_PushEvent(&ev);
        ev.type = SDL_MOUSEBUTTONUP;
        SDL_PushEvent(&ev);
        got = drain();
        CHECK_EQ(got.size(), (size_t)2);
        if (got.size() == 2) {
            CHECK_EQ(got[0].message, b.down);
            CHECK_EQ(got[1].message, b.up);
            CHECK_EQ((long)got[1].lParam, (20L << 16) | 10L);
        }
    }
    memset(&ev, 0, sizeof(ev));
    ev.button.button = SDL_BUTTON_X1;
    ev.type = SDL_MOUSEBUTTONDOWN;
    SDL_PushEvent(&ev);
    ev.type = SDL_MOUSEBUTTONUP;
    SDL_PushEvent(&ev);
    CHECK(drain().empty());
    stand.logical_scale = 1;
}

// The wheel goes to the extra-message hook in whole notches, natural scrolling
// turned back the right way, and a movement of no notches is nothing.
NOCTURNE_TEST(the_wheel_arrives_as_notches) {
    start();
    drain();
    nocturne_mouse_wheel_take();
    SDL_Event ev;
    memset(&ev, 0, sizeof(ev));
    ev.type = SDL_MOUSEWHEEL;
    ev.wheel.y = 2;
    SDL_PushEvent(&ev);
    ev.wheel.direction = SDL_MOUSEWHEEL_FLIPPED;
    ev.wheel.y = 1;
    SDL_PushEvent(&ev);
    ev.wheel.y = 0;
    SDL_PushEvent(&ev);
    std::vector<MSG> got = drain();
    CHECK_EQ(got.size(), (size_t)2);
    for (const MSG &m : got) {
        CHECK_EQ(m.message, (UINT)NOCTURNE_WM_MOUSEWHEEL);
        nocturne_window_message(m.message, (unsigned long)m.wParam, (long)m.lParam);
    }
    CHECK_EQ(nocturne_mouse_wheel_take(), 1);
}

// -----------------------------------------------------------------------------
// Movies
// -----------------------------------------------------------------------------

// The end of a movie becomes MM_MCINOTIFY on the game's window, which is what
// releases playMovie's loop.
NOCTURNE_TEST(a_movie_ending_is_notified_to_the_window) {
    start();
    stand.gl_active = 1;
    namespace fs = std::filesystem;
    const std::string path = (fs::temp_directory_path() / "nocturne_user32_movie.avi").string();
    movie_writer::Movie movie;
    movie.frames = 3;
    movie.audio = AV_CODEC_ID_NONE;
    CHECK(movie_writer::write(path, movie));
    CHECK_EQ(g_mciSendStringAFunc(("open \"" + path + "\" alias mov").c_str(), nullptr, 0, 0), 0u);
    g_mciSendStringAFunc("play mov notify", nullptr, 0, 0);
    bool notified = false;
    for (int i = 0; i < 400 && !notified; ++i) {
        MSG msg;
        while (g_PeekMessageAFunc(&msg, 0, 0, 0, kRemove)) {
            notified = notified || (msg.message == kMciNotify && msg.wParam == 1);
        }
        SDL_Delay(5);
    }
    CHECK(notified);
    g_mciSendStringAFunc("close mov", nullptr, 0, 0);
    fs::remove(path);
    stand.gl_active = 0;
}

// -----------------------------------------------------------------------------
// Text, the clipboard and the rest
// -----------------------------------------------------------------------------

NOCTURNE_TEST(text_goes_through_the_clipboard_and_upper_cases_in_place) {
    start();
    char text[] = "hello, Wörld";
    CHECK(g_OpenClipboardFunc(0));
    CHECK_EQ(g_SetClipboardDataFunc(1, (HANDLE)text), (HANDLE)text);
    CHECK(g_SetClipboardDataFunc(1, nullptr) == nullptr);
    const char *back = (const char *)g_GetClipboardDataFunc(1);
    CHECK(back != nullptr);
    if (back != nullptr)
        CHECK_EQ(std::string(back), std::string(text));
    // Asked again, the last copy is let go and a new one handed back.
    CHECK(g_GetClipboardDataFunc(1) != nullptr);
    CHECK(g_CloseClipboardFunc());

    char upper[] = "a{c-xyz";
    CHECK_EQ(g_CharUpperBuffAFunc(upper, 5), (DWORD)5);
    CHECK_EQ(std::string(upper), std::string("A{C-Xyz"));

    char name[8] = "x";
    CHECK_EQ(g_GetKeyNameTextAFunc(0, name, sizeof(name)), 0);
    CHECK_EQ(name[0], '\0');
    CHECK_EQ(g_GetKeyNameTextAFunc(0, nullptr, 8), 0);
    CHECK_EQ(g_GetKeyNameTextAFunc(0, name, 0), 0);

    RECT r;
    r.left = 1;
    r.top = 2;
    r.right = 3;
    r.bottom = 4;
    CHECK(g_SetRectEmptyFunc(&r));
    CHECK_EQ(r.right, 0L);
    CHECK(g_SetRectEmptyFunc(nullptr));
    CHECK(g_InvalidateRectFunc(0, nullptr, 1));
    CHECK(g_UpdateWindowFunc(0));
    CHECK(g_LoadCursorAFunc(0, nullptr) != nullptr);
    CHECK(g_LoadIconAFunc(0, nullptr) != nullptr);
}

// No cursor hides the system's over the window, as the game asks on every
// WM_SETCURSOR; one puts it back. Each answers the cursor before it.
NOCTURNE_TEST(no_cursor_hides_the_systems_and_one_puts_it_back) {
    start();
    CHECK(g_SetCursorFunc(nullptr) == (HCURSOR)1);
    CHECK_EQ(SDL_ShowCursor(SDL_QUERY), SDL_DISABLE);
    CHECK(g_SetCursorFunc((HCURSOR)1) == nullptr);
    CHECK_EQ(SDL_ShowCursor(SDL_QUERY), SDL_ENABLE);
}

#if !defined(_WIN32)
// A message box is shown and answered OK. With no display to show it on, as
// here, it is answered OK straight away.
// The system's Back button is the game's to read, where there is one.
NOCTURNE_TEST(back_is_the_games_to_handle) {
    start();
    const char *hint = SDL_GetHint(SDL_HINT_WINRT_HANDLE_BACK_BUTTON);
    CHECK(hint != nullptr && std::string(hint) == "1");
}

// Where the window is the screen, it is made full-screen from the start.
NOCTURNE_TEST(a_fixed_display_makes_the_window_the_screen) {
    start();
    SDL_Window *before = g_sdlWindow;
    g_nocturne_fixed_display = 1;
    g_CreateWindowExAFunc(0, "Nocturne", nullptr, 0, 0, 0, 0, 0, 0, 0, 0, nullptr);
    g_nocturne_fixed_display = 0;
    CHECK((SDL_GetWindowFlags(g_sdlWindow) & SDL_WINDOW_FULLSCREEN_DESKTOP) ==
          SDL_WINDOW_FULLSCREEN_DESKTOP);
    SDL_DestroyWindow(g_sdlWindow);
    g_sdlWindow = before;
    drain();
}

NOCTURNE_TEST(a_message_box_is_answered_ok) {
    start();
    SDL_setenv("DISPLAY", "", 1);
    SDL_setenv("WAYLAND_DISPLAY", "", 1);
    CHECK_EQ(g_MessageBoxAFunc(0, "text", "caption", 0), 1);
    CHECK_EQ(g_MessageBoxAFunc(0, nullptr, nullptr, 0), 1);
}

// Ctrl+C ends the process at once, with exit code 1.
NOCTURNE_TEST(an_interrupt_ends_the_process) {
    const pid_t child = fork();
    if (child == 0) {
        shims_init_user32();
        raise(SIGINT);
        _exit(9);
    }
    int status = 0;
    waitpid(child, &status, 0);
    CHECK(WIFEXITED(status));
    CHECK_EQ(WEXITSTATUS(status), 1);
}
#endif

NOCTURNE_TEST_MAIN()
