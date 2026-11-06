#include "core/game/keychord.h"

#include "common/text/scan.h"
#include "engine/keys/keys.h"

#include <algorithm>
#include <cstddef>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;

constexpr char kJoin = '+';

std::optional<EInputCodeType> scanCode(std::string_view text) {
    const std::optional<int> value = common::scanInteger(text);
    if (!value || *value < 0 || *value > static_cast<int>(EInputCodeType::INPUT_NONE)) {
        return std::nullopt;
    }
    return static_cast<EInputCodeType>(*value);
}

} // namespace

const SChordModifier *findChordModifier(EInputCodeType code) {
    const auto *found = std::ranges::find_if(kChordModifiers, [code](const SChordModifier &mod) {
        return mod.left == code || mod.right == code;
    });
    return found == kChordModifiers.end() ? nullptr : found;
}

bool isChordHeld(const SKeyChord &chord, engine::CKeys &keys) {
    if (keys.getKeyState(chord.code) == 0) {
        return false;
    }
    return std::ranges::all_of(kChordModifiers, [&](const SChordModifier &mod) {
        return !(chord.*mod.flag) || keys.getKeyState(mod.left) != 0 ||
               keys.getKeyState(mod.right) != 0;
    });
}

std::string formatChord(const SKeyChord &chord) {
    std::string text;
    for (const SChordModifier &mod : kChordModifiers) {
        if (chord.*mod.flag) {
            text += std::to_string(static_cast<int>(mod.left));
            text += kJoin;
        }
    }
    return text + std::to_string(static_cast<int>(chord.code));
}

std::optional<SKeyChord> parseChord(std::string_view text) {
    SKeyChord chord;
    std::size_t join = text.find(kJoin);
    while (join != std::string_view::npos) {
        const std::optional<EInputCodeType> code = scanCode(text.substr(0, join));
        const SChordModifier *mod = code ? findChordModifier(*code) : nullptr;
        if (mod == nullptr) {
            return std::nullopt;
        }
        chord.*mod->flag = true;
        text.remove_prefix(join + 1);
        join = text.find(kJoin);
    }
    const std::optional<EInputCodeType> code = scanCode(text);
    if (!code) {
        return std::nullopt;
    }
    chord.code = *code;
    return chord;
}

} // namespace nocturne::core
