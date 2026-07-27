// Name: core_dcube.cpp_FUN_00448660
// Address: 00448660
// Address Range: [[00448660, 004487ac]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00448660(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcube_cpp_FUN_00448660(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  iVar4 = 0;
  if (0 < (int)_DAT_014b848c) {
    puVar5 = (uint *)&DAT_014b8490;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_014b848c) {
        uVar2 = uVar2 ^ _DAT_014b848c;
      }
      bVar1 = param_1 < (float)puVar5[1];
      if (param_1 < *(float *)(&DAT_014b8494 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_014b8550 * 0xc;
        if ((uint *)(&DAT_014b8554 + iVar3) != puVar5) {
          *(uint *)(&DAT_014b8554 + iVar3) = *puVar5;
          *(uint *)(&DAT_014b8558 + iVar3) = puVar5[1];
          *(uint *)(&DAT_014b855c + iVar3) = puVar5[2];
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (&DAT_014b8490 + uVar2 * 0xc,puVar5,&DAT_014b8554 + _DAT_014b8550 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-param_1);
        break;
      case 2:
        iVar3 = _DAT_014b8550 * 0xc;
        if ((uint *)(&DAT_014b8554 + iVar3) != puVar5) {
          *(uint *)(&DAT_014b8554 + iVar3) = *puVar5;
          *(uint *)(&DAT_014b8558 + iVar3) = puVar5[1];
          *(uint *)(&DAT_014b855c + iVar3) = puVar5[2];
        }
        _DAT_014b8550 = _DAT_014b8550 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (puVar5,&DAT_014b8490 + uVar2 * 0xc,&DAT_014b8554 + _DAT_014b8550 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-param_1);
        break;
      default:
        goto switchD_004486cc_caseD_3;
      }
      _DAT_014b8550 = _DAT_014b8550 + 1;
switchD_004486cc_caseD_3:
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 3;
    } while (iVar4 < (int)_DAT_014b848c);
  }
  return;
}
