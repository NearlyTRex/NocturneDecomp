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
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int aiStack_34 [9];
  
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
      iVar3 = in_stack_00000004[0x801];
      fVar13 = (float10)*(byte *)(iVar3 + 1 + iVar7);
      fVar14 = (float10)*(byte *)(iVar3 + 2 + iVar7);
      dVar15 = crt_math_c_round_FUN_005fe6b0
                         ((double)(SQRT(fVar14 * fVar14 +
                                        (float10)*(byte *)(iVar3 + iVar7) *
                                        (float10)*(byte *)(iVar3 + iVar7) + fVar13 * fVar13) *
                                  fVar12));
      iVar7 = iVar7 + 4;
      *(char *)(extraout_EDX + -1 + iVar7) = (char)(int)ROUND(dVar15);
    } while (iVar7 < extraout_ECX);
  }
  in_stack_00000004[0x1010] = 0;
  in_stack_00000004[0x1011] = in_stack_0000000c;
  engine_colquant_c_FUN_00441260();
  crt_stdio_c_sprintf_FUN_005fdbd0
            ((char *)&iStack_13c,"Subdividing histogram array for %d palette entries...\n\n",in_stack_0000000c);
  uVar8 = 0;
  engine_2d_c_drawText_FUN_00401fd0((char *)&iStack_138,0,0x16);
  do {
    while( true ) {
      dVar2 = 0.11;
      dVar1 = 0.29999999999999999;
      dVar15 = 0.58999999999999997;
      if (*in_stack_00000004 + -1 <= (int)uVar8) {
        iVar7 = 0;
        piVar4 = in_stack_00000004;
        piVar6 = in_stack_00000004;
        if (0 < *in_stack_00000004) {
          do {
            *(double *)(piVar6 + 0x802) = (double)(short)piVar4[0x1002];
            *(double *)(piVar6 + 0x804) = (double)*(short *)((int)piVar4 + 0x400a);
            iVar3 = piVar4[0x1003];
            piVar6[1] = 0;
            piVar6[2] = 0;
            piVar6[3] = 0;
            piVar6[4] = 0;
            piVar6[5] = 0;
            piVar6[6] = 0;
            piVar6[7] = 0;
            *(double *)(piVar6 + 0x806) = (double)(short)iVar3;
            piVar6[8] = 0;
            iVar7 = iVar7 + 1;
            *(double *)(piVar6 + 0x808) =
                 (double)(short)iVar3 * dVar2 +
                 *(double *)(piVar6 + 0x802) * dVar1 + *(double *)(piVar6 + 0x804) * dVar15;
            piVar4 = piVar4 + 0x10;
            piVar6 = piVar6 + 8;
          } while (iVar7 < *in_stack_00000004);
        }
        iVar7 = 0;
        piVar4 = in_stack_00000004;
        piVar6 = in_stack_00000004;
        if (0 < *in_stack_00000004) {
          do {
            iVar3 = 0;
            piVar4 = in_stack_00000004;
            while (iVar3 < *in_stack_00000004 + -1) {
              if (*(double *)(piVar4 + 0x810) < *(double *)(piVar4 + 0x808)) {
                piVar9 = piVar4 + 0x802;
                piVar10 = aiStack_34;
                for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar10 = *piVar9;
                  piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                piVar9 = piVar4 + 0x80a;
                piVar10 = piVar4 + 0x802;
                for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar10 = *piVar9;
                  piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                piVar9 = aiStack_34;
                piVar10 = piVar4 + 0x80a;
                for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar10 = *piVar9;
                  piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                iVar3 = iVar3 + 1;
                piVar4 = piVar4 + 8;
              }
              else {
                iVar3 = iVar3 + 1;
                piVar4 = piVar4 + 8;
              }
            }
            iVar7 = iVar7 + 1;
            piVar4 = in_stack_00000004;
          } while (iVar7 < *in_stack_00000004);
        }
        do {
          dVar15 = crt_math_c_round_FUN_005fe6b0(*(double *)(piVar4 + 0x802));
          *(char *)(piVar6 + 0x2002) = (char)(int)ROUND(dVar15);
          dVar15 = crt_math_c_round_FUN_005fe6b0(*(double *)(extraout_EDX_00 + 0x2010));
          *(char *)((int)piVar6 + 0x8009) = (char)(int)ROUND(dVar15);
          dVar15 = crt_math_c_round_FUN_005fe6b0(*(double *)(extraout_EDX_01 + 0x2018));
          *(char *)((int)piVar6 + 0x800a) = (char)(int)ROUND(dVar15);
          piVar4 = (int *)(extraout_EDX_02 + 0x20);
          piVar6 = (int *)((int)piVar6 + 3);
        } while ((int *)(extraout_EDX_02 + 0x20) != extraout_ECX_00);
        return in_stack_00000004 + 0x2002;
      }
      crt_stdio_c_sprintf_FUN_005fdbd0((char *)&iStack_134,"%6.6d",uVar8);
      engine_2d_c_drawText_FUN_00401fd0((char *)&iStack_130,0,0x21);
      if ((uVar8 & 7) == 0) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      }
      iStack_138 = in_stack_00000004[0x1004];
      iStack_134 = in_stack_00000004[0x1005];
      iStack_130 = in_stack_00000004[0x100e];
      iVar3 = 1;
      iStack_12c = in_stack_00000004[0x100f];
      iVar7 = 0;
      piVar4 = in_stack_00000004;
      if (0 < (int)uVar8) {
        do {
          if ((double)CONCAT44 /* combine 2-byte values */(iStack_134,iStack_138) < *(double *)(piVar4 + 0x1014)) {
            iStack_138 = piVar4[0x1014];
            iStack_134 = piVar4[0x1015];
            iStack_130 = piVar4[0x101e];
            iStack_12c = piVar4[0x101f];
            iVar7 = iVar3;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 0x10;
        } while (iVar3 <= (int)uVar8);
      }
      iVar3 = uVar8 + 1;
      if ((double)CONCAT44 /* combine 2-byte values */(iStack_12c,iStack_130) !=
          *(double *)(in_stack_00000004 + iVar7 * 0x10 + 0x1006)) break;
      iStack_13c = iVar3;
      engine_colquant_c_FUN_00440b40();
LAB_0044091a:
      uVar8 = uVar8 + 1;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(iStack_12c,iStack_130) ==
        *(double *)(in_stack_00000004 + iVar7 * 0x10 + 0x1008)) {
      iStack_13c = iVar3;
      engine_colquant_c_FUN_00440c80();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(iStack_12c,iStack_130) ==
        *(double *)(in_stack_00000004 + iVar7 * 0x10 + 0x100a)) {
      iStack_13c = iVar3;
      engine_colquant_c_FUN_00440dc0();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(iStack_12c,iStack_130) !=
        *(double *)(in_stack_00000004 + iVar7 * 0x10 + 0x100c)) goto LAB_0044091a;
    iStack_13c = iVar3;
    engine_colquant_c_FUN_00440f00();
    uVar8 = uVar8 + 1;
  } while( true );
}
