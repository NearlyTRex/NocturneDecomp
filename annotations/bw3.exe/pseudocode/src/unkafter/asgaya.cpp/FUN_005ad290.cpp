// Name: unkafter_asgaya.cpp_FUN_005ad290
// Address: 005ad290
// Address Range: [[005ad290, 005ad2a6] [005ad2b8, 005ad2ba]]
// Convention: unknown
// Signature: undefined4 unkafter_asgaya_cpp_FUN_005ad290(undefined4 param_1,undefined2 param_2)

#include "nocturne.h"

uint unkafter_asgaya_cpp_FUN_005ad290(uint param_1,ushort param_2)

{
  code *pcVar1;
  uint uVar2;
  
  if (DAT_00607d74 != '\0') {
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)(param_2);
    return uVar2;
  }
  return 0;
}
