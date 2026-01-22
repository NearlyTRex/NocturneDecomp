// Name: shape_superopt.cpp_FUN_005cbf90
// Address: 005cbf90
// Address Range: [[005cbf90, 005cc61f]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_FUN_005cbf90(void)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_FUN_005cbf90(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  double *in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  double dVar4;
  int local_130;
  uint uStack_12c;
  double local_128;
  double local_120;
  int local_118;
  uint uStack_114;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  CVector2d local_e8;
  CVector2d local_d8;
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
  double local_a0;
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
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (0.0 <= *in_stack_00000008) {
    local_128 = *in_stack_00000008;
  }
  else {
    local_128 = -*in_stack_00000008;
  }
  if (in_stack_00000008[1] < 0.0) {
    dVar4 = -in_stack_00000008[1];
  }
  else {
    dVar4 = in_stack_00000008[1];
  }
  if (in_stack_00000008[2] < 0.0) {
    local_120 = -in_stack_00000008[2];
  }
  else {
    local_120 = in_stack_00000008[2];
  }
  if ((local_128 < dVar4) || (local_128 < local_120)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  if ((dVar4 < local_128) || (dVar4 < local_120)) {
    local_1c = 0;
  }
  else {
    local_1c = 1;
  }
  if ((local_120 < local_128) || (local_120 < dVar4)) {
    local_20 = 0;
  }
  else {
    local_20 = 1;
  }
  if (in_stack_00000018 != 0) {
    local_2c = in_stack_0000000c + in_stack_00000010 * 0x60;
    local_28 = in_stack_00000014;
    local_30 = in_stack_00000014 + in_stack_00000018 * 0x60;
    do {
      if ((local_28 < in_stack_0000000c) || (local_2c <= local_28)) {
        if (local_18 == 0) {
          if (local_1c == 0) {
            if (local_20 != 0) {
              local_d8.x._0_4_ = *(uint *)(local_28 + 0x10);
              local_d8.x._4_4_ = *(uint *)(local_28 + 0x14);
              local_d8.y._0_4_ = *(uint *)(local_28 + 0x18);
              local_d8.y._4_4_ = *(uint *)(local_28 + 0x1c);
              local_80 = local_d8.y._0_4_;
              local_7c = local_d8.y._4_4_;
              local_50 = local_d8.x._0_4_;
              local_4c = local_d8.x._4_4_;
            }
          }
          else {
            local_d8.x._0_4_ = *(uint *)(local_28 + 0x10);
            local_d8.x._4_4_ = *(uint *)(local_28 + 0x14);
            local_d8.y._0_4_ = *(uint *)(local_28 + 0x20);
            local_d8.y._4_4_ = *(uint *)(local_28 + 0x24);
            local_98 = local_d8.x._0_4_;
            local_94 = local_d8.x._4_4_;
            local_90 = local_d8.y._0_4_;
            local_8c = local_d8.y._4_4_;
          }
        }
        else {
          local_d8.x._0_4_ = *(uint *)(local_28 + 0x18);
          local_d8.x._4_4_ = *(uint *)(local_28 + 0x1c);
          local_d8.y._0_4_ = *(uint *)(local_28 + 0x20);
          local_d8.y._4_4_ = *(uint *)(local_28 + 0x24);
          local_c8 = local_d8.x._0_4_;
          local_c4 = local_d8.x._4_4_;
          local_78 = local_d8.y._0_4_;
          local_74 = local_d8.y._4_4_;
        }
        iVar3 = 0;
        bVar1 = false;
        if (in_stack_00000010 != 0) {
          local_24 = in_stack_0000000c + in_stack_00000010 * 0x60;
          uVar2 = in_stack_0000000c;
          do {
            if (local_18 == 0) {
              if (local_1c == 0) {
                if (local_20 != 0) {
                  local_f8 = *(uint *)(uVar2 + 0x10);
                  uStack_f4 = *(uint *)(uVar2 + 0x14);
                  local_f0 = *(uint *)(uVar2 + 0x18);
                  uStack_ec = *(uint *)(uVar2 + 0x1c);
                  local_e8.x._0_4_ = *(uint *)(uVar2 + 0x28);
                  local_e8.x._4_4_ = *(uint *)(uVar2 + 0x2c);
                  local_e8.y._0_4_ = *(uint *)(uVar2 + 0x30);
                  local_e8.y._4_4_ = *(uint *)(uVar2 + 0x34);
                  local_b0 = local_f8;
                  local_ac = uStack_f4;
                  local_a8 = local_e8.y._0_4_;
                  local_a4 = local_e8.y._4_4_;
                  local_60 = local_e8.x._0_4_;
                  local_5c = local_e8.x._4_4_;
                  local_48 = local_f0;
                  local_44 = uStack_ec;
                }
              }
              else {
                local_f8 = *(uint *)(uVar2 + 0x10);
                uStack_f4 = *(uint *)(uVar2 + 0x14);
                local_f0 = *(uint *)(uVar2 + 0x20);
                uStack_ec = *(uint *)(uVar2 + 0x24);
                local_e8.x._0_4_ = *(uint *)(uVar2 + 0x28);
                local_e8.x._4_4_ = *(uint *)(uVar2 + 0x2c);
                local_e8.y._0_4_ = *(uint *)(uVar2 + 0x38);
                local_e8.y._4_4_ = *(uint *)(uVar2 + 0x3c);
                local_c0 = local_e8.x._0_4_;
                local_bc = local_e8.x._4_4_;
                local_b8 = local_f0;
                local_b4 = uStack_ec;
                local_88 = local_e8.y._0_4_;
                local_84 = local_e8.y._4_4_;
                local_68 = local_f8;
                local_64 = uStack_f4;
              }
            }
            else {
              local_f8 = *(uint *)(uVar2 + 0x18);
              uStack_f4 = *(uint *)(uVar2 + 0x1c);
              local_f0 = *(uint *)(uVar2 + 0x20);
              uStack_ec = *(uint *)(uVar2 + 0x24);
              local_e8.x._0_4_ = *(uint *)(uVar2 + 0x30);
              local_e8.x._4_4_ = *(uint *)(uVar2 + 0x34);
              local_e8.y._0_4_ = *(uint *)(uVar2 + 0x38);
              local_e8.y._4_4_ = *(uint *)(uVar2 + 0x3c);
              local_70 = local_e8.y._0_4_;
              local_6c = local_e8.y._4_4_;
              local_58 = local_f8;
              local_54 = uStack_f4;
              local_40 = local_e8.x._0_4_;
              local_3c = local_e8.x._4_4_;
              local_38 = local_f0;
              local_34 = uStack_ec;
            }
            if ((((double)CONCAT44(uStack_f4,local_f8) !=
                  (double)CONCAT44(local_d8.x._4_4_,local_d8.x._0_4_)) ||
                ((double)CONCAT44(uStack_ec,local_f0) !=
                 (double)CONCAT44(local_d8.y._4_4_,local_d8.y._0_4_))) &&
               (((double)CONCAT44(local_e8.x._4_4_,local_e8.x._0_4_) !=
                 (double)CONCAT44(local_d8.x._4_4_,local_d8.x._0_4_) ||
                ((double)CONCAT44(local_e8.y._4_4_,local_e8.y._0_4_) !=
                 (double)CONCAT44(local_d8.y._4_4_,local_d8.y._0_4_))))) {
              local_a0 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                                   (&local_e8,&local_d8,SUB84(dVar4,0));
              uStack_12c = (uint)((ulonglong)local_a0 >> 0x20);
              local_130 = SUB84(local_a0,0);
              if ((((ulonglong)local_a0 & 0x7fffffff00000000) != 0) || (local_130 != 0)) {
                if (bVar1) {
                  if ((((double)CONCAT44(uStack_114,local_118) < 0.0) && (0.0 < local_a0)) ||
                     ((0.0 < (double)CONCAT44(uStack_114,local_118) && (local_a0 < 0.0)))) break;
                }
                else {
                  local_118 = local_130;
                  bVar1 = true;
                  uStack_114 = uStack_12c;
                }
              }
            }
            uVar2 = uVar2 + 0x60;
            iVar3 = iVar3 + 1;
          } while (uVar2 < local_24);
        }
        if (iVar3 == in_stack_00000010) {
          return 1;
        }
      }
      local_28 = local_28 + 0x60;
    } while (local_28 < local_30);
  }
  return 0;
}
