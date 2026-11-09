// Name: core_dtri.cpp_FUN_00491690
// Address: 00491690
// Address Range: [[00491690, 004917e0]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_00491690(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_00491690(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)_DAT_01c3d814) {
    puVar4 = (uint *)&DAT_01c3d818;
    do {
      uVar2 = iVar5 + 1;
      if (uVar2 == _DAT_01c3d814) {
        uVar2 = uVar2 ^ _DAT_01c3d814;
      }
      bVar1 = param_1 < (float)puVar4[2];
      if (param_1 < *(float *)(&DAT_01c3d820 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c3d8d8 * 0xc;
        if ((uint *)(&DAT_01c3d8dc + iVar3) != puVar4) {
          *(uint *)(&DAT_01c3d8dc + iVar3) = *puVar4;
          *(uint *)(&DAT_01c3d8e0 + iVar3) = puVar4[1];
          *(uint *)(&DAT_01c3d8e4 + iVar3) = puVar4[2];
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (&DAT_01c3d818 + uVar2 * 0xc,puVar4,&DAT_01c3d8dc + _DAT_01c3d8d8 * 0xc,0,0,0,0,0,
                   0xbff00000,(double)param_1);
        break;
      case 2:
        iVar3 = _DAT_01c3d8d8 * 0xc;
        if ((uint *)(&DAT_01c3d8dc + iVar3) != puVar4) {
          *(uint *)(&DAT_01c3d8dc + iVar3) = *puVar4;
          *(uint *)(&DAT_01c3d8e0 + iVar3) = puVar4[1];
          *(uint *)(&DAT_01c3d8e4 + iVar3) = puVar4[2];
        }
        _DAT_01c3d8d8 = _DAT_01c3d8d8 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (puVar4,&DAT_01c3d818 + uVar2 * 0xc,&DAT_01c3d8dc + _DAT_01c3d8d8 * 0xc,0,0,0,0,0,
                   0xbff00000,(double)param_1);
        break;
      default:
        goto switchD_00491704_caseD_3;
      }
      _DAT_01c3d8d8 = _DAT_01c3d8d8 + 1;
switchD_00491704_caseD_3:
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar5 < (int)_DAT_01c3d814);
  }
  return;
}
