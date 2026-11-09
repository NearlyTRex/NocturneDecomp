// Name: core_dcube.cpp_FUN_00444650
// Address: 00444650
// Address Range: [[00444650, 004447a0]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00444650(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcube_cpp_FUN_00444650(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)_DAT_01510c20) {
    puVar4 = (uint *)&DAT_01510c24;
    do {
      uVar2 = iVar5 + 1;
      if (uVar2 == _DAT_01510c20) {
        uVar2 = uVar2 ^ _DAT_01510c20;
      }
      bVar1 = param_1 < (float)puVar4[2];
      if (param_1 < *(float *)(&DAT_01510c2c + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01510ce4 * 0xc;
        if ((uint *)(&DAT_01510ce8 + iVar3) != puVar4) {
          *(uint *)(&DAT_01510ce8 + iVar3) = *puVar4;
          *(uint *)(&DAT_01510cec + iVar3) = puVar4[1];
          *(uint *)(&DAT_01510cf0 + iVar3) = puVar4[2];
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (&DAT_01510c24 + uVar2 * 0xc,puVar4,&DAT_01510ce8 + _DAT_01510ce4 * 0xc,0,0,0,0,0,
                   0xbff00000,(double)param_1);
        break;
      case 2:
        iVar3 = _DAT_01510ce4 * 0xc;
        if ((uint *)(&DAT_01510ce8 + iVar3) != puVar4) {
          *(uint *)(&DAT_01510ce8 + iVar3) = *puVar4;
          *(uint *)(&DAT_01510cec + iVar3) = puVar4[1];
          *(uint *)(&DAT_01510cf0 + iVar3) = puVar4[2];
        }
        _DAT_01510ce4 = _DAT_01510ce4 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (puVar4,&DAT_01510c24 + uVar2 * 0xc,&DAT_01510ce8 + _DAT_01510ce4 * 0xc,0,0,0,0,0,
                   0xbff00000,(double)param_1);
        break;
      default:
        goto switchD_004446c4_caseD_3;
      }
      _DAT_01510ce4 = _DAT_01510ce4 + 1;
switchD_004446c4_caseD_3:
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar5 < (int)_DAT_01510c20);
  }
  return;
}
