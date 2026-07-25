// Name: FUN_0046dab0
// Address: 0046dab0
// Address Range: [[0046dab0, 0046dbfe]]
// Convention: unknown
// Signature: void FUN_0046dab0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046dab0(float param_1)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < (int)_DAT_01bc9bb8) {
    pfVar5 = (float *)&DAT_01bc9bbc;
    do {
      uVar3 = iVar6 + 1;
      if (uVar3 == _DAT_01bc9bb8) {
        uVar3 = uVar3 ^ _DAT_01bc9bb8;
      }
      pfVar1 = (float *)(&DAT_01bc9bbc + uVar3 * 0xc);
      bVar2 = *pfVar5 < param_1;
      if (*pfVar1 < param_1) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_01bc9c7c * 0xc;
        if ((float *)(&DAT_01bc9c80 + iVar4) != pfVar5) {
          *(float *)(&DAT_01bc9c80 + iVar4) = *pfVar5;
          *(float *)(&DAT_01bc9c84 + iVar4) = pfVar5[1];
          *(float *)(&DAT_01bc9c88 + iVar4) = pfVar5[2];
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (pfVar1,pfVar5,&DAT_01bc9c80 + _DAT_01bc9c7c * 0xc,0,0xbff00000,0,0,0,0,
                   (double)param_1);
        break;
      case 2:
        iVar4 = _DAT_01bc9c7c * 0xc;
        if ((float *)(&DAT_01bc9c80 + iVar4) != pfVar5) {
          *(float *)(&DAT_01bc9c80 + iVar4) = *pfVar5;
          *(float *)(&DAT_01bc9c84 + iVar4) = pfVar5[1];
          *(float *)(&DAT_01bc9c88 + iVar4) = pfVar5[2];
        }
        _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (pfVar5,pfVar1,&DAT_01bc9c80 + _DAT_01bc9c7c * 0xc,0,0xbff00000,0,0,0,0,
                   (double)param_1);
        break;
      default:
        goto switchD_0046db22_caseD_3;
      }
      _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
switchD_0046db22_caseD_3:
      iVar6 = iVar6 + 1;
      pfVar5 = pfVar5 + 3;
    } while (iVar6 < (int)_DAT_01bc9bb8);
  }
  return;
}
