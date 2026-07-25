// Name: FUN_0046d680
// Address: 0046d680
// Address Range: [[0046d680, 0046d7cc]]
// Convention: unknown
// Signature: void FUN_0046d680(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d680(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01bc996c) {
    puVar5 = (uint *)&DAT_01bc9970;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01bc996c) {
        uVar2 = uVar2 ^ _DAT_01bc996c;
      }
      bVar1 = param_1 < (float)puVar5[1];
      if (param_1 < *(float *)(&DAT_01bc9974 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01bc9a30 * 0xc;
        if ((uint *)(&DAT_01bc9a34 + iVar3) != puVar5) {
          *(uint *)(&DAT_01bc9a34 + iVar3) = *puVar5;
          *(uint *)(&DAT_01bc9a38 + iVar3) = puVar5[1];
          *(uint *)(&DAT_01bc9a3c + iVar3) = puVar5[2];
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (&DAT_01bc9970 + uVar2 * 0xc,puVar5,&DAT_01bc9a34 + _DAT_01bc9a30 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-param_1);
        break;
      case 2:
        iVar3 = _DAT_01bc9a30 * 0xc;
        if ((uint *)(&DAT_01bc9a34 + iVar3) != puVar5) {
          *(uint *)(&DAT_01bc9a34 + iVar3) = *puVar5;
          *(uint *)(&DAT_01bc9a38 + iVar3) = puVar5[1];
          *(uint *)(&DAT_01bc9a3c + iVar3) = puVar5[2];
        }
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (puVar5,&DAT_01bc9970 + uVar2 * 0xc,&DAT_01bc9a34 + _DAT_01bc9a30 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-param_1);
        break;
      default:
        goto switchD_0046d6ec_caseD_3;
      }
      _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
switchD_0046d6ec_caseD_3:
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 3;
    } while (iVar4 < (int)_DAT_01bc996c);
  }
  return;
}
