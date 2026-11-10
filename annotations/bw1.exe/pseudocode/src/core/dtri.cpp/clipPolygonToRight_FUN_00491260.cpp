// Name: core_dtri.cpp_clipPolygonToRight_FUN_00491260
// Address: 00491260
// Address Range: [[00491260, 004913aa]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00491260(float x_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00491260(float x_max)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  
  iVar5 = 0;
  if (0 < (int)_DAT_01c3d5c8) {
    pfVar6 = (float *)&DAT_01c3d5cc;
    do {
      uVar3 = iVar5 + 1;
      if (uVar3 == _DAT_01c3d5c8) {
        uVar3 = uVar3 ^ _DAT_01c3d5c8;
      }
      pfVar1 = (float *)(&DAT_01c3d5cc + uVar3 * 0xc);
      bVar2 = x_max < *pfVar6;
      if (x_max < *pfVar1) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_01c3d68c * 0xc;
        if ((float *)(&DAT_01c3d690 + iVar4) != pfVar6) {
          *(float *)(&DAT_01c3d690 + iVar4) = *pfVar6;
          *(float *)(&DAT_01c3d694 + iVar4) = pfVar6[1];
          *(float *)(&DAT_01c3d698 + iVar4) = pfVar6[2];
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (pfVar1,pfVar6,&DAT_01c3d690 + _DAT_01c3d68c * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-x_max);
        break;
      case 2:
        iVar4 = _DAT_01c3d68c * 0xc;
        if ((float *)(&DAT_01c3d690 + iVar4) != pfVar6) {
          *(float *)(&DAT_01c3d690 + iVar4) = *pfVar6;
          *(float *)(&DAT_01c3d694 + iVar4) = pfVar6[1];
          *(float *)(&DAT_01c3d698 + iVar4) = pfVar6[2];
        }
        _DAT_01c3d68c = _DAT_01c3d68c + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (pfVar6,pfVar1,&DAT_01c3d690 + _DAT_01c3d68c * 0xc,0,0x3ff00000,0,0,0,0,
                   (double)-x_max);
        break;
      default:
        goto switchD_004912ca_caseD_3;
      }
      _DAT_01c3d68c = _DAT_01c3d68c + 1;
switchD_004912ca_caseD_3:
      iVar5 = iVar5 + 1;
      pfVar6 = pfVar6 + 3;
    } while (iVar5 < (int)_DAT_01c3d5c8);
  }
  return;
}
