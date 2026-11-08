// Name: FUN_00557d10
// Address: 00557d10
// Address Range: [[00557d10, 00557db0]]
// Convention: unknown
// Signature: bool FUN_00557d10(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00557d10(int *param_1)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  iVar3 = 0;
  do {
    if (*(HGLOBAL *)(iVar3 + 0x264b0b4) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar3 + 0x264b0b4));
      *(uint *)(iVar3 + 0x264b0b4) = 0;
    }
    *(uint *)(iVar3 + 0x264b0d4) = 0;
    if (*(HGLOBAL *)(iVar3 + 0x264b074) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar3 + 0x264b074));
      *(uint *)(iVar3 + 0x264b074) = 0;
    }
    iVar4 = iVar3 + 4;
    *(uint *)(iVar3 + 0x264b094) = 0;
    iVar3 = iVar4;
  } while (iVar4 != 0x20);
  if (_DAT_0264b070 == (HWAVEOUT)0x0) {
    return iVar1 != 0;
  }
  MVar2 = waveOutClose(_DAT_0264b070);
  if (MVar2 != 0) {
    FUN_005549c0("waveOutClose failed.");
  }
  _DAT_0264b070 = (HWAVEOUT)0x0;
  return MVar2 == 0 && iVar1 != 0;
}
