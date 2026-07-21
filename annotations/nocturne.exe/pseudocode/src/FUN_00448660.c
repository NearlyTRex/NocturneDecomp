// Name: FUN_00448660
// Address: 00448660
// Address Range: [[00448660, 004487ac]]
// Convention: unknown
// Signature: void FUN_00448660(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448660(float param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  iVar5 = 0;
  if (0 < (int)_DAT_014b848c) {
    puVar6 = (uint *)0x14b8490;
    do {
      uVar3 = iVar5 + 1;
      if (uVar3 == _DAT_014b848c) {
        uVar3 = uVar3 ^ _DAT_014b848c;
      }
      iVar1 = uVar3 * 0xc + 0x14b8490;
      bVar2 = param_1 < (float)puVar6[1];
      if (param_1 < *(float *)(uVar3 * 0xc + 0x14b8494)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar1 = _DAT_014b8550 * 0xc;
        if ((uint *)(&DAT_014b8554 + iVar1) != puVar6) {
          *(uint *)(&DAT_014b8554 + iVar1) = *puVar6;
          *(uint *)(&DAT_014b8558 + iVar1) = puVar6[1];
          *(uint *)(&DAT_014b855c + iVar1) = puVar6[2];
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (iVar1,puVar6,&DAT_014b8554 + _DAT_014b8550 * 0xc,0,0,0,0x3ff00000,0,0,
                   (double)-param_1);
        break;
      case 2:
        iVar4 = _DAT_014b8550 * 0xc;
        if ((uint *)(&DAT_014b8554 + iVar4) != puVar6) {
          *(uint *)(&DAT_014b8554 + iVar4) = *puVar6;
          *(uint *)(&DAT_014b8558 + iVar4) = puVar6[1];
          *(uint *)(&DAT_014b855c + iVar4) = puVar6[2];
        }
        _DAT_014b8550 = _DAT_014b8550 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (puVar6,iVar1,&DAT_014b8554 + _DAT_014b8550 * 0xc,0,0,0,0x3ff00000,0,0,
                   (double)-param_1);
        break;
      default:
        goto switchD_004486cc_caseD_3;
      }
      _DAT_014b8550 = _DAT_014b8550 + 1;
switchD_004486cc_caseD_3:
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 3;
    } while (iVar5 < (int)_DAT_014b848c);
  }
  return;
}
