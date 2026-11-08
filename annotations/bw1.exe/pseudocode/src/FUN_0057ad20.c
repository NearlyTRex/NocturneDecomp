// Name: FUN_0057ad20
// Address: 0057ad20
// Address Range: [[0057ad20, 0057ae01]]
// Convention: unknown
// Signature: undefined4 FUN_0057ad20(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057ad20(int *param_1)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < _DAT_02c82a30) {
    iVar3 = 0;
    do {
      FUN_005bfb70(*(uint *)(iVar3 + 0x2c8292c),0,0x20);
      **(uint **)(iVar3 + 0x2c8292c) = *(uint *)(&DAT_02c829cc + iVar3);
      *(int *)(*(int *)(iVar3 + 0x2c8292c) + 0xc) = iVar4;
      *(int *)(*(int *)(iVar3 + 0x2c8292c) + 4) =
           ((int)((_DAT_02c82a1c + (_DAT_02c82a1c >> 0x1f) * -8) -
                 (uint)((_DAT_02c82a1c >> 0x1f) << 2 < 0)) >> 3) * _DAT_02c82a2c * _DAT_02c82a20;
      iVar1 = FUN_0057abc0(iVar4);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < _DAT_02c82a30);
  }
  _DAT_02c82a44 = _DAT_02c82a30 + -1;
  _DAT_02c82a48 = _DAT_02c82a2c;
  MVar2 = waveInStart(_DAT_02c828d8);
  if (MVar2 == 0) {
    return 1;
  }
  FUN_005773f0("waveInStart failed!");
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}
