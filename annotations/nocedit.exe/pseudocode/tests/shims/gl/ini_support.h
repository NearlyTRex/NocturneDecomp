#pragma once

// =============================================================================
// INI SUPPORT — the engine's CIni accessors the shim settings go through
// =============================================================================
//
// getProfileInteger and writeProfileString, over a map rather than the file:
// what the engine itself does with the text is not under test here. A write
// creates system/nocturne.ini, empty, as the engine's does, so the settings'
// check that the file is there sees what it would in the game. Paths are
// relative to the working directory, as the game's are.

#include <map>
#include <string>

namespace ini_support {

// "section/key" -> value, as written or to be read.
extern std::map<std::string, std::string> values;

// Puts system/nocturne.ini in the working directory, with `section`/`key` set
// to `value`.
void save(const std::string &section, const std::string &key, const std::string &value);

} // namespace ini_support
