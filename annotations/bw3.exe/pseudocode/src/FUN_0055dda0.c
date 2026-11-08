// Name: FUN_0055dda0
// Address: 0055dda0
// Address Range: [[0055dda0, 0055de40]]
// Convention: unknown
// Signature: bool FUN_0055dda0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0055dda0(int *param_1)

{
  HGLOBAL hMem;
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  iVar3 = 0;
  do {
    if (*(HGLOBAL *)(iVar3 + 0x2cf55a8) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar3 + 0x2cf55a8));
      *(uint *)(iVar3 + 0x2cf55a8) = 0;
    }
    hMem = *(HGLOBAL *)(iVar3 + 0x2cf5508);
    *(uint *)(&DAT_02cf55f8 + iVar3) = 0;
    if (hMem != (HGLOBAL)0x0) {
      GlobalFree(hMem);
      *(uint *)(iVar3 + 0x2cf5508) = 0;
    }
    iVar4 = iVar3 + 4;
    *(uint *)(iVar3 + 0x2cf5558) = 0;
    iVar3 = iVar4;
  } while (iVar4 != 0x50);
  if (_DAT_02cf5504 == (HWAVEIN)0x0) {
    return iVar1 != 0;
  }
  MVar2 = waveInClose(_DAT_02cf5504);
  if (MVar2 != 0) {
    FUN_0055a560("waveInClose failed.");
  }
  _DAT_02cf5504 = (HWAVEIN)0x0;
  return MVar2 == 0 && iVar1 != 0;
}
