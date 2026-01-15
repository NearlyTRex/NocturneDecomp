// Name: engine_colquant.c_FUN_004406c0
// Address: 004406c0
// Address Range: [[004406c0, 00440b32]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_004406c0()

#include "nocturne.h"

int * engine_colquant_c_FUN_004406c0(void)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  int extraout_ECX;
  int iVar4;
  int *piVar5;
  int *extraout_ECX_00;
  int extraout_EDX;
  int *piVar6;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double dVar15;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int iStack_15c;
  int local_158;
  int iStack_154;
  int local_150;
  char acStack_14c [256];
  int aiStack_4c [9];
  int iStack_28;
  int local_24;
  int local_20;
  uint local_18;
  uint uStack_14;
  
  bVar11 = 0;
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 1,0,0x2000);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x802,0,0x2000);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x1002,0,0x4000);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x2002,0,0x300);
  in_stack_00000004[0x801] = in_stack_00000008;
  *in_stack_00000004 = in_stack_00000010;
  if (0 < in_stack_0000000c) {
    fVar12 = (float10)0.57735027000000005;
    iVar7 = 0;
    do {
      iVar4 = in_stack_00000004[0x801];
      bVar1 = *(byte *)(iVar4 + 1 + iVar7);
      local_18 = (uint)bVar1;
      fVar13 = (float10)bVar1;
      bVar1 = *(byte *)(iVar4 + 2 + iVar7);
      uStack_14 = (uint)bVar1;
      fVar14 = (float10)bVar1;
      dVar15 = crt_math_c_round_FUN_005fe6b0
                         ((double)(SQRT(fVar14 * fVar14 +
                                        (float10)*(byte *)(iVar4 + iVar7) *
                                        (float10)*(byte *)(iVar4 + iVar7) + fVar13 * fVar13) *
                                  fVar12));
      local_20 = (int)ROUND(dVar15);
      iVar7 = iVar7 + 4;
      *(byte *)(extraout_EDX + -1 + iVar7) = (byte)local_20;
    } while (iVar7 < extraout_ECX);
  }
  in_stack_00000004[0x1010] = 0;
  in_stack_00000004[0x1011] = in_stack_0000000c;
  engine_colquant_c_FUN_00441260();
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_14c,"Subdividing histogram array for %d palette entries...\n\n",in_stack_0000000c);
  uVar8 = 0;
  engine_2d_c_drawText_FUN_00401fd0(acStack_14c,0,0x16);
  do {
    while( true ) {
      dVar3 = 0.11;
      dVar2 = 0.29999999999999999;
      dVar15 = 0.58999999999999997;
      if (*in_stack_00000004 + -1 <= (int)uVar8) {
        iVar7 = 0;
        piVar5 = in_stack_00000004;
        piVar6 = in_stack_00000004;
        if (0 < *in_stack_00000004) {
          do {
            *(double *)(piVar6 + 0x802) = (double)(short)piVar5[0x1002];
            *(double *)(piVar6 + 0x804) = (double)*(short *)((int)piVar5 + 0x400a);
            iVar4 = piVar5[0x1003];
            piVar6[1] = 0;
            piVar6[2] = 0;
            piVar6[3] = 0;
            piVar6[4] = 0;
            piVar6[5] = 0;
            piVar6[6] = 0;
            piVar6[7] = 0;
            *(double *)(piVar6 + 0x806) = (double)(short)iVar4;
            piVar6[8] = 0;
            iVar7 = iVar7 + 1;
            *(double *)(piVar6 + 0x808) =
                 (double)(short)iVar4 * dVar3 +
                 *(double *)(piVar6 + 0x802) * dVar2 + *(double *)(piVar6 + 0x804) * dVar15;
            piVar5 = piVar5 + 0x10;
            piVar6 = piVar6 + 8;
          } while (iVar7 < *in_stack_00000004);
        }
        local_20 = 0;
        piVar5 = in_stack_00000004;
        piVar6 = in_stack_00000004;
        if (0 < *in_stack_00000004) {
          do {
            iVar7 = 0;
            piVar5 = in_stack_00000004;
            while (iVar7 < *in_stack_00000004 + -1) {
              if (*(double *)(piVar5 + 0x810) < *(double *)(piVar5 + 0x808)) {
                piVar9 = piVar5 + 0x802;
                piVar10 = aiStack_4c;
                for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar10 = *piVar9;
                  piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                piVar9 = piVar5 + 0x80a;
                piVar10 = piVar5 + 0x802;
                for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar10 = *piVar9;
                  piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                piVar9 = aiStack_4c;
                piVar10 = piVar5 + 0x80a;
                for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar10 = *piVar9;
                  piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                iVar7 = iVar7 + 1;
                piVar5 = piVar5 + 8;
              }
              else {
                iVar7 = iVar7 + 1;
                piVar5 = piVar5 + 8;
              }
            }
            local_20 = local_20 + 1;
            piVar5 = in_stack_00000004;
          } while (local_20 < *in_stack_00000004);
        }
        do {
          dVar15 = crt_math_c_round_FUN_005fe6b0(*(double *)(piVar5 + 0x802));
          local_20 = (int)ROUND(dVar15);
          *(byte *)(piVar6 + 0x2002) = (byte)local_20;
          dVar15 = crt_math_c_round_FUN_005fe6b0(*(double *)(extraout_EDX_00 + 0x2010));
          local_24 = (int)ROUND(dVar15);
          *(byte *)((int)piVar6 + 0x8009) = (byte)local_24;
          dVar15 = crt_math_c_round_FUN_005fe6b0(*(double *)(extraout_EDX_01 + 0x2018));
          iStack_28 = (int)ROUND(dVar15);
          *(byte *)((int)piVar6 + 0x800a) = (byte)iStack_28;
          piVar5 = (int *)(extraout_EDX_02 + 0x20);
          piVar6 = (int *)((int)piVar6 + 3);
        } while ((int *)(extraout_EDX_02 + 0x20) != extraout_ECX_00);
        return in_stack_00000004 + 0x2002;
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_14c,"%6.6d",uVar8);
      engine_2d_c_drawText_FUN_00401fd0(acStack_14c,0,0x21);
      if ((uVar8 & 7) == 0) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      }
      iStack_15c = in_stack_00000004[0x1004];
      local_158 = in_stack_00000004[0x1005];
      iStack_154 = in_stack_00000004[0x100e];
      iVar4 = 1;
      local_150 = in_stack_00000004[0x100f];
      iVar7 = 0;
      piVar5 = in_stack_00000004;
      if (0 < (int)uVar8) {
        do {
          if ((double)CONCAT44 /* combine 2-byte values */(local_158,iStack_15c) < *(double *)(piVar5 + 0x1014)) {
            iStack_15c = piVar5[0x1014];
            local_158 = piVar5[0x1015];
            iStack_154 = piVar5[0x101e];
            local_150 = piVar5[0x101f];
            iVar7 = iVar4;
          }
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 0x10;
        } while (iVar4 <= (int)uVar8);
      }
      if ((double)CONCAT44 /* combine 2-byte values */(local_150,iStack_154) !=
          *(double *)(in_stack_00000004 + iVar7 * 0x10 + 0x1006)) break;
      engine_colquant_c_FUN_00440b40();
LAB_0044091a:
      uVar8 = uVar8 + 1;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(local_150,iStack_154) ==
        *(double *)(in_stack_00000004 + iVar7 * 0x10 + 0x1008)) {
      engine_colquant_c_FUN_00440c80();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(local_150,iStack_154) ==
        *(double *)(in_stack_00000004 + iVar7 * 0x10 + 0x100a)) {
      engine_colquant_c_FUN_00440dc0();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(local_150,iStack_154) !=
        *(double *)(in_stack_00000004 + iVar7 * 0x10 + 0x100c)) goto LAB_0044091a;
    engine_colquant_c_FUN_00440f00();
    uVar8 = uVar8 + 1;
  } while( true );
}
