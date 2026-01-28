// Name: engine_colquant.c_FUN_004406c0
// Address: 004406c0
// Address Range: [[004406c0, 00440b32]]
// Convention: unknown
// Signature: int * engine_colquant_c_FUN_004406c0(void)

#include "nocturne.h"

int * engine_colquant_c_FUN_004406c0(void)

{
  byte bVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int local_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  char local_150 [256];
  int local_50 [9];
  int iStack_2c;
  int iStack_28;
  int local_24;
  uint local_1c;
  uint local_18;
  
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
      iVar3 = in_stack_00000004[0x801];
      bVar1 = *(byte *)(iVar3 + 1 + iVar6);
      local_1c = (uint)bVar1;
      dVar10 = (double)bVar1;
      bVar1 = *(byte *)(iVar3 + 2 + iVar6);
      local_18 = (uint)bVar1;
      dVar2 = (double)bVar1;
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         (SQRT(dVar2 * dVar2 +
                               (double)*(byte *)(iVar3 + iVar6) * (double)*(byte *)(iVar3 + iVar6) +
                               dVar10 * dVar10) * dVar11);
      local_24 = (int)ROUND(dVar10);
      iVar6 = iVar6 + 4;
      *(byte *)(iVar3 + -1 + iVar6) = (byte)local_24;
    } while (iVar6 < in_stack_0000000c * 4);
  }
  in_stack_00000004[0x1010] = 0;
  in_stack_00000004[0x1011] = in_stack_0000000c;
  engine_colquant_c_FUN_00441260();
  crt_stdio_c_sprintf_FUN_005fdbd0(local_150,"Subdividing histogram array for %d palette entries...\n\n",in_stack_0000000c);
  uVar7 = 0;
  engine_2d_c_drawText_FUN_00401fd0(local_150,0,0x16);
  do {
    while( true ) {
      dVar2 = 0.11;
      dVar10 = 0.29999999999999999;
      dVar11 = 0.58999999999999997;
      if (*in_stack_00000004 + -1 <= (int)uVar7) {
        iVar6 = 0;
        piVar4 = in_stack_00000004;
        piVar5 = in_stack_00000004;
        if (0 < *in_stack_00000004) {
          do {
            *(double *)(piVar5 + 0x802) = (double)(short)piVar4[0x1002];
            *(double *)(piVar5 + 0x804) = (double)*(short *)((int)piVar4 + 0x400a);
            iVar3 = piVar4[0x1003];
            piVar5[1] = 0;
            piVar5[2] = 0;
            piVar5[3] = 0;
            piVar5[4] = 0;
            piVar5[5] = 0;
            piVar5[6] = 0;
            piVar5[7] = 0;
            *(double *)(piVar5 + 0x806) = (double)(short)iVar3;
            piVar5[8] = 0;
            iVar6 = iVar6 + 1;
            *(double *)(piVar5 + 0x808) =
                 (double)(short)iVar3 * dVar2 +
                 *(double *)(piVar5 + 0x802) * dVar10 + *(double *)(piVar5 + 0x804) * dVar11;
            piVar4 = piVar4 + 0x10;
            piVar5 = piVar5 + 8;
          } while (iVar6 < *in_stack_00000004);
        }
        local_24 = 0;
        if (0 < *in_stack_00000004) {
          do {
            iVar6 = 0;
            piVar4 = in_stack_00000004;
            while (iVar6 < *in_stack_00000004 + -1) {
              if (*(double *)(piVar4 + 0x810) < *(double *)(piVar4 + 0x808)) {
                piVar5 = piVar4 + 0x802;
                piVar8 = local_50;
                for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar8 = *piVar5;
                  piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
                  piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
                }
                piVar5 = piVar4 + 0x80a;
                piVar8 = piVar4 + 0x802;
                for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar8 = *piVar5;
                  piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
                  piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
                }
                piVar5 = local_50;
                piVar8 = piVar4 + 0x80a;
                for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar8 = *piVar5;
                  piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
                  piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
                }
                iVar6 = iVar6 + 1;
                piVar4 = piVar4 + 8;
              }
              else {
                iVar6 = iVar6 + 1;
                piVar4 = piVar4 + 8;
              }
            }
            local_24 = local_24 + 1;
          } while (local_24 < *in_stack_00000004);
        }
        piVar4 = in_stack_00000004;
        piVar5 = in_stack_00000004;
        do {
          dVar11 = crt_math_c_round_FUN_005fe6b0(*(double *)(piVar4 + 0x802));
          local_24 = (int)ROUND(dVar11);
          *(byte *)(piVar5 + 0x2002) = (byte)local_24;
          dVar11 = crt_math_c_round_FUN_005fe6b0(*(double *)(piVar4 + 0x804));
          iStack_28 = (int)ROUND(dVar11);
          *(byte *)((int)piVar5 + 0x8009) = (byte)iStack_28;
          dVar11 = crt_math_c_round_FUN_005fe6b0(*(double *)(piVar4 + 0x806));
          iStack_2c = (int)ROUND(dVar11);
          piVar4 = piVar4 + 8;
          *(byte *)((int)piVar5 + 0x800a) = (byte)iStack_2c;
          piVar5 = (int *)((int)piVar5 + 3);
        } while (piVar4 != in_stack_00000004 + 0x800);
        return in_stack_00000004 + 0x2002;
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(local_150,"%6.6d",uVar7);
      engine_2d_c_drawText_FUN_00401fd0(local_150,0,0x21);
      if ((uVar7 & 7) == 0) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      }
      local_160 = in_stack_00000004[0x1004];
      iStack_15c = in_stack_00000004[0x1005];
      local_158 = in_stack_00000004[0x100e];
      iVar3 = 1;
      iStack_154 = in_stack_00000004[0x100f];
      iVar6 = 0;
      piVar4 = in_stack_00000004;
      if (0 < (int)uVar7) {
        do {
          if ((double)CONCAT44(iStack_15c,local_160) < *(double *)(piVar4 + 0x1014)) {
            local_160 = piVar4[0x1014];
            iStack_15c = piVar4[0x1015];
            local_158 = piVar4[0x101e];
            iStack_154 = piVar4[0x101f];
            iVar6 = iVar3;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 0x10;
        } while (iVar3 <= (int)uVar7);
      }
      if ((double)CONCAT44(iStack_154,local_158) !=
          *(double *)(in_stack_00000004 + iVar6 * 0x10 + 0x1006)) break;
      engine_colquant_c_FUN_00440b40();
LAB_0044091a:
      uVar7 = uVar7 + 1;
    }
    if ((double)CONCAT44(iStack_154,local_158) ==
        *(double *)(in_stack_00000004 + iVar6 * 0x10 + 0x1008)) {
      engine_colquant_c_FUN_00440c80();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44(iStack_154,local_158) ==
        *(double *)(in_stack_00000004 + iVar6 * 0x10 + 0x100a)) {
      engine_colquant_c_FUN_00440dc0();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44(iStack_154,local_158) !=
        *(double *)(in_stack_00000004 + iVar6 * 0x10 + 0x100c)) goto LAB_0044091a;
    engine_colquant_c_FUN_00440f00();
    uVar7 = uVar7 + 1;
  } while( true );
}
