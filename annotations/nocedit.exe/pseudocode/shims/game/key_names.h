#pragma once

// =============================================================================
// KEY NAMES — what a binding is called on screen
// =============================================================================
//
// getKeyDisplayName under NOCTURNE_AUTHENTIC_GAMEPAD=0: the shipped names, with
// the controller's own for the codes game/gamepad reports, and the stick's four
// directions named as a stick. Reached from that keep's top, so the bindings
// list, the inventory's prompts and the automap's all say the same.

#ifdef __cplusplus
extern "C" {
#endif

// The name of `key_code`, localized, in the next of the engine's ten rotating
// string buffers, as getKeyDisplayName returns it.
char *nocturne_key_display_name(int key_code);

#ifdef __cplusplus
}
#endif
