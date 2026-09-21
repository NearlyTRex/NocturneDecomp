#pragma once

// =============================================================================
// VERSION — what this build calls itself
// =============================================================================
//
// The number lives in CMakeLists.txt's project(VERSION); the build stamps
// generated/nocturne_version.h from it on every build, with `git describe`
// beside it so an untagged build names the commit it came from.
//
// The generated header is read by version.cpp alone, and everything else asks
// through these. That is deliberate: the header changes on every commit, and
// anything reached through nocturne.h would rebuild the whole tree each time.

#ifdef __cplusplus
extern "C" {
#endif

// "0.1.0" — the release number and nothing else.
const char *nocturne_version(void);

// "0.1.0-12-gae024d0-dirty" at a commit past the tag, "0.1.0" on the tag
// itself, and the bare version where there is no git to ask (a source archive,
// a shallow checkout with no tags).
const char *nocturne_version_git(void);

// The preset the binary was configured with, for a bug report to quote.
const char *nocturne_version_build(void);

// "NocturneDecomp 0.1.0 (0.1.0-12-gae024d0-dirty), exe-linux-x86_64" — one
// line, for the console banner and --version. Points at storage that outlives
// the call.
const char *nocturne_version_line(void);

// "0.1.0 (0.1.0-12-gae024d0-dirty)" — the same identity without the product
// name or the preset. For the menu corner, which shares a 640-wide line with
// the copyright notice and has no room for the long form.
const char *nocturne_version_short(void);

// When this build was compiled, in the shape the shipped console banner used:
// "Jan 10 2000 12:05:01".
//
// It is __DATE__ and __TIME__ from this file, which is the same thing the
// original's "game.cpp built on" line was — the moment one translation unit was
// compiled, not the moment the link finished. This file is recompiled whenever
// the version header changes, which is every commit.
const char *nocturne_version_built(void);

#ifdef __cplusplus
}
#endif
