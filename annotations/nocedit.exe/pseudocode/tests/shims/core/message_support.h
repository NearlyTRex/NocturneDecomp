#pragma once

// =============================================================================
// MESSAGE SUPPORT — the message box this directory's build of path_roots.cpp
// puts up
// =============================================================================
//
// Answered here (CMakeLists.txt beside this) rather than on screen, with what it
// was asked to say kept for the test to read.

#include <string>

namespace message_support {

// The last message asked for, and how many have been.
extern std::string last;
extern int shown;

} // namespace message_support
