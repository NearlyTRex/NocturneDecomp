// Name: core_inv.cpp_FUN_004d9fc0
// Address: 004d9fc0
// Address Range: [[004d9fc0, 004da018]]
// Convention: unknown
// Signature: undefined4 core_inv_cpp_FUN_004d9fc0(int param_1,char *param_2)

#include "nocturne.h"

uint core_inv_cpp_FUN_004d9fc0(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                      (0x02CF5680,*(uint *)(iVar3 + 0x1d70a24));
    if (iVar1 == 0) {
      uVar2 = core_sound_cpp_CSound_playSound_FUN_005609b0(0x02CF5680,(void *)0x0,param_2);
      *(uint *)(param_1 + 0x27ac) = uVar2;
      *(uint *)(iVar3 + 0x1d70a24) = uVar2;
      return 1;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x10);
  return 0;
}
