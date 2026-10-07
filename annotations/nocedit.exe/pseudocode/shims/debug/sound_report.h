#pragma once

// =============================================================================
// SOUND ERROR REPORTS
// =============================================================================
//
// The detailed half of NOCTURNE_AUTHENTIC_SOUND_ERROR_LOG: console lines that
// say which sound failed and what was in the way, where the shipped message
// only names the failure.

#ifdef __cplusplus
extern "C" {
#endif

// Replaces allocateSfx's "no free buffers" console line. Names the sample that
// could not be played, then each sample holding one of the 30 hardware sfx
// buffers with its count. A buffer no live slot claims is listed as
// "(no slot)". Called with the sound lock held, as allocateSfx is.
void nocturne_sound_report_no_free_buffers(int sample_buffer_id);

#ifdef __cplusplus
}
#endif
