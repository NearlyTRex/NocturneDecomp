// Name: FUN_0055de50
// Address: 0055de50
// Address Range: [[0055de50, 0055df31]]
// Convention: unknown
// Signature: undefined4 FUN_0055de50(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055de50(int *param_1)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < _DAT_02cf565c) {
    iVar3 = 0;
    do {
      FUN_005a28f0(*(uint *)(iVar3 + 0x2cf5558),0,0x20);
      **(uint **)(iVar3 + 0x2cf5558) = *(uint *)(&DAT_02cf55f8 + iVar3);
      *(int *)(*(int *)(iVar3 + 0x2cf5558) + 0xc) = iVar4;
      *(int *)(*(int *)(iVar3 + 0x2cf5558) + 4) =
           ((int)((_DAT_02cf5648 + (_DAT_02cf5648 >> 0x1f) * -8) -
                 (uint)((_DAT_02cf5648 >> 0x1f) << 2 < 0)) >> 3) * _DAT_02cf5658 * _DAT_02cf564c;
      iVar1 = FUN_0055dcf0(iVar4);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < _DAT_02cf565c);
  }
  _DAT_02cf5670 = _DAT_02cf565c + -1;
  _DAT_02cf5674 = _DAT_02cf5658;
  MVar2 = waveInStart(_DAT_02cf5504);
  if (MVar2 == 0) {
    return 1;
  }
  FUN_0055a560("waveInStart failed!");
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}
