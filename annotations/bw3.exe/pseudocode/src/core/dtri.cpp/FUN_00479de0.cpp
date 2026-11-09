// Name: core_dtri.cpp_FUN_00479de0
// Address: 00479de0
// Address Range: [[00479de0, 00479f2a]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_00479de0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_00479de0(float param_1)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  
  iVar5 = 0;
  if (0 < (int)_DAT_01c59b64) {
    pfVar6 = (float *)&DAT_01c59b68;
    do {
      uVar3 = iVar5 + 1;
      if (uVar3 == _DAT_01c59b64) {
        uVar3 = uVar3 ^ _DAT_01c59b64;
      }
      pfVar1 = (float *)(&DAT_01c59b68 + uVar3 * 0xc);
      bVar2 = param_1 < *pfVar6;
      if (param_1 < *pfVar1) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_01c59c28 * 0xc;
        if ((float *)(&DAT_01c59c2c + iVar4) != pfVar6) {
          *(float *)(&DAT_01c59c2c + iVar4) = *pfVar6;
          *(float *)(&DAT_01c59c30 + iVar4) = pfVar6[1];
          *(float *)(&DAT_01c59c34 + iVar4) = pfVar6[2];
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (pfVar1,pfVar6,&DAT_01c59c2c + _DAT_01c59c28 * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-param_1);
        break;
      case 2:
        iVar4 = _DAT_01c59c28 * 0xc;
        if ((float *)(&DAT_01c59c2c + iVar4) != pfVar6) {
          *(float *)(&DAT_01c59c2c + iVar4) = *pfVar6;
          *(float *)(&DAT_01c59c30 + iVar4) = pfVar6[1];
          *(float *)(&DAT_01c59c34 + iVar4) = pfVar6[2];
        }
        _DAT_01c59c28 = _DAT_01c59c28 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (pfVar6,pfVar1,&DAT_01c59c2c + _DAT_01c59c28 * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-param_1);
        break;
      default:
        goto switchD_00479e4a_caseD_3;
      }
      _DAT_01c59c28 = _DAT_01c59c28 + 1;
switchD_00479e4a_caseD_3:
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 3;
    } while (iVar5 < (int)_DAT_01c59b64);
  }
  return;
}
