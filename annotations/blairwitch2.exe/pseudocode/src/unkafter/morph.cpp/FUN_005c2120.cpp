// Name: unkafter_morph.cpp_FUN_005c2120
// Address: 005c2120
// Address Range: [[005c2120, 005c2136] [005c2148, 005c214a]]
// Convention: unknown
// Signature: undefined4 unkafter_morph_cpp_FUN_005c2120(undefined4 param_1,undefined2 param_2)

#include "nocturne.h"

uint unkafter_morph_cpp_FUN_005c2120(uint param_1,ushort param_2)

{
  code *pcVar1;
  uint uVar2;
  
  if (DAT_0061f650 != '\0') {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)(param_2);
    return uVar2;
  }
  return 0;
}
