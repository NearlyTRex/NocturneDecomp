// Name: FUN_0046d7e0
// Address: 0046d7e0
// Address Range: [[0046d7e0, 0046d930]]
// Convention: unknown
// Signature: void FUN_0046d7e0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d7e0(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)_DAT_01bc9a30) {
    puVar4 = (uint *)&DAT_01bc9a34;
    do {
      uVar2 = iVar5 + 1;
      if (uVar2 == _DAT_01bc9a30) {
        uVar2 = uVar2 ^ _DAT_01bc9a30;
      }
      bVar1 = (float)puVar4[1] < param_1;
      if (*(float *)(&DAT_01bc9a38 + uVar2 * 0xc) < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01bc9af4 * 0xc;
        if ((uint *)(&DAT_01bc9af8 + iVar3) != puVar4) {
          *(uint *)(&DAT_01bc9af8 + iVar3) = *puVar4;
          *(uint *)(&DAT_01bc9afc + iVar3) = puVar4[1];
          *(uint *)(&DAT_01bc9b00 + iVar3) = puVar4[2];
        }
        break;
      case 1:
        FUN_0046d4e0(&DAT_01bc9a34 + uVar2 * 0xc,puVar4,&DAT_01bc9af8 + _DAT_01bc9af4 * 0xc,0,0,0,
                     0xbff00000,0,0,(double)param_1);
        break;
      case 2:
        iVar3 = _DAT_01bc9af4 * 0xc;
        if ((uint *)(&DAT_01bc9af8 + iVar3) != puVar4) {
          *(uint *)(&DAT_01bc9af8 + iVar3) = *puVar4;
          *(uint *)(&DAT_01bc9afc + iVar3) = puVar4[1];
          *(uint *)(&DAT_01bc9b00 + iVar3) = puVar4[2];
        }
        _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
        FUN_0046d4e0(puVar4,&DAT_01bc9a34 + uVar2 * 0xc,&DAT_01bc9af8 + _DAT_01bc9af4 * 0xc,0,0,0,
                     0xbff00000,0,0,(double)param_1);
        break;
      default:
        goto switchD_0046d854_caseD_3;
      }
      _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
switchD_0046d854_caseD_3:
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar5 < (int)_DAT_01bc9a30);
  }
  return;
}
