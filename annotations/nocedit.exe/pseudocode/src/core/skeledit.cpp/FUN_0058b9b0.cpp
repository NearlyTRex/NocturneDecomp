// Name: core_skeledit.cpp_FUN_0058b9b0
// Address: 0058b9b0
// Address Range: [[0058b9b0, 0058bc30]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058b9b0()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint core_skeledit_cpp_FUN_0058b9b0(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint extraout_EAX;
  uint extraout_EAX_00;
  float fVar4;
  int extraout_ECX;
  ushort *puVar5;
  float extraout_EDX;
  uint extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_0000000c;
  FILE *in_stack_00000010;
  ulonglong local_4c;
  float local_44;
  float local_40;
  byte local_3c [4];
  float local_38;
  ushort local_34 [2];
  byte local_30 [4];
  byte auStack_2c [4];
  uint local_28;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  float fStack_c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x88);
  iVar6 = 1;
  do {
    iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000010);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar6 = iVar6 + -1, 0 < iVar6));
  iVar6 = 0;
  if (0 < *(int *)(in_stack_0000000c + 0x54)) {
    iVar2 = 0;
    iVar7 = 0;
    fVar8 = extraout_ST0;
    do {
      iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0
                        ((FILE *)0x58ba3a,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",local_34,&local_40,
                         &local_4c,local_30,local_3c,(int)&local_4c + 4,auStack_2c,&local_38,
                         &local_44);
      if (iVar3 != 10) {
        return 0;
      }
      local_14 = local_38;
      fStack_c = 4.0;
      iVar3 = 4;
      fVar4 = local_44;
      do {
        if (*(float *)((int)local_34 + iVar3 + -4) < local_14) {
          local_14 = *(float *)((int)local_34 + iVar3 + -4);
        }
        if (*(float *)((int)&local_44 + iVar3) < fVar4) {
          fVar4 = *(float *)((int)&local_44 + iVar3);
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 != 0xc);
      local_4c = (double)((local_14 + 4.0) * (float)0.00390625);
      dVar11 = crt_math_c_floor_FUN_005feb90((double)fVar8);
      local_18 = (float)((float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX) *
                        (float10)256);
      local_4c._0_4_ =
           (uint)
           ((ulonglong)(double)((fStack_c + fStack_10) * (float)0.00390625) >> 0x20);
      local_20 = extraout_EDX;
      dVar11 = crt_math_c_floor_FUN_005feb90(dVar11);
      fVar8 = (float10)dVar11;
      local_28 = extraout_EAX_00;
      local_24 = extraout_EDX_00;
      fStack_10 = (float)((float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00) *
                         (float10)256);
      if ((int)local_20 < 0) {
        local_20 = 0.0;
      }
      if (*(int *)(in_stack_0000000c + 0xbc) <= (int)local_20) {
        local_20 = 0.0;
      }
      puVar5 = (ushort *)(*(int *)(in_stack_0000000c + 0x7c) + iVar7);
      *(float *)(*(int *)(in_stack_0000000c + 0x90) + iVar2) = local_20;
      iVar3 = 0;
      fVar4 = local_20;
      do {
        uVar1 = *(ushort *)((int)local_34 + iVar3);
        *puVar5 = uVar1;
        fVar9 = ((float10)*(float *)(local_3c + iVar3 + -4) - (float10)local_1c) *
                (float10)256;
        fVar10 = ((float10)*(float *)((int)&local_4c + iVar3) - (float10)fStack_10) *
                 (float10)256;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44 /* combine 2-byte values */(iVar3,CONCAT22 /* combine 2-byte values */((short)((uint)fVar4 >> 0x10),uVar1)));
        local_4c._0_4_ = 0x58bb63;
        dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
        local_18 = (float)(int)ROUND(fVar9);
        fStack_c = (float)(int)ROUND(fVar10);
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
        puVar5 = (ushort *)(extraout_ECX + 2);
        *(short *)(extraout_ECX + 6) = SUB42 /* extract 2-byte value */(local_18,0);
        iVar3 = (int)((ulonglong)dVar11 >> 0x20) + 4;
        *(short *)(extraout_ECX + 0xc) = SUB42 /* extract 2-byte value */(fStack_c,0);
        fVar4 = fStack_c;
      } while (iVar3 != 0xc);
      iVar2 = iVar2 + 4;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x12;
    } while (iVar6 < *(int *)(in_stack_0000000c + 0x54));
  }
  core_skeledit_cpp_FUN_0058ede0();
  return 1;
}
