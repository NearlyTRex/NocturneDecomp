#pragma once

#include "engine/fwd.h"

namespace nocturne::engine {

class CKeys {
public:
    virtual ~CKeys();

    virtual int getKeyState(EInputCodeType key_code);
    virtual int getAndClearKeyState(EInputCodeType key_code);

    int getInputKey();
    int getUppercasedInputKey();
    void setKeyAsPressed(EInputCodeType key_code);
    void clearKeyPressState(EInputCodeType key_code);
    void toggleInputMask(int enable_extended);
};

} // namespace nocturne::engine
