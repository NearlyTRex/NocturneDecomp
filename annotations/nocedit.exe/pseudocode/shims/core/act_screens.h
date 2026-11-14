#pragma once

// =============================================================================
// ACT SCREENS — the end of an act and the credits at the game's resolution
// =============================================================================
//
// CGame::displayActStats, CGame::finishAct and CGame::rollCredits under
// NOCTURNE_AUTHENTIC_MENU=0, whose keeps call these at their top and carry the
// shipped routines. Each does as that did with the front end's layout
// (core/front_end_layout.h): the stats picture where and as large as the
// layout shows it, with its text scaled in the picture's column; "To be
// continued..." scaled at the screen's centre. The credits' picture keeps to
// the screen's left, as it ships at 640 wide, so on a wider screen the column
// over its black right side runs on to the screen's right edge, its strips
// covering the screen's top and foot; their lines are scaled and scroll in
// the layout's rows. At 640x480 the layout is the screen, and each draws as
// it shipped.

struct CGame;

#ifdef __cplusplus
extern "C" {
#endif

void nocturne_act_stats(struct CGame *game);
void nocturne_finish_act(struct CGame *game);
void nocturne_roll_credits(struct CGame *game);

#ifdef __cplusplus
}
#endif
