// Name: unkafter_morph.cpp_FUN_005c4c80
// Address: 005c4c80
// Address Range: [[005c4c80, 005c4ca9]]
// Convention: unknown
// Signature: void unkafter_morph_cpp_FUN_005c4c80(int param_1)

#include "nocturne.h"

void unkafter_morph_cpp_FUN_005c4c80(int param_1)

{
  DWORD DVar1;
  
  if (param_1 != 0) {
    *(uint *)(param_1 + 0xc) = 1;
    unkafter_morph_cpp_FUN_005c2da0(param_1,0);
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0xda) = DVar1;
  }
  return;
}
