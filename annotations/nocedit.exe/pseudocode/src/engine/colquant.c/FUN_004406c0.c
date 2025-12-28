// Name: engine_colquant.c_FUN_004406c0
// Address: 004406c0
// Address Range: [[004406c0, 00440b32]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_004406c0()

#include "nocturne.h"

int * engine_colquant_c_FUN_004406c0(void)

{
  double dVar1;
  double dVar2;
  int extraout_ECX;
  int iVar3;
  int *piVar4;
  int *extraout_ECX_00;
  int iVar5;
  int extraout_EDX;
  int *piVar6;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar7;
  uint uVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  int *piVar10;
  int *piVar11;
  byte bVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int iStack_14c;
  int iStack_148;
  char acStack_140 [4];
  char acStack_13c [252];
  int aiStack_40 [10];
  int local_18;
  int iStack_14;
  
  bVar12 = 0;
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 1,0,0x2000);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x802,0,0x2000);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x1002,0,0x4000);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x2002,0,0x300);
  in_stack_00000004[0x801] = in_stack_00000008;
  *in_stack_00000004 = in_stack_00000010;
  if (0 < in_stack_0000000c) {
    fVar13 = (float10)0.57735027000000005;
    iVar7 = 0;
    do {
      iVar5 = in_stack_00000004[0x801];
      fVar14 = (float10)*(byte *)(iVar5 + 1 + iVar7);
      fVar15 = (float10)*(byte *)(iVar5 + 2 + iVar7);
      dVar16 = crt_math_c_round_FUN_005fe6b0
                         ((double)(SQRT(fVar15 * fVar15 +
                                        (float10)*(byte *)(iVar5 + iVar7) *
                                        (float10)*(byte *)(iVar5 + iVar7) + fVar14 * fVar14) *
                                  fVar13));
      iVar7 = iVar7 + 4;
      *(char *)(extraout_EDX + -1 + iVar7) = (char)(int)ROUND(dVar16);
    } while (iVar7 < extraout_ECX);
  }
  in_stack_00000004[0x1010] = 0;
  in_stack_00000004[0x1011] = in_stack_0000000c;
  engine_colquant_c_FUN_00441260();
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_13c,"Subdividing histogram array for %d palette entries...\n\n",in_stack_0000000c);
  uVar8 = 0;
  engine_2d_c_drawText_FUN_00401fd0((char *)&iStack_14c,0,0x16);
  do {
    while( true ) {
      dVar2 = 0.11;
      dVar1 = 0.29999999999999999;
      dVar16 = 0.58999999999999997;
      if (*in_stack_00000004 + -1 <= (int)uVar8) {
        iVar7 = 0;
        piVar4 = in_stack_00000004;
        piVar6 = in_stack_00000004;
        if (0 < *in_stack_00000004) {
          do {
            *(double *)(piVar6 + 0x802) = (double)(short)piVar4[0x1002];
            *(double *)(piVar6 + 0x804) = (double)*(short *)((int)piVar4 + 0x400a);
            iVar5 = piVar4[0x1003];
            piVar6[1] = 0;
            piVar6[2] = 0;
            piVar6[3] = 0;
            piVar6[4] = 0;
            piVar6[5] = 0;
            piVar6[6] = 0;
            piVar6[7] = 0;
            *(double *)(piVar6 + 0x806) = (double)(short)iVar5;
            piVar6[8] = 0;
            iVar7 = iVar7 + 1;
            *(double *)(piVar6 + 0x808) =
                 (double)(short)iVar5 * dVar2 +
                 *(double *)(piVar6 + 0x802) * dVar1 + *(double *)(piVar6 + 0x804) * dVar16;
            piVar4 = piVar4 + 0x10;
            piVar6 = piVar6 + 8;
          } while (iVar7 < *in_stack_00000004);
        }
        iStack_14 = 0;
        piVar4 = in_stack_00000004;
        piVar6 = in_stack_00000004;
        if (0 < *in_stack_00000004) {
          do {
            iVar7 = 0;
            piVar4 = in_stack_00000004;
            while (iVar7 < *in_stack_00000004 + -1) {
              if (*(double *)(piVar4 + 0x810) < *(double *)(piVar4 + 0x808)) {
                piVar10 = piVar4 + 0x802;
                piVar11 = aiStack_40;
                for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar11 = *piVar10;
                  piVar10 = piVar10 + (uint)bVar12 * -2 + 1;
                  piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
                }
                piVar10 = piVar4 + 0x80a;
                piVar11 = piVar4 + 0x802;
                for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar11 = *piVar10;
                  piVar10 = piVar10 + (uint)bVar12 * -2 + 1;
                  piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
                }
                piVar10 = aiStack_40;
                piVar11 = piVar4 + 0x80a;
                for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar11 = *piVar10;
                  piVar10 = piVar10 + (uint)bVar12 * -2 + 1;
                  piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
                }
                iVar7 = iVar7 + 1;
                piVar4 = piVar4 + 8;
              }
              else {
                iVar7 = iVar7 + 1;
                piVar4 = piVar4 + 8;
              }
            }
            iStack_14 = iStack_14 + 1;
            piVar4 = in_stack_00000004;
          } while (iStack_14 < *in_stack_00000004);
        }
        do {
          dVar16 = crt_math_c_round_FUN_005fe6b0(*(double *)(piVar4 + 0x802));
          iStack_14 = (int)ROUND(dVar16);
          *(byte *)(piVar6 + 0x2002) = (byte)iStack_14;
          dVar16 = crt_math_c_round_FUN_005fe6b0(*(double *)(extraout_EDX_00 + 0x2010));
          local_18 = (int)ROUND(dVar16);
          *(byte *)((int)piVar6 + 0x8009) = (byte)local_18;
          dVar16 = crt_math_c_round_FUN_005fe6b0(*(double *)(extraout_EDX_01 + 0x2018));
          *(char *)((int)piVar6 + 0x800a) = (char)(int)ROUND(dVar16);
          piVar4 = (int *)(extraout_EDX_02 + 0x20);
          piVar6 = (int *)((int)piVar6 + 3);
        } while ((int *)(extraout_EDX_02 + 0x20) != extraout_ECX_00);
        return in_stack_00000004 + 0x2002;
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_140,"%6.6d",uVar8);
      engine_2d_c_drawText_FUN_00401fd0((char *)&iStack_14c,0,0x21);
      if ((uVar8 & 7) == 0) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      }
      iVar7 = in_stack_00000004[0x1004];
      iVar5 = in_stack_00000004[0x1005];
      iStack_14c = in_stack_00000004[0x100e];
      iVar3 = 1;
      iStack_148 = in_stack_00000004[0x100f];
      iVar9 = 0;
      piVar4 = in_stack_00000004;
      if (0 < (int)uVar8) {
        do {
          if ((double)CONCAT44 /* combine 2-byte values */(iVar5,iVar7) < *(double *)(piVar4 + 0x1014)) {
            iVar7 = piVar4[0x1014];
            iVar5 = piVar4[0x1015];
            iStack_14c = piVar4[0x101e];
            iStack_148 = piVar4[0x101f];
            iVar9 = iVar3;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 0x10;
        } while (iVar3 <= (int)uVar8);
      }
      if ((double)CONCAT44 /* combine 2-byte values */(iStack_148,iStack_14c) !=
          *(double *)(in_stack_00000004 + iVar9 * 0x10 + 0x1006)) break;
      engine_colquant_c_FUN_00440b40();
LAB_0044091a:
      uVar8 = uVar8 + 1;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(iStack_148,iStack_14c) ==
        *(double *)(in_stack_00000004 + iVar9 * 0x10 + 0x1008)) {
      engine_colquant_c_FUN_00440c80();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(iStack_148,iStack_14c) ==
        *(double *)(in_stack_00000004 + iVar9 * 0x10 + 0x100a)) {
      engine_colquant_c_FUN_00440dc0();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(iStack_148,iStack_14c) !=
        *(double *)(in_stack_00000004 + iVar9 * 0x10 + 0x100c)) goto LAB_0044091a;
    engine_colquant_c_FUN_00440f00();
    uVar8 = uVar8 + 1;
  } while( true );
}
