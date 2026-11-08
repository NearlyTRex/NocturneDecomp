// Name: FUN_0057ac70
// Address: 0057ac70
// Address Range: [[0057ac70, 0057ad10]]
// Convention: unknown
// Signature: bool FUN_0057ac70(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0057ac70(int *param_1)

{
  HGLOBAL hMem;
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  iVar3 = 0;
  do {
    if (*(HGLOBAL *)(iVar3 + 0x2c8297c) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar3 + 0x2c8297c));
      *(uint *)(iVar3 + 0x2c8297c) = 0;
    }
    hMem = *(HGLOBAL *)(iVar3 + 0x2c828dc);
    *(uint *)(&DAT_02c829cc + iVar3) = 0;
    if (hMem != (HGLOBAL)0x0) {
      GlobalFree(hMem);
      *(uint *)(iVar3 + 0x2c828dc) = 0;
    }
    iVar4 = iVar3 + 4;
    *(uint *)(iVar3 + 0x2c8292c) = 0;
    iVar3 = iVar4;
  } while (iVar4 != 0x50);
  if (_DAT_02c828d8 == (HWAVEIN)0x0) {
    return iVar1 != 0;
  }
  MVar2 = waveInClose(_DAT_02c828d8);
  if (MVar2 != 0) {
    FUN_005773f0("waveInClose failed.");
  }
  _DAT_02c828d8 = (HWAVEIN)0x0;
  return MVar2 == 0 && iVar1 != 0;
}
