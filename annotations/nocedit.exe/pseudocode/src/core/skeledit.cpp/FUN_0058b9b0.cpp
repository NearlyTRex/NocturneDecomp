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
  float unaff_EBP;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  int in_stack_00000004;
  FILE *in_stack_00000008;
  float local_54 [4];
  byte local_44 [4];
  float local_40;
  byte local_3c [4];
  uint local_38;
  uint local_34;
  int local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x88);
  iVar4 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x54)) {
    iVar1 = 0;
    iVar5 = 0;
    do {
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (in_stack_00000008,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",&local_28,local_3c,
                         local_54 + 3,local_54,&local_38,local_44,local_54 + 1,&local_34,&local_40,
                         local_54 + 2);
      if (iVar2 != 10) {
        return 0;
      }
      local_24 = local_54[3];
      local_1c = 4.0;
      iVar2 = 4;
      local_18 = local_54[0];
      do {
        if (*(float *)(local_44 + iVar2 + -4) < local_24) {
          local_24 = *(float *)(local_44 + iVar2 + -4);
        }
        if (*(float *)((int)local_54 + iVar2) < local_18) {
          local_18 = *(float *)((int)local_54 + iVar2);
        }
        iVar2 = iVar2 + 4;
      } while (iVar2 != 0xc);
      dVar8 = crt_math_c_floor_FUN_005feb90((double)((local_24 + 4.0) * (float)0.00390625));
      local_34 = SUB84 /* extract 2-byte value */(dVar8,0);
      local_30 = (int)((ulonglong)dVar8 >> 0x20);
      local_28 = (float)((float10)dVar8 * (float10)256);
      dVar8 = crt_math_c_floor_FUN_005feb90
                        ((double)((local_1c + local_20) * (float)0.00390625));
      local_38 = SUB84 /* extract 2-byte value */(dVar8,0);
      local_34 = (uint)((ulonglong)dVar8 >> 0x20);
      local_20 = (float)((float10)dVar8 * (float10)256);
      if (local_30 < 0) {
        local_30 = 0;
      }
      if (*(int *)(extraout_EBX + 0xbc) <= local_30) {
        local_30 = 0;
      }
      puVar3 = (ushort *)(*(int *)(extraout_EBX + 0x7c) + iVar5);
      *(int *)(*(int *)(extraout_EBX + 0x90) + iVar1) = local_30;
      iVar2 = 0;
      do {
        *puVar3 = *(ushort *)((int)&local_34 + iVar2);
        fVar7 = ((float10)*(float *)((int)local_54 + iVar2 + 8U) - (float10)unaff_EBP) *
                (float10)256;
        local_54[1] = 8.148736e-39;
        dVar8 = crt_math_c_round_FUN_005fe6b0
                          ((double)(((float10)*(float *)((int)&local_40 + iVar2) - (float10)local_1c
                                    ) * (float10)256));
        fVar6 = (float10)dVar8;
        local_54[0] = 8.148745e-39;
        dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
        local_20 = (float)(int)ROUND(fVar6);
        local_14 = (int)ROUND(dVar8);
        if ((int)local_20 < 0) {
          local_20 = 0.0;
        }
        else if (0xffff < (int)local_20) {
          local_20 = 9.18341e-41;
        }
        if (local_14 < 0) {
          local_14 = 0;
        }
        else if (0xffff < local_14) {
          local_14 = 0xffff;
        }
        puVar3 = (ushort *)(extraout_ECX + 2);
        *(short *)(extraout_ECX + 6) = SUB42 /* extract 2-byte value */(local_20,0);
        iVar2 = extraout_EDX + 4;
        *(short *)(extraout_ECX + 0xc) = (short)local_14;
      } while (iVar2 != 0xc);
      iVar1 = iVar1 + 4;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x12;
    } while (iVar4 < *(int *)(extraout_EBX + 0x54));
  }
  core_skeledit_cpp_FUN_0058ede0();
  return 1;
}
