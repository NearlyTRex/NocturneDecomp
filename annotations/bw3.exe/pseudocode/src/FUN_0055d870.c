// Name: FUN_0055d870
// Address: 0055d870
// Address Range: [[0055d870, 0055d910]]
// Convention: unknown
// Signature: bool FUN_0055d870(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0055d870(int *param_1)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  iVar3 = 0;
  do {
    if (*(HGLOBAL *)(iVar3 + 0x2cf54b0) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar3 + 0x2cf54b0));
      *(uint *)(iVar3 + 0x2cf54b0) = 0;
    }
    *(uint *)(iVar3 + 0x2cf54d0) = 0;
    if (*(HGLOBAL *)(iVar3 + 0x2cf5470) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar3 + 0x2cf5470));
      *(uint *)(iVar3 + 0x2cf5470) = 0;
    }
    iVar4 = iVar3 + 4;
    *(uint *)(iVar3 + 0x2cf5490) = 0;
    iVar3 = iVar4;
  } while (iVar4 != 0x20);
  if (_DAT_02cf546c == (HWAVEOUT)0x0) {
    return iVar1 != 0;
  }
  MVar2 = waveOutClose(_DAT_02cf546c);
  if (MVar2 != 0) {
    FUN_0055a560("waveOutClose failed.");
  }
  _DAT_02cf546c = (HWAVEOUT)0x0;
  return MVar2 == 0 && iVar1 != 0;
}
