// Name: engine_keys.cpp_CKeys_getKeyState_FUN_00502420
// Address: 00502420
// Address Range: [[00502420, 0050242c]]
// Convention: __cdecl
// Signature: char engine_keys.cpp_CKeys_getKeyState_FUN_00502420(CKeys * this, int keyCode)

#include "nocturne.h"

char __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_00502420(CKeys *this,int keyCode)

{
  return g_KeyboardState[keyCode];
}
