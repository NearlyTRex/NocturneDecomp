#pragma once

// =============================================================================
// FFMPEG FAULTS — FFmpeg calls the movie shim makes, which a test can fail
// =============================================================================
//
// Allocations and the like that no movie makes fail. The suite builds
// mci_video.cpp with each of these names defined to ffmpeg_faults_<name>
// (CMakeLists.txt beside this), so only the shim's own calls come here, not
// FFmpeg's calls to itself; each forwards to the real one unless asked to fail.
// A failed allocation answers null, any other call AVERROR(ENOMEM).

namespace ffmpeg_faults {

// The shim's call to `name` fails after `pass` more have gone through.
void fail(const char *name, int pass = 0);

// Nothing fails.
void reset();

} // namespace ffmpeg_faults
