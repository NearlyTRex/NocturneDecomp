// =============================================================================
// INI SUPPORT — see ini_support.h
// =============================================================================

#include "ini_support.h"

#include <cstdio>
#include <cstdlib>
#include <filesystem>

namespace ini_support {

std::map<std::string, std::string> values;

namespace {

void create_file() {
    std::error_code ec;
    std::filesystem::create_directories("system", ec);
    if (FILE *file = std::fopen("system/nocturne.ini", "ab"))
        std::fclose(file);
}

} // namespace

void save(const std::string &section, const std::string &key, const std::string &value) {
    create_file();
    values[section + "/" + key] = value;
}

} // namespace ini_support

using ini_support::values;

int engine_ini_cpp_getProfileInteger_FUN_004fb9a0(char *section, char *key, int default_value,
                                                  char *) {
    auto it = values.find(std::string(section) + "/" + key);
    return it == values.end() ? default_value : std::atoi(it->second.c_str());
}

void engine_ini_cpp_writeProfileString_FUN_004fba40(char *section, char *key, char *value, char *) {
    ini_support::save(section, key, value);
}
