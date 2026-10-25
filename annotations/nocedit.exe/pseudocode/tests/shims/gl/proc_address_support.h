#pragma once

// =============================================================================
// PROC ADDRESS SUPPORT — the driver gl_api asks for its entry points
// =============================================================================
//
// This directory's build of gl_api.cpp calls this in place of
// SDL_GL_GetProcAddress (CMakeLists.txt beside this), so a test decides which
// entry points the driver has. Every name has one unless a test takes it away.

#include <set>
#include <string>

namespace proc_address {

// The names the driver does not have.
extern std::set<std::string> missing;

// Every name asked for.
extern std::set<std::string> asked;

} // namespace proc_address
