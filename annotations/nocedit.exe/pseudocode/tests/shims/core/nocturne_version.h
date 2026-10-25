#pragma once

// =============================================================================
// VERSION STAND-IN — what this directory's build of version.cpp reads
// =============================================================================
//
// The generated header names the build at configure time. This one names it at
// run time, from variables a test sets before its first call, so the two ways a
// version line is written can both be asked for (version_support.cpp).

extern const char *version_support_version;
extern const char *version_support_git;

#define NOCTURNE_VERSION version_support_version
#define NOCTURNE_VERSION_MAJOR 1
#define NOCTURNE_VERSION_MINOR 2
#define NOCTURNE_VERSION_PATCH 3
#define NOCTURNE_VERSION_GIT version_support_git
#define NOCTURNE_VERSION_BUILD "test-build"
