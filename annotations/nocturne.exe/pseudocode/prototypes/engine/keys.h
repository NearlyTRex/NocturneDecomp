#pragma once

// Function prototypes for engine/keys.cpp
// Generated from Ghidra function signatures

// Original: engine_keys.cpp_staticInit_FUN_004c4170
// Address: 004c4170
void __cdecl staticInit(void);

// Original: engine_keys.cpp_CKeys_getKeyState_FUN_004c4180
// Address: 004c4180
int __cdecl CKeys::getKeyState(CKeys *this_ptr,EInputCodeType key_code);

// Original: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_004c4190
// Address: 004c4190
int __cdecl CKeys::getAndClearKeyState(CKeys *this_ptr,EInputCodeType key_code);

// Original: engine_keys.cpp_CKeys_clearKeypresses_FUN_004c41b0
// Address: 004c41b0
void __cdecl CKeys::clearKeypresses(void);

// Original: engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0
// Address: 004c41c0
int __cdecl CKeys::getInputKey(CKeys *this_ptr);

// Original: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004c41d0
// Address: 004c41d0
int __cdecl CKeys::getUppercasedInputKey(CKeys *this_ptr);

// Original: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0
// Address: 004c41f0
void __cdecl CKeys::setKeyAsPressed(CKeys *this_ptr,EInputCodeType key_code);

// Original: engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200
// Address: 004c4200
void __cdecl CKeys::clearKeyPressState(CKeys *this_ptr,EInputCodeType key_code);

// Original: engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210
// Address: 004c4210
void __cdecl CKeys::toggleInputMask(CKeys *this_ptr,int enable_extended);
