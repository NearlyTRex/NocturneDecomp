// Name: core_skeledit.cpp_FUN_0058b9b0
// Address: 0058b9b0
// Address Range: [[0058b9b0, 0058bc30]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058b9b0()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint core_skeledit_cpp_FUN_0058b9b0(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  ushort *puVar3;
  int extraout_EDX;
  int extraout_EBX;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  int in_stack_0000000c;
  FILE *in_stack_00000010;
  float local_44;
  float local_40;
  byte local_3c [4];
  float local_38;
  ushort local_34 [2];
  byte local_30 [4];
  byte auStack_2c [4];
  uint local_28;
  uint local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  float fStack_c;
  float fVar9;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x88);
  iVar4 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000010);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < *(int *)(in_stack_0000000c + 0x54)) {
    iVar1 = 0;
    iVar5 = 0;
    do {
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                        ((FILE *)0x58ba3a,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",local_34,&local_40,
                         &stack0xffffffb4,local_30,local_3c,&stack0xffffffb8,auStack_2c,&local_38,
                         &local_44);
      if (iVar2 != 10) {
        return 0;
      }
      local_14 = local_38;
      fStack_c = 4.0;
      iVar2 = 4;
      fVar9 = local_44;
      do {
        if (*(float *)((int)local_34 + iVar2 + -4) < local_14) {
          local_14 = *(float *)((int)local_34 + iVar2 + -4);
        }
        if (*(float *)((int)&local_44 + iVar2) < fVar9) {
          fVar9 = *(float *)((int)&local_44 + iVar2);
        }
        iVar2 = iVar2 + 4;
      } while (iVar2 != 0xc);
      dVar8 = crt_math_c_floor_FUN_005feb90((double)((local_14 + 4.0) * (float)0.00390625));
      local_24 = SUB84 /* extract 2-byte value */(dVar8,0);
      local_20 = (int)((ulonglong)dVar8 >> 0x20);
      local_18 = (float)((float10)dVar8 * (float10)256);
      dVar8 = crt_math_c_floor_FUN_005feb90
                        ((double)((fStack_c + fStack_10) * (float)0.00390625));
      local_28 = SUB84 /* extract 2-byte value */(dVar8,0);
      local_24 = (uint)((ulonglong)dVar8 >> 0x20);
      fStack_10 = (float)((float10)dVar8 * (float10)256);
      if (local_20 < 0) {
        local_20 = 0;
      }
      if (*(int *)(extraout_EBX + 0xbc) <= local_20) {
        local_20 = 0;
      }
      puVar3 = (ushort *)(*(int *)(extraout_EBX + 0x7c) + iVar5);
      *(int *)(*(int *)(extraout_EBX + 0x90) + iVar1) = local_20;
      iVar2 = 0;
      do {
        *puVar3 = *(ushort *)((int)local_34 + iVar2);
        fVar7 = ((float10)*(float *)(auStack_2c + iVar2 + -0x20) - (float10)fStack_10) *
                (float10)256;
        dVar8 = crt_math_c_round_FUN_005fe6b0
                          ((double)(((float10)*(float *)(local_3c + iVar2 + -4) - (float10)local_1c)
                                   * (float10)256));
        fVar6 = (float10)dVar8;
        dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
        local_18 = (float)(int)ROUND(fVar6);
        fStack_c = (float)(int)ROUND(dVar8);
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
        puVar3 = (ushort *)(extraout_ECX + 2);
        *(short *)(extraout_ECX + 6) = SUB42 /* extract 2-byte value */(local_18,0);
        iVar2 = extraout_EDX + 4;
        *(short *)(extraout_ECX + 0xc) = SUB42 /* extract 2-byte value */(fStack_c,0);
      } while (iVar2 != 0xc);
      iVar1 = iVar1 + 4;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x12;
    } while (iVar4 < *(int *)(extraout_EBX + 0x54));
  }
  core_skeledit_cpp_FUN_0058ede0();
  return 1;
}
