// Name: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_00502430
// Address: 00502430
// Address Range: [[00502430, 00502446]]
// Convention: __cdecl
// Signature: char engine_keys.cpp_CKeys_getAndClearKeyState_FUN_00502430(CKeys * this, int keyCode)

#include "nocturne.h"

char __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_00502430(CKeys *this,int keyCode)

{
  char cVar1;
  
  cVar1 = g_KeyboardState[keyCode];
  g_KeyboardState[keyCode] = '\0';
  return cVar1;
}
