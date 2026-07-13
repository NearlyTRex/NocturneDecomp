// Name: FUN_004487c0
// Address: 004487c0
// Address Range: [[004487c0, 00448910]]
// Convention: unknown
// Signature: void FUN_004487c0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004487c0(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)_DAT_014b8550) {
    puVar4 = (uint *)&DAT_014b8554;
    do {
      uVar2 = iVar5 + 1;
      if (uVar2 == _DAT_014b8550) {
        uVar2 = uVar2 ^ _DAT_014b8550;
      }
      bVar1 = (float)puVar4[1] < param_1;
      if (*(float *)(&DAT_014b8558 + uVar2 * 0xc) < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_014b8614 * 0xc;
        if ((uint *)(&DAT_014b8618 + iVar3) != puVar4) {
          *(uint *)(&DAT_014b8618 + iVar3) = *puVar4;
          *(uint *)(&DAT_014b861c + iVar3) = puVar4[1];
          *(uint *)(&DAT_014b8620 + iVar3) = puVar4[2];
        }
        break;
      case 1:
        FUN_004484c0(&DAT_014b8554 + uVar2 * 0xc,puVar4,&DAT_014b8618 + _DAT_014b8614 * 0xc,0,0,0,
                     0xbff00000,0,0,(double)param_1);
        break;
      case 2:
        iVar3 = _DAT_014b8614 * 0xc;
        if ((uint *)(&DAT_014b8618 + iVar3) != puVar4) {
          *(uint *)(&DAT_014b8618 + iVar3) = *puVar4;
          *(uint *)(&DAT_014b861c + iVar3) = puVar4[1];
          *(uint *)(&DAT_014b8620 + iVar3) = puVar4[2];
        }
        _DAT_014b8614 = _DAT_014b8614 + 1;
        FUN_004484c0(puVar4,&DAT_014b8554 + uVar2 * 0xc,&DAT_014b8618 + _DAT_014b8614 * 0xc,0,0,0,
                     0xbff00000,0,0,(double)param_1);
        break;
      default:
        goto switchD_00448834_caseD_3;
      }
      _DAT_014b8614 = _DAT_014b8614 + 1;
switchD_00448834_caseD_3:
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar5 < (int)_DAT_014b8550);
  }
  return;
}
