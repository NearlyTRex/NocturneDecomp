// Name: engine_colquant.c_FUN_004406c0
// Address: 004406c0
// Address Range: [[004406c0, 00440b32]]
// Convention: __cdecl
// Signature: int * __cdecl engine_colquant_c_FUN_004406c0(void)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int * __cdecl engine_colquant_c_FUN_004406c0(void)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  byte bVar11;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int local_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  char local_150 [256];
  int local_50 [11];
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  
  bVar11 = 0;
  memset(in_stack_00000004 + 1,0,0x2000);
  memset(in_stack_00000004 + 0x802,0,0x2000);
  memset(in_stack_00000004 + 0x1002,0,0x4000);
  memset(in_stack_00000004 + 0x2002,0,0x300);
  in_stack_00000004[0x801] = in_stack_00000008;
  *in_stack_00000004 = in_stack_00000010;
  dVar4 = 0.57735027000000005;
  if (0 < in_stack_0000000c) {
    iVar8 = 0;
    do {
      iVar5 = in_stack_00000004[0x801];
      bVar1 = *(byte *)(iVar5 + 1 + iVar8);
      local_1c = (uint)bVar1;
      dVar2 = (double)bVar1;
      bVar1 = *(byte *)(iVar5 + 2 + iVar8);
      local_18 = (uint)bVar1;
      dVar3 = (double)bVar1;
      local_20 = (int)ROUND(ROUND(SQRT(dVar3 * dVar3 +
                                       (double)*(byte *)(iVar5 + iVar8) *
                                       (double)*(byte *)(iVar5 + iVar8) + dVar2 * dVar2) * dVar4));
      iVar8 = iVar8 + 4;
      *(byte *)(iVar5 + -1 + iVar8) = (byte)local_20;
    } while (iVar8 < in_stack_0000000c * 4);
  }
  in_stack_00000004[0x1010] = 0;
  in_stack_00000004[0x1011] = in_stack_0000000c;
  engine_colquant_c_FUN_00441260();
  _sprintf(local_150,"Subdividing histogram array for %d palette entries...\n\n");
  uVar9 = 0;
  engine_2d_c_drawText_FUN_00401fd0(local_150,0,0x16);
  do {
    while( true ) {
      dVar3 = 0.11;
      dVar2 = 0.29999999999999999;
      dVar4 = 0.58999999999999997;
      if (*in_stack_00000004 + -1 <= (int)uVar9) {
        iVar8 = 0;
        piVar6 = in_stack_00000004;
        piVar7 = in_stack_00000004;
        if (0 < *in_stack_00000004) {
          do {
            *(double *)(piVar7 + 0x802) = (double)(short)piVar6[0x1002];
            *(double *)(piVar7 + 0x804) = (double)*(short *)((int)piVar6 + 0x400a);
            iVar5 = piVar6[0x1003];
            piVar7[1] = 0;
            piVar7[2] = 0;
            piVar7[3] = 0;
            piVar7[4] = 0;
            piVar7[5] = 0;
            piVar7[6] = 0;
            piVar7[7] = 0;
            *(double *)(piVar7 + 0x806) = (double)(short)iVar5;
            piVar7[8] = 0;
            iVar8 = iVar8 + 1;
            *(double *)(piVar7 + 0x808) =
                 (double)(short)iVar5 * dVar3 +
                 *(double *)(piVar7 + 0x802) * dVar2 + *(double *)(piVar7 + 0x804) * dVar4;
            piVar6 = piVar6 + 0x10;
            piVar7 = piVar7 + 8;
          } while (iVar8 < *in_stack_00000004);
        }
        local_24 = 0;
        if (0 < *in_stack_00000004) {
          do {
            iVar8 = 0;
            piVar6 = in_stack_00000004;
            while (iVar8 < *in_stack_00000004 + -1) {
              if (*(double *)(piVar6 + 0x810) < *(double *)(piVar6 + 0x808)) {
                piVar7 = piVar6 + 0x802;
                piVar10 = local_50;
                for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar10 = *piVar7;
                  piVar7 = piVar7 + (uint)bVar11 * -2 + 1;
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                piVar7 = piVar6 + 0x80a;
                piVar10 = piVar6 + 0x802;
                for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar10 = *piVar7;
                  piVar7 = piVar7 + (uint)bVar11 * -2 + 1;
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                piVar7 = local_50;
                piVar10 = piVar6 + 0x80a;
                for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar10 = *piVar7;
                  piVar7 = piVar7 + (uint)bVar11 * -2 + 1;
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                iVar8 = iVar8 + 1;
                piVar6 = piVar6 + 8;
              }
              else {
                iVar8 = iVar8 + 1;
                piVar6 = piVar6 + 8;
              }
            }
            local_24 = local_24 + 1;
          } while (local_24 < *in_stack_00000004);
        }
        piVar6 = in_stack_00000004;
        piVar7 = in_stack_00000004;
        do {
          local_20._0_1_ = (byte)(int)ROUND(ROUND(*(double *)(piVar6 + 0x802)));
          *(byte *)(piVar7 + 0x2002) = (byte)local_20;
          local_20._0_1_ = (byte)(int)ROUND(ROUND(*(double *)(piVar6 + 0x804)));
          *(byte *)((int)piVar7 + 0x8009) = (byte)local_20;
          local_20._0_1_ = (byte)(int)ROUND(ROUND(*(double *)(piVar6 + 0x806)));
          piVar6 = piVar6 + 8;
          *(byte *)((int)piVar7 + 0x800a) = (byte)local_20;
          piVar7 = (int *)((int)piVar7 + 3);
        } while (piVar6 != in_stack_00000004 + 0x800);
        return in_stack_00000004 + 0x2002;
      }
      _sprintf(local_150,"%6.6d",uVar9);
      engine_2d_c_drawText_FUN_00401fd0(local_150,0,0x21);
      if ((uVar9 & 7) == 0) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      }
      local_160 = in_stack_00000004[0x1004];
      iStack_15c = in_stack_00000004[0x1005];
      local_158 = in_stack_00000004[0x100e];
      iVar5 = 1;
      iStack_154 = in_stack_00000004[0x100f];
      iVar8 = 0;
      piVar6 = in_stack_00000004;
      if (0 < (int)uVar9) {
        do {
          if ((double)CONCAT44(iStack_15c,local_160) < *(double *)(piVar6 + 0x1014)) {
            local_160 = piVar6[0x1014];
            iStack_15c = piVar6[0x1015];
            local_158 = piVar6[0x101e];
            iStack_154 = piVar6[0x101f];
            iVar8 = iVar5;
          }
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 0x10;
        } while (iVar5 <= (int)uVar9);
      }
      if ((double)CONCAT44(iStack_154,local_158) !=
          *(double *)(in_stack_00000004 + iVar8 * 0x10 + 0x1006)) break;
      engine_colquant_c_FUN_00440b40();
LAB_0044091a:
      uVar9 = uVar9 + 1;
    }
    if ((double)CONCAT44(iStack_154,local_158) ==
        *(double *)(in_stack_00000004 + iVar8 * 0x10 + 0x1008)) {
      engine_colquant_c_FUN_00440c80();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44(iStack_154,local_158) ==
        *(double *)(in_stack_00000004 + iVar8 * 0x10 + 0x100a)) {
      engine_colquant_c_FUN_00440dc0();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44(iStack_154,local_158) !=
        *(double *)(in_stack_00000004 + iVar8 * 0x10 + 0x100c)) goto LAB_0044091a;
    engine_colquant_c_FUN_00440f00();
    uVar9 = uVar9 + 1;
  } while( true );
}
