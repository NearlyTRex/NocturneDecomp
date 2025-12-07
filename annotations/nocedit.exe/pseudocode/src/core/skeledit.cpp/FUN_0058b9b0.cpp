// Name: core_skeledit.cpp_FUN_0058b9b0
// Address: 0058b9b0
// Address Range: [[0058b9b0, 0058bc30]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058b9b0()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint core_skeledit_cpp_FUN_0058b9b0(void)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  ushort *puVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  int iVar9;
  float10 extraout_ST0;
  float10 fVar10;
  double dVar11;
  double dVar12;
  int in_stack_0000000c;
  FILE *in_stack_00000010;
  ulonglong local_4c;
  float local_44 [2];
  byte local_3c [4];
  float local_38;
  ushort local_34 [2];
  byte local_30 [4];
  byte auStack_2c [4];
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  float fStack_c;
  float fVar13;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x88);
  iVar8 = 1;
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000010);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar8 = iVar8 + -1, 0 < iVar8));
  iVar8 = 0;
  if (0 < *(int *)(in_stack_0000000c + 0x54)) {
    iVar3 = 0;
    iVar9 = 0;
    fVar10 = extraout_ST0;
    do {
      iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0
                        ((FILE *)0x58ba3a,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",local_34,local_44 + 1,
                         &local_4c,local_30,local_3c,(int)&local_4c + 4,auStack_2c,&local_38,
                         local_44);
      if (iVar4 != 10) {
        return 0;
      }
      local_14 = local_38;
      fStack_c = 4.0;
      iVar4 = 4;
      fVar5 = local_44[0];
      fVar13 = local_44[0];
      do {
        bVar2 = *(float *)((int)local_34 + iVar4 + -4) < local_14;
        fVar5 = (float)((uint)CONCAT21 /* combine 2-byte values */((short)((uint)fVar5 >> 0x10),bVar2) << 8);
        if (bVar2) {
          fVar5 = *(float *)((int)local_34 + iVar4 + -4);
          local_14 = fVar5;
        }
        fVar1 = *(float *)((int)local_44 + iVar4);
        fVar5 = (float)CONCAT22 /* combine 2-byte values */((short)((uint)fVar5 >> 0x10),
                                (ushort)(fVar1 < fVar13) << 8 |
                                (ushort)(NAN(fVar1) || NAN(fVar13)) << 10 |
                                (ushort)(fVar1 == fVar13) << 0xe);
        if (fVar1 < fVar13) {
          fVar5 = *(float *)((int)local_44 + iVar4);
          fVar13 = fVar5;
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 != 0xc);
      local_4c = (double)((local_14 + 4.0) * (float)0.00390625);
      dVar11 = crt_math_c_floor_FUN_005feb90((double)fVar10);
      local_18 = (float)((float10)(double)CONCAT44 /* combine 2-byte values */(0xc,fVar5) * (float10)256);
      local_4c._0_4_ =
           (uint)
           ((ulonglong)(double)((fStack_c + fStack_10) * (float)0.00390625) >> 0x20);
      local_24 = fVar5;
      local_20 = iVar4;
      dVar11 = crt_math_c_floor_FUN_005feb90(dVar11);
      fVar10 = (float10)dVar11;
      fStack_10 = (float)((float10)(double)CONCAT44 /* combine 2-byte values */(0xc,fVar5) * (float10)256);
      if (local_20 < 0) {
        local_20 = 0;
      }
      if (*(int *)(in_stack_0000000c + 0xbc) <= local_20) {
        local_20 = 0;
      }
      iVar4 = *(int *)(in_stack_0000000c + 0x7c);
      *(int *)(*(int *)(in_stack_0000000c + 0x90) + iVar3) = local_20;
      iVar7 = 0;
      local_24 = 1.68156e-44;
      puVar6 = (ushort *)(iVar4 + iVar9);
      local_28 = fVar5;
      do {
        *puVar6 = *(ushort *)((int)local_34 + iVar7);
        fVar5 = *(float *)((int)&local_4c + iVar7) - fStack_10;
        fVar13 = (float)256;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)((*(float *)(local_3c + iVar7 + -4) - local_1c) * fVar13));
        local_4c._0_4_ = 0x58bb63;
        dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fVar5 * fVar13));
        local_18 = (float)(int)ROUND(dVar11);
        fStack_c = (float)(int)ROUND(dVar12);
        if ((int)local_18 < 0) {
          local_18 = 0.0;
        }
        else if (0xffff < (int)local_18) {
          local_18 = 9.18341e-41;
        }
        if ((int)fStack_c < 0) {
          fStack_c = 0.0;
        }
        else if (0xffff < (int)fStack_c) {
          fStack_c = 9.18341e-41;
        }
        puVar6[3] = SUB42 /* extract 2-byte value */(local_18,0);
        iVar7 = iVar7 + 4;
        puVar6[6] = SUB42 /* extract 2-byte value */(fStack_c,0);
        puVar6 = puVar6 + 1;
      } while (iVar7 != 0xc);
      iVar3 = iVar3 + 4;
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0x12;
    } while (iVar8 < *(int *)(in_stack_0000000c + 0x54));
  }
  core_skeledit_cpp_FUN_0058ede0();
  return 1;
}
