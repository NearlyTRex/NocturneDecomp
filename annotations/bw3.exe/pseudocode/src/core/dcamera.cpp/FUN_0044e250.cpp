// Name: core_dcamera.cpp_FUN_0044e250
// Address: 0044e250
// Address Range: [[0044e250, 0044e582]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_0044e250(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_dcamera_cpp_FUN_0044e250(void)

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
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  byte uStack_14;
  
  piVar7 = (int *)(in_stack_00000004 * 0xf00 + 0x874588 + in_stack_00000008 * 0xc);
  puVar9 = (uint *)(in_stack_00000004 * 0x500 + 0x14fba80 + in_stack_00000008 * 4);
  puVar3 = (uint *)(*(int *)(&DAT_01c60dac + (in_stack_00000004 << (DAT_013405b0 & 0x1f)) * 4) +
                   (in_stack_00000008 << (DAT_013405b0 & 0x1f)) * 4);
  puVar1 = (byte *)(in_stack_00000008 + in_stack_00000004 * 0x140 + in_stack_00000010 + 0x784)
  ;
  bVar2 = DAT_013405b0;
  do {
    DAT_013405b0 = bVar2;
    if (in_stack_0000000c <= in_stack_00000008) {
      iVar5 = in_stack_00000004 * 4 + in_stack_00000010;
      iVar4 = *(int *)(iVar5 + 4);
      iVar5 = *(int *)(iVar5 + 0x3c4);
      for (pcVar8 = (char *)(in_stack_00000004 * 0x140 + in_stack_00000010 + 0x784 + iVar4);
          (iVar4 < iVar5 && (*pcVar8 == '\0')); pcVar8 = pcVar8 + 1) {
        iVar4 = iVar4 + 1;
      }
      pcVar8 = (char *)(in_stack_00000004 * 0x140 + in_stack_00000010 + 0x784 + iVar5);
      while ((iVar4 < iVar5 && (pcVar8 = pcVar8 + -1, *pcVar8 == '\0'))) {
        iVar5 = iVar5 + -1;
      }
      iVar6 = in_stack_00000004 * 4 + in_stack_00000010;
      *(int *)(iVar6 + 4) = iVar4;
      *(int *)(iVar6 + 0x3c4) = iVar5;
      return;
    }
    uStack_14 = 0;
    if ((((*puVar3 < *puVar9) &&
         (uVar10 = *piVar7 - *_DAT_015484c8 >> 0x1f,
         iVar4 = (*piVar7 - *_DAT_015484c8 ^ uVar10) - uVar10, iVar4 < _DAT_015484c8[3])) &&
        (uVar10 = piVar7[1] - _DAT_015484c8[1] >> 0x1f,
        iVar5 = (piVar7[1] - _DAT_015484c8[1] ^ uVar10) - uVar10, iVar5 < _DAT_015484c8[3])) &&
       ((uVar10 = piVar7[2] - _DAT_015484c8[2] >> 0x1f,
        iVar6 = (piVar7[2] - _DAT_015484c8[2] ^ uVar10) - uVar10, iVar6 < _DAT_015484c8[3] &&
        (iVar4 = iVar4 * iVar4 + iVar5 * iVar5 + iVar6 * iVar6, iVar4 < _DAT_015484c8[4])))) {
      if (_DAT_015484cc != 0) {
        if (*puVar3 == 0) {
          iVar5 = 0x7fffffff;
        }
        else {
          iVar5 = (int)(0x7fffffff / (longlong)(int)*puVar3);
        }
        iVar11 = _DAT_015484d8 - iVar5;
        iVar12 = iVar11 >> 0x1f;
        iVar14 = in_stack_00000008 << 8;
        iVar6 = 0x10;
        iVar13 = in_stack_00000004 << 8;
        do {
          if (*(int *)((iVar13 >> 8) * 0x500 + 0xb52a48 + (iVar14 >> 8) * 4) < iVar5 + -0x80) break;
          iVar6 = iVar6 + -1;
          iVar5 = iVar5 + ((int)((iVar11 + iVar12 * -0x10) - (uint)(iVar12 << 3 < 0)) >> 4);
          iVar14 = iVar14 + (_DAT_015484d0 - in_stack_00000008) * 0x10;
          iVar13 = iVar13 + (_DAT_015484d4 - in_stack_00000004) * 0x10;
        } while (0 < iVar6);
        if (iVar6 != 0) goto LAB_0044e3ce;
      }
      uStack_14 = (byte)
                  (((_DAT_015484c8[4] - iVar4 >> 0x10) * 0x3f) / (_DAT_015484c8[4] >> 0x10));
    }
LAB_0044e3ce:
    puVar9 = puVar9 + 1;
    piVar7 = piVar7 + 3;
    *puVar1 = uStack_14;
    puVar3 = puVar3 + (1 << (bVar2 & 0x1f));
    in_stack_00000008 = in_stack_00000008 + 1;
    puVar1 = puVar1 + 1;
    bVar2 = DAT_013405b0;
  } while( true );
}
