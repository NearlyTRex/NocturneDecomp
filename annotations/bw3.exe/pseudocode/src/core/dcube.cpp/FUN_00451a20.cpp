// Name: core_dcube.cpp_FUN_00451a20
// Address: 00451a20
// Address Range: [[00451a20, 00451b6a]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00451a20(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcube_cpp_FUN_00451a20(float param_1)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  
  iVar5 = 0;
  if (0 < (int)_DAT_01548784) {
    pfVar6 = (float *)&DAT_01548788;
    do {
      uVar3 = iVar5 + 1;
      if (uVar3 == _DAT_01548784) {
        uVar3 = uVar3 ^ _DAT_01548784;
      }
      pfVar1 = (float *)(&DAT_01548788 + uVar3 * 0xc);
      bVar2 = param_1 < *pfVar6;
      if (param_1 < *pfVar1) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_01548848 * 0xc;
        if ((float *)(&DAT_0154884c + iVar4) != pfVar6) {
          *(float *)(&DAT_0154884c + iVar4) = *pfVar6;
          *(float *)(&DAT_01548850 + iVar4) = pfVar6[1];
          *(float *)(&DAT_01548854 + iVar4) = pfVar6[2];
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (pfVar1,pfVar6,&DAT_0154884c + _DAT_01548848 * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-param_1);
        break;
      case 2:
        iVar4 = _DAT_01548848 * 0xc;
        if ((float *)(&DAT_0154884c + iVar4) != pfVar6) {
          *(float *)(&DAT_0154884c + iVar4) = *pfVar6;
          *(float *)(&DAT_01548850 + iVar4) = pfVar6[1];
          *(float *)(&DAT_01548854 + iVar4) = pfVar6[2];
        }
        _DAT_01548848 = _DAT_01548848 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (pfVar6,pfVar1,&DAT_0154884c + _DAT_01548848 * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-param_1);
        break;
      default:
        goto switchD_00451a8a_caseD_3;
      }
      _DAT_01548848 = _DAT_01548848 + 1;
switchD_00451a8a_caseD_3:
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 3;
    } while (iVar5 < (int)_DAT_01548784);
  }
  return;
}
