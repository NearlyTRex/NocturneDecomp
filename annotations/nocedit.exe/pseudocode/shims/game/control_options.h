#pragma once

// =============================================================================
// CONTROL OPTIONS — the control settings, and the key bindings under them
// =============================================================================
//
// Gated by NOCTURNE_AUTHENTIC_MENU, which carries the reasoning. Control
// Options is a page run by core/menu_page: the shipped configureCustomKeys'
// device lines (its assists are on the Gameplay page), the gamepad's tuning
// lines with Calibrate after them, and a change of control type that applies
// that type's defaults. The key bindings are the shipped pick list, where any
// binding can be moved onto a key and Restore defaults goes back to Control
// Options.

#ifdef __cplusplus
extern "C" {
#endif

// configureCustomKeys.
void nocturne_control_options_menu(void);

// configureCustomKeyBindings.
void nocturne_key_bindings_menu(void);

#ifdef __cplusplus
}
#endif
