// Name: core_prye.cpp_FUN_0051c0a0
// Address: 0051c0a0
// Address Range: [[0051c0a0, 0051c0ef]]
// Convention: unknown
// Signature: undefined4 core_prye_cpp_FUN_0051c0a0(int param_1)

#include "nocturne.h"

uint core_prye_cpp_FUN_0051c0a0(int param_1)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)(param_1 + 0x25b0),DAT_007e1a50);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x6e8) == 2 || (*(int *)(iVar1 + 0x6e8) == 3)))) {
    return 0xbf860a92;
  }
  return 0xbfc80fc6;
}
