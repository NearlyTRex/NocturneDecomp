// Name: core_dtri.cpp_clipPolygonToRight_FUN_00478d70
// Address: 00478d70
// Address Range: [[00478d70, 00478eba]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00478d70(float x_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00478d70(float x_max)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  
  iVar5 = 0;
  if (0 < (int)_DAT_01c2200c) {
    pfVar6 = (float *)&DAT_01c22010;
    do {
      uVar3 = iVar5 + 1;
      if (uVar3 == _DAT_01c2200c) {
        uVar3 = uVar3 ^ _DAT_01c2200c;
      }
      pfVar1 = (float *)(&DAT_01c22010 + uVar3 * 0xc);
      bVar2 = x_max < *pfVar6;
      if (x_max < *pfVar1) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_01c220d0 * 0xc;
        if ((float *)(&DAT_01c220d4 + iVar4) != pfVar6) {
          *(float *)(&DAT_01c220d4 + iVar4) = *pfVar6;
          *(float *)(&DAT_01c220d8 + iVar4) = pfVar6[1];
          *(float *)(&DAT_01c220dc + iVar4) = pfVar6[2];
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (pfVar1,pfVar6,&DAT_01c220d4 + _DAT_01c220d0 * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-x_max);
        break;
      case 2:
        iVar4 = _DAT_01c220d0 * 0xc;
        if ((float *)(&DAT_01c220d4 + iVar4) != pfVar6) {
          *(float *)(&DAT_01c220d4 + iVar4) = *pfVar6;
          *(float *)(&DAT_01c220d8 + iVar4) = pfVar6[1];
          *(float *)(&DAT_01c220dc + iVar4) = pfVar6[2];
        }
        _DAT_01c220d0 = _DAT_01c220d0 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (pfVar6,pfVar1,&DAT_01c220d4 + _DAT_01c220d0 * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-x_max);
        break;
      default:
        goto switchD_00478dda_caseD_3;
      }
      _DAT_01c220d0 = _DAT_01c220d0 + 1;
switchD_00478dda_caseD_3:
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 3;
    } while (iVar5 < (int)_DAT_01c2200c);
  }
  return;
}
