#pragma once

// =============================================================================
// GOLDEN TRACE — the recorded call stream, as a file you can read
// =============================================================================
//
// The invariant suites say specific things: a draw goes out with the image it
// asked for, depth survives a present. They are the right shape for faults that
// have already been diagnosed, and they say nothing at all about a change nobody
// thought to write an invariant for.
//
// This is the other half. It renders one canonical frame, writes down every call
// the renderer made in order, and compares that against a file in the source
// tree. Any change in what the renderer does to the driver — a call added,
// removed, reordered, or given a different argument — shows up as a diff on a
// text file, in review, with no GPU and no screenshot.
//
// It is deliberately NOT an assertion about correctness. A diff here means "this
// changed", not "this broke", and the file is meant to be updated when a change
// is intended:
//
//     NOCTURNE_GOLDEN_UPDATE=1 ctest -R golden
//
// which rewrites the file so the change lands in the same commit as the code
// that caused it. The value is that it cannot change silently.
//
// Names, not numbers, wherever possible: a trace full of GL object ids would
// churn whenever allocation order shifted and teach nobody anything. Ids are
// written as the role the object plays.

#include "gl_recorder.h"

#include <string>

namespace golden {

// The recorded log as text, one call per line, with object ids replaced by the
// role they play so the file stays readable and stable.
std::string render(const gl_recorder::State &state);

// Compares against <NOCTURNE_TEST_DATA_DIR>/<name>.trace. Returns true when they
// match. On a mismatch it reports the first differing line and writes what was
// actually recorded beside the golden as <name>.actual, so the two can be
// diffed. With NOCTURNE_GOLDEN_UPDATE=1 it rewrites the golden and returns true.
bool matches(const char *name, const std::string &actual);

}  // namespace golden
