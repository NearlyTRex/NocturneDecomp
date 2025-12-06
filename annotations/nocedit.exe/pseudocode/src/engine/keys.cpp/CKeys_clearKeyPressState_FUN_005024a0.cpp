// Name: engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0
// Address: 005024a0
// Address Range: [[005024a0, 005024ac]]
// Convention: __cdecl
// Signature: void engine_keys.cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys * this, int keyCode)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_005024a0(CKeys *this,int keyCode)

{
  g_KeyboardState[keyCode] = '\0';
  return;
}
