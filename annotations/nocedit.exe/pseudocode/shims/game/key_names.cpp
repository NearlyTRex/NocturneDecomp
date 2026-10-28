// =============================================================================
// KEY NAMES — implementation
// =============================================================================
//
// See key_names.h, and NOCTURNE_AUTHENTIC_GAMEPAD in config/shim_config_authentic.h.
// getKeyDisplayName's keep is the shipped lookup this follows.

#include "game/key_names.h"

#include "nocturne.h"

#include <cstdio>

#if !NOCTURNE_AUTHENTIC_GAMEPAD

namespace {

struct Named {
    int code;
    const char *name;
};

// The shipped names, and the stick's directions under their stick names.
const Named kNames[] = {
    {INPUT_NONE, "(none)"},         {DIM_XAXIS, "Mouse X-Axis"},   {DIM_YAXIS, "Mouse Y-Axis"},
    {DIM_LBUTTON, "Mouse B1"},      {DIM_RBUTTON, "Mouse B2"},     {DIM_MBUTTON, "Mouse B3"},
    {DIJ_BUTTON1, "Button 1"},      {DIJ_BUTTON2, "Button 2"},     {DIJ_BUTTON3, "Button 3"},
    {DIJ_BUTTON4, "Button 4"},      {DIJ_BUTTON5, "Button 5"},     {DIJ_BUTTON6, "Button 6"},
    {DIJ_BUTTON7, "Button 7"},      {DIJ_BUTTON8, "Button 8"},     {DIJ_BUTTON9, "Button 9"},
    {DIJ_BUTTON10, "Button 10"},    {DIJ_LEFT, "Left Stick Left"}, {DIJ_RIGHT, "Left Stick Right"},
    {DIJ_UP, "Left Stick Forward"}, {DIJ_DOWN, "Left Stick Back"},
};

const int kStringBuffers = 10;

const char *name_of(int key_code) {
    if (NOCTURNE_PAD_IS_CODE(key_code))
        return support_newmsg_cpp_getLocalizedString_FUN_005441f0(
            (char *)nocturne_gamepad_code_name(key_code));
    for (const Named &named : kNames) {
        if (named.code == key_code)
            return support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)named.name);
    }
    return wincore_winrun_cpp_getKeyName_FUN_005f3980((EInputCodeType)key_code);
}

} // namespace

extern "C" char *nocturne_key_display_name(int key_code) {
    char *out = g_StringBuffers[g_StringBufferIndex];
    g_StringBufferIndex = (g_StringBufferIndex + 1) % kStringBuffers;
    snprintf(out, sizeof(g_StringBuffers[0]), "%s", name_of(key_code));
    return out;
}

#endif // !NOCTURNE_AUTHENTIC_GAMEPAD
