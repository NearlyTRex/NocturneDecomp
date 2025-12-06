// Name: shape_superopt.cpp_FUN_005c9aa0
// Address: 005c9aa0
// Address Range: [[005c9aa0, 005ca58d]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c9aa0()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005c9aa0(void)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  double dVar3;
  double *pdVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
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
  uint local_f8 [4];
  uint local_e8;
  uint local_e4;
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
  ulonglong *local_38;
  ulonglong *local_34;
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
      puVar7 = (uint *)(*(int *)(in_stack_00000004 + 0x30) + local_1c);
      local_1a0 = *in_stack_00000008 * *in_stack_0000000c;
      local_198 = in_stack_00000008[1] * in_stack_0000000c[1];
      local_190 = in_stack_00000008[2] * in_stack_0000000c[2];
      pdVar8 = &local_1a0;
      pdVar9 = &local_c8;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(uint *)pdVar9 = *(uint *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      local_158 = *in_stack_0000000c * *(double *)(puVar7 + 4);
      local_150 = in_stack_0000000c[1] * *(double *)(puVar7 + 6);
      local_148 = in_stack_0000000c[2] * *(double *)(puVar7 + 8);
      pdVar8 = &local_158;
      pdVar9 = &local_128;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(uint *)pdVar9 = *(uint *)pdVar8;
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
        *(uint *)pdVar9 = *(uint *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      local_1d8 = dVar3 + local_118 + local_1e0;
      local_1e0 = local_188 + local_180 + local_178 + local_1e0;
      if ((local_1d8 < 1e-10) && (-1e-10 < local_1d8)) {
        local_1d8 = 0.0;
      }
      if ((local_1e0 < 1e-10) && (-1e-10 < local_1e0)) {
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
          *(uint *)pdVar9 = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + 4);
          pdVar9 = (double *)((int)pdVar9 + 4);
        }
        local_110 = local_1b8 * local_1d8;
        local_108 = local_1b0 * local_1d8;
        local_100 = local_1a8 * local_1d8;
        pdVar8 = &local_110;
        pdVar9 = &local_140;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(uint *)pdVar9 = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + 4);
          pdVar9 = (double *)((int)pdVar9 + 4);
        }
        local_170 = *pdVar4 + local_140;
        local_168 = pdVar4[1] + local_138;
        local_160 = pdVar4[2] + local_130;
        pdVar8 = &local_170;
        puVar5 = local_f8;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar5 = *(uint *)pdVar8;
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
            local_34 = (ulonglong *)(puVar7 + 0x14);
            local_38 = (ulonglong *)(puVar7 + 0x10);
            puVar1 = (ulonglong *)(puVar7 + 10);
            puVar2 = (ulonglong *)(puVar7 + 4);
            if (local_3c == -1) {
              puVar5 = (uint *)(*in_stack_00000018 * 0x60 + in_stack_00000010);
              *puVar5 = *puVar7;
              puVar5[1] = puVar7[1];
              puVar5[2] = puVar7[2];
              puVar5[3] = puVar7[3];
              *(ulonglong *)(puVar5 + 4) = *puVar2;
              *(ulonglong *)(puVar5 + 6) = *(ulonglong *)(puVar7 + 6);
              *(ulonglong *)(puVar5 + 8) = *(ulonglong *)(puVar7 + 8);
              *(ulonglong *)(puVar5 + 10) = *puVar1;
              *(ulonglong *)(puVar5 + 0xc) = *(ulonglong *)(puVar7 + 0xc);
              *(ulonglong *)(puVar5 + 0xe) = *(ulonglong *)(puVar7 + 0xe);
              *(ulonglong *)(puVar5 + 0x10) = *local_38;
              *(ulonglong *)(puVar5 + 0x12) = *(ulonglong *)(puVar7 + 0x12);
              *(ulonglong *)(puVar5 + 0x14) = *local_34;
              *(ulonglong *)(puVar5 + 0x16) = *(ulonglong *)(puVar7 + 0x16);
              iVar6 = *in_stack_00000018 * 0x60 + in_stack_00000010;
              *(uint *)(iVar6 + 0x28) = local_f8[0];
              *(uint *)(iVar6 + 0x2c) = local_f8[1];
              *(uint *)(iVar6 + 0x30) = local_f8[2];
              *(uint *)(iVar6 + 0x34) = local_f8[3];
              *(uint *)(iVar6 + 0x38) = local_e8;
              *(uint *)(iVar6 + 0x3c) = local_e4;
              iVar6 = *in_stack_00000018 * 0x60 + in_stack_00000010;
              *(double *)(iVar6 + 0x50) = local_80;
              *(double *)(iVar6 + 0x58) = local_78;
              *(uint *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 8) = 0xffffffff;
              *(uint *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 0xc) = 0;
              *in_stack_00000018 = *in_stack_00000018 + 1;
              local_18 = *in_stack_0000001c * 0x60;
              puVar5 = (uint *)(in_stack_00000014 + *in_stack_0000001c * 0x60);
              *puVar5 = *puVar7;
              puVar5[1] = puVar7[1];
              puVar5[2] = puVar7[2];
              puVar5[3] = puVar7[3];
              puVar5[4] = *(uint *)puVar2;
              puVar5[5] = puVar7[5];
              puVar5[6] = puVar7[6];
              puVar5[7] = puVar7[7];
              puVar5[8] = puVar7[8];
              puVar5[9] = puVar7[9];
              puVar5[10] = *(uint *)puVar1;
              puVar5[0xb] = puVar7[0xb];
              puVar5[0xc] = puVar7[0xc];
              puVar5[0xd] = puVar7[0xd];
              puVar5[0xe] = puVar7[0xe];
              puVar5[0xf] = puVar7[0xf];
              puVar5[0x10] = *(uint *)local_38;
              puVar5[0x11] = puVar7[0x11];
              puVar5[0x12] = puVar7[0x12];
              puVar5[0x13] = puVar7[0x13];
              puVar5[0x14] = *(uint *)local_34;
              puVar5[0x15] = puVar7[0x15];
              puVar5[0x16] = puVar7[0x16];
              puVar5[0x17] = puVar7[0x17];
              iVar6 = *in_stack_0000001c * 0x60 + in_stack_00000014;
              *(uint *)(iVar6 + 0x10) = local_f8[0];
              *(uint *)(iVar6 + 0x14) = local_f8[1];
              *(uint *)(iVar6 + 0x18) = local_f8[2];
              *(uint *)(iVar6 + 0x1c) = local_f8[3];
              *(uint *)(iVar6 + 0x20) = local_e8;
              *(uint *)(iVar6 + 0x24) = local_e4;
              iVar6 = *in_stack_0000001c * 0x60 + in_stack_00000014;
              *(double *)(iVar6 + 0x40) = local_80;
              *(double *)(iVar6 + 0x48) = local_78;
              *(uint *)(*in_stack_0000001c * 0x60 + in_stack_00000014 + 8) = 0;
              *(uint *)(*in_stack_0000001c * 0x60 + in_stack_00000014 + 0xc) = 1;
              *in_stack_0000001c = *in_stack_0000001c + 1;
            }
            else {
              puVar5 = (uint *)(in_stack_00000014 + *in_stack_0000001c * 0x60);
              *puVar5 = *puVar7;
              puVar5[1] = puVar7[1];
              puVar5[2] = puVar7[2];
              puVar5[3] = puVar7[3];
              *(ulonglong *)(puVar5 + 4) = *puVar2;
              *(ulonglong *)(puVar5 + 6) = *(ulonglong *)(puVar7 + 6);
              *(ulonglong *)(puVar5 + 8) = *(ulonglong *)(puVar7 + 8);
              *(ulonglong *)(puVar5 + 10) = *puVar1;
              *(ulonglong *)(puVar5 + 0xc) = *(ulonglong *)(puVar7 + 0xc);
              *(ulonglong *)(puVar5 + 0xe) = *(ulonglong *)(puVar7 + 0xe);
              *(ulonglong *)(puVar5 + 0x10) = *local_38;
              *(ulonglong *)(puVar5 + 0x12) = *(ulonglong *)(puVar7 + 0x12);
              *(ulonglong *)(puVar5 + 0x14) = *local_34;
              *(ulonglong *)(puVar5 + 0x16) = *(ulonglong *)(puVar7 + 0x16);
              iVar6 = in_stack_00000014 + *in_stack_0000001c * 0x60;
              *(uint *)(iVar6 + 0x28) = local_f8[0];
              *(uint *)(iVar6 + 0x2c) = local_f8[1];
              *(uint *)(iVar6 + 0x30) = local_f8[2];
              *(uint *)(iVar6 + 0x34) = local_f8[3];
              *(uint *)(iVar6 + 0x38) = local_e8;
              *(uint *)(iVar6 + 0x3c) = local_e4;
              iVar6 = in_stack_00000014 + *in_stack_0000001c * 0x60;
              *(double *)(iVar6 + 0x50) = local_80;
              *(double *)(iVar6 + 0x58) = local_78;
              *(uint *)(in_stack_00000014 + *in_stack_0000001c * 0x60 + 8) = 1;
              local_18 = *in_stack_0000001c * 0x60;
              *(uint *)(in_stack_00000014 + *in_stack_0000001c * 0x60 + 0xc) = 0;
              *in_stack_0000001c = *in_stack_0000001c + 1;
              puVar5 = (uint *)(*in_stack_00000018 * 0x60 + in_stack_00000010);
              *puVar5 = *puVar7;
              puVar5[1] = puVar7[1];
              puVar5[2] = puVar7[2];
              puVar5[3] = puVar7[3];
              puVar5[4] = *(uint *)puVar2;
              puVar5[5] = puVar7[5];
              puVar5[6] = puVar7[6];
              puVar5[7] = puVar7[7];
              puVar5[8] = puVar7[8];
              puVar5[9] = puVar7[9];
              puVar5[10] = *(uint *)puVar1;
              puVar5[0xb] = puVar7[0xb];
              puVar5[0xc] = puVar7[0xc];
              puVar5[0xd] = puVar7[0xd];
              puVar5[0xe] = puVar7[0xe];
              puVar5[0xf] = puVar7[0xf];
              puVar5[0x10] = *(uint *)local_38;
              puVar5[0x11] = puVar7[0x11];
              puVar5[0x12] = puVar7[0x12];
              puVar5[0x13] = puVar7[0x13];
              puVar5[0x14] = *(uint *)local_34;
              puVar5[0x15] = puVar7[0x15];
              puVar5[0x16] = puVar7[0x16];
              puVar5[0x17] = puVar7[0x17];
              iVar6 = *in_stack_00000018 * 0x60 + in_stack_00000010;
              *(uint *)(iVar6 + 0x10) = local_f8[0];
              *(uint *)(iVar6 + 0x14) = local_f8[1];
              *(uint *)(iVar6 + 0x18) = local_f8[2];
              *(uint *)(iVar6 + 0x1c) = local_f8[3];
              *(uint *)(iVar6 + 0x20) = local_e8;
              *(uint *)(iVar6 + 0x24) = local_e4;
              iVar6 = *in_stack_00000018 * 0x60 + in_stack_00000010;
              *(double *)(iVar6 + 0x40) = local_80;
              *(double *)(iVar6 + 0x48) = local_78;
              *(uint *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 8) = 0;
              *(uint *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 0xc) = 0xffffffff;
              *in_stack_00000018 = *in_stack_00000018 + 1;
            }
          }
          else {
            puVar5 = (uint *)(*in_stack_0000001c * 0x60 + in_stack_00000014);
            *puVar5 = *puVar7;
            puVar5[1] = puVar7[1];
            puVar5[2] = puVar7[2];
            puVar5[3] = puVar7[3];
            *(ulonglong *)(puVar5 + 4) = *(ulonglong *)(puVar7 + 4);
            *(ulonglong *)(puVar5 + 6) = *(ulonglong *)(puVar7 + 6);
            *(ulonglong *)(puVar5 + 8) = *(ulonglong *)(puVar7 + 8);
            *(ulonglong *)(puVar5 + 10) = *(ulonglong *)(puVar7 + 10);
            *(ulonglong *)(puVar5 + 0xc) = *(ulonglong *)(puVar7 + 0xc);
            *(ulonglong *)(puVar5 + 0xe) = *(ulonglong *)(puVar7 + 0xe);
            *(ulonglong *)(puVar5 + 0x10) = *(ulonglong *)(puVar7 + 0x10);
            *(ulonglong *)(puVar5 + 0x12) = *(ulonglong *)(puVar7 + 0x12);
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
          puVar5 = (uint *)(*in_stack_00000018 * 0x60 + in_stack_00000010);
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
          puVar5[0x10] = *(uint *)pdVar8;
          puVar5[0x11] = puVar7[0x11];
          puVar5[0x12] = puVar7[0x12];
          puVar5[0x13] = puVar7[0x13];
          puVar5[0x14] = *(uint *)local_40;
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
