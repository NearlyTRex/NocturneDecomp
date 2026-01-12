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
  double dStack_1dc;
  double dStack_1d4;
  double dStack_1cc;
  double dStack_1c4;
  double dStack_1bc;
  double dStack_1b4;
  double dStack_1ac;
  double dStack_1a4;
  double dStack_19c;
  double dStack_194;
  double dStack_18c;
  double dStack_184;
  double dStack_17c;
  double dStack_174;
  double dStack_16c;
  double dStack_164;
  double dStack_15c;
  double dStack_154;
  double dStack_14c;
  double dStack_144;
  double dStack_13c;
  double dStack_134;
  double dStack_12c;
  double dStack_124;
  double dStack_11c;
  double dStack_114;
  double dStack_10c;
  double dStack_104;
  double dStack_fc;
  uint local_f4 [4];
  uint local_e4;
  uint local_e0;
  double dStack_dc;
  double dStack_d4;
  double dStack_cc;
  double dStack_c4;
  double dStack_bc;
  double dStack_b4;
  double local_ac;
  double local_a4;
  double dStack_9c;
  double dStack_94;
  double dStack_8c;
  double dStack_84;
  double dStack_7c;
  double dStack_74;
  double dStack_6c;
  double dStack_64;
  double dStack_5c;
  double dStack_54;
  double *local_3c;
  int local_38;
  ulonglong *local_34;
  ulonglong *local_30;
  int local_2c;
  double *local_28;
  uint local_24;
  int local_20;
  double *local_1c;
  int local_18;
  int iStack_14;
  
  local_24 = 0;
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    local_18 = 0;
    do {
      puVar7 = (uint *)(*(int *)(in_stack_00000004 + 0x30) + local_18);
      dStack_19c = *in_stack_00000008 * *in_stack_0000000c;
      dStack_194 = in_stack_00000008[1] * in_stack_0000000c[1];
      dStack_18c = in_stack_00000008[2] * in_stack_0000000c[2];
      pdVar8 = &dStack_19c;
      pdVar9 = &dStack_c4;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(uint *)pdVar9 = *(uint *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      dStack_154 = *in_stack_0000000c * *(double *)(puVar7 + 4);
      dStack_14c = in_stack_0000000c[1] * *(double *)(puVar7 + 6);
      dStack_144 = in_stack_0000000c[2] * *(double *)(puVar7 + 8);
      pdVar8 = &dStack_154;
      pdVar9 = &dStack_124;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(uint *)pdVar9 = *(uint *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      dStack_1dc = -(dStack_c4 + dStack_bc + dStack_b4);
      dVar3 = dStack_124 + dStack_11c;
      dStack_dc = *in_stack_0000000c * *(double *)(puVar7 + 10);
      dStack_d4 = in_stack_0000000c[1] * *(double *)(puVar7 + 0xc);
      dStack_cc = in_stack_0000000c[2] * *(double *)(puVar7 + 0xe);
      pdVar8 = &dStack_dc;
      pdVar9 = &dStack_184;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(uint *)pdVar9 = *(uint *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar9 = (double *)((int)pdVar9 + 4);
      }
      dStack_1d4 = dVar3 + dStack_114 + dStack_1dc;
      dStack_1dc = dStack_184 + dStack_17c + dStack_174 + dStack_1dc;
      if ((dStack_1d4 < 1e-10) && (-1e-10 < dStack_1d4)) {
        dStack_1d4 = 0.0;
      }
      if ((dStack_1dc < 1e-10) && (-1e-10 < dStack_1dc)) {
        dStack_1dc = 0.0;
      }
      if ((((((ulonglong)dStack_1d4 & 0x7fffffff00000000) != 0) || (dStack_1d4._0_4_ != 0)) ||
          (((ulonglong)dStack_1dc & 0x7fffffff00000000) != 0)) || (dStack_1dc._0_4_ != 0)) {
        if ((((ulonglong)dStack_1d4 & 0x7fffffff00000000) == 0) && (dStack_1d4._0_4_ == 0)) {
          local_38 = 0;
        }
        else if (0.0 <= dStack_1d4) {
          local_38 = 1;
        }
        else {
          local_38 = -1;
        }
        if ((((ulonglong)dStack_1dc & 0x7fffffff00000000) == 0) && (dStack_1dc._0_4_ == 0)) {
          local_20 = 0;
        }
        else if (0.0 <= dStack_1dc) {
          local_20 = 1;
        }
        else {
          local_20 = -1;
        }
        dStack_1d4 = dStack_1d4 / (dStack_1dc - dStack_1d4);
        local_2c = local_20;
        local_28 = (double *)(puVar7 + 4);
        local_1c = (double *)(puVar7 + 10);
        dStack_1cc = *(double *)(puVar7 + 4) - *(double *)(puVar7 + 10);
        dStack_1c4 = *(double *)(puVar7 + 6) - *(double *)(puVar7 + 0xc);
        dStack_1bc = *(double *)(puVar7 + 8) - *(double *)(puVar7 + 0xe);
        pdVar8 = &dStack_1cc;
        pdVar9 = &dStack_1b4;
        for (iVar6 = 6; pdVar4 = local_28, iVar6 != 0; iVar6 = iVar6 + -1) {
          *(uint *)pdVar9 = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + 4);
          pdVar9 = (double *)((int)pdVar9 + 4);
        }
        dStack_10c = dStack_1b4 * dStack_1d4;
        dStack_104 = dStack_1ac * dStack_1d4;
        dStack_fc = dStack_1a4 * dStack_1d4;
        pdVar8 = &dStack_10c;
        pdVar9 = &dStack_13c;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(uint *)pdVar9 = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + 4);
          pdVar9 = (double *)((int)pdVar9 + 4);
        }
        dStack_16c = *pdVar4 + dStack_13c;
        dStack_164 = pdVar4[1] + dStack_134;
        dStack_15c = pdVar4[2] + dStack_12c;
        pdVar8 = &dStack_16c;
        puVar5 = local_f4;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar5 = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + 4);
          puVar5 = puVar5 + 1;
        }
        pdVar8 = (double *)(puVar7 + 0x10);
        local_3c = (double *)(puVar7 + 0x14);
        dStack_8c = *pdVar8 - *local_3c;
        dStack_84 = *(double *)(puVar7 + 0x12) - *(double *)(puVar7 + 0x16);
        dStack_5c = dStack_8c;
        dStack_54 = dStack_84;
        dStack_6c = dStack_8c * dStack_1d4;
        dStack_64 = dStack_84 * dStack_1d4;
        dStack_9c = dStack_6c;
        dStack_94 = dStack_64;
        dStack_7c = *pdVar8 + dStack_6c;
        dStack_74 = *(double *)(puVar7 + 0x12) + dStack_64;
        local_ac = dStack_7c;
        local_a4 = dStack_74;
        if ((local_38 == 1) || (local_20 == 1)) {
          if ((local_38 == -1) || (local_2c == -1)) {
            local_30 = (ulonglong *)(puVar7 + 0x14);
            local_34 = (ulonglong *)(puVar7 + 0x10);
            puVar1 = (ulonglong *)(puVar7 + 10);
            puVar2 = (ulonglong *)(puVar7 + 4);
            if (local_38 == -1) {
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
              *(ulonglong *)(puVar5 + 0x10) = *local_34;
              *(ulonglong *)(puVar5 + 0x12) = *(ulonglong *)(puVar7 + 0x12);
              *(ulonglong *)(puVar5 + 0x14) = *local_30;
              *(ulonglong *)(puVar5 + 0x16) = *(ulonglong *)(puVar7 + 0x16);
              iVar6 = *in_stack_00000018 * 0x60 + in_stack_00000010;
              *(uint *)(iVar6 + 0x28) = local_f4[0];
              *(uint *)(iVar6 + 0x2c) = local_f4[1];
              *(uint *)(iVar6 + 0x30) = local_f4[2];
              *(uint *)(iVar6 + 0x34) = local_f4[3];
              *(uint *)(iVar6 + 0x38) = local_e4;
              *(uint *)(iVar6 + 0x3c) = local_e0;
              iVar6 = *in_stack_00000018 * 0x60 + in_stack_00000010;
              *(double *)(iVar6 + 0x50) = dStack_7c;
              *(double *)(iVar6 + 0x58) = dStack_74;
              *(uint *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 8) = 0xffffffff;
              *(uint *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 0xc) = 0;
              *in_stack_00000018 = *in_stack_00000018 + 1;
              iStack_14 = *in_stack_0000001c * 0x60;
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
              puVar5[0x10] = *(uint *)local_34;
              puVar5[0x11] = puVar7[0x11];
              puVar5[0x12] = puVar7[0x12];
              puVar5[0x13] = puVar7[0x13];
              puVar5[0x14] = *(uint *)local_30;
              puVar5[0x15] = puVar7[0x15];
              puVar5[0x16] = puVar7[0x16];
              puVar5[0x17] = puVar7[0x17];
              iVar6 = *in_stack_0000001c * 0x60 + in_stack_00000014;
              *(uint *)(iVar6 + 0x10) = local_f4[0];
              *(uint *)(iVar6 + 0x14) = local_f4[1];
              *(uint *)(iVar6 + 0x18) = local_f4[2];
              *(uint *)(iVar6 + 0x1c) = local_f4[3];
              *(uint *)(iVar6 + 0x20) = local_e4;
              *(uint *)(iVar6 + 0x24) = local_e0;
              iVar6 = *in_stack_0000001c * 0x60 + in_stack_00000014;
              *(double *)(iVar6 + 0x40) = dStack_7c;
              *(double *)(iVar6 + 0x48) = dStack_74;
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
              *(ulonglong *)(puVar5 + 0x10) = *local_34;
              *(ulonglong *)(puVar5 + 0x12) = *(ulonglong *)(puVar7 + 0x12);
              *(ulonglong *)(puVar5 + 0x14) = *local_30;
              *(ulonglong *)(puVar5 + 0x16) = *(ulonglong *)(puVar7 + 0x16);
              iVar6 = in_stack_00000014 + *in_stack_0000001c * 0x60;
              *(uint *)(iVar6 + 0x28) = local_f4[0];
              *(uint *)(iVar6 + 0x2c) = local_f4[1];
              *(uint *)(iVar6 + 0x30) = local_f4[2];
              *(uint *)(iVar6 + 0x34) = local_f4[3];
              *(uint *)(iVar6 + 0x38) = local_e4;
              *(uint *)(iVar6 + 0x3c) = local_e0;
              iVar6 = in_stack_00000014 + *in_stack_0000001c * 0x60;
              *(double *)(iVar6 + 0x50) = dStack_7c;
              *(double *)(iVar6 + 0x58) = dStack_74;
              *(uint *)(in_stack_00000014 + *in_stack_0000001c * 0x60 + 8) = 1;
              iStack_14 = *in_stack_0000001c * 0x60;
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
              puVar5[0x10] = *(uint *)local_34;
              puVar5[0x11] = puVar7[0x11];
              puVar5[0x12] = puVar7[0x12];
              puVar5[0x13] = puVar7[0x13];
              puVar5[0x14] = *(uint *)local_30;
              puVar5[0x15] = puVar7[0x15];
              puVar5[0x16] = puVar7[0x16];
              puVar5[0x17] = puVar7[0x17];
              iVar6 = *in_stack_00000018 * 0x60 + in_stack_00000010;
              *(uint *)(iVar6 + 0x10) = local_f4[0];
              *(uint *)(iVar6 + 0x14) = local_f4[1];
              *(uint *)(iVar6 + 0x18) = local_f4[2];
              *(uint *)(iVar6 + 0x1c) = local_f4[3];
              *(uint *)(iVar6 + 0x20) = local_e4;
              *(uint *)(iVar6 + 0x24) = local_e0;
              iVar6 = *in_stack_00000018 * 0x60 + in_stack_00000010;
              *(double *)(iVar6 + 0x40) = dStack_7c;
              *(double *)(iVar6 + 0x48) = dStack_74;
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
            *(int *)(*in_stack_0000001c * 0x60 + in_stack_00000014 + 8) = local_38;
            *(int *)(*in_stack_0000001c * 0x60 + in_stack_00000014 + 0xc) = local_2c;
            *in_stack_0000001c = *in_stack_0000001c + 1;
          }
        }
        else {
          puVar5 = (uint *)(*in_stack_00000018 * 0x60 + in_stack_00000010);
          *puVar5 = *puVar7;
          puVar5[1] = puVar7[1];
          puVar5[2] = puVar7[2];
          puVar5[3] = puVar7[3];
          *(double *)(puVar5 + 4) = *local_28;
          *(double *)(puVar5 + 6) = local_28[1];
          *(double *)(puVar5 + 8) = local_28[2];
          *(double *)(puVar5 + 10) = *local_1c;
          *(double *)(puVar5 + 0xc) = local_1c[1];
          *(double *)(puVar5 + 0xe) = local_1c[2];
          puVar5[0x10] = *(uint *)pdVar8;
          puVar5[0x11] = puVar7[0x11];
          puVar5[0x12] = puVar7[0x12];
          puVar5[0x13] = puVar7[0x13];
          puVar5[0x14] = *(uint *)local_3c;
          puVar5[0x15] = puVar7[0x15];
          puVar5[0x16] = puVar7[0x16];
          puVar5[0x17] = puVar7[0x17];
          *(int *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 8) = local_38;
          *(int *)(*in_stack_00000018 * 0x60 + in_stack_00000010 + 0xc) = local_20;
          *in_stack_00000018 = *in_stack_00000018 + 1;
        }
      }
      local_24 = local_24 + 1;
      local_18 = local_18 + 0x60;
    } while (local_24 < *(uint *)(in_stack_00000004 + 0x2c));
  }
  return;
}
