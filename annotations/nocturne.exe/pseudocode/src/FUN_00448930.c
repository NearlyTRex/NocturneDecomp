// Name: FUN_00448930
// Address: 00448930
// Address Range: [[00448930, 00448a7a]]
// Convention: unknown
// Signature: void FUN_00448930(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448930(float param_1)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  
  iVar5 = 0;
  if (0 < (int)_DAT_014b8614) {
    pfVar6 = (float *)&DAT_014b8618;
    do {
      uVar3 = iVar5 + 1;
      if (uVar3 == _DAT_014b8614) {
        uVar3 = uVar3 ^ _DAT_014b8614;
      }
      pfVar1 = (float *)(&DAT_014b8618 + uVar3 * 0xc);
      bVar2 = param_1 < *pfVar6;
      if (param_1 < *pfVar1) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_014b86d8 * 0xc;
        if ((float *)(&DAT_014b86dc + iVar4) != pfVar6) {
          *(float *)(&DAT_014b86dc + iVar4) = *pfVar6;
          *(float *)(&DAT_014b86e0 + iVar4) = pfVar6[1];
          *(float *)(&DAT_014b86e4 + iVar4) = pfVar6[2];
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (pfVar1,pfVar6,&DAT_014b86dc + _DAT_014b86d8 * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-param_1);
        break;
      case 2:
        iVar4 = _DAT_014b86d8 * 0xc;
        if ((float *)(&DAT_014b86dc + iVar4) != pfVar6) {
          *(float *)(&DAT_014b86dc + iVar4) = *pfVar6;
          *(float *)(&DAT_014b86e0 + iVar4) = pfVar6[1];
          *(float *)(&DAT_014b86e4 + iVar4) = pfVar6[2];
        }
        _DAT_014b86d8 = _DAT_014b86d8 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (pfVar6,pfVar1,&DAT_014b86dc + _DAT_014b86d8 * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-param_1);
        break;
      default:
        goto switchD_0044899a_caseD_3;
      }
      _DAT_014b86d8 = _DAT_014b86d8 + 1;
switchD_0044899a_caseD_3:
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 3;
    } while (iVar5 < (int)_DAT_014b8614);
  }
  return;
}
