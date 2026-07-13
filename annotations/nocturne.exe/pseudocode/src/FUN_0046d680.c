// Name: FUN_0046d680
// Address: 0046d680
// Address Range: [[0046d680, 0046d7cc]]
// Convention: unknown
// Signature: void FUN_0046d680(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d680(float param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  iVar5 = 0;
  if (0 < (int)_DAT_01bc996c) {
    puVar6 = (uint *)0x1bc9970;
    do {
      uVar3 = iVar5 + 1;
      if (uVar3 == _DAT_01bc996c) {
        uVar3 = uVar3 ^ _DAT_01bc996c;
      }
      iVar1 = uVar3 * 0xc + 0x1bc9970;
      bVar2 = param_1 < (float)puVar6[1];
      if (param_1 < *(float *)(uVar3 * 0xc + 0x1bc9974)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar1 = _DAT_01bc9a30 * 0xc;
        if ((uint *)(&DAT_01bc9a34 + iVar1) != puVar6) {
          *(uint *)(&DAT_01bc9a34 + iVar1) = *puVar6;
          *(uint *)(&DAT_01bc9a38 + iVar1) = puVar6[1];
          *(uint *)(&DAT_01bc9a3c + iVar1) = puVar6[2];
        }
        break;
      case 1:
        FUN_0046d4e0(iVar1,puVar6,&DAT_01bc9a34 + _DAT_01bc9a30 * 0xc,0,0,0,0x3ff00000,0,0,
                     (double)-param_1);
        break;
      case 2:
        iVar4 = _DAT_01bc9a30 * 0xc;
        if ((uint *)(&DAT_01bc9a34 + iVar4) != puVar6) {
          *(uint *)(&DAT_01bc9a34 + iVar4) = *puVar6;
          *(uint *)(&DAT_01bc9a38 + iVar4) = puVar6[1];
          *(uint *)(&DAT_01bc9a3c + iVar4) = puVar6[2];
        }
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
        FUN_0046d4e0(puVar6,iVar1,&DAT_01bc9a34 + _DAT_01bc9a30 * 0xc,0,0,0,0x3ff00000,0,0,
                     (double)-param_1);
        break;
      default:
        goto switchD_0046d6ec_caseD_3;
      }
      _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
switchD_0046d6ec_caseD_3:
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 3;
    } while (iVar5 < (int)_DAT_01bc996c);
  }
  return;
}
