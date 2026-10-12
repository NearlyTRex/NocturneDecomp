#include "engine/ini/inifile.h"

#include "common/error/error.h"
#include "common/text/scan.h"
#include "engine/ini/ini.h"

#include <format>

namespace nocturne::engine {
namespace {

// The buffer the number readers format their default into and read the value back from.
constexpr std::size_t kNumberBufferSize = 100;

std::string formatFloat(float value) {
    return std::format("{:g}", static_cast<double>(value));
}

} // namespace

// initIniFile's copy, which took a null filename as empty, is the member initialiser.
// nocedit 0x004fba70
// nocedit 0x004fbaa0
CIniFile::CIniFile(CIni &ini, std::string_view filename, std::string_view section)
    : ini_(ini), filename_(filename) {
    readIniHeader(section);
}

// nocedit 0x004fbae0
void CIniFile::readIniHeader(std::string_view section) {
    section_ = section;
}

// nocedit 0x004fbb20
std::string CIniFile::getString(std::string_view key, std::string_view default_value,
                                std::size_t buffer_size) const {
    requireTarget("getString");
    return ini_.getProfileString(section_, key, default_value, buffer_size, filename_)
        .value_or(std::string(default_value));
}

// nocedit 0x004fbbb0
void CIniFile::setString(std::string_view key, std::string_view value) {
    requireTarget("setString");
    ini_.writeProfileString(section_, key, value, filename_);
}

// nocedit 0x004fbc30
int CIniFile::getInteger(std::string_view key_name, int value) const {
    return common::scanInteger(getString(key_name, std::to_string(value), kNumberBufferSize))
        .value_or(value);
}

// nocedit 0x004fbc90
void CIniFile::setInteger(std::string_view key, int value) {
    setString(key, std::to_string(value));
}

// A missing key still round-trips the value through "%g", which keeps six significant digits.
// nocedit 0x004fbcd0
float CIniFile::getFloat(std::string_view key, float value) const {
    return common::scanFloat(getString(key, formatFloat(value), kNumberBufferSize)).value_or(value);
}

// nocedit 0x004fbd30
void CIniFile::setFloatValue(std::string_view key, float value) {
    setString(key, formatFloat(value));
}

void CIniFile::requireTarget(std::string_view function) const {
    if (filename_.empty()) {
        common::displayErrorAndQuit(std::format("CIniFile::{} - filename not write!", function));
    }
    if (section_.empty()) {
        common::displayErrorAndQuit(std::format("CIniFile::{} - section not write!", function));
    }
}

} // namespace nocturne::engine
