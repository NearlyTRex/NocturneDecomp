#include "engine/keys/keys.h"

#include "common/text/ascii.h"
#include "engine/keys/inputcodetype.h"
#include "engine/rawinput.h"

#include <cstddef>
#include <cstdint>
#include <utility>

namespace nocturne::engine {
namespace {

constexpr int kFoldedKeyMask = 0x7f;
constexpr int kExtendedKeyMask = 0x1ff;

} // namespace

// staticInit only set the global instance's vtable; its owner constructs it now.
// nocedit 0x00502410
CKeys::CKeys(IRawInput &raw_input, IScreenDevice &screen)
    : raw_input_(raw_input), screen_(screen) {}

// nocedit 0x00502420
int CKeys::getKeyState(EInputCodeType key_code) {
    return raw_input_.getKeyboardState()[static_cast<std::size_t>(key_code)];
}

// nocedit 0x00502430
int CKeys::getAndClearKeyState(EInputCodeType key_code) {
    std::uint8_t &state = raw_input_.getKeyboardState()[static_cast<std::size_t>(key_code)];
    return std::exchange(state, std::uint8_t{0});
}

// A jump straight into winrun's.
// nocedit 0x00502450
void CKeys::clearKeypresses() {
    raw_input_.clearKeypresses();
}

// nocedit 0x00502460
int CKeys::getInputKey() {
    return raw_input_.getNextKeypress(screen_) & 0xff;
}

// nocedit 0x00502470
int CKeys::getUppercasedInputKey() {
    return static_cast<unsigned char>(common::upperAscii(static_cast<char>(getInputKey())));
}

// nocedit 0x005024b0
void CKeys::toggleInputMask(bool enable_extended) {
    raw_input_.setInputKeyMask(enable_extended ? kExtendedKeyMask : kFoldedKeyMask);
}

} // namespace nocturne::engine
