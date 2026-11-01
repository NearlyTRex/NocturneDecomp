#include "engine/keys/keyname.h"

#include "engine/keys/inputcodetype.h"

#include <algorithm>
#include <array>
#include <string_view>

namespace nocturne::engine {
namespace {

using enum EInputCodeType;

struct SKeyName {
    EInputCodeType code;
    std::string_view name;
};

// In code order. The original has no name for the backslash.
constexpr std::array<SKeyName, 101> kKeyNames{{
    {.code = DIK_ESCAPE, .name = "Esc"},
    {.code = DIK_1, .name = "1"},
    {.code = DIK_2, .name = "2"},
    {.code = DIK_3, .name = "3"},
    {.code = DIK_4, .name = "4"},
    {.code = DIK_5, .name = "5"},
    {.code = DIK_6, .name = "6"},
    {.code = DIK_7, .name = "7"},
    {.code = DIK_8, .name = "8"},
    {.code = DIK_9, .name = "9"},
    {.code = DIK_0, .name = "0"},
    {.code = DIK_MINUS, .name = "-"},
    {.code = DIK_EQUALS, .name = "="},
    {.code = DIK_BACK, .name = "BackSpace"},
    {.code = DIK_TAB, .name = "Tab"},
    {.code = DIK_Q, .name = "Q"},
    {.code = DIK_W, .name = "W"},
    {.code = DIK_E, .name = "E"},
    {.code = DIK_R, .name = "R"},
    {.code = DIK_T, .name = "T"},
    {.code = DIK_Y, .name = "Y"},
    {.code = DIK_U, .name = "U"},
    {.code = DIK_I, .name = "I"},
    {.code = DIK_O, .name = "O"},
    {.code = DIK_P, .name = "P"},
    {.code = DIK_LBRACKET, .name = "["},
    {.code = DIK_RBRACKET, .name = "]"},
    {.code = DIK_RETURN, .name = "Enter"},
    {.code = DIK_LCONTROL, .name = "LeftCtrl"},
    {.code = DIK_A, .name = "A"},
    {.code = DIK_S, .name = "S"},
    {.code = DIK_D, .name = "D"},
    {.code = DIK_F, .name = "F"},
    {.code = DIK_G, .name = "G"},
    {.code = DIK_H, .name = "H"},
    {.code = DIK_J, .name = "J"},
    {.code = DIK_K, .name = "K"},
    {.code = DIK_L, .name = "L"},
    {.code = DIK_SEMICOLON, .name = ";"},
    {.code = DIK_APOSTROPHE, .name = "'"},
    {.code = DIK_GRAVE, .name = "`"},
    {.code = DIK_LSHIFT, .name = "LeftShift"},
    {.code = DIK_Z, .name = "Z"},
    {.code = DIK_X, .name = "X"},
    {.code = DIK_C, .name = "C"},
    {.code = DIK_V, .name = "V"},
    {.code = DIK_B, .name = "B"},
    {.code = DIK_N, .name = "N"},
    {.code = DIK_M, .name = "M"},
    {.code = DIK_COMMA, .name = ","},
    {.code = DIK_PERIOD, .name = "."},
    {.code = DIK_SLASH, .name = "/"},
    {.code = DIK_RSHIFT, .name = "RightShift"},
    {.code = DIK_MULTIPLY, .name = "NumPad*"},
    {.code = DIK_LMENU, .name = "LeftAlt"},
    {.code = DIK_SPACE, .name = "Space"},
    {.code = DIK_CAPITAL, .name = "CapsLock"},
    {.code = DIK_F1, .name = "F1"},
    {.code = DIK_F2, .name = "F2"},
    {.code = DIK_F3, .name = "F3"},
    {.code = DIK_F4, .name = "F4"},
    {.code = DIK_F5, .name = "F5"},
    {.code = DIK_F6, .name = "F6"},
    {.code = DIK_F7, .name = "F7"},
    {.code = DIK_F8, .name = "F8"},
    {.code = DIK_F9, .name = "F9"},
    {.code = DIK_F10, .name = "F10"},
    {.code = DIK_PAUSE, .name = "Pause"},
    {.code = DIK_SCROLL, .name = "ScrollLock"},
    {.code = DIK_NUMPAD7, .name = "NumPad7"},
    {.code = DIK_NUMPAD8, .name = "NumPad8"},
    {.code = DIK_NUMPAD9, .name = "NumPad9"},
    {.code = DIK_SUBTRACT, .name = "NumPad-"},
    {.code = DIK_NUMPAD4, .name = "NumPad4"},
    {.code = DIK_NUMPAD5, .name = "NumPad5"},
    {.code = DIK_NUMPAD6, .name = "NumPad6"},
    {.code = DIK_ADD, .name = "NumPad+"},
    {.code = DIK_NUMPAD1, .name = "NumPad1"},
    {.code = DIK_NUMPAD2, .name = "NumPad2"},
    {.code = DIK_NUMPAD3, .name = "NumPad3"},
    {.code = DIK_NUMPAD0, .name = "NumPad0"},
    {.code = DIK_DECIMAL, .name = "NumPad."},
    {.code = DIK_F11, .name = "F11"},
    {.code = DIK_F12, .name = "F12"},
    {.code = DIK_NUMPADCENTER, .name = "NumPadEnter"},
    {.code = DIK_RCONTROL, .name = "RightCtrl"},
    {.code = DIK_DIVIDE, .name = "NumPad/"},
    {.code = DIK_RMENU, .name = "RightAlt"},
    {.code = DIK_NUMLOCK, .name = "NumLock"},
    {.code = DIK_HOME, .name = "Home"},
    {.code = DIK_UP, .name = "Up"},
    {.code = DIK_PRIOR, .name = "PgUp"},
    {.code = DIK_LEFT, .name = "Left"},
    {.code = DIK_RIGHT, .name = "Right"},
    {.code = DIK_END, .name = "End"},
    {.code = DIK_DOWN, .name = "Down"},
    {.code = DIK_NEXT, .name = "PgDn"},
    {.code = DIK_INSERT, .name = "Ins"},
    {.code = DIK_DELETE, .name = "Del"},
    {.code = DIM_LBUTTON, .name = "Left Mouse Button"},
    {.code = DIM_RBUTTON, .name = "Right Mouse Button"},
}};

static_assert(std::ranges::is_sorted(kKeyNames, {}, &SKeyName::code));

constexpr std::string_view kInvalidKey = "(invalid key)";

} // namespace

// The original asked Windows for a key's name first, and fell back on these; the enhanced game
// names keys from these alone, whatever the keyboard's layout.
// nocedit 0x005f3980
std::string_view getKeyName(EInputCodeType keycode) {
    const auto *found = std::ranges::lower_bound(kKeyNames, keycode, {}, &SKeyName::code);
    if (found == kKeyNames.end() || found->code != keycode) {
        return kInvalidKey;
    }
    return found->name;
}

} // namespace nocturne::engine
