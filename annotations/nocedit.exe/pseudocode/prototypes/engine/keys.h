#pragma once

// Function prototypes for engine/keys.cpp
// Generated from Ghidra function signatures

// Original: engine_keys.cpp_staticInit_FUN_00502410
// Address: 00502410
void staticInit(void);

// Original: engine_keys.cpp_CKeys_getKeyState_FUN_00502420
// Address: 00502420
int CKeys::getKeyState(CKeys * this_ptr, int key_code);

// Original: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_00502430
// Address: 00502430
int CKeys::getAndClearKeyState(CKeys * this_ptr, int key_code);

// Original: engine_keys.cpp_CKeys_clearKeypresses_FUN_00502450
// Address: 00502450
void CKeys::clearKeypresses(void);

// Original: engine_keys.cpp_CKeys_getInputKey_FUN_00502460
// Address: 00502460
int CKeys::getInputKey(CKeys * this_ptr);

// Original: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
// Address: 00502470
int CKeys::getUppercasedInputKey(CKeys * this_ptr);

// Original: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
// Address: 00502490
void CKeys::setKeyAsPressed(CKeys * this_ptr, int key_code);

// Original: engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
// Address: 005024a0
void CKeys::clearKeyPressState(CKeys * this_ptr, int key_code);

// Original: engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
// Address: 005024b0
void CKeys::toggleInputMask(CKeys * this_ptr, int enable_extended);
