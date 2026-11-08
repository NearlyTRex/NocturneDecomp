// Name: FUN_005582f0
// Address: 005582f0
// Address Range: [[005582f0, 005583d1]]
// Convention: unknown
// Signature: undefined4 FUN_005582f0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005582f0(int *param_1)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < _DAT_0264b260) {
    iVar3 = 0;
    do {
      FUN_005b77c0(*(uint *)(iVar3 + 0x264b15c),0,0x20);
      **(uint **)(iVar3 + 0x264b15c) = *(uint *)(&DAT_0264b1fc + iVar3);
      *(int *)(*(int *)(iVar3 + 0x264b15c) + 0xc) = iVar4;
      *(int *)(*(int *)(iVar3 + 0x264b15c) + 4) =
           ((int)((_DAT_0264b24c + (_DAT_0264b24c >> 0x1f) * -8) -
                 (uint)((_DAT_0264b24c >> 0x1f) << 2 < 0)) >> 3) * _DAT_0264b25c * _DAT_0264b250;
      iVar1 = FUN_00558190(iVar4);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < _DAT_0264b260);
  }
  _DAT_0264b274 = _DAT_0264b260 + -1;
  _DAT_0264b278 = _DAT_0264b25c;
  MVar2 = waveInStart(_DAT_0264b108);
  if (MVar2 == 0) {
    return 1;
  }
  FUN_005549c0("waveInStart failed!");
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}
