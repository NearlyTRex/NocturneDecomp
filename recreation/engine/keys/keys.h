#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

// The keyboard as the game reads it: held keys from winrun's state and typed characters from its
// queue, waiting on the screen.
class CKeys {
public:
    CKeys(IRawInput &raw_input, IScreenDevice &screen);
    CKeys(const CKeys &) = delete;
    CKeys &operator=(const CKeys &) = delete;
    CKeys(CKeys &&) = delete;
    CKeys &operator=(CKeys &&) = delete;
    virtual ~CKeys() = default;

    virtual int getKeyState(EInputCodeType key_code);
    virtual int getAndClearKeyState(EInputCodeType key_code);
    // Typed characters dropped.
    virtual void clearKeypresses();

    // The next typed character's low byte, waiting for one.
    int getInputKey();
    int getUppercasedInputKey();
    void setKeyAsPressed(EInputCodeType key_code);
    void clearKeyPressState(EInputCodeType key_code);
    // Extended keys keep their own codes, or fold onto their twins as they do outside missions.
    void toggleInputMask(bool enable_extended);

private:
    IRawInput &raw_input_;
    IScreenDevice &screen_;
};

} // namespace nocturne::engine
