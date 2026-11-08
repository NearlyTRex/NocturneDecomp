// Name: FUN_00558240
// Address: 00558240
// Address Range: [[00558240, 005582e0]]
// Convention: unknown
// Signature: bool FUN_00558240(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00558240(int *param_1)

{
  HGLOBAL hMem;
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  iVar3 = 0;
  do {
    if (*(HGLOBAL *)(iVar3 + 0x264b1ac) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar3 + 0x264b1ac));
      *(uint *)(iVar3 + 0x264b1ac) = 0;
    }
    hMem = *(HGLOBAL *)(iVar3 + 0x264b10c);
    *(uint *)(&DAT_0264b1fc + iVar3) = 0;
    if (hMem != (HGLOBAL)0x0) {
      GlobalFree(hMem);
      *(uint *)(iVar3 + 0x264b10c) = 0;
    }
    iVar4 = iVar3 + 4;
    *(uint *)(iVar3 + 0x264b15c) = 0;
    iVar3 = iVar4;
  } while (iVar4 != 0x50);
  if (_DAT_0264b108 == (HWAVEIN)0x0) {
    return iVar1 != 0;
  }
  MVar2 = waveInClose(_DAT_0264b108);
  if (MVar2 != 0) {
    FUN_005549c0("waveInClose failed.");
  }
  _DAT_0264b108 = (HWAVEIN)0x0;
  return MVar2 == 0 && iVar1 != 0;
}
