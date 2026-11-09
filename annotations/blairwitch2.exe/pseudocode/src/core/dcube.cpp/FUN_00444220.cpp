// Name: core_dcube.cpp_FUN_00444220
// Address: 00444220
// Address Range: [[00444220, 0044436a]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00444220(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcube_cpp_FUN_00444220(float param_1)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  
  iVar5 = 0;
  if (0 < (int)_DAT_015109d4) {
    pfVar6 = (float *)&DAT_015109d8;
    do {
      uVar3 = iVar5 + 1;
      if (uVar3 == _DAT_015109d4) {
        uVar3 = uVar3 ^ _DAT_015109d4;
      }
      pfVar1 = (float *)(&DAT_015109d8 + uVar3 * 0xc);
      bVar2 = param_1 < *pfVar6;
      if (param_1 < *pfVar1) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_01510a98 * 0xc;
        if ((float *)(&DAT_01510a9c + iVar4) != pfVar6) {
          *(float *)(&DAT_01510a9c + iVar4) = *pfVar6;
          *(float *)(&DAT_01510aa0 + iVar4) = pfVar6[1];
          *(float *)(&DAT_01510aa4 + iVar4) = pfVar6[2];
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (pfVar1,pfVar6,&DAT_01510a9c + _DAT_01510a98 * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-param_1);
        break;
      case 2:
        iVar4 = _DAT_01510a98 * 0xc;
        if ((float *)(&DAT_01510a9c + iVar4) != pfVar6) {
          *(float *)(&DAT_01510a9c + iVar4) = *pfVar6;
          *(float *)(&DAT_01510aa0 + iVar4) = pfVar6[1];
          *(float *)(&DAT_01510aa4 + iVar4) = pfVar6[2];
        }
        _DAT_01510a98 = _DAT_01510a98 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (pfVar6,pfVar1,&DAT_01510a9c + _DAT_01510a98 * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-param_1);
        break;
      default:
        goto switchD_0044428a_caseD_3;
      }
      _DAT_01510a98 = _DAT_01510a98 + 1;
switchD_0044428a_caseD_3:
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 3;
    } while (iVar5 < (int)_DAT_015109d4);
  }
  return;
}
