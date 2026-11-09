// Name: unkafter_morph.cpp_FUN_005c2364
// Address: 005c2364
// Address Range: [[005c2364, 005c2392]]
// Convention: unknown
// Signature: undefined1 * unkafter_morph_cpp_FUN_005c2364(int param_1,undefined1 *param_2,int param_3)

#include "nocturne.h"

byte * unkafter_morph_cpp_FUN_005c2364(int param_1,byte *param_2,int param_3)

{
  byte *puVar1;
  
  puVar1 = param_2;
  if ((param_3 == 10) && (param_1 < 0)) {
    param_1 = -param_1;
    puVar1 = param_2 + 1;
    *param_2 = 0x2d;
  }
  unkafter_morph_cpp_FUN_005c2310(param_1,puVar1,param_3);
  return param_2;
}
