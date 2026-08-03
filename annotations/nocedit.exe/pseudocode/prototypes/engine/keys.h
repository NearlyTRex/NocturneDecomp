#pragma once

// Function prototypes for engine/keys.cpp
// Generated from Ghidra function signatures

// Original: engine_keys.cpp_staticInit_FUN_00502410
// Address: 00502410
void __cdecl staticInit(void);

// Original: engine_keys.cpp_CKeys_getKeyState_FUN_00502420
// Address: 00502420
int __cdecl CKeys::getKeyState(CKeys *this_ptr,EInputCodeType key_code);

// Original: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_00502430
// Address: 00502430
int __cdecl CKeys::getAndClearKeyState(CKeys *this_ptr,EInputCodeType key_code);

// Original: engine_keys.cpp_clearKeypresses_FUN_00502450
// Address: 00502450
void __cdecl clearKeypresses(void);

// Original: engine_keys.cpp_CKeys_getInputKey_FUN_00502460
// Address: 00502460
int __cdecl CKeys::getInputKey(CKeys *this_ptr);

// Original: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
// Address: 00502470
int __cdecl CKeys::getUppercasedInputKey(CKeys *this_ptr);

// Original: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
// Address: 00502490
void __cdecl CKeys::setKeyAsPressed(CKeys *this_ptr,EInputCodeType key_code);

// Original: engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
// Address: 005024a0
void __cdecl CKeys::clearKeyPressState(CKeys *this_ptr,EInputCodeType key_code);

// Original: engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
// Address: 005024b0
void __cdecl CKeys::toggleInputMask(CKeys *this_ptr,int enable_extended);
