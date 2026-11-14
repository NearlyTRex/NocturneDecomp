// Name: cockpit_ckptutil.c_FUN_0042f750
// Address: 0042f750
// Address Range: [[0042f750, 0043020d]]
// Convention: unknown
// Signature: void * cockpit_ckptutil_c_FUN_0042f750(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * cockpit_ckptutil_c_FUN_0042f750(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  int iVar5;
  void *pvVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  byte bVar17;
  int in_stack_00000004;
  int *in_stack_00000008;
  void *in_stack_0000000c;
  int *in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  char acStack_1f4 [256];
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int *piStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  uint uStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  uint uStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  uint uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar17 = 0;
  uVar10 = 0;
  if (in_stack_00000004 == 0) {
    return (void *)0x0;
  }
  iStack_48 = in_stack_00000014 + -1;
  iStack_ec = in_stack_00000018 + -1;
  iVar12 = 0;
  piStack_e8 = in_stack_00000008;
  if (0 < iStack_ec) {
    do {
      iStack_dc = iVar12 + 1;
      iStack_cc = iVar12 * 0x84;
      iStack_e0 = 0;
      piStack_34 = in_stack_00000008 + iStack_dc * 0x21;
      piStack_e4 = piStack_e8;
      iStack_80 = iStack_dc;
      iStack_70 = iStack_dc;
      iStack_68 = iStack_dc;
      iStack_2c = iStack_dc;
      for (iStack_20 = 0; piVar3 = (int *)((int)in_stack_00000008 + iStack_cc), iStack_20 < *piVar3;
          iStack_20 = iStack_20 + 1) {
        iVar2 = *(int *)((int)piVar3 + iStack_e0 + 4);
        iVar14 = *(int *)((int)piVar3 + iStack_e0 + 0x44) + iVar2;
        iVar15 = iVar14 + -1;
        if (0x1ff < (int)uVar10) {
          _sprintf(acStack_1f4,"Reached max trace edges: edges %d, scanline %d");
          _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d046a4 = 0x8ab;
          core_main_c_FUN_004e4500(acStack_1f4);
        }
        uVar7 = (ushort)iVar12;
        if (0 < iVar2) {
          iStack_d4 = iVar2 + 1;
          iStack_d8 = iVar2 + -1;
          iStack_ac = 0;
          iStack_c4 = 0;
          piStack_24 = piStack_e4;
          piStack_a8 = piStack_34;
          while( true ) {
            piVar3 = in_stack_00000008 + iStack_2c * 0x21;
            if (*piVar3 <= iStack_ac) break;
            iVar5 = *(int *)((int)piVar3 + iStack_c4 + 4);
            iStack_74 = *(int *)((int)piVar3 + iStack_c4 + 0x44) + iVar5 + -1;
            iStack_38 = 0;
            if (0 < iStack_20) {
              iStack_44 = *piStack_e4;
              iStack_58 = iStack_44 + piStack_e4[0x10] + -1;
              if (iVar5 < iStack_58) {
                iStack_38 = 1;
              }
            }
            uVar9 = (ushort)iVar2;
            uVar8 = (ushort)iVar5;
            if ((iVar5 < iStack_d8) && (iVar2 <= iStack_74)) {
              iVar1 = uVar10 * 8;
              uVar11 = uVar10 + 1;
              puVar4 = (ushort *)(iVar1 + 0x7bde2c);
              uStack_1c = uVar11;
              if (iStack_38 != 0) {
                if (in_stack_0000001c < (iVar2 - iStack_58) + -1) goto LAB_0042fbc0;
                uStack_98 = 0;
                *puVar4 = 0;
                *puVar4 = (ushort)iStack_58;
                *(ushort *)(iVar1 + 0x7bde2e) = 0;
                *(ushort *)(iVar1 + 0x7bde2e) = uVar7;
                *(ushort *)(iVar1 + 0x7bde30) = 0;
                uVar8 = *(ushort *)(iVar1 + 0x7bde32) & 0x8000;
                *(ushort *)(iVar1 + 0x7bde30) = uVar9;
                *(ushort *)(iVar1 + 0x7bde32) = uVar8;
                *(ushort *)(iVar1 + 0x7bde32) = uVar8 | uVar7 & 0x7fff;
                *(byte *)(iVar1 + 0x7bde33) = *(byte *)(iVar1 + 0x7bde33) & 0x7f;
                uVar8 = *(ushort *)(iVar1 + 0x7bde32);
                iStack_a0 = iVar2;
                iStack_9c = iVar12;
                goto LAB_0042fa52;
              }
              iStack_b8 = iStack_dc;
              *puVar4 = 0;
              *puVar4 = uVar9;
              *(ushort *)(iVar1 + 0x7bde2e) = 0;
              *(ushort *)(iVar1 + 0x7bde2e) = uVar7;
              *(ushort *)(iVar1 + 0x7bde30) = 0;
              uVar9 = *(ushort *)(iVar1 + 0x7bde32) & 0x8000;
              *(ushort *)(iVar1 + 0x7bde30) = uVar8;
              *(ushort *)(iVar1 + 0x7bde32) = uVar9;
              *(ushort *)(iVar1 + 0x7bde32) = uVar9 | (ushort)iStack_dc & 0x7fff;
              *(byte *)(iVar1 + 0x7bde33) = *(byte *)(iVar1 + 0x7bde33) & 0x7f;
              *(ushort *)(iVar1 + 0x7bde32) = *(ushort *)(iVar1 + 0x7bde32);
              iStack_c0 = iVar5;
              iStack_b0 = iStack_38;
            }
            else {
LAB_0042fbc0:
              iStack_bc = 0;
              if (0 < iStack_ac) {
                iStack_44 = *piStack_a8;
                iStack_18 = iStack_44 + piStack_a8[0x10] + -1;
                if (iVar2 < iStack_18) {
                  iStack_bc = 1;
                }
              }
              uVar11 = uVar10;
              if ((iStack_d4 < iVar5) && (iVar5 <= iVar15)) {
                if ((iStack_bc == 0) && ((iVar5 - iVar2) + 1 <= in_stack_00000024)) {
                  iStack_8c = iStack_80;
                  uStack_88 = 1;
                  iVar1 = uVar10 * 8;
                  puVar4 = (ushort *)(iVar1 + 0x7bde2c);
                  *puVar4 = 0;
                  *puVar4 = uVar9;
                  *(ushort *)(iVar1 + 0x7bde2e) = 0;
                  *(ushort *)(iVar1 + 0x7bde2e) = uVar7;
                  *(ushort *)(iVar1 + 0x7bde30) = 0;
                  *(ushort *)(iVar1 + 0x7bde30) = uVar8;
                  uVar8 = *(ushort *)(iVar1 + 0x7bde32) & 0x8000;
                  *(ushort *)(iVar1 + 0x7bde32) = uVar8;
                  *(ushort *)(iVar1 + 0x7bde32) = uVar8 | (ushort)iStack_80 & 0x7fff;
                  *(byte *)(iVar1 + 0x7bde33) = *(byte *)(iVar1 + 0x7bde33) & 0x7f;
                  uVar8 = *(ushort *)(iVar1 + 0x7bde32) | 0x8000;
                  iStack_94 = iVar12;
                  iStack_90 = iVar5;
                }
                else {
                  if ((iStack_bc == 0) || (in_stack_00000020 < (iVar5 - iStack_18) + -1))
                  goto LAB_0042fa56;
                  iStack_84 = iStack_18;
                  iStack_a4 = iStack_70;
                  uStack_78 = 1;
                  iVar1 = uVar10 * 8;
                  puVar4 = (ushort *)(iVar1 + 0x7bde2c);
                  *puVar4 = 0;
                  *puVar4 = *puVar4 | (ushort)iStack_18;
                  *(ushort *)(iVar1 + 0x7bde2e) = 0;
                  *(ushort *)(iVar1 + 0x7bde2e) = *(ushort *)(iVar1 + 0x7bde2e) | (ushort)iStack_70;
                  *(ushort *)(iVar1 + 0x7bde30) = 0;
                  *(ushort *)(iVar1 + 0x7bde30) = *(ushort *)(iVar1 + 0x7bde30) | uVar8;
                  uVar8 = *(ushort *)(iVar1 + 0x7bde32) & 0x8000;
                  *(ushort *)(iVar1 + 0x7bde32) = uVar8;
                  *(ushort *)(iVar1 + 0x7bde32) = uVar8 | (ushort)iStack_70 & 0x7fff;
                  *(byte *)(iVar1 + 0x7bde33) = *(byte *)(iVar1 + 0x7bde33) & 0x7f;
                  uVar8 = *(ushort *)(iVar1 + 0x7bde32) | 0x8000;
                  iStack_7c = iVar5;
                  iStack_14 = iVar5;
                }
LAB_0042fa52:
                puVar4[3] = uVar8;
                uVar11 = uVar10 + 1;
              }
            }
LAB_0042fa56:
            iStack_c4 = iStack_c4 + 4;
            iStack_ac = iStack_ac + 1;
            piStack_a8 = piStack_a8 + 1;
            uVar10 = uVar11;
          }
        }
        if (0x1ff < (int)uVar10) {
          _sprintf(acStack_1f4,"Reached max trace edges: edges %d, scanline %d");
          _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d046a4 = 0x8e5;
          core_main_c_FUN_004e4500(acStack_1f4);
        }
        if (iVar15 < iStack_48) {
          iStack_30 = iVar14 + -2;
          iStack_28 = iStack_e0;
          iStack_50 = 0;
          for (iStack_b4 = 0; piVar3 = in_stack_00000008 + iStack_2c * 0x21, iStack_d0 = iVar14,
              iStack_b4 < *piVar3; iStack_b4 = iStack_b4 + 1) {
            iStack_40 = *(int *)((int)piVar3 + iStack_50 + 4);
            iStack_60 = 0;
            iStack_44 = *(int *)((int)in_stack_00000008 + iStack_cc) + -1;
            iVar5 = iStack_40 + *(int *)((int)piVar3 + iStack_50 + 0x44) + -1;
            if ((iStack_20 < iStack_44) &&
               (*(int *)((int)in_stack_00000008 + iStack_cc + iStack_e0 + 8) < iVar5)) {
              iStack_60 = 1;
            }
            if (((iVar14 < iVar5) && (iStack_40 <= iVar15)) && (iStack_60 == 0)) {
              iStack_5c = iStack_68;
              iVar1 = uVar10 * 8;
              *(ushort *)(iVar1 + 0x7bde2c) = 0;
              *(ushort *)(iVar1 + 0x7bde2c) = (ushort)iVar15;
              *(ushort *)(iVar1 + 0x7bde2e) = 0;
              *(ushort *)(iVar1 + 0x7bde2e) = uVar7;
              *(ushort *)(iVar1 + 0x7bde30) = 0;
              *(ushort *)(iVar1 + 0x7bde30) = (ushort)iVar5;
              uVar8 = *(ushort *)(iVar1 + 0x7bde32) & 0x8000;
              *(ushort *)(iVar1 + 0x7bde32) = uVar8;
              *(ushort *)(iVar1 + 0x7bde32) = uVar8 | (ushort)iStack_68 & 0x7fff;
              *(byte *)(iVar1 + 0x7bde33) = *(byte *)(iVar1 + 0x7bde33) & 0x7f;
              uVar10 = uVar10 + 1;
              *(ushort *)(iVar1 + 0x7bde32) = *(ushort *)(iVar1 + 0x7bde32);
              iStack_6c = iVar12;
              iStack_64 = iVar5;
              iStack_54 = iStack_60;
            }
            else {
              iStack_c8 = 0;
              iStack_44 = in_stack_00000008[iStack_2c * 0x21] + -1;
              if ((iStack_b4 < iStack_44) &&
                 (*(int *)((int)(in_stack_00000008 + iStack_2c * 0x21) + iStack_50 + 8) < iVar15)) {
                iStack_c8 = 1;
              }
              if (((iVar5 < iStack_30) && (iVar2 <= iVar5)) &&
                 ((iStack_c8 == 0 && ((iVar15 - iVar5) + 1 <= in_stack_00000024)))) {
                uStack_3c = 1;
                iVar1 = uVar10 * 8;
                puVar4 = (ushort *)(iVar1 + 0x7bde2c);
                *puVar4 = 0;
                *puVar4 = *puVar4 | (ushort)iVar15;
                *(ushort *)(iVar1 + 0x7bde2e) = 0;
                *(ushort *)(iVar1 + 0x7bde2e) = *(ushort *)(iVar1 + 0x7bde2e) | uVar7;
                *(ushort *)(iVar1 + 0x7bde30) = 0;
                *(ushort *)(iVar1 + 0x7bde30) = *(ushort *)(iVar1 + 0x7bde30) | (ushort)iVar5;
                uVar8 = *(ushort *)(iVar1 + 0x7bde32) & 0x8000;
                *(ushort *)(iVar1 + 0x7bde32) = uVar8;
                *(ushort *)(iVar1 + 0x7bde32) = uVar8 | (ushort)iStack_2c & 0x7fff;
                *(byte *)(iVar1 + 0x7bde33) = *(byte *)(iVar1 + 0x7bde33) & 0x7f;
                uVar10 = uVar10 + 1;
                *(ushort *)(iVar1 + 0x7bde32) = *(ushort *)(iVar1 + 0x7bde32) | 0x8000;
                iStack_f4 = iVar15;
                iStack_f0 = iVar12;
                iStack_4c = iVar5;
                iStack_14 = iVar5;
              }
            }
            iStack_50 = iStack_50 + 4;
          }
        }
        iStack_e0 = iStack_e0 + 4;
        piStack_e4 = piStack_e4 + 1;
      }
      piStack_e8 = piStack_e8 + 0x21;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iStack_ec);
  }
  if (uVar10 == 0) {
    if (in_stack_0000000c == (void *)0x0) {
      *in_stack_00000010 = 0;
    }
    return in_stack_0000000c;
  }
  if (in_stack_0000000c == (void *)0x0) {
    *in_stack_00000010 = 0;
  }
  pvVar6 = realloc(in_stack_0000000c,*in_stack_00000010 * 8 + uVar10 * 8);
  if (pvVar6 == (void *)0x0) {
    _sprintf(acStack_1f4,"Unable to allocate %u bytes for edge list.");
    _DAT_01d046a0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d046a4 = 0x924;
    core_main_c_FUN_004e4500(acStack_1f4);
  }
  puVar13 = (uint *)0x7bde2c;
  puVar16 = (uint *)(*in_stack_00000010 * 8 + (int)pvVar6);
  for (iVar12 = (uVar10 & 0x1fffffff) << 1; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar16 = *puVar13;
    puVar13 = puVar13 + (uint)bVar17 * -2 + 1;
    puVar16 = puVar16 + (uint)bVar17 * -2 + 1;
  }
  for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(byte *)puVar16 = *(byte *)puVar13;
    puVar13 = (uint *)((int)puVar13 + (uint)bVar17 * -2 + 1);
    puVar16 = (uint *)((int)puVar16 + (uint)bVar17 * -2 + 1);
  }
  *in_stack_00000010 = *in_stack_00000010 + uVar10;
  return pvVar6;
}
