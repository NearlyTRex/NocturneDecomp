#pragma once

// =============================================================================
// MCI VIDEO — playback pump
// =============================================================================
//
// mci_video.cpp decodes the game's AVI movies through libav and presents them
// through the same path the engine's 2D back buffer uses.
//
// Decoding is driven from the message pump rather than a worker thread, because
// that is where the game already spends the movie: winvideo.cpp's playMovie()
// opens the file, issues "play mov ... notify", and then sits in a
//
//     while (processWindowMessages(), g_MoviePlaying && !wasKeyPressed() && g_MovieOpen)
//         Sleep(20);
//
// loop for the movie's entire duration. So the pump gets called ~50x/sec for
// free, and paces itself against the playback clock rather than the call rate.
//
// The game ends the movie the same way the original did: MCI's "notify" flag
// means an MM_MCINOTIFY (0x3b9) message when playback completes, which
// mainWindowProc turns into closeMovie(), which clears g_MoviePlaying and
// g_MovieOpen and drops the loop above. mci_video_pump_frame() reports the
// end-of-stream edge so its caller can post that message; the queue itself
// belongs to user32.cpp, so this module never touches it.

#ifdef __cplusplus
extern "C" {
#endif

// Advance playback if the clock says a frame is due. Cheap no-op when no movie
// is open, so it is safe to call unconditionally every message-pump tick.
//
// Returns 1 on the single call that reaches end of stream — the caller should
// post MM_MCINOTIFY to the game window in response. Returns 0 otherwise.
int mci_video_pump_frame(void);

// 1 while a movie is open and running (not paused).
int mci_video_is_playing(void);

#ifdef __cplusplus
}
#endif
