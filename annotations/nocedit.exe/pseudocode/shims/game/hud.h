#pragma once

// =============================================================================
// HUD — the in-game HUD, laid out in boxes
// =============================================================================
//
// Gated by NOCTURNE_AUTHENTIC_HUD, which carries the reasoning. Each entry
// point is the whole of one shipped HUD routine, called at the top of its
// .keep, which is otherwise the binary's:
//
//   nocturne_hud_inventory         CInventory::renderAllItems
//   nocturne_hud_inventory_panels  CInventory::renderSelectedItems
//   nocturne_hud_overlay           CGame::renderOverlay
//   nocturne_hud_subtitles         CScript::renderSubtitles
//   nocturne_hud_letterbox_height  CScript::getLetterboxHeight
//   nocturne_hud_death_banner      the death banner in CGame::processFrame
//
// Each draws what the shipped routine draws, from the same state, with every
// element placed in a box (core/hud_layout.h) rather than at an offset from the
// window's corner:
//
//   - The frame is the scene's picture: the 4:3 column when pillarboxed, the
//     whole screen otherwise. Corner elements keep to its corners.
//   - The inventory panels are drawn in an overlay pass over the finished
//     scene (renderer/trigl_device.h), in the camera's space laid onto the
//     frame's corner. Their text, ammo and counts are placed in the same boxes,
//     so they sit on the panels at any size, and a reframed scene neither
//     crops nor resamples them.
//   - The letterbox bars are measured over the 4:3 picture, so they keep the
//     shipped proportion on a wider screen, and are never too short for three
//     subtitle lines with half a line of room above and below.
//   - Text and bitmaps scale with the screen (core/ui_scale.h): HUD art by the
//     HUD scale, text in a box by the box's stretch, truncated.
//   - The pickup help sits under the top letterbox, clear of the message line;
//     the death banner sits a quarter of the way down, clear of the message
//     line and the Game Over dialog.

struct CGame;
struct CInventory;
struct CScript;

#ifdef __cplusplus
extern "C" {
#endif

void nocturne_hud_inventory(struct CInventory *inventory);
void nocturne_hud_inventory_panels(struct CInventory *inventory);
void nocturne_hud_overlay(struct CGame *game);
void nocturne_hud_subtitles(struct CScript *script);
int nocturne_hud_letterbox_height(void);

// `text` centred in the frame, a quarter of the way down, or two lines from the
// top when `at_top`.
void nocturne_hud_death_banner(char *text, int at_top);

#ifdef __cplusplus
}
#endif
