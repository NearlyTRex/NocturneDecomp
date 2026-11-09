// Name: core_dcamera.cpp_FUN_00440a4e
// Address: 00440a4e
// Address Range: [[00440a4e, 00440d82]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_00440a4e(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_FUN_00440a4e(int param_1,int param_2,int param_3,int param_4)

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
  byte uStack_14;
  
  piVar7 = (int *)(&DAT_0083c7d4 + param_2 * 0xc + param_1 * 0xf00);
  puVar9 = (uint *)(param_1 * 0x500 + 0x14c3cd0 + param_2 * 4);
  puVar3 = (uint *)(*(int *)(&DAT_01c2b64c + (param_1 << (DAT_01308800 & 0x1f)) * 4) +
                   (param_2 << (DAT_01308800 & 0x1f)) * 4);
  puVar1 = (byte *)(param_2 + param_1 * 0x140 + param_4 + 0x784);
  bVar2 = DAT_01308800;
  do {
    DAT_01308800 = bVar2;
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
    uStack_14 = 0;
    if ((((*puVar3 < *puVar9) &&
         (uVar10 = *piVar7 - *_DAT_01510718 >> 0x1f,
         iVar4 = (*piVar7 - *_DAT_01510718 ^ uVar10) - uVar10, iVar4 < _DAT_01510718[3])) &&
        (uVar10 = piVar7[1] - _DAT_01510718[1] >> 0x1f,
        iVar5 = (piVar7[1] - _DAT_01510718[1] ^ uVar10) - uVar10, iVar5 < _DAT_01510718[3])) &&
       ((uVar10 = piVar7[2] - _DAT_01510718[2] >> 0x1f,
        iVar6 = (piVar7[2] - _DAT_01510718[2] ^ uVar10) - uVar10, iVar6 < _DAT_01510718[3] &&
        (iVar4 = iVar4 * iVar4 + iVar5 * iVar5 + iVar6 * iVar6, iVar4 < _DAT_01510718[4])))) {
      if (_DAT_0151071c != 0) {
        if (*puVar3 == 0) {
          iVar5 = 0x7fffffff;
        }
        else {
          iVar5 = (int)(0x7fffffff / (longlong)(int)*puVar3);
        }
        iVar11 = _DAT_01510728 - iVar5;
        iVar12 = iVar11 >> 0x1f;
        iVar14 = param_2 << 8;
        iVar6 = 0x10;
        iVar13 = param_1 << 8;
        do {
          if (*(int *)((iVar13 >> 8) * 0x500 + 0xb1ac98 + (iVar14 >> 8) * 4) < iVar5 + -0x80) break;
          iVar6 = iVar6 + -1;
          iVar5 = iVar5 + ((int)((iVar11 + iVar12 * -0x10) - (uint)(iVar12 << 3 < 0)) >> 4);
          iVar14 = iVar14 + (_DAT_01510720 - param_2) * 0x10;
          iVar13 = iVar13 + (_DAT_01510724 - param_1) * 0x10;
        } while (0 < iVar6);
        if (iVar6 != 0) goto LAB_00440bce;
      }
      uStack_14 = (byte)
                  (((_DAT_01510718[4] - iVar4 >> 0x10) * 0x3f) / (_DAT_01510718[4] >> 0x10));
    }
LAB_00440bce:
    puVar9 = puVar9 + 1;
    piVar7 = piVar7 + 3;
    *puVar1 = uStack_14;
    puVar3 = puVar3 + (1 << (bVar2 & 0x1f));
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
    bVar2 = DAT_01308800;
  } while( true );
}
