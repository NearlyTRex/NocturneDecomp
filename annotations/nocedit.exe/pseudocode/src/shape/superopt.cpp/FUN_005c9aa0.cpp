// Name: shape_superopt.cpp_FUN_005c9aa0
// Address: 005c9aa0
// Address Range: [[005c9aa0, 005ca58d]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c9aa0()
// Cross-references:
//   shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0 (005c84c0) at 005c890d [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c8b50 (005c8b50) at 005c8cb0 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c8e70 (005c8e70) at 005c8fcf [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c9500 (005c9500) at 005c976c [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00654242
//   undefined4 DAT_0065424a

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 shape_superopt.cpp_FUN_005c9aa0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4
   param_7) */

void shape_superopt_cpp_FUN_005c9aa0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double *pdVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  BADSPACEBASE *in_ESP;
  double *pdVar8;
  double *pdVar9;
  int in_stack_00000004;
  double *in_stack_00000008;
  double *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int *in_stack_00000018;
  int *in_stack_0000001c;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined4 local_f8 [4];
  undefined4 local_e8;
  undefined4 local_e4;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double *local_40;
  int local_3c;
  undefined8 *local_38;
  undefined8 *local_34;
  int local_30;
  double *local_2c;
  uint local_28;
  int local_24;
  double *local_20;
  int local_1c;
  int local_18;
  
  local_28 = 0;
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    local_1c = 0;
    do {
      puVar7 = (undefined4 *)(*(int *)(in_stack_00000004 + 0x30) + local_1c);
      local_1a0 = *in_stack_00000008 * *in_stack_0000000c;
      local_198 = in_stack_00000008[1] * in_stack_0000000c[1];
      local_190 = in_stack_00000008[2] * in_stack_0000000c[2];
      pdVar8 = &local_1a0;
      pdVar9 = &local_c8;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)pdVar9 = *(undefined4 *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      local_158 = *in_stack_0000000c * *(double *)(puVar7 + 4);
      local_150 = in_stack_0000000c[1] * *(double *)(puVar7 + 6);
      local_148 = in_stack_0000000c[2] * *(double *)(puVar7 + 8);
      pdVar8 = &local_158;
      pdVar9 = &local_128;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)pdVar9 = *(undefined4 *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      local_1e0 = -(local_c8 + local_c0 + local_b8);
      dVar3 = local_128 + local_120;
      local_e0 = *in_stack_0000000c * *(double *)(puVar7 + 10);
      local_d8 = in_stack_0000000c[1] * *(double *)(puVar7 + 0xc);
      local_d0 = in_stack_0000000c[2] * *(double *)(puVar7 + 0xe);
      pdVar8 = &local_e0;
      pdVar9 = &local_188;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)pdVar9 = *(undefined4 *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      local_1d8 = dVar3 + local_118 + local_1e0;
      local_1e0 = local_188 + local_180 + local_178 + local_1e0;
      if ((local_1d8 < _DAT_00654242) && (_DAT_0065424a < local_1d8)) {
        local_1d8 = 0.0;
      }
      if ((local_1e0 < _DAT_00654242) && (_DAT_0065424a < local_1e0)) {
        local_1e0 = 0.0;
      }
      if ((((((ulonglong)local_1d8 & 0x7fffffff00000000) != 0) || (local_1d8._0_4_ != 0)) ||
          (((ulonglong)local_1e0 & 0x7fffffff00000000) != 0)) || (local_1e0._0_4_ != 0)) {
        if ((((ulonglong)local_1d8 & 0x7fffffff00000000) == 0) && (local_1d8._0_4_ == 0)) {
          local_3c = 0;
        }
        else if (0.0 <= local_1d8) {
          local_3c = 1;
        }
        else {
          local_3c = -1;
        }
        if ((((ulonglong)local_1e0 & 0x7fffffff00000000) == 0) && (local_1e0._0_4_ == 0)) {
          local_24 = 0;
        }
        else if (0.0 <= local_1e0) {
          local_24 = 1;
        }
        else {
          local_24 = -1;
        }
        local_1d8 = local_1d8 / (local_1e0 - local_1d8);
        local_30 = local_24;
        local_2c = (double *)(puVar7 + 4);
        local_20 = (double *)(puVar7 + 10);
        local_1d0 = *(double *)(puVar7 + 4) - *(double *)(puVar7 + 10);
        local_1c8 = *(double *)(puVar7 + 6) - *(double *)(puVar7 + 0xc);
        local_1c0 = *(double *)(puVar7 + 8) - *(double *)(puVar7 + 0xe);
        pdVar8 = &local_1d0;
        pdVar9 = &local_1b8;
        for (iVar6 = 6; pdVar4 = local_2c, iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pdVar9 = *(undefined4 *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + 4);
          pdVar9 = (double *)((int)pdVar9 + 4);
        }
        local_110 = local_1b8 * local_1d8;
        local_108 = local_1b0 * local_1d8;
        local_100 = local_1a8 * local_1d8;
        pdVar8 = &local_110;
        pdVar9 = &local_140;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)pdVar9 = *(undefined4 *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + 4);
          pdVar9 = (double *)((int)pdVar9 + 4);
        }
        local_170 = *pdVar4 + local_140;
        local_168 = pdVar4[1] + local_138;
        local_160 = pdVar4[2] + local_130;
        pdVar8 = &local_170;
        puVar5 = local_f8;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar5 = *(undefined4 *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + 4);
          puVar5 = puVar5 + 1;
        }
        pdVar8 = (double *)(puVar7 + 0x10);
        local_40 = (double *)(puVar7 + 0x14);
        local_90 = *pdVar8 - *local_40;
        local_88 = *(double *)(puVar7 + 0x12) - *(double *)(puVar7 + 0x16);
        local_60 = local_90;
        local_58 = local_88;
        local_70 = local_90 * local_1d8;
        local_68 = local_88 * local_1d8;
        local_a0 = local_70;
        local_98 = local_68;
        local_80 = *pdVar8 + local_70;
        local_78 = *(double *)(puVar7 + 0x12) + local_68;
        local_b0 = local_80;
        local_a8 = local_78;
        if ((local_3c == 1) || (local_24 == 1)) {
          if ((local_3c == -1) || (local_30 == -1)) {
            local_34 = (undefined8 *)(puVar7 + 0x14);
            local_38 = (undefined8 *)(puVar7 + 0x10);
            puVar1 = (undefined8 *)(puVar7 + 10);
            puVar2 = (undefined8 *)(puVar7 + 4);
            if (local_3c == -1) {
              puVar5 = (undefined4 *)(*in_stack_00000018 * 0x60 + in_stack_00000010);
              *puVar5 = *puVar7;
              puVar5[1] = puVar7[1];
              puVar5[2] = puVar7[2];
              puVar5[3] = puVar7[3];
              *(undefined8 *)(puVar5 + 4) = *puVar2;
              *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar7 + 6);
              *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar7 + 8);
              *(undefined8 *)(puVar5 + 10) = *puVar1;
              *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar7 + 0xc);
              *(undefined8 *)(puVar5 + 0xe) = *(undefined8 *)(puVar7 + 0xe);
              *(undefined8 *)(puVar5 + 0x10) = *local_38;
              *(undefined8 *)(puVar5 + 0x12) = *(undefined8 *)(puVar7 + 0x12);
              *(undefined8 *)(puVar5 + 0x14) = *local_34;
              *(undefined8 *)(puVar5 + 0x16) = *(undefined8 *)(puVar7 + 0x16);
              iVar6 = *in_stack_00000018 * 0x60 + in_stack_00000010;
              *(undefined4 *)(iVar6 + 0x28) = local_f8[0];
              *(undefined4 *)(iVar6 + 0x2c) = local_f8[1];
              *(undefined4 *)(iVar6 + 0x30) = local_f8[2];
              *(undefined4 *)(iVar6 + 0x34) = local_f8[3];
              *(undefined4 *)(iVar6 + 0x38) = local_e8;
              *(undefined4 *)(iVar6 + 0x3c) = local_e4;
              iVar6 = *in_stack_00000018 * 0x60 + in_stack_00000010;
              *(double *)(iVar6 + 0x50) = local_80;
              *(double *)(iVar6 + 0x58) = local_78;
              *(undefined4 *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 8) = 0xffffffff;
              *(undefined4 *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 0xc) = 0;
              *in_stack_00000018 = *in_stack_00000018 + 1;
              local_18 = *in_stack_0000001c * 0x60;
              puVar5 = (undefined4 *)(in_stack_00000014 + *in_stack_0000001c * 0x60);
              *puVar5 = *puVar7;
              puVar5[1] = puVar7[1];
              puVar5[2] = puVar7[2];
              puVar5[3] = puVar7[3];
              puVar5[4] = *(undefined4 *)puVar2;
              puVar5[5] = puVar7[5];
              puVar5[6] = puVar7[6];
              puVar5[7] = puVar7[7];
              puVar5[8] = puVar7[8];
              puVar5[9] = puVar7[9];
              puVar5[10] = *(undefined4 *)puVar1;
              puVar5[0xb] = puVar7[0xb];
              puVar5[0xc] = puVar7[0xc];
              puVar5[0xd] = puVar7[0xd];
              puVar5[0xe] = puVar7[0xe];
              puVar5[0xf] = puVar7[0xf];
              puVar5[0x10] = *(undefined4 *)local_38;
              puVar5[0x11] = puVar7[0x11];
              puVar5[0x12] = puVar7[0x12];
              puVar5[0x13] = puVar7[0x13];
              puVar5[0x14] = *(undefined4 *)local_34;
              puVar5[0x15] = puVar7[0x15];
              puVar5[0x16] = puVar7[0x16];
              puVar5[0x17] = puVar7[0x17];
              iVar6 = *in_stack_0000001c * 0x60 + in_stack_00000014;
              *(undefined4 *)(iVar6 + 0x10) = local_f8[0];
              *(undefined4 *)(iVar6 + 0x14) = local_f8[1];
              *(undefined4 *)(iVar6 + 0x18) = local_f8[2];
              *(undefined4 *)(iVar6 + 0x1c) = local_f8[3];
              *(undefined4 *)(iVar6 + 0x20) = local_e8;
              *(undefined4 *)(iVar6 + 0x24) = local_e4;
              iVar6 = *in_stack_0000001c * 0x60 + in_stack_00000014;
              *(double *)(iVar6 + 0x40) = local_80;
              *(double *)(iVar6 + 0x48) = local_78;
              *(undefined4 *)(*in_stack_0000001c * 0x60 + in_stack_00000014 + 8) = 0;
              *(undefined4 *)(*in_stack_0000001c * 0x60 + in_stack_00000014 + 0xc) = 1;
              *in_stack_0000001c = *in_stack_0000001c + 1;
            }
            else {
              puVar5 = (undefined4 *)(in_stack_00000014 + *in_stack_0000001c * 0x60);
              *puVar5 = *puVar7;
              puVar5[1] = puVar7[1];
              puVar5[2] = puVar7[2];
              puVar5[3] = puVar7[3];
              *(undefined8 *)(puVar5 + 4) = *puVar2;
              *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar7 + 6);
              *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar7 + 8);
              *(undefined8 *)(puVar5 + 10) = *puVar1;
              *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar7 + 0xc);
              *(undefined8 *)(puVar5 + 0xe) = *(undefined8 *)(puVar7 + 0xe);
              *(undefined8 *)(puVar5 + 0x10) = *local_38;
              *(undefined8 *)(puVar5 + 0x12) = *(undefined8 *)(puVar7 + 0x12);
              *(undefined8 *)(puVar5 + 0x14) = *local_34;
              *(undefined8 *)(puVar5 + 0x16) = *(undefined8 *)(puVar7 + 0x16);
              iVar6 = in_stack_00000014 + *in_stack_0000001c * 0x60;
              *(undefined4 *)(iVar6 + 0x28) = local_f8[0];
              *(undefined4 *)(iVar6 + 0x2c) = local_f8[1];
              *(undefined4 *)(iVar6 + 0x30) = local_f8[2];
              *(undefined4 *)(iVar6 + 0x34) = local_f8[3];
              *(undefined4 *)(iVar6 + 0x38) = local_e8;
              *(undefined4 *)(iVar6 + 0x3c) = local_e4;
              iVar6 = in_stack_00000014 + *in_stack_0000001c * 0x60;
              *(double *)(iVar6 + 0x50) = local_80;
              *(double *)(iVar6 + 0x58) = local_78;
              *(undefined4 *)(in_stack_00000014 + *in_stack_0000001c * 0x60 + 8) = 1;
              local_18 = *in_stack_0000001c * 0x60;
              *(undefined4 *)(in_stack_00000014 + *in_stack_0000001c * 0x60 + 0xc) = 0;
              *in_stack_0000001c = *in_stack_0000001c + 1;
              puVar5 = (undefined4 *)(*in_stack_00000018 * 0x60 + in_stack_00000010);
              *puVar5 = *puVar7;
              puVar5[1] = puVar7[1];
              puVar5[2] = puVar7[2];
              puVar5[3] = puVar7[3];
              puVar5[4] = *(undefined4 *)puVar2;
              puVar5[5] = puVar7[5];
              puVar5[6] = puVar7[6];
              puVar5[7] = puVar7[7];
              puVar5[8] = puVar7[8];
              puVar5[9] = puVar7[9];
              puVar5[10] = *(undefined4 *)puVar1;
              puVar5[0xb] = puVar7[0xb];
              puVar5[0xc] = puVar7[0xc];
              puVar5[0xd] = puVar7[0xd];
              puVar5[0xe] = puVar7[0xe];
              puVar5[0xf] = puVar7[0xf];
              puVar5[0x10] = *(undefined4 *)local_38;
              puVar5[0x11] = puVar7[0x11];
              puVar5[0x12] = puVar7[0x12];
              puVar5[0x13] = puVar7[0x13];
              puVar5[0x14] = *(undefined4 *)local_34;
              puVar5[0x15] = puVar7[0x15];
              puVar5[0x16] = puVar7[0x16];
              puVar5[0x17] = puVar7[0x17];
              iVar6 = *in_stack_00000018 * 0x60 + in_stack_00000010;
              *(undefined4 *)(iVar6 + 0x10) = local_f8[0];
              *(undefined4 *)(iVar6 + 0x14) = local_f8[1];
              *(undefined4 *)(iVar6 + 0x18) = local_f8[2];
              *(undefined4 *)(iVar6 + 0x1c) = local_f8[3];
              *(undefined4 *)(iVar6 + 0x20) = local_e8;
              *(undefined4 *)(iVar6 + 0x24) = local_e4;
              iVar6 = *in_stack_00000018 * 0x60 + in_stack_00000010;
              *(double *)(iVar6 + 0x40) = local_80;
              *(double *)(iVar6 + 0x48) = local_78;
              *(undefined4 *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 8) = 0;
              *(undefined4 *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 0xc) = 0xffffffff;
              *in_stack_00000018 = *in_stack_00000018 + 1;
            }
          }
          else {
            puVar5 = (undefined4 *)(*in_stack_0000001c * 0x60 + in_stack_00000014);
            *puVar5 = *puVar7;
            puVar5[1] = puVar7[1];
            puVar5[2] = puVar7[2];
            puVar5[3] = puVar7[3];
            *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar7 + 4);
            *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar7 + 6);
            *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar7 + 8);
            *(undefined8 *)(puVar5 + 10) = *(undefined8 *)(puVar7 + 10);
            *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar7 + 0xc);
            *(undefined8 *)(puVar5 + 0xe) = *(undefined8 *)(puVar7 + 0xe);
            *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
            *(undefined8 *)(puVar5 + 0x12) = *(undefined8 *)(puVar7 + 0x12);
            puVar5[0x14] = puVar7[0x14];
            puVar5[0x15] = puVar7[0x15];
            puVar5[0x16] = puVar7[0x16];
            puVar5[0x17] = puVar7[0x17];
            *(int *)(*in_stack_0000001c * 0x60 + in_stack_00000014 + 8) = local_3c;
            *(int *)(*in_stack_0000001c * 0x60 + in_stack_00000014 + 0xc) = local_30;
            *in_stack_0000001c = *in_stack_0000001c + 1;
          }
        }
        else {
          puVar5 = (undefined4 *)(*in_stack_00000018 * 0x60 + in_stack_00000010);
          *puVar5 = *puVar7;
          puVar5[1] = puVar7[1];
          puVar5[2] = puVar7[2];
          puVar5[3] = puVar7[3];
          *(double *)(puVar5 + 4) = *local_2c;
          *(double *)(puVar5 + 6) = local_2c[1];
          *(double *)(puVar5 + 8) = local_2c[2];
          *(double *)(puVar5 + 10) = *local_20;
          *(double *)(puVar5 + 0xc) = local_20[1];
          *(double *)(puVar5 + 0xe) = local_20[2];
          puVar5[0x10] = *(undefined4 *)pdVar8;
          puVar5[0x11] = puVar7[0x11];
          puVar5[0x12] = puVar7[0x12];
          puVar5[0x13] = puVar7[0x13];
          puVar5[0x14] = *(undefined4 *)local_40;
          puVar5[0x15] = puVar7[0x15];
          puVar5[0x16] = puVar7[0x16];
          puVar5[0x17] = puVar7[0x17];
          *(int *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 8) = local_3c;
          *(int *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 0xc) = local_24;
          *in_stack_00000018 = *in_stack_00000018 + 1;
        }
      }
      local_28 = local_28 + 1;
      local_1c = local_1c + 0x60;
    } while (local_28 < *(uint *)(in_stack_00000004 + 0x2c));
  }
  return;
}


