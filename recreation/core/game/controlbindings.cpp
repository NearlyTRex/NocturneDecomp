#include "core/game/controlbindings.h"

#include <cstddef>
#include <optional>
#include <utility>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;

constexpr char kSeparator = ',';

std::size_t indexOf(EGameAction action) {
    return static_cast<std::size_t>(action);
}

// The next entry's chord, the entry taken off the text either way.
std::optional<SKeyChord> nextChord(std::string_view &text) {
    const std::size_t comma = text.find(kSeparator);
    const std::optional<SKeyChord> chord = parseChord(text.substr(0, comma));
    text.remove_prefix(comma == std::string_view::npos ? text.size() : comma + 1);
    return chord;
}

} // namespace

std::span<const SKeyChord> CControlBindings::getBindings(EGameAction action) const {
    return bindings_.at(indexOf(action));
}

void CControlBindings::setBindings(EGameAction action, std::vector<SKeyChord> chords) {
    std::erase_if(chords,
                  [](const SKeyChord &chord) { return chord.code == EInputCodeType::INPUT_NONE; });
    bindings_.at(indexOf(action)) = std::move(chords);
}

std::string CControlBindings::formatBindings(EGameAction action) const {
    const std::vector<SKeyChord> &chords = bindings_.at(indexOf(action));
    if (chords.empty()) {
        return std::to_string(static_cast<int>(EInputCodeType::INPUT_NONE));
    }
    std::string text;
    for (const SKeyChord &chord : chords) {
        if (!text.empty()) {
            text += kSeparator;
        }
        text += formatChord(chord);
    }
    return text;
}

void CControlBindings::parseBindings(EGameAction action, std::string_view text) {
    const std::optional<SKeyChord> primary = nextChord(text);
    if (!primary) {
        return;
    }
    std::vector<SKeyChord> chords{*primary};
    while (!text.empty()) {
        if (const std::optional<SKeyChord> chord = nextChord(text)) {
            chords.push_back(*chord);
        }
    }
    setBindings(action, std::move(chords));
}

} // namespace nocturne::core
