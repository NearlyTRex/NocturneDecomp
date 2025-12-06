// Name: shape_superopt.cpp_FUN_005cb3a0
// Address: 005cb3a0
// Address Range: [[005cb3a0, 005cbb36]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cb3a0()

#include "nocturne.h"

uint shape_superopt_cpp_FUN_005cb3a0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint uVar3;
  uint uVar4;
  double dVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  CVector2d *in_stack_fffffe84;
  CVector2d *in_stack_fffffe88;
  double dStack_16c;
  double dStack_164;
  double dStack_15c;
  uint uStack_13c;
  uint local_138;
  double dStack_134;
  double dStack_12c;
  byte local_110 [16];
  byte local_100 [16];
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  shape_superopt_cpp_FUN_005cbb40();
  if (dStack_12c * *(double *)(in_stack_00000004 + 0x24) +
      (double)CONCAT44 /* combine 2-byte values */(local_138,uStack_13c) * *(double *)(in_stack_00000004 + 0x14) +
      dStack_134 * *(double *)(in_stack_00000004 + 0x1c) < 0.0) {
    return 0;
  }
  if (0.0 <= *(double *)(in_stack_00000004 + 0x14)) {
    dStack_15c = *(double *)(in_stack_00000004 + 0x14);
  }
  else {
    dStack_15c = -*(double *)(in_stack_00000004 + 0x14);
  }
  if (*(double *)(in_stack_00000004 + 0x1c) < 0.0) {
    dStack_16c = -*(double *)(in_stack_00000004 + 0x1c);
  }
  else {
    dStack_16c = *(double *)(in_stack_00000004 + 0x1c);
  }
  if (*(double *)(in_stack_00000004 + 0x24) < 0.0) {
    dStack_164 = -*(double *)(in_stack_00000004 + 0x24);
  }
  else {
    dStack_164 = *(double *)(in_stack_00000004 + 0x24);
  }
  if ((dStack_15c < dStack_16c) || (dStack_15c < dStack_164)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  if ((dStack_16c < dStack_15c) || (dStack_16c < dStack_164)) {
    iStack_14 = 0;
  }
  else {
    iStack_14 = 1;
  }
  uVar4 = 0;
  if (in_stack_0000000c != 0) {
    local_1c = in_stack_00000008;
    do {
      if (local_18 == 0) {
        if (iStack_14 == 0) {
          local_5c = *(uint *)(local_1c + 0x10);
          local_58 = *(uint *)(local_1c + 0x14);
          local_b4 = *(uint *)(local_1c + 0x18);
          local_b0 = *(uint *)(local_1c + 0x1c);
          local_110._12_4_ = *(uint *)(local_1c + 0x28);
          local_100._0_4_ = *(uint *)(local_1c + 0x2c);
          local_100._4_4_ = *(uint *)(local_1c + 0x30);
          local_100._8_4_ = *(uint *)(local_1c + 0x34);
          local_c4 = local_110._12_4_;
          local_c0 = local_100._0_4_;
          local_a4 = local_100._4_4_;
          local_a0 = local_100._8_4_;
        }
        else {
          local_bc = *(uint *)(local_1c + 0x10);
          local_b8 = *(uint *)(local_1c + 0x14);
          local_34 = *(int *)(local_1c + 0x20);
          local_30 = *(uint *)(local_1c + 0x24);
          local_110._12_4_ = *(uint *)(local_1c + 0x28);
          local_100._0_4_ = *(uint *)(local_1c + 0x2c);
          local_100._4_4_ = *(uint *)(local_1c + 0x38);
          local_100._8_4_ = *(uint *)(local_1c + 0x3c);
          local_2c = local_110._12_4_;
          local_28 = local_100._0_4_;
          local_24 = local_100._4_4_;
          local_20 = local_100._8_4_;
        }
      }
      else {
        local_e4 = *(uint *)(local_1c + 0x18);
        local_e0 = *(uint *)(local_1c + 0x1c);
        local_94 = *(uint *)(local_1c + 0x20);
        local_90 = *(uint *)(local_1c + 0x24);
        local_110._12_4_ = *(uint *)(local_1c + 0x30);
        local_100._0_4_ = *(uint *)(local_1c + 0x34);
        local_100._4_4_ = *(uint *)(local_1c + 0x38);
        local_100._8_4_ = *(uint *)(local_1c + 0x3c);
        local_cc = local_100._4_4_;
        local_c8 = local_100._8_4_;
        local_8c = local_110._12_4_;
        local_88 = local_100._0_4_;
      }
      uVar3 = 0;
      iVar2 = in_stack_00000008;
      if (in_stack_0000000c != 0) {
        do {
          if (uVar3 != uVar4) {
            if (local_18 == 0) {
              if (iStack_14 == 0) {
                local_100._12_4_ = *(uint *)(iVar2 + 0x10);
                local_f0 = *(uint *)(iVar2 + 0x14);
                local_ec = *(uint *)(iVar2 + 0x18);
                local_e8 = *(uint *)(iVar2 + 0x1c);
                local_4c = *(uint *)(iVar2 + 0x28);
                local_110._0_4_ = *(uint *)(iVar2 + 0x2c);
                local_110._4_4_ = *(uint *)(iVar2 + 0x30);
                local_110._8_4_ = *(uint *)(iVar2 + 0x34);
                local_9c = local_100._12_4_;
                local_98 = local_f0;
                local_54 = local_ec;
                local_50 = local_e8;
                local_48 = local_110._0_4_;
                local_44 = local_110._4_4_;
                local_40 = local_110._8_4_;
              }
              else {
                local_100._12_4_ = *(uint *)(iVar2 + 0x10);
                local_f0 = *(uint *)(iVar2 + 0x14);
                local_ec = *(uint *)(iVar2 + 0x20);
                local_e8 = *(uint *)(iVar2 + 0x24);
                local_6c = *(uint *)(iVar2 + 0x28);
                local_110._0_4_ = *(uint *)(iVar2 + 0x2c);
                local_110._4_4_ = *(uint *)(iVar2 + 0x38);
                local_110._8_4_ = *(uint *)(iVar2 + 0x3c);
                local_7c = local_100._12_4_;
                local_78 = local_f0;
                local_74 = local_ec;
                local_70 = local_e8;
                local_68 = local_110._0_4_;
                local_64 = local_110._4_4_;
                local_60 = local_110._8_4_;
              }
            }
            else {
              local_100._12_4_ = *(uint *)(iVar2 + 0x18);
              local_f0 = *(uint *)(iVar2 + 0x1c);
              local_ec = *(uint *)(iVar2 + 0x20);
              local_e8 = *(uint *)(iVar2 + 0x24);
              local_d4 = *(uint *)(iVar2 + 0x30);
              local_110._0_4_ = *(uint *)(iVar2 + 0x34);
              local_110._4_4_ = *(uint *)(iVar2 + 0x38);
              local_110._8_4_ = *(uint *)(iVar2 + 0x3c);
              local_dc = local_ec;
              local_d8 = local_e8;
              local_d0 = local_110._0_4_;
              local_ac = local_100._12_4_;
              local_a8 = local_f0;
              local_84 = local_110._4_4_;
              local_80 = local_110._8_4_;
            }
            dVar5 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                              ((CVector2d *)(local_110 + 0xc),(CVector2d *)(local_100 + 0xc),
                               in_stack_fffffe84);
            local_38 = SUB84 /* extract 2-byte value */(dVar5,0);
            local_34 = (int)((ulonglong)dVar5 >> 0x20);
            iVar1 = local_34;
            in_stack_fffffe84 = (CVector2d *)local_110;
            dVar5 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                              ((CVector2d *)local_100,in_stack_fffffe84,in_stack_fffffe88);
            local_34 = SUB84 /* extract 2-byte value */(dVar5,0);
            local_30 = (uint)((ulonglong)dVar5 >> 0x20);
            if ((((((local_138 & 0x7fffffff) == 0) && (iVar1 == 0)) &&
                 (((ulonglong)dVar5 & 0x7fffffff00000000) == 0)) && (local_34 == 0)) ||
               ((((double)CONCAT44 /* combine 2-byte values */(local_138,iVar1) < 0.0 && (0.0 < dVar5)) ||
                ((0.0 < (double)CONCAT44 /* combine 2-byte values */(local_138,iVar1) && (dVar5 < 0.0)))))) {
              return 0;
            }
          }
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 0x60;
        } while (uVar3 < in_stack_0000000c);
      }
      local_1c = local_1c + 0x60;
      uVar4 = uVar4 + 1;
    } while (uVar4 < in_stack_0000000c);
  }
  return 1;
}
