#pragma once

#include "engine/fwd.h"

#include <cstddef>
#include <string>
#include <string_view>

namespace nocturne::engine {

// One INI file and the section its reads and writes go to.
class CIniFile {
public:
    CIniFile(CIni &ini, std::string_view filename, std::string_view section = {});

    void readIniHeader(std::string_view section);
    // The key's value, or default_value when it's missing or has buffer_size characters or more.
    [[nodiscard]] std::string getString(std::string_view key, std::string_view default_value,
                                        std::size_t buffer_size) const;
    void setString(char *key, char *value);
    // The key's number, or value when it's missing or isn't one.
    [[nodiscard]] int getInteger(std::string_view key_name, int value) const;
    void setInteger(char *key, int value);
    [[nodiscard]] float getFloat(std::string_view key, float value) const;
    void setFloatValue(char *key, float value);

private:
    CIni &ini_;
    std::string filename_;
    std::string section_;
};

} // namespace nocturne::engine
