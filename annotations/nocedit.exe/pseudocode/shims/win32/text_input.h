#pragma once

// =============================================================================
// TEXT INPUT — the game's text prompts, typed the way the platform types
// =============================================================================
//
// An addition. While SDL's text input is on, the characters the game is sent
// come from SDL_TEXTINPUT, in the keyboard's own layout, accents included, as
// far as the 8-bit font reaches (user32.cpp). Off, they are worked out from the
// keys, US layout, as before.
//
// SDL turns text input on by itself on the desktop. Where it does not, on a
// console or a handheld, turning it on is what brings up the system's own
// keyboard, so the game's prompts — the server address, a save's name, the
// editor's fields — ask for it while they are up. Nested prompts each balance
// their own call; a prompt never turns off what it did not turn on.

#ifdef __cplusplus
extern "C" {
#endif

// A prompt that takes typed text is up.
void nocturne_text_input_begin(void);

// It is down.
void nocturne_text_input_end(void);

#ifdef __cplusplus
}
#endif
