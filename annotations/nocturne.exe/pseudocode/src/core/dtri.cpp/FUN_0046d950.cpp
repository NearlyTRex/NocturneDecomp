// Name: core_dtri.cpp_FUN_0046d950
// Address: 0046d950
// Address Range: [[0046d950, 0046da9a]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0046d950(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_0046d950(float param_1)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  
  iVar5 = 0;
  if (0 < (int)_DAT_01bc9af4) {
    pfVar6 = (float *)&DAT_01bc9af8;
    do {
      uVar3 = iVar5 + 1;
      if (uVar3 == _DAT_01bc9af4) {
        uVar3 = uVar3 ^ _DAT_01bc9af4;
      }
      pfVar1 = (float *)(&DAT_01bc9af8 + uVar3 * 0xc);
      bVar2 = param_1 < *pfVar6;
      if (param_1 < *pfVar1) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_01bc9bb8 * 0xc;
        if ((float *)(&DAT_01bc9bbc + iVar4) != pfVar6) {
          *(float *)(&DAT_01bc9bbc + iVar4) = *pfVar6;
          *(float *)(&DAT_01bc9bc0 + iVar4) = pfVar6[1];
          *(float *)(&DAT_01bc9bc4 + iVar4) = pfVar6[2];
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (pfVar1,pfVar6,&DAT_01bc9bbc + _DAT_01bc9bb8 * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-param_1);
        break;
      case 2:
        iVar4 = _DAT_01bc9bb8 * 0xc;
        if ((float *)(&DAT_01bc9bbc + iVar4) != pfVar6) {
          *(float *)(&DAT_01bc9bbc + iVar4) = *pfVar6;
          *(float *)(&DAT_01bc9bc0 + iVar4) = pfVar6[1];
          *(float *)(&DAT_01bc9bc4 + iVar4) = pfVar6[2];
        }
        _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (pfVar6,pfVar1,&DAT_01bc9bbc + _DAT_01bc9bb8 * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-param_1);
        break;
      default:
        goto switchD_0046d9ba_caseD_3;
      }
      _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
switchD_0046d9ba_caseD_3:
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 3;
    } while (iVar5 < (int)_DAT_01bc9af4);
  }
  return;
}
