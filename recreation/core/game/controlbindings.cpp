#include "core/game/controlbindings.h"

#include "common/text/scan.h"

#include <algorithm>
#include <cstddef>
#include <optional>
#include <utility>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;

std::size_t indexOf(EGameAction action) {
    return static_cast<std::size_t>(action);
}

// The next entry's code, or nothing when it isn't a number inside the code space.
std::optional<EInputCodeType> nextCode(std::string_view &text) {
    const std::size_t comma = text.find(',');
    const std::optional<int> value = common::scanInteger(text.substr(0, comma));
    text.remove_prefix(comma == std::string_view::npos ? text.size() : comma + 1);
    if (!value || *value < 0 || *value > static_cast<int>(EInputCodeType::INPUT_NONE)) {
        return std::nullopt;
    }
    return static_cast<EInputCodeType>(*value);
}

} // namespace

std::span<const EInputCodeType> CControlBindings::getBindings(EGameAction action) const {
    return bindings_.at(indexOf(action));
}

void CControlBindings::setBindings(EGameAction action, std::vector<EInputCodeType> codes) {
    std::erase(codes, EInputCodeType::INPUT_NONE);
    bindings_.at(indexOf(action)) = std::move(codes);
}

std::string CControlBindings::formatBindings(EGameAction action) const {
    const std::vector<EInputCodeType> &codes = bindings_.at(indexOf(action));
    if (codes.empty()) {
        return std::to_string(static_cast<int>(EInputCodeType::INPUT_NONE));
    }
    std::string text;
    for (const EInputCodeType code : codes) {
        if (!text.empty()) {
            text += ',';
        }
        text += std::to_string(static_cast<int>(code));
    }
    return text;
}

void CControlBindings::parseBindings(EGameAction action, std::string_view text) {
    const std::optional<EInputCodeType> primary = nextCode(text);
    if (!primary) {
        return;
    }
    std::vector<EInputCodeType> codes{*primary};
    while (!text.empty()) {
        if (const std::optional<EInputCodeType> code = nextCode(text)) {
            codes.push_back(*code);
        }
    }
    setBindings(action, std::move(codes));
}

} // namespace nocturne::core
