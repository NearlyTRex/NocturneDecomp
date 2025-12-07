// Name: engine_colquant.c_FUN_004406c0
// Address: 004406c0
// Address Range: [[004406c0, 00440b32]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_004406c0()

#include "nocturne.h"

int * engine_colquant_c_FUN_004406c0(void)

{
  double dVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  BADSPACEBASE *in_ESP;
  int *piVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
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
  
  bVar9 = 0;
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 1,0,0x2000);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x802,0,0x2000);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x1002,0,0x4000);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x2002,0,0x300);
  in_stack_00000004[0x801] = in_stack_00000008;
  *in_stack_00000004 = in_stack_00000010;
  dVar11 = 0.57735027000000005;
  if (0 < in_stack_0000000c) {
    iVar6 = 0;
    do {
      iVar2 = in_stack_00000004[0x801];
      dVar10 = (double)*(byte *)(iVar2 + 1 + iVar6);
      dVar1 = (double)*(byte *)(iVar2 + 2 + iVar6);
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         (SQRT(dVar1 * dVar1 +
                               (double)*(byte *)(iVar2 + iVar6) * (double)*(byte *)(iVar2 + iVar6) +
                               dVar10 * dVar10) * dVar11);
      iVar6 = iVar6 + 4;
      *(char *)(iVar2 + -1 + iVar6) = (char)(int)ROUND(dVar10);
    } while (SBORROW /* signed borrow */4(iVar6,in_stack_0000000c * 4) != iVar6 + in_stack_0000000c * -4 < 0);
  }
  in_stack_00000004[0x1010] = 0;
  in_stack_00000004[0x1011] = in_stack_0000000c;
  engine_colquant_c_FUN_00441260();
  crt_stdio_c_sprintf_FUN_005fdbd0
            ((char *)&iStack_13c,"Subdividing histogram array for %d palette entries...\n\n",in_stack_0000000c);
  uVar7 = 0;
  engine_2d_c_drawText_FUN_00401fd0((char *)&iStack_138,0,0x16);
  do {
    while( true ) {
      dVar1 = 0.11;
      dVar10 = 0.29999999999999999;
      dVar11 = 0.58999999999999997;
      if (*in_stack_00000004 + -1 <= (int)uVar7) {
        iVar6 = 0;
        piVar3 = in_stack_00000004;
        piVar5 = in_stack_00000004;
        if (0 < *in_stack_00000004) {
          do {
            *(double *)(piVar5 + 0x802) = (double)(short)piVar3[0x1002];
            *(double *)(piVar5 + 0x804) = (double)*(short *)((int)piVar3 + 0x400a);
            iVar2 = piVar3[0x1003];
            piVar5[1] = 0;
            piVar5[2] = 0;
            piVar5[3] = 0;
            piVar5[4] = 0;
            piVar5[5] = 0;
            piVar5[6] = 0;
            piVar5[7] = 0;
            *(double *)(piVar5 + 0x806) = (double)(short)iVar2;
            piVar5[8] = 0;
            iVar6 = iVar6 + 1;
            *(double *)(piVar5 + 0x808) =
                 (double)(short)iVar2 * dVar1 +
                 *(double *)(piVar5 + 0x802) * dVar10 + *(double *)(piVar5 + 0x804) * dVar11;
            piVar3 = piVar3 + 0x10;
            piVar5 = piVar5 + 8;
          } while (iVar6 < *in_stack_00000004);
        }
        iVar6 = 0;
        if (0 < *in_stack_00000004) {
          do {
            iVar2 = 0;
            piVar3 = in_stack_00000004;
            while (iVar2 < *in_stack_00000004 + -1) {
              if (*(double *)(piVar3 + 0x810) < *(double *)(piVar3 + 0x808)) {
                piVar5 = piVar3 + 0x802;
                piVar8 = aiStack_34;
                for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar8 = *piVar5;
                  piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
                  piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
                }
                piVar5 = piVar3 + 0x80a;
                piVar8 = piVar3 + 0x802;
                for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar8 = *piVar5;
                  piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
                  piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
                }
                piVar5 = aiStack_34;
                piVar8 = piVar3 + 0x80a;
                for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar8 = *piVar5;
                  piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
                  piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar3 + 8;
              }
              else {
                iVar2 = iVar2 + 1;
                piVar3 = piVar3 + 8;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *in_stack_00000004);
        }
        piVar3 = in_stack_00000004;
        piVar5 = in_stack_00000004;
        do {
          dVar11 = crt_math_c_round_FUN_005fe6b0(*(double *)(piVar3 + 0x802));
          *(char *)(piVar5 + 0x2002) = (char)(int)ROUND(dVar11);
          dVar11 = crt_math_c_round_FUN_005fe6b0(*(double *)(piVar3 + 0x804));
          *(char *)((int)piVar5 + 0x8009) = (char)(int)ROUND(dVar11);
          dVar11 = crt_math_c_round_FUN_005fe6b0(*(double *)(piVar3 + 0x806));
          piVar3 = piVar3 + 8;
          *(char *)((int)piVar5 + 0x800a) = (char)(int)ROUND(dVar11);
          piVar5 = (int *)((int)piVar5 + 3);
        } while (piVar3 != in_stack_00000004 + 0x800);
        return in_stack_00000004 + 0x2002;
      }
      crt_stdio_c_sprintf_FUN_005fdbd0((char *)&iStack_134,"%6.6d",uVar7);
      engine_2d_c_drawText_FUN_00401fd0((char *)&iStack_130,0,0x21);
      if ((uVar7 & 7) == 0) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      }
      iStack_138 = in_stack_00000004[0x1004];
      iStack_134 = in_stack_00000004[0x1005];
      iStack_130 = in_stack_00000004[0x100e];
      iVar2 = 1;
      iStack_12c = in_stack_00000004[0x100f];
      iVar6 = 0;
      piVar3 = in_stack_00000004;
      if (0 < (int)uVar7) {
        do {
          if ((double)CONCAT44 /* combine 2-byte values */(iStack_134,iStack_138) < *(double *)(piVar3 + 0x1014)) {
            iStack_138 = piVar3[0x1014];
            iStack_134 = piVar3[0x1015];
            iStack_130 = piVar3[0x101e];
            iStack_12c = piVar3[0x101f];
            iVar6 = iVar2;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 0x10;
        } while (iVar2 <= (int)uVar7);
      }
      iVar2 = uVar7 + 1;
      if ((double)CONCAT44 /* combine 2-byte values */(iStack_12c,iStack_130) !=
          *(double *)(in_stack_00000004 + iVar6 * 0x10 + 0x1006)) break;
      iStack_13c = iVar2;
      engine_colquant_c_FUN_00440b40();
LAB_0044091a:
      uVar7 = uVar7 + 1;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(iStack_12c,iStack_130) ==
        *(double *)(in_stack_00000004 + iVar6 * 0x10 + 0x1008)) {
      iStack_13c = iVar2;
      engine_colquant_c_FUN_00440c80();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(iStack_12c,iStack_130) ==
        *(double *)(in_stack_00000004 + iVar6 * 0x10 + 0x100a)) {
      iStack_13c = iVar2;
      engine_colquant_c_FUN_00440dc0();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(iStack_12c,iStack_130) !=
        *(double *)(in_stack_00000004 + iVar6 * 0x10 + 0x100c)) goto LAB_0044091a;
    iStack_13c = iVar2;
    engine_colquant_c_FUN_00440f00();
    uVar7 = uVar7 + 1;
  } while( true );
}
