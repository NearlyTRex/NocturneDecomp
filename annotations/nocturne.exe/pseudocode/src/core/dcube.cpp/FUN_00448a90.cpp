// Name: core_dcube.cpp_FUN_00448a90
// Address: 00448a90
// Address Range: [[00448a90, 00448bde]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00448a90(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcube_cpp_FUN_00448a90(float param_1)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < (int)_DAT_014b86d8) {
    pfVar5 = (float *)&DAT_014b86dc;
    do {
      uVar3 = iVar6 + 1;
      if (uVar3 == _DAT_014b86d8) {
        uVar3 = uVar3 ^ _DAT_014b86d8;
      }
      pfVar1 = (float *)(&DAT_014b86dc + uVar3 * 0xc);
      bVar2 = *pfVar5 < param_1;
      if (*pfVar1 < param_1) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_014b879c * 0xc;
        if ((float *)(&DAT_014b87a0 + iVar4) != pfVar5) {
          *(float *)(&DAT_014b87a0 + iVar4) = *pfVar5;
          *(float *)(&DAT_014b87a4 + iVar4) = pfVar5[1];
          *(float *)(&DAT_014b87a8 + iVar4) = pfVar5[2];
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (pfVar1,pfVar5,&DAT_014b87a0 + _DAT_014b879c * 0xc,0,0xbff00000,0,0,0,0,
                   (double)param_1);
        break;
      case 2:
        iVar4 = _DAT_014b879c * 0xc;
        if ((float *)(&DAT_014b87a0 + iVar4) != pfVar5) {
          *(float *)(&DAT_014b87a0 + iVar4) = *pfVar5;
          *(float *)(&DAT_014b87a4 + iVar4) = pfVar5[1];
          *(float *)(&DAT_014b87a8 + iVar4) = pfVar5[2];
        }
        _DAT_014b879c = _DAT_014b879c + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (pfVar5,pfVar1,&DAT_014b87a0 + _DAT_014b879c * 0xc,0,0xbff00000,0,0,0,0,
                   (double)param_1);
        break;
      default:
        goto switchD_00448b02_caseD_3;
      }
      _DAT_014b879c = _DAT_014b879c + 1;
switchD_00448b02_caseD_3:
      iVar6 = iVar6 + 1;
      pfVar5 = pfVar5 + 3;
    } while (iVar6 < (int)_DAT_014b86d8);
  }
  return;
}
