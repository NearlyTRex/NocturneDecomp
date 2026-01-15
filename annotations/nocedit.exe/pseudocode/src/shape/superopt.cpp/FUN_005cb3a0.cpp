// Name: shape_superopt.cpp_FUN_005cb3a0
// Address: 005cb3a0
// Address Range: [[005cb3a0, 005cbb36]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005cb3a0()

#include "nocturne.h"

uint shape_superopt_cpp_FUN_005cb3a0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  double in_stack_fffffe84;
  double dStack_16c;
  double dStack_164;
  double dStack_15c;
  int iStack_144;
  double dStack_13c;
  double dStack_134;
  double dStack_12c;
  CVector2d local_114;
  CVector2d local_104;
  CVector2d local_f4;
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
  double dStack_3c;
  uint local_34;
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
      dStack_13c * *(double *)(in_stack_00000004 + 0x14) +
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
  uVar3 = 0;
  if (in_stack_0000000c != 0) {
    local_1c = in_stack_00000008;
    do {
      if (local_18 == 0) {
        if (iStack_14 == 0) {
          local_5c = *(uint *)(local_1c + 0x10);
          local_58 = *(uint *)(local_1c + 0x14);
          local_b4 = *(uint *)(local_1c + 0x18);
          local_b0 = *(uint *)(local_1c + 0x1c);
          local_104.x._0_4_ = *(uint *)(local_1c + 0x28);
          local_104.x._4_4_ = *(uint *)(local_1c + 0x2c);
          local_104.y._0_4_ = *(uint *)(local_1c + 0x30);
          local_104.y._4_4_ = *(uint *)(local_1c + 0x34);
          local_c4 = local_104.x._0_4_;
          local_c0 = local_104.x._4_4_;
          local_a4 = local_104.y._0_4_;
          local_a0 = local_104.y._4_4_;
        }
        else {
          local_bc = *(uint *)(local_1c + 0x10);
          local_b8 = *(uint *)(local_1c + 0x14);
          local_34 = *(uint *)(local_1c + 0x20);
          local_30 = *(uint *)(local_1c + 0x24);
          local_104.x._0_4_ = *(uint *)(local_1c + 0x28);
          local_104.x._4_4_ = *(uint *)(local_1c + 0x2c);
          local_104.y._0_4_ = *(uint *)(local_1c + 0x38);
          local_104.y._4_4_ = *(uint *)(local_1c + 0x3c);
          local_2c = local_104.x._0_4_;
          local_28 = local_104.x._4_4_;
          local_24 = local_104.y._0_4_;
          local_20 = local_104.y._4_4_;
        }
      }
      else {
        local_e4 = *(uint *)(local_1c + 0x18);
        local_e0 = *(uint *)(local_1c + 0x1c);
        local_94 = *(uint *)(local_1c + 0x20);
        local_90 = *(uint *)(local_1c + 0x24);
        local_104.x._0_4_ = *(uint *)(local_1c + 0x30);
        local_104.x._4_4_ = *(uint *)(local_1c + 0x34);
        local_104.y._0_4_ = *(uint *)(local_1c + 0x38);
        local_104.y._4_4_ = *(uint *)(local_1c + 0x3c);
        local_cc = local_104.y._0_4_;
        local_c8 = local_104.y._4_4_;
        local_8c = local_104.x._0_4_;
        local_88 = local_104.x._4_4_;
      }
      uVar2 = 0;
      iVar1 = in_stack_00000008;
      if (in_stack_0000000c != 0) {
        do {
          if (uVar2 != uVar3) {
            if (local_18 == 0) {
              if (iStack_14 == 0) {
                local_f4.x._0_4_ = *(uint *)(iVar1 + 0x10);
                local_f4.x._4_4_ = *(uint *)(iVar1 + 0x14);
                local_f4.y._0_4_ = *(uint *)(iVar1 + 0x18);
                local_f4.y._4_4_ = *(uint *)(iVar1 + 0x1c);
                local_114.x._0_4_ = *(uint *)(iVar1 + 0x28);
                local_114.x._4_4_ = *(uint *)(iVar1 + 0x2c);
                local_114.y._0_4_ = *(uint *)(iVar1 + 0x30);
                local_114.y._4_4_ = *(uint *)(iVar1 + 0x34);
                local_9c = local_f4.x._0_4_;
                local_98 = local_f4.x._4_4_;
                local_54 = local_f4.y._0_4_;
                local_50 = local_f4.y._4_4_;
                local_4c = local_114.x._0_4_;
                local_48 = local_114.x._4_4_;
                local_44 = local_114.y._0_4_;
                local_40 = local_114.y._4_4_;
              }
              else {
                local_f4.x._0_4_ = *(uint *)(iVar1 + 0x10);
                local_f4.x._4_4_ = *(uint *)(iVar1 + 0x14);
                local_f4.y._0_4_ = *(uint *)(iVar1 + 0x20);
                local_f4.y._4_4_ = *(uint *)(iVar1 + 0x24);
                local_114.x._0_4_ = *(uint *)(iVar1 + 0x28);
                local_114.x._4_4_ = *(uint *)(iVar1 + 0x2c);
                local_114.y._0_4_ = *(uint *)(iVar1 + 0x38);
                local_114.y._4_4_ = *(uint *)(iVar1 + 0x3c);
                local_7c = local_f4.x._0_4_;
                local_78 = local_f4.x._4_4_;
                local_74 = local_f4.y._0_4_;
                local_70 = local_f4.y._4_4_;
                local_6c = local_114.x._0_4_;
                local_68 = local_114.x._4_4_;
                local_64 = local_114.y._0_4_;
                local_60 = local_114.y._4_4_;
              }
            }
            else {
              local_f4.x._0_4_ = *(uint *)(iVar1 + 0x18);
              local_f4.x._4_4_ = *(uint *)(iVar1 + 0x1c);
              local_f4.y._0_4_ = *(uint *)(iVar1 + 0x20);
              local_f4.y._4_4_ = *(uint *)(iVar1 + 0x24);
              local_114.x._0_4_ = *(uint *)(iVar1 + 0x30);
              local_114.x._4_4_ = *(uint *)(iVar1 + 0x34);
              local_114.y._0_4_ = *(uint *)(iVar1 + 0x38);
              local_114.y._4_4_ = *(uint *)(iVar1 + 0x3c);
              local_dc = local_f4.y._0_4_;
              local_d8 = local_f4.y._4_4_;
              local_d4 = local_114.x._0_4_;
              local_d0 = local_114.x._4_4_;
              local_ac = local_f4.x._0_4_;
              local_a8 = local_f4.x._4_4_;
              local_84 = local_114.y._0_4_;
              local_80 = local_114.y._4_4_;
            }
            dVar4 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                              (&local_104,&local_f4,SUB84 /* extract 2-byte value */(in_stack_fffffe84,0));
            dStack_3c = dVar4;
            in_stack_fffffe84 =
                 shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                           (&local_104,&local_114,SUB84 /* extract 2-byte value */(in_stack_fffffe84,0));
            iStack_144 = SUB84 /* extract 2-byte value */(dVar4,0);
            if (((((((ulonglong)dVar4 & 0x7fffffff00000000) == 0) && (iStack_144 == 0)) &&
                 (((ulonglong)in_stack_fffffe84 & 0x7fffffff00000000) == 0)) &&
                (SUB84 /* extract 2-byte value */(in_stack_fffffe84,0) == 0)) ||
               (((dVar4 < 0.0 && (0.0 < in_stack_fffffe84)) ||
                ((dStack_3c = in_stack_fffffe84, 0.0 < dVar4 && (in_stack_fffffe84 < 0.0)))))) {
              return 0;
            }
          }
          uVar2 = uVar2 + 1;
          iVar1 = iVar1 + 0x60;
        } while (uVar2 < in_stack_0000000c);
      }
      local_1c = local_1c + 0x60;
      uVar3 = uVar3 + 1;
    } while (uVar3 < in_stack_0000000c);
  }
  return 1;
}
