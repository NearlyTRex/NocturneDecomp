// Name: core_inv.cpp_FUN_004f6b50
// Address: 004f6b50
// Address Range: [[004f6b50, 004f6ba8]]
// Convention: unknown
// Signature: undefined4 core_inv_cpp_FUN_004f6b50(int param_1,char *param_2)

#include "nocturne.h"

uint core_inv_cpp_FUN_004f6b50(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                      (0x02C82A60,*(uint *)(iVar3 + 0x1d1bc4c));
    if (iVar1 == 0) {
      uVar2 = core_sound_cpp_CSound_playSound_FUN_0057d880(0x02C82A60,(void *)0x0,param_2);
      *(uint *)(param_1 + 0x27ac) = uVar2;
      *(uint *)(iVar3 + 0x1d1bc4c) = uVar2;
      return 1;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x10);
  return 0;
}