// Assembly code:
// 005c9aa0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005c9aa0
// 005c9aa1: PUSH ESI
// 005c9aa2: PUSH EDI
// 005c9aa3: PUSH EBP
// 005c9aa4: MOV EBP,ESP
// 005c9aa6: SUB ESP,0x1cc
// 005c9aac: AND ESP,0xfffffff8
// 005c9aaf: MOV EBX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005c9ab2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c9ab5: XOR EDX,EDX
// 005c9ab7: MOV ECX,dword ptr [EAX + 0x2c]
// 005c9aba: MOV dword ptr [ESP + 0x1b8],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005c9ac1: TEST ECX,ECX
// 005c9ac3: JBE 0x005c9c96
//   XREF to: 005c9c96 (CONDITIONAL_JUMP)
// 005c9ac9: MOV dword ptr [ESP + 0x1c4],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c9ad0: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_005c9ad0
//   XREF to: Stack[0x8] (READ)
// 005c9ad3: FLD double ptr [EAX]
// 005c9ad5: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005c9ad8: FMUL double ptr [EAX]
// 005c9ada: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c9add: FLD double ptr [EAX + 0x8]
// 005c9ae0: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005c9ae3: FMUL double ptr [EAX + 0x8]
// 005c9ae6: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c9ae9: FLD double ptr [EAX + 0x10]
// 005c9aec: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005c9aef: FMUL double ptr [EAX + 0x10]
// 005c9af2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c9af5: MOV EDI,dword ptr [ESP + 0x1c4]
//   XREF to: Stack[-0x1c] (READ)
// 005c9afc: MOV ECX,0x6
// 005c9b01: MOV EDX,dword ptr [EDX + 0x30]
// 005c9b04: LEA ESI,[ESP + 0x40]
//   XREF to: Stack[-0x1a0] (DATA)
// 005c9b08: ADD EDX,EDI
// 005c9b0a: LEA EDI,[ESP + 0x118]
//   XREF to: Stack[-0xc8] (DATA)
// 005c9b11: FXCH ST2
// 005c9b13: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x1a0] (WRITE)
// 005c9b17: FSTP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x198] (WRITE)
// 005c9b1b: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x190] (WRITE)
// 005c9b1f: MOVSD.REP ES:EDI,ESI
// 005c9b21: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005c9b24: LEA EAX,[EDX + 0x10]
// 005c9b27: FLD double ptr [ECX]
// 005c9b29: FMUL double ptr [EAX]
// 005c9b2b: FLD double ptr [ECX + 0x8]
// 005c9b2e: FMUL double ptr [EAX + 0x8]
// 005c9b31: FLD double ptr [ECX + 0x10]
// 005c9b34: FMUL double ptr [EAX + 0x10]
// 005c9b37: LEA EDI,[ESP + 0xb8]
//   XREF to: Stack[-0x128] (DATA)
// 005c9b3e: LEA ESI,[ESP + 0x88]
//   XREF to: Stack[-0x158] (DATA)
// 005c9b45: MOV ECX,0x6
// 005c9b4a: FXCH ST2
// 005c9b4c: FSTP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x158] (WRITE)
// 005c9b53: FSTP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x150] (WRITE)
// 005c9b5a: FSTP double ptr [ESP + 0x98]
//   XREF to: Stack[-0x148] (WRITE)
// 005c9b61: MOVSD.REP ES:EDI,ESI
// 005c9b63: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005c9b66: LEA EAX,[EDX + 0x28]
// 005c9b69: FLD double ptr [ECX]
// 005c9b6b: FMUL double ptr [EAX]
// 005c9b6d: FLD double ptr [ESP + 0x118]
//   XREF to: Stack[-0xc8] (READ)
// 005c9b74: FADD double ptr [ESP + 0x120]
//   XREF to: Stack[-0xc0] (READ)
// 005c9b7b: FLD double ptr [ECX + 0x8]
// 005c9b7e: FMUL double ptr [EAX + 0x8]
// 005c9b81: FXCH
// 005c9b83: FADD double ptr [ESP + 0x128]
//   XREF to: Stack[-0xb8] (READ)
// 005c9b8a: FLD double ptr [ECX + 0x10]
// 005c9b8d: FMUL double ptr [EAX + 0x10]
// 005c9b90: FXCH
// 005c9b92: FCHS
// 005c9b94: FLD double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x128] (READ)
// 005c9b9b: LEA EDI,[ESP + 0x58]
//   XREF to: Stack[-0x188] (DATA)
// 005c9b9f: LEA ESI,[ESP + 0x100]
//   XREF to: Stack[-0xe0] (DATA)
// 005c9ba6: FADD double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x120] (READ)
// 005c9bad: MOV ECX,0x6
// 005c9bb2: FXCH ST4
// 005c9bb4: FSTP double ptr [ESP + 0x100]
//   XREF to: Stack[-0xe0] (WRITE)
// 005c9bbb: FXCH ST2
// 005c9bbd: FSTP double ptr [ESP + 0x108]
//   XREF to: Stack[-0xd8] (WRITE)
// 005c9bc4: FSTP double ptr [ESP + 0x110]
//   XREF to: Stack[-0xd0] (WRITE)
// 005c9bcb: MOVSD.REP ES:EDI,ESI
// 005c9bcd: FXCH
// 005c9bcf: FADD double ptr [ESP + 0xc8]
//   XREF to: Stack[-0x118] (READ)
// 005c9bd6: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x188] (READ)
// 005c9bda: FADD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x180] (READ)
// 005c9bde: FXCH
// 005c9be0: FADD ST0,ST2
// 005c9be2: FXCH
// 005c9be4: FADD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x178] (READ)
// 005c9be8: FXCH
// 005c9bea: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1d8] (WRITE)
// 005c9bee: FADDP
// 005c9bf0: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1d8] (READ)
// 005c9bf4: FXCH
// 005c9bf6: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1e0] (DATA)
// 005c9bf9: FCOMP double ptr [0x00654242]
//   XREF to: 00654242 (READ)
// 005c9bff: FNSTSW AX
// 005c9c01: SAHF
// 005c9c02: JNC 0x005c9c1d
//   XREF to: 005c9c1d (CONDITIONAL_JUMP)
// 005c9c04: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1d8] (READ)
// 005c9c08: FCOMP double ptr [0x0065424a]
//   XREF to: 0065424a (READ)
// 005c9c0e: FNSTSW AX
// 005c9c10: SAHF
// 005c9c11: JBE 0x005c9c1d
//   XREF to: 005c9c1d (CONDITIONAL_JUMP)
// 005c9c13: XOR EAX,EAX
// 005c9c15: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1d8] (WRITE)
// 005c9c19: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1d4] (WRITE)
// 005c9c1d: FLD double ptr [ESP]
//   Label: LAB_005c9c1d
//   XREF to: Stack[-0x1e0] (DATA)
// 005c9c20: FCOMP double ptr [0x00654242]
//   XREF to: 00654242 (READ)
// 005c9c26: FNSTSW AX
// 005c9c28: SAHF
// 005c9c29: JNC 0x005c9c42
//   XREF to: 005c9c42 (CONDITIONAL_JUMP)
// 005c9c2b: FLD double ptr [ESP]
//   XREF to: Stack[-0x1e0] (DATA)
// 005c9c2e: FCOMP double ptr [0x0065424a]
//   XREF to: 0065424a (READ)
// 005c9c34: FNSTSW AX
// 005c9c36: SAHF
// 005c9c37: JBE 0x005c9c42
//   XREF to: 005c9c42 (CONDITIONAL_JUMP)
// 005c9c39: XOR ESI,ESI
// 005c9c3b: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x1e0] (DATA)
// 005c9c3e: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x1dc] (WRITE)
// 005c9c42: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005c9c42
//   XREF to: Stack[-0x1d4] (READ)
// 005c9c46: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1d8] (READ)
// 005c9c4a: TEST EAX,0x7fffffff
// 005c9c4f: JNZ 0x005c9c9d
//   XREF to: 005c9c9d (CONDITIONAL_JUMP)
// 005c9c51: TEST ECX,ECX
// 005c9c53: JNZ 0x005c9c9d
//   XREF to: 005c9c9d (CONDITIONAL_JUMP)
// 005c9c55: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1dc] (READ)
// 005c9c59: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x1e0] (DATA)
// 005c9c5c: TEST ESI,0x7fffffff
// 005c9c62: JNZ 0x005c9c9d
//   XREF to: 005c9c9d (CONDITIONAL_JUMP)
// 005c9c64: TEST EDI,EDI
// 005c9c66: JNZ 0x005c9c9d
//   XREF to: 005c9c9d (CONDITIONAL_JUMP)
// 005c9c68: MOV ESI,dword ptr [ESP + 0x1c4]
//   Label: LAB_005c9c68
//   XREF to: Stack[-0x1c] (READ)
// 005c9c6f: MOV EDI,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x28] (READ)
// 005c9c76: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c9c79: ADD ESI,0x60
// 005c9c7c: INC EDI
// 005c9c7d: MOV ECX,dword ptr [EDX + 0x2c]
// 005c9c80: MOV dword ptr [ESP + 0x1c4],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005c9c87: MOV dword ptr [ESP + 0x1b8],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 005c9c8e: CMP EDI,ECX
// 005c9c90: JC 0x005c9ad0
//   XREF to: 005c9ad0 (CONDITIONAL_JUMP)
// 005c9c96: MOV ESP,EBP
//   Label: LAB_005c9c96
// 005c9c98: POP EBP
// 005c9c99: POP EDI
// 005c9c9a: POP ESI
// 005c9c9b: POP EBX
// 005c9c9c: RET
// 005c9c9d: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_005c9c9d
//   XREF to: Stack[-0x1d4] (READ)
// 005c9ca1: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1d8] (READ)
// 005c9ca5: TEST EAX,0x7fffffff
// 005c9caa: JNZ 0x005c9f6e
//   XREF to: 005c9f6e (CONDITIONAL_JUMP)
// 005c9cb0: TEST ECX,ECX
// 005c9cb2: JNZ 0x005c9f6e
//   XREF to: 005c9f6e (CONDITIONAL_JUMP)
// 005c9cb8: XOR EAX,EAX
// 005c9cba: MOV ESI,dword ptr [ESP + 0x4]
//   Label: LAB_005c9cba
//   XREF to: Stack[-0x1dc] (READ)
// 005c9cbe: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x1e0] (DATA)
// 005c9cc1: MOV dword ptr [ESP + 0x1a4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005c9cc8: TEST ESI,0x7fffffff
// 005c9cce: JNZ 0x005c9f8d
//   XREF to: 005c9f8d (CONDITIONAL_JUMP)
// 005c9cd4: TEST EDI,EDI
// 005c9cd6: JNZ 0x005c9f8d
//   XREF to: 005c9f8d (CONDITIONAL_JUMP)
// 005c9cdc: XOR EAX,EAX
// 005c9cde: MOV dword ptr [ESP + 0x1bc],EAX
//   Label: LAB_005c9cde
//   XREF to: Stack[-0x24] (WRITE)
// 005c9ce5: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1d8] (READ)
// 005c9ce9: FLD double ptr [ESP]
//   XREF to: Stack[-0x1e0] (DATA)
// 005c9cec: FSUB ST0,ST1
// 005c9cee: FDIVP
// 005c9cf0: MOV EAX,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x24] (READ)
// 005c9cf7: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005c9cfe: LEA EAX,[EDX + 0x10]
// 005c9d01: MOV dword ptr [ESP + 0x1b4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005c9d08: LEA EAX,[EDX + 0x28]
// 005c9d0b: MOV dword ptr [ESP + 0x1c0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005c9d12: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x2c] (READ)
// 005c9d19: FLD double ptr [EAX]
// 005c9d1b: MOV EAX,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x20] (READ)
// 005c9d22: FSUB double ptr [EAX]
// 005c9d24: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x2c] (READ)
// 005c9d2b: FLD double ptr [EAX + 0x8]
// 005c9d2e: MOV EAX,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x20] (READ)
// 005c9d35: MOV ECX,0x6
// 005c9d3a: FSUB double ptr [EAX + 0x8]
// 005c9d3d: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x2c] (READ)
// 005c9d44: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x1b8] (DATA)
// 005c9d48: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x1d0] (DATA)
// 005c9d4c: FLD double ptr [EAX + 0x10]
// 005c9d4f: MOV EAX,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x20] (READ)
// 005c9d56: FXCH ST2
// 005c9d58: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x1d0] (WRITE)
// 005c9d5c: FXCH
// 005c9d5e: FSUB double ptr [EAX + 0x10]
// 005c9d61: FXCH
// 005c9d63: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c8] (WRITE)
// 005c9d67: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c0] (WRITE)
// 005c9d6b: MOVSD.REP ES:EDI,ESI
// 005c9d6d: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x1b8] (READ)
// 005c9d71: FMUL ST1
// 005c9d73: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x1b0] (READ)
// 005c9d77: FMUL ST2
// 005c9d79: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x1a8] (READ)
// 005c9d7d: FMUL ST3
// 005c9d7f: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x2c] (READ)
// 005c9d86: MOV ECX,0x6
// 005c9d8b: LEA EDI,[ESP + 0xa0]
//   XREF to: Stack[-0x140] (DATA)
// 005c9d92: LEA ESI,[ESP + 0xd0]
//   XREF to: Stack[-0x110] (DATA)
// 005c9d99: FXCH ST2
// 005c9d9b: FSTP double ptr [ESP + 0xd0]
//   XREF to: Stack[-0x110] (WRITE)
// 005c9da2: FSTP double ptr [ESP + 0xd8]
//   XREF to: Stack[-0x108] (WRITE)
// 005c9da9: FSTP double ptr [ESP + 0xe0]
//   XREF to: Stack[-0x100] (WRITE)
// 005c9db0: MOVSD.REP ES:EDI,ESI
// 005c9db2: FLD double ptr [EAX]
// 005c9db4: FLD double ptr [EAX + 0x8]
// 005c9db7: FLD double ptr [EAX + 0x10]
// 005c9dba: MOV ECX,0x6
// 005c9dbf: LEA EDI,[ESP + 0xe8]
//   XREF to: Stack[-0xf8] (DATA)
// 005c9dc6: LEA ESI,[ESP + 0x70]
//   XREF to: Stack[-0x170] (DATA)
// 005c9dca: FXCH ST2
// 005c9dcc: FADD double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x140] (READ)
// 005c9dd3: FXCH
// 005c9dd5: FADD double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x138] (READ)
// 005c9ddc: FXCH ST2
// 005c9dde: FADD double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x130] (READ)
// 005c9de5: FXCH
// 005c9de7: FSTP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x170] (WRITE)
// 005c9deb: FXCH
// 005c9ded: FSTP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x168] (WRITE)
// 005c9df1: FSTP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x160] (WRITE)
// 005c9df8: MOVSD.REP ES:EDI,ESI
// 005c9dfa: LEA ECX,[EDX + 0x40]
// 005c9dfd: LEA EDI,[ESP + 0x180]
//   XREF to: Stack[-0x60] (DATA)
// 005c9e04: LEA ESI,[ESP + 0x150]
//   XREF to: Stack[-0x90] (DATA)
// 005c9e0b: FLD double ptr [ECX]
// 005c9e0d: LEA EAX,[EDX + 0x50]
// 005c9e10: FLD double ptr [ECX + 0x8]
// 005c9e13: FXCH
// 005c9e15: FSUB double ptr [EAX]
// 005c9e17: FXCH
// 005c9e19: FSUB double ptr [EAX + 0x8]
// 005c9e1c: FXCH
// 005c9e1e: FSTP double ptr [ESP + 0x150]
//   XREF to: Stack[-0x90] (WRITE)
// 005c9e25: FSTP double ptr [ESP + 0x158]
//   XREF to: Stack[-0x88] (WRITE)
// 005c9e2c: MOVSD ES:EDI,ESI
// 005c9e2d: MOVSD ES:EDI,ESI
// 005c9e2e: MOVSD ES:EDI,ESI
// 005c9e2f: MOVSD ES:EDI,ESI
// 005c9e30: FLD double ptr [ESP + 0x180]
//   XREF to: Stack[-0x60] (READ)
// 005c9e37: FMUL ST1
// 005c9e39: FLD double ptr [ESP + 0x188]
//   XREF to: Stack[-0x58] (READ)
// 005c9e40: FMULP ST2
// 005c9e42: LEA EDI,[ESP + 0x140]
//   XREF to: Stack[-0xa0] (DATA)
// 005c9e49: LEA ESI,[ESP + 0x170]
//   XREF to: Stack[-0x70] (DATA)
// 005c9e50: FSTP double ptr [ESP + 0x170]
//   XREF to: Stack[-0x70] (WRITE)
// 005c9e57: FSTP double ptr [ESP + 0x178]
//   XREF to: Stack[-0x68] (WRITE)
// 005c9e5e: MOVSD ES:EDI,ESI
// 005c9e5f: MOVSD ES:EDI,ESI
// 005c9e60: MOVSD ES:EDI,ESI
// 005c9e61: MOVSD ES:EDI,ESI
// 005c9e62: FLD double ptr [ECX]
// 005c9e64: FLD double ptr [ECX + 0x8]
// 005c9e67: LEA EDI,[ESP + 0x130]
//   XREF to: Stack[-0xb0] (DATA)
// 005c9e6e: LEA ESI,[ESP + 0x160]
//   XREF to: Stack[-0x80] (DATA)
// 005c9e75: FXCH
// 005c9e77: FADD double ptr [ESP + 0x140]
//   XREF to: Stack[-0xa0] (READ)
// 005c9e7e: FXCH
// 005c9e80: FADD double ptr [ESP + 0x148]
//   XREF to: Stack[-0x98] (READ)
// 005c9e87: FXCH
// 005c9e89: FSTP double ptr [ESP + 0x160]
//   XREF to: Stack[-0x80] (WRITE)
// 005c9e90: FSTP double ptr [ESP + 0x168]
//   XREF to: Stack[-0x78] (WRITE)
// 005c9e97: MOVSD ES:EDI,ESI
// 005c9e98: MOVSD ES:EDI,ESI
// 005c9e99: MOVSD ES:EDI,ESI
// 005c9e9a: MOVSD ES:EDI,ESI
// 005c9e9b: MOV ESI,dword ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x3c] (READ)
// 005c9ea2: MOV dword ptr [ESP + 0x1a0],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005c9ea9: CMP ESI,0x1
// 005c9eac: JZ 0x005c9fab
//   XREF to: 005c9fab (CONDITIONAL_JUMP)
// 005c9eb2: CMP dword ptr [ESP + 0x1bc],0x1
//   XREF to: Stack[-0x24] (READ)
// 005c9eba: JZ 0x005c9fab
//   XREF to: 005c9fab (CONDITIONAL_JUMP)
// 005c9ec0: IMUL EAX,dword ptr [EBX],0x60
// 005c9ec3: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005c9ec6: ADD EAX,EDI
// 005c9ec8: MOV ESI,dword ptr [EDX]
// 005c9eca: MOV dword ptr [EAX],ESI
// 005c9ecc: MOV ESI,dword ptr [EDX + 0x4]
// 005c9ecf: MOV dword ptr [EAX + 0x4],ESI
// 005c9ed2: MOV ESI,dword ptr [EDX + 0x8]
// 005c9ed5: MOV dword ptr [EAX + 0x8],ESI
// 005c9ed8: MOV EDX,dword ptr [EDX + 0xc]
// 005c9edb: MOV ESI,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x2c] (READ)
// 005c9ee2: MOV dword ptr [EAX + 0xc],EDX
// 005c9ee5: LEA EDX,[EAX + 0x10]
// 005c9ee8: FLD double ptr [ESI]
// 005c9eea: FSTP double ptr [EDX]
// 005c9eec: FLD double ptr [ESI + 0x8]
// 005c9eef: FSTP double ptr [EDX + 0x8]
// 005c9ef2: FLD double ptr [ESI + 0x10]
// 005c9ef5: MOV ESI,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x20] (READ)
// 005c9efc: FSTP double ptr [EDX + 0x10]
// 005c9eff: LEA EDX,[EAX + 0x28]
// 005c9f02: FLD double ptr [ESI]
// 005c9f04: FSTP double ptr [EDX]
// 005c9f06: FLD double ptr [ESI + 0x8]
// 005c9f09: FSTP double ptr [EDX + 0x8]
// 005c9f0c: FLD double ptr [ESI + 0x10]
// 005c9f0f: FSTP double ptr [EDX + 0x10]
// 005c9f12: LEA EDX,[EAX + 0x40]
// 005c9f15: MOV ESI,dword ptr [ECX]
// 005c9f17: MOV dword ptr [EDX],ESI
// 005c9f19: MOV ESI,dword ptr [ECX + 0x4]
// 005c9f1c: MOV dword ptr [EDX + 0x4],ESI
// 005c9f1f: MOV ESI,dword ptr [ECX + 0x8]
// 005c9f22: MOV dword ptr [EDX + 0x8],ESI
// 005c9f25: MOV ESI,dword ptr [ECX + 0xc]
// 005c9f28: MOV dword ptr [EDX + 0xc],ESI
// 005c9f2b: MOV EDX,dword ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x40] (READ)
// 005c9f32: MOV ECX,dword ptr [EDX]
// 005c9f34: MOV dword ptr [EAX + 0x50],ECX
// 005c9f37: MOV ECX,dword ptr [EDX + 0x4]
// 005c9f3a: MOV dword ptr [EAX + 0x54],ECX
// 005c9f3d: MOV ECX,dword ptr [EDX + 0x8]
// 005c9f40: MOV dword ptr [EAX + 0x58],ECX
// 005c9f43: MOV ECX,dword ptr [EDX + 0xc]
// 005c9f46: MOV dword ptr [EAX + 0x5c],ECX
// 005c9f49: IMUL EAX,dword ptr [EBX],0x60
// 005c9f4c: ADD EAX,EDI
// 005c9f4e: MOV EDX,dword ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x3c] (READ)
// 005c9f55: MOV dword ptr [EAX + 0x8],EDX
// 005c9f58: IMUL EAX,dword ptr [EBX],0x60
// 005c9f5b: ADD EAX,EDI
// 005c9f5d: MOV EDX,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x24] (READ)
// 005c9f64: MOV dword ptr [EAX + 0xc],EDX
// 005c9f67: INC dword ptr [EBX]
// 005c9f69: JMP 0x005c9c68
//   XREF to: 005c9c68 (UNCONDITIONAL_JUMP)
// 005c9f6e: FLDZ
//   Label: LAB_005c9f6e
// 005c9f70: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1d8] (READ)
// 005c9f74: FNSTSW AX
// 005c9f76: SAHF
// 005c9f77: JBE 0x005c9f83
//   XREF to: 005c9f83 (CONDITIONAL_JUMP)
// 005c9f79: MOV EAX,0xffffffff
// 005c9f7e: JMP 0x005c9cba
//   XREF to: 005c9cba (UNCONDITIONAL_JUMP)
// 005c9f83: MOV EAX,0x1
//   Label: LAB_005c9f83
// 005c9f88: JMP 0x005c9cba
//   XREF to: 005c9cba (UNCONDITIONAL_JUMP)
// 005c9f8d: FLDZ
//   Label: LAB_005c9f8d
// 005c9f8f: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x1e0] (DATA)
// 005c9f92: FNSTSW AX
// 005c9f94: SAHF
// 005c9f95: JBE 0x005c9fa1
//   XREF to: 005c9fa1 (CONDITIONAL_JUMP)
// 005c9f97: MOV EAX,0xffffffff
// 005c9f9c: JMP 0x005c9cde
//   XREF to: 005c9cde (UNCONDITIONAL_JUMP)
// 005c9fa1: MOV EAX,0x1
//   Label: LAB_005c9fa1
// 005c9fa6: JMP 0x005c9cde
//   XREF to: 005c9cde (UNCONDITIONAL_JUMP)
// 005c9fab: CMP dword ptr [ESP + 0x1a4],-0x1
//   Label: LAB_005c9fab
//   XREF to: Stack[-0x3c] (READ)
// 005c9fb3: JZ 0x005ca06a
//   XREF to: 005ca06a (CONDITIONAL_JUMP)
// 005c9fb9: CMP dword ptr [ESP + 0x1b0],-0x1
//   XREF to: Stack[-0x30] (READ)
// 005c9fc1: JZ 0x005ca06a
//   XREF to: 005ca06a (CONDITIONAL_JUMP)
// 005c9fc7: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005c9fca: IMUL EAX,dword ptr [EAX],0x60
// 005c9fcd: MOV EDI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005c9fd0: ADD EAX,EDI
// 005c9fd2: MOV ECX,dword ptr [EDX]
// 005c9fd4: MOV dword ptr [EAX],ECX
// 005c9fd6: MOV ECX,dword ptr [EDX + 0x4]
// 005c9fd9: MOV dword ptr [EAX + 0x4],ECX
// 005c9fdc: MOV ECX,dword ptr [EDX + 0x8]
// 005c9fdf: MOV dword ptr [EAX + 0x8],ECX
// 005c9fe2: MOV ECX,dword ptr [EDX + 0xc]
// 005c9fe5: MOV dword ptr [EAX + 0xc],ECX
// 005c9fe8: LEA ECX,[EDX + 0x10]
// 005c9feb: LEA ESI,[EAX + 0x10]
// 005c9fee: FLD double ptr [ECX]
// 005c9ff0: FSTP double ptr [ESI]
// 005c9ff2: FLD double ptr [ECX + 0x8]
// 005c9ff5: FSTP double ptr [ESI + 0x8]
// 005c9ff8: FLD double ptr [ECX + 0x10]
// 005c9ffb: FSTP double ptr [ESI + 0x10]
// 005c9ffe: LEA ESI,[EDX + 0x28]
// 005ca001: LEA ECX,[EAX + 0x28]
// 005ca004: FLD double ptr [ESI]
// 005ca006: FSTP double ptr [ECX]
// 005ca008: FLD double ptr [ESI + 0x8]
// 005ca00b: FSTP double ptr [ECX + 0x8]
// 005ca00e: FLD double ptr [ESI + 0x10]
// 005ca011: LEA ESI,[EDX + 0x40]
// 005ca014: FSTP double ptr [ECX + 0x10]
// 005ca017: LEA ECX,[EAX + 0x40]
// 005ca01a: FLD double ptr [ESI]
// 005ca01c: FSTP double ptr [ECX]
// 005ca01e: FLD double ptr [ESI + 0x8]
// 005ca021: FSTP double ptr [ECX + 0x8]
// 005ca024: MOV ECX,dword ptr [EDX + 0x50]
// 005ca027: MOV dword ptr [EAX + 0x50],ECX
// 005ca02a: MOV ECX,dword ptr [EDX + 0x54]
// 005ca02d: MOV dword ptr [EAX + 0x54],ECX
// 005ca030: MOV ECX,dword ptr [EDX + 0x58]
// 005ca033: MOV dword ptr [EAX + 0x58],ECX
// 005ca036: MOV ECX,dword ptr [EDX + 0x5c]
// 005ca039: MOV dword ptr [EAX + 0x5c],ECX
// 005ca03c: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca03f: IMUL EAX,dword ptr [EAX],0x60
// 005ca042: ADD EAX,EDI
// 005ca044: MOV EDX,dword ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x3c] (READ)
// 005ca04b: MOV dword ptr [EAX + 0x8],EDX
// 005ca04e: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca051: IMUL EAX,dword ptr [EAX],0x60
// 005ca054: ADD EAX,EDI
// 005ca056: MOV EDX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x30] (READ)
// 005ca05d: MOV dword ptr [EAX + 0xc],EDX
// 005ca060: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca063: INC dword ptr [EAX]
// 005ca065: JMP 0x005c9c68
//   XREF to: 005c9c68 (UNCONDITIONAL_JUMP)
// 005ca06a: LEA EAX,[EDX + 0x50]
//   Label: LAB_005ca06a
// 005ca06d: MOV dword ptr [ESP + 0x1ac],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005ca074: LEA EAX,[EDX + 0x40]
// 005ca077: MOV EDI,dword ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x3c] (READ)
// 005ca07e: LEA ESI,[EDX + 0x28]
// 005ca081: MOV dword ptr [ESP + 0x1a8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005ca088: LEA ECX,[EDX + 0x10]
// 005ca08b: CMP EDI,-0x1
// 005ca08e: JNZ 0x005ca300
//   XREF to: 005ca300 (CONDITIONAL_JUMP)
// 005ca094: IMUL EAX,dword ptr [EBX],0x60
// 005ca097: ADD EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005ca09a: MOV EDI,dword ptr [EDX]
// 005ca09c: MOV dword ptr [EAX],EDI
// 005ca09e: MOV EDI,dword ptr [EDX + 0x4]
// 005ca0a1: MOV dword ptr [EAX + 0x4],EDI
// 005ca0a4: MOV EDI,dword ptr [EDX + 0x8]
// 005ca0a7: MOV dword ptr [EAX + 0x8],EDI
// 005ca0aa: MOV EDI,dword ptr [EDX + 0xc]
// 005ca0ad: MOV dword ptr [EAX + 0xc],EDI
// 005ca0b0: LEA EDI,[EAX + 0x10]
// 005ca0b3: FLD double ptr [ECX]
// 005ca0b5: FSTP double ptr [EDI]
// 005ca0b7: FLD double ptr [ECX + 0x8]
// 005ca0ba: FSTP double ptr [EDI + 0x8]
// 005ca0bd: FLD double ptr [ECX + 0x10]
// 005ca0c0: FSTP double ptr [EDI + 0x10]
// 005ca0c3: LEA EDI,[EAX + 0x28]
// 005ca0c6: FLD double ptr [ESI]
// 005ca0c8: FSTP double ptr [EDI]
// 005ca0ca: FLD double ptr [ESI + 0x8]
// 005ca0cd: FSTP double ptr [EDI + 0x8]
// 005ca0d0: FLD double ptr [ESI + 0x10]
// 005ca0d3: FSTP double ptr [EDI + 0x10]
// 005ca0d6: LEA EDI,[EAX + 0x40]
// 005ca0d9: MOV dword ptr [ESP + 0x1c8],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005ca0e0: MOV EDI,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x38] (READ)
// 005ca0e7: FLD double ptr [EDI]
// 005ca0e9: MOV EDI,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x18] (READ)
// 005ca0f0: FSTP double ptr [EDI]
// 005ca0f2: MOV EDI,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x38] (READ)
// 005ca0f9: FLD double ptr [EDI + 0x8]
// 005ca0fc: MOV EDI,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x18] (READ)
// 005ca103: FSTP double ptr [EDI + 0x8]
// 005ca106: MOV EDI,dword ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x34] (READ)
// 005ca10d: FLD double ptr [EDI]
// 005ca10f: FSTP double ptr [EAX + 0x50]
// 005ca112: FLD double ptr [EDI + 0x8]
// 005ca115: FSTP double ptr [EAX + 0x58]
// 005ca118: IMUL EAX,dword ptr [EBX],0x60
// 005ca11b: ADD EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005ca11e: LEA EDI,[EAX + 0x28]
// 005ca121: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0xf8] (READ)
// 005ca128: MOV dword ptr [EDI],EAX
// 005ca12a: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0xf4] (READ)
// 005ca131: MOV dword ptr [EDI + 0x4],EAX
// 005ca134: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0xf0] (READ)
// 005ca13b: MOV dword ptr [EDI + 0x8],EAX
// 005ca13e: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0xec] (READ)
// 005ca145: MOV dword ptr [EDI + 0xc],EAX
// 005ca148: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0xe8] (READ)
// 005ca14f: MOV dword ptr [EDI + 0x10],EAX
// 005ca152: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0xe4] (READ)
// 005ca159: MOV dword ptr [EDI + 0x14],EAX
// 005ca15c: IMUL EAX,dword ptr [EBX],0x60
// 005ca15f: ADD EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005ca162: LEA EDI,[EAX + 0x50]
// 005ca165: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0xb0] (READ)
// 005ca16c: MOV dword ptr [EDI],EAX
// 005ca16e: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0xac] (READ)
// 005ca175: MOV dword ptr [EDI + 0x4],EAX
// 005ca178: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0xa8] (READ)
// 005ca17f: MOV dword ptr [EDI + 0x8],EAX
// 005ca182: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0xa4] (READ)
// 005ca189: MOV dword ptr [EDI + 0xc],EAX
// 005ca18c: IMUL EAX,dword ptr [EBX],0x60
// 005ca18f: ADD EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005ca192: MOV dword ptr [EAX + 0x8],0xffffffff
// 005ca199: IMUL EAX,dword ptr [EBX],0x60
// 005ca19c: ADD EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005ca19f: MOV dword ptr [EAX + 0xc],0x0
// 005ca1a6: INC dword ptr [EBX]
// 005ca1a8: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca1ab: MOV EDI,dword ptr [EAX]
// 005ca1ad: IMUL EAX,EDI,0x60
// 005ca1b0: MOV dword ptr [ESP + 0x1c8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005ca1b7: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005ca1ba: ADD EAX,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x18] (READ)
// 005ca1c1: MOV EDI,dword ptr [EDX]
// 005ca1c3: MOV dword ptr [EAX],EDI
// 005ca1c5: MOV EDI,dword ptr [EDX + 0x4]
// 005ca1c8: MOV dword ptr [EAX + 0x4],EDI
// 005ca1cb: MOV EDI,dword ptr [EDX + 0x8]
// 005ca1ce: MOV dword ptr [EAX + 0x8],EDI
// 005ca1d1: MOV EDX,dword ptr [EDX + 0xc]
// 005ca1d4: MOV dword ptr [EAX + 0xc],EDX
// 005ca1d7: LEA EDX,[EAX + 0x10]
// 005ca1da: MOV EDI,dword ptr [ECX]
// 005ca1dc: MOV dword ptr [EDX],EDI
// 005ca1de: MOV EDI,dword ptr [ECX + 0x4]
// 005ca1e1: MOV dword ptr [EDX + 0x4],EDI
// 005ca1e4: MOV EDI,dword ptr [ECX + 0x8]
// 005ca1e7: MOV dword ptr [EDX + 0x8],EDI
// 005ca1ea: MOV EDI,dword ptr [ECX + 0xc]
// 005ca1ed: MOV dword ptr [EDX + 0xc],EDI
// 005ca1f0: MOV EDI,dword ptr [ECX + 0x10]
// 005ca1f3: MOV dword ptr [EDX + 0x10],EDI
// 005ca1f6: MOV EDI,dword ptr [ECX + 0x14]
// 005ca1f9: MOV dword ptr [EDX + 0x14],EDI
// 005ca1fc: MOV ECX,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x38] (READ)
// 005ca203: LEA EDX,[EAX + 0x28]
// 005ca206: MOV EDI,dword ptr [ESI]
// 005ca208: MOV dword ptr [EDX],EDI
// 005ca20a: MOV EDI,dword ptr [ESI + 0x4]
// 005ca20d: MOV dword ptr [EDX + 0x4],EDI
// 005ca210: MOV EDI,dword ptr [ESI + 0x8]
// 005ca213: MOV dword ptr [EDX + 0x8],EDI
// 005ca216: MOV EDI,dword ptr [ESI + 0xc]
// 005ca219: MOV dword ptr [EDX + 0xc],EDI
// 005ca21c: MOV EDI,dword ptr [ESI + 0x10]
// 005ca21f: MOV dword ptr [EDX + 0x10],EDI
// 005ca222: MOV EDI,dword ptr [ESI + 0x14]
// 005ca225: MOV dword ptr [EDX + 0x14],EDI
// 005ca228: LEA EDX,[EAX + 0x40]
// 005ca22b: MOV ESI,dword ptr [ECX]
// 005ca22d: MOV dword ptr [EDX],ESI
// 005ca22f: MOV ESI,dword ptr [ECX + 0x4]
// 005ca232: MOV dword ptr [EDX + 0x4],ESI
// 005ca235: MOV ESI,dword ptr [ECX + 0x8]
// 005ca238: MOV dword ptr [EDX + 0x8],ESI
// 005ca23b: MOV ESI,dword ptr [ECX + 0xc]
// 005ca23e: MOV dword ptr [EDX + 0xc],ESI
// 005ca241: MOV EDX,dword ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x34] (READ)
// 005ca248: MOV ECX,dword ptr [EDX]
// 005ca24a: MOV dword ptr [EAX + 0x50],ECX
// 005ca24d: MOV ECX,dword ptr [EDX + 0x4]
// 005ca250: MOV dword ptr [EAX + 0x54],ECX
// 005ca253: MOV ECX,dword ptr [EDX + 0x8]
// 005ca256: MOV dword ptr [EAX + 0x58],ECX
// 005ca259: MOV ECX,dword ptr [EDX + 0xc]
// 005ca25c: MOV dword ptr [EAX + 0x5c],ECX
// 005ca25f: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca262: IMUL EDX,dword ptr [EAX],0x60
// 005ca265: MOV ESI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005ca268: ADD EDX,ESI
// 005ca26a: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0xf8] (READ)
// 005ca271: MOV dword ptr [EDX + 0x10],EAX
// 005ca274: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0xf4] (READ)
// 005ca27b: MOV dword ptr [EDX + 0x14],EAX
// 005ca27e: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0xf0] (READ)
// 005ca285: MOV dword ptr [EDX + 0x18],EAX
// 005ca288: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0xec] (READ)
// 005ca28f: MOV dword ptr [EDX + 0x1c],EAX
// 005ca292: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0xe8] (READ)
// 005ca299: MOV dword ptr [EDX + 0x20],EAX
// 005ca29c: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0xe4] (READ)
// 005ca2a3: MOV dword ptr [EDX + 0x24],EAX
// 005ca2a6: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca2a9: IMUL EAX,dword ptr [EAX],0x60
// 005ca2ac: ADD EAX,ESI
// 005ca2ae: LEA EDX,[EAX + 0x40]
// 005ca2b1: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0xb0] (READ)
// 005ca2b8: MOV dword ptr [EDX],EAX
// 005ca2ba: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0xac] (READ)
// 005ca2c1: MOV dword ptr [EDX + 0x4],EAX
// 005ca2c4: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0xa8] (READ)
// 005ca2cb: MOV dword ptr [EDX + 0x8],EAX
// 005ca2ce: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0xa4] (READ)
// 005ca2d5: MOV dword ptr [EDX + 0xc],EAX
// 005ca2d8: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca2db: IMUL EAX,dword ptr [EAX],0x60
// 005ca2de: ADD EAX,ESI
// 005ca2e0: MOV dword ptr [EAX + 0x8],0x0
// 005ca2e7: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca2ea: IMUL EAX,dword ptr [EAX],0x60
// 005ca2ed: ADD EAX,ESI
// 005ca2ef: MOV dword ptr [EAX + 0xc],0x1
// 005ca2f6: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca2f9: INC dword ptr [EAX]
// 005ca2fb: JMP 0x005c9c68
//   XREF to: 005c9c68 (UNCONDITIONAL_JUMP)
// 005ca300: MOV EAX,dword ptr [EBP + 0x2c]
//   Label: LAB_005ca300
//   XREF to: Stack[0x1c] (READ)
// 005ca303: MOV EDI,dword ptr [EAX]
// 005ca305: IMUL EAX,EDI,0x60
// 005ca308: MOV dword ptr [ESP + 0x1c8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005ca30f: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005ca312: ADD EAX,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x18] (READ)
// 005ca319: MOV EDI,dword ptr [EDX]
// 005ca31b: MOV dword ptr [EAX],EDI
// 005ca31d: MOV EDI,dword ptr [EDX + 0x4]
// 005ca320: MOV dword ptr [EAX + 0x4],EDI
// 005ca323: MOV EDI,dword ptr [EDX + 0x8]
// 005ca326: MOV dword ptr [EAX + 0x8],EDI
// 005ca329: MOV EDI,dword ptr [EDX + 0xc]
// 005ca32c: MOV dword ptr [EAX + 0xc],EDI
// 005ca32f: LEA EDI,[EAX + 0x10]
// 005ca332: FLD double ptr [ECX]
// 005ca334: FSTP double ptr [EDI]
// 005ca336: FLD double ptr [ECX + 0x8]
// 005ca339: FSTP double ptr [EDI + 0x8]
// 005ca33c: FLD double ptr [ECX + 0x10]
// 005ca33f: FSTP double ptr [EDI + 0x10]
// 005ca342: LEA EDI,[EAX + 0x28]
// 005ca345: FLD double ptr [ESI]
// 005ca347: FSTP double ptr [EDI]
// 005ca349: FLD double ptr [ESI + 0x8]
// 005ca34c: FSTP double ptr [EDI + 0x8]
// 005ca34f: FLD double ptr [ESI + 0x10]
// 005ca352: FSTP double ptr [EDI + 0x10]
// 005ca355: LEA EDI,[EAX + 0x40]
// 005ca358: MOV dword ptr [ESP + 0x1c8],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005ca35f: MOV EDI,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x38] (READ)
// 005ca366: FLD double ptr [EDI]
// 005ca368: MOV EDI,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x18] (READ)
// 005ca36f: FSTP double ptr [EDI]
// 005ca371: MOV EDI,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x38] (READ)
// 005ca378: FLD double ptr [EDI + 0x8]
// 005ca37b: MOV EDI,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x18] (READ)
// 005ca382: FSTP double ptr [EDI + 0x8]
// 005ca385: MOV EDI,dword ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x34] (READ)
// 005ca38c: FLD double ptr [EDI]
// 005ca38e: FSTP double ptr [EAX + 0x50]
// 005ca391: FLD double ptr [EDI + 0x8]
// 005ca394: FSTP double ptr [EAX + 0x58]
// 005ca397: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca39a: IMUL EAX,dword ptr [EAX],0x60
// 005ca39d: MOV EDI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005ca3a0: ADD EDI,EAX
// 005ca3a2: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0xf8] (READ)
// 005ca3a9: MOV dword ptr [EDI + 0x28],EAX
// 005ca3ac: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0xf4] (READ)
// 005ca3b3: MOV dword ptr [EDI + 0x2c],EAX
// 005ca3b6: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0xf0] (READ)
// 005ca3bd: MOV dword ptr [EDI + 0x30],EAX
// 005ca3c0: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0xec] (READ)
// 005ca3c7: MOV dword ptr [EDI + 0x34],EAX
// 005ca3ca: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0xe8] (READ)
// 005ca3d1: MOV dword ptr [EDI + 0x38],EAX
// 005ca3d4: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0xe4] (READ)
// 005ca3db: MOV dword ptr [EDI + 0x3c],EAX
// 005ca3de: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca3e1: IMUL EAX,dword ptr [EAX],0x60
// 005ca3e4: MOV EDI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005ca3e7: ADD EDI,EAX
// 005ca3e9: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0xb0] (READ)
// 005ca3f0: MOV dword ptr [EDI + 0x50],EAX
// 005ca3f3: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0xac] (READ)
// 005ca3fa: MOV dword ptr [EDI + 0x54],EAX
// 005ca3fd: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0xa8] (READ)
// 005ca404: MOV dword ptr [EDI + 0x58],EAX
// 005ca407: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0xa4] (READ)
// 005ca40e: MOV dword ptr [EDI + 0x5c],EAX
// 005ca411: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca414: MOV EDI,dword ptr [EAX]
// 005ca416: IMUL EAX,EDI,0x60
// 005ca419: MOV dword ptr [ESP + 0x1c8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005ca420: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005ca423: ADD EAX,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x18] (READ)
// 005ca42a: MOV dword ptr [EAX + 0x8],0x1
// 005ca431: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca434: MOV EDI,dword ptr [EAX]
// 005ca436: IMUL EAX,EDI,0x60
// 005ca439: MOV dword ptr [ESP + 0x1c8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005ca440: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005ca443: ADD EAX,dword ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x18] (READ)
// 005ca44a: MOV dword ptr [EAX + 0xc],0x0
// 005ca451: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005ca454: INC dword ptr [EAX]
// 005ca456: IMUL EAX,dword ptr [EBX],0x60
// 005ca459: ADD EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005ca45c: MOV EDI,dword ptr [EDX]
// 005ca45e: MOV dword ptr [EAX],EDI
// 005ca460: MOV EDI,dword ptr [EDX + 0x4]
// 005ca463: MOV dword ptr [EAX + 0x4],EDI
// 005ca466: MOV EDI,dword ptr [EDX + 0x8]
// 005ca469: MOV dword ptr [EAX + 0x8],EDI
// 005ca46c: MOV EDX,dword ptr [EDX + 0xc]
// 005ca46f: MOV dword ptr [EAX + 0xc],EDX
// 005ca472: LEA EDX,[EAX + 0x10]
// 005ca475: MOV EDI,dword ptr [ECX]
// 005ca477: MOV dword ptr [EDX],EDI
// 005ca479: MOV EDI,dword ptr [ECX + 0x4]
// 005ca47c: MOV dword ptr [EDX + 0x4],EDI
// 005ca47f: MOV EDI,dword ptr [ECX + 0x8]
// 005ca482: MOV dword ptr [EDX + 0x8],EDI
// 005ca485: MOV EDI,dword ptr [ECX + 0xc]
// 005ca488: MOV dword ptr [EDX + 0xc],EDI
// 005ca48b: MOV EDI,dword ptr [ECX + 0x10]
// 005ca48e: MOV dword ptr [EDX + 0x10],EDI
// 005ca491: MOV EDI,dword ptr [ECX + 0x14]
// 005ca494: MOV dword ptr [EDX + 0x14],EDI
// 005ca497: MOV ECX,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x38] (READ)
// 005ca49e: LEA EDX,[EAX + 0x28]
// 005ca4a1: MOV EDI,dword ptr [ESI]
// 005ca4a3: MOV dword ptr [EDX],EDI
// 005ca4a5: MOV EDI,dword ptr [ESI + 0x4]
// 005ca4a8: MOV dword ptr [EDX + 0x4],EDI
// 005ca4ab: MOV EDI,dword ptr [ESI + 0x8]
// 005ca4ae: MOV dword ptr [EDX + 0x8],EDI
// 005ca4b1: MOV EDI,dword ptr [ESI + 0xc]
// 005ca4b4: MOV dword ptr [EDX + 0xc],EDI
// 005ca4b7: MOV EDI,dword ptr [ESI + 0x10]
// 005ca4ba: MOV dword ptr [EDX + 0x10],EDI
// 005ca4bd: MOV EDI,dword ptr [ESI + 0x14]
// 005ca4c0: MOV dword ptr [EDX + 0x14],EDI
// 005ca4c3: LEA EDX,[EAX + 0x40]
// 005ca4c6: MOV ESI,dword ptr [ECX]
// 005ca4c8: MOV dword ptr [EDX],ESI
// 005ca4ca: MOV ESI,dword ptr [ECX + 0x4]
// 005ca4cd: MOV dword ptr [EDX + 0x4],ESI
// 005ca4d0: MOV ESI,dword ptr [ECX + 0x8]
// 005ca4d3: MOV dword ptr [EDX + 0x8],ESI
// 005ca4d6: MOV ESI,dword ptr [ECX + 0xc]
// 005ca4d9: MOV dword ptr [EDX + 0xc],ESI
// 005ca4dc: MOV EDX,dword ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x34] (READ)
// 005ca4e3: MOV ECX,dword ptr [EDX]
// 005ca4e5: MOV dword ptr [EAX + 0x50],ECX
// 005ca4e8: MOV ECX,dword ptr [EDX + 0x4]
// 005ca4eb: MOV dword ptr [EAX + 0x54],ECX
// 005ca4ee: MOV ECX,dword ptr [EDX + 0x8]
// 005ca4f1: MOV dword ptr [EAX + 0x58],ECX
// 005ca4f4: MOV ECX,dword ptr [EDX + 0xc]
// 005ca4f7: MOV dword ptr [EAX + 0x5c],ECX
// 005ca4fa: IMUL EAX,dword ptr [EBX],0x60
// 005ca4fd: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005ca500: ADD EAX,ECX
// 005ca502: LEA EDX,[EAX + 0x10]
// 005ca505: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0xf8] (READ)
// 005ca50c: MOV dword ptr [EDX],EAX
// 005ca50e: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0xf4] (READ)
// 005ca515: MOV dword ptr [EDX + 0x4],EAX
// 005ca518: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0xf0] (READ)
// 005ca51f: MOV dword ptr [EDX + 0x8],EAX
// 005ca522: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0xec] (READ)
// 005ca529: MOV dword ptr [EDX + 0xc],EAX
// 005ca52c: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0xe8] (READ)
// 005ca533: MOV dword ptr [EDX + 0x10],EAX
// 005ca536: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0xe4] (READ)
// 005ca53d: MOV dword ptr [EDX + 0x14],EAX
// 005ca540: IMUL EDX,dword ptr [EBX],0x60
// 005ca543: ADD EDX,ECX
// 005ca545: ADD EDX,0x40
// 005ca548: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0xb0] (READ)
// 005ca54f: MOV dword ptr [EDX],EAX
// 005ca551: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0xac] (READ)
// 005ca558: MOV dword ptr [EDX + 0x4],EAX
// 005ca55b: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[-0xa8] (READ)
// 005ca562: MOV dword ptr [EDX + 0x8],EAX
// 005ca565: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[-0xa4] (READ)
// 005ca56c: MOV dword ptr [EDX + 0xc],EAX
// 005ca56f: IMUL EAX,dword ptr [EBX],0x60
// 005ca572: ADD EAX,ECX
// 005ca574: MOV dword ptr [EAX + 0x8],0x0
// 005ca57b: IMUL EAX,dword ptr [EBX],0x60
// 005ca57e: ADD EAX,ECX
// 005ca580: MOV dword ptr [EAX + 0xc],0xffffffff
// 005ca587: INC dword ptr [EBX]
// 005ca589: JMP 0x005c9c68
//   XREF to: 005c9c68 (UNCONDITIONAL_JUMP)
