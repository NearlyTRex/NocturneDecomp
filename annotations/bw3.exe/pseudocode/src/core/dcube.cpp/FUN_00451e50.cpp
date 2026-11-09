// Name: core_dcube.cpp_FUN_00451e50
// Address: 00451e50
// Address Range: [[00451e50, 00451fa0]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00451e50(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcube_cpp_FUN_00451e50(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)_DAT_015489d0) {
    puVar4 = (uint *)&DAT_015489d4;
    do {
      uVar2 = iVar5 + 1;
      if (uVar2 == _DAT_015489d0) {
        uVar2 = uVar2 ^ _DAT_015489d0;
      }
      bVar1 = param_1 < (float)puVar4[2];
      if (param_1 < *(float *)(&DAT_015489dc + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01548a94 * 0xc;
        if ((uint *)(&DAT_01548a98 + iVar3) != puVar4) {
          *(uint *)(&DAT_01548a98 + iVar3) = *puVar4;
          *(uint *)(&DAT_01548a9c + iVar3) = puVar4[1];
          *(uint *)(&DAT_01548aa0 + iVar3) = puVar4[2];
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (&DAT_015489d4 + uVar2 * 0xc,puVar4,&DAT_01548a98 + _DAT_01548a94 * 0xc,0,0,0,0,0,
                   0xbff00000,(double)param_1);
        break;
      case 2:
        iVar3 = _DAT_01548a94 * 0xc;
        if ((uint *)(&DAT_01548a98 + iVar3) != puVar4) {
          *(uint *)(&DAT_01548a98 + iVar3) = *puVar4;
          *(uint *)(&DAT_01548a9c + iVar3) = puVar4[1];
          *(uint *)(&DAT_01548aa0 + iVar3) = puVar4[2];
        }
        _DAT_01548a94 = _DAT_01548a94 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (puVar4,&DAT_015489d4 + uVar2 * 0xc,&DAT_01548a98 + _DAT_01548a94 * 0xc,0,0,0,0,0,
                   0xbff00000,(double)param_1);
        break;
      default:
        goto switchD_00451ec4_caseD_3;
      }
      _DAT_01548a94 = _DAT_01548a94 + 1;
switchD_00451ec4_caseD_3:
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar5 < (int)_DAT_015489d0);
  }
  return;
}
