// Name: FUN_0057a740
// Address: 0057a740
// Address Range: [[0057a740, 0057a7e0]]
// Convention: unknown
// Signature: bool FUN_0057a740(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0057a740(int *param_1)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  iVar3 = 0;
  do {
    if (*(HGLOBAL *)(iVar3 + 0x2c82884) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar3 + 0x2c82884));
      *(uint *)(iVar3 + 0x2c82884) = 0;
    }
    *(uint *)(iVar3 + 0x2c828a4) = 0;
    if (*(HGLOBAL *)(iVar3 + 0x2c82844) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar3 + 0x2c82844));
      *(uint *)(iVar3 + 0x2c82844) = 0;
    }
    iVar4 = iVar3 + 4;
    *(uint *)(iVar3 + 0x2c82864) = 0;
    iVar3 = iVar4;
  } while (iVar4 != 0x20);
  if (_DAT_02c82840 == (HWAVEOUT)0x0) {
    return iVar1 != 0;
  }
  MVar2 = waveOutClose(_DAT_02c82840);
  if (MVar2 != 0) {
    FUN_005773f0("waveOutClose failed.");
  }
  _DAT_02c82840 = (HWAVEOUT)0x0;
  return MVar2 == 0 && iVar1 != 0;
}
