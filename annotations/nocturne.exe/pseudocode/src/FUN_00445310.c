// Name: FUN_00445310
// Address: 00445310
// Address Range: [[00445310, 00445642]]
// Convention: unknown
// Signature: void FUN_00445310(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445310(int param_1,int param_2,int param_3,int param_4)

{
  byte *puVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte local_14;
  
  piVar7 = (int *)(param_1 * 0xf00 + 0x7f7378 + param_2 * 0xc);
  puVar9 = (uint *)(param_1 * 0x500 + 0x146ba10 + param_2 * 4);
  puVar3 = (uint *)(*(int *)(&DAT_01bd4260 + (param_1 << (DAT_012b0660 & 0x1f)) * 4) +
                   (param_2 << (DAT_012b0660 & 0x1f)) * 4);
  puVar1 = (byte *)(param_2 + param_1 * 0x140 + param_4 + 0x784);
  bVar2 = DAT_012b0660;
  do {
    DAT_012b0660 = bVar2;
    if (param_3 <= param_2) {
      iVar5 = param_1 * 4 + param_4;
      iVar4 = *(int *)(iVar5 + 4);
      iVar5 = *(int *)(iVar5 + 0x3c4);
      for (pcVar8 = (char *)(param_1 * 0x140 + param_4 + 0x784 + iVar4);
          (iVar4 < iVar5 && (*pcVar8 == '\0')); pcVar8 = pcVar8 + 1) {
        iVar4 = iVar4 + 1;
      }
      pcVar8 = (char *)(param_1 * 0x140 + param_4 + 0x784 + iVar5);
      while ((iVar4 < iVar5 && (pcVar8 = pcVar8 + -1, *pcVar8 == '\0'))) {
        iVar5 = iVar5 + -1;
      }
      param_4 = param_1 * 4 + param_4;
      *(int *)(param_4 + 4) = iVar4;
      *(int *)(param_4 + 0x3c4) = iVar5;
      return;
    }
    local_14 = 0;
    if ((((*puVar3 < *puVar9) &&
         (uVar10 = *piVar7 - *_DAT_014b8458 >> 0x1f,
         iVar4 = (*piVar7 - *_DAT_014b8458 ^ uVar10) - uVar10, iVar4 < _DAT_014b8458[3])) &&
        (uVar10 = piVar7[1] - _DAT_014b8458[1] >> 0x1f,
        iVar5 = (piVar7[1] - _DAT_014b8458[1] ^ uVar10) - uVar10, iVar5 < _DAT_014b8458[3])) &&
       ((uVar10 = piVar7[2] - _DAT_014b8458[2] >> 0x1f,
        iVar6 = (piVar7[2] - _DAT_014b8458[2] ^ uVar10) - uVar10, iVar6 < _DAT_014b8458[3] &&
        (iVar4 = iVar4 * iVar4 + iVar5 * iVar5 + iVar6 * iVar6, iVar4 < _DAT_014b8458[4])))) {
      if (_DAT_014b845c != 0) {
        if (*puVar3 == 0) {
          iVar5 = 0x7fffffff;
        }
        else {
          iVar5 = (int)(0x7fffffff / (longlong)(int)*puVar3);
        }
        iVar11 = _DAT_014b8468 - iVar5;
        iVar12 = iVar11 >> 0x1f;
        iVar14 = param_2 << 8;
        iVar6 = 0x10;
        iVar13 = param_1 << 8;
        do {
          if (*(int *)((iVar13 >> 8) * 0x500 + 0xac2af8 + (iVar14 >> 8) * 4) < iVar5 + -0x80) break;
          iVar6 = iVar6 + -1;
          iVar5 = iVar5 + ((int)((iVar11 + iVar12 * -0x10) - (uint)(iVar12 << 3 < 0)) >> 4);
          iVar14 = iVar14 + (_DAT_014b8460 - param_2) * 0x10;
          iVar13 = iVar13 + (_DAT_014b8464 - param_1) * 0x10;
        } while (0 < iVar6);
        if (iVar6 != 0) goto LAB_0044548e;
      }
      local_14 = (byte)
                 (((_DAT_014b8458[4] - iVar4 >> 0x10) * 0x3f) / (_DAT_014b8458[4] >> 0x10));
    }
LAB_0044548e:
    puVar9 = puVar9 + 1;
    piVar7 = piVar7 + 3;
    *puVar1 = local_14;
    puVar3 = puVar3 + (1 << (bVar2 & 0x1f));
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
    bVar2 = DAT_012b0660;
  } while( true );
}
