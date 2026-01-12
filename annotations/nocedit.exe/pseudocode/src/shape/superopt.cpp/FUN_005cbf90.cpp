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
  BADSPACEBASE *in_ESP;
  int iVar3;
  double *in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  double dVar4;
  int iStack_12c;
  uint local_128;
  double dStack_124;
  double dStack_11c;
  int iStack_114;
  uint local_110;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  CVector2d CStack_e4;
  CVector2d CStack_d4;
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
  ulonglong local_98;
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
  uint local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  if (0.0 <= *in_stack_00000008) {
    dStack_124 = *in_stack_00000008;
  }
  else {
    dStack_124 = -*in_stack_00000008;
  }
  if (in_stack_00000008[1] < 0.0) {
    dVar4 = -in_stack_00000008[1];
  }
  else {
    dVar4 = in_stack_00000008[1];
  }
  if (in_stack_00000008[2] < 0.0) {
    dStack_11c = -in_stack_00000008[2];
  }
  else {
    dStack_11c = in_stack_00000008[2];
  }
  if ((dStack_124 < dVar4) || (dStack_124 < dStack_11c)) {
    iStack_14 = 0;
  }
  else {
    iStack_14 = 1;
  }
  if ((dVar4 < dStack_124) || (dVar4 < dStack_11c)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  if ((dStack_11c < dStack_124) || (dStack_11c < dVar4)) {
    local_1c = 0;
  }
  else {
    local_1c = 1;
  }
  if (in_stack_00000018 != 0) {
    local_28 = in_stack_0000000c + in_stack_00000010 * 0x60;
    local_24 = in_stack_00000014;
    local_2c = in_stack_00000014 + in_stack_00000018 * 0x60;
    do {
      if ((local_24 < in_stack_0000000c) || (local_28 <= local_24)) {
        if (iStack_14 == 0) {
          if (local_18 == 0) {
            if (local_1c != 0) {
              CStack_d4.x._0_4_ = *(uint *)(local_24 + 0x10);
              CStack_d4.x._4_4_ = *(uint *)(local_24 + 0x14);
              CStack_d4.y._0_4_ = *(uint *)(local_24 + 0x18);
              CStack_d4.y._4_4_ = *(uint *)(local_24 + 0x1c);
              local_7c = CStack_d4.y._0_4_;
              local_78 = CStack_d4.y._4_4_;
              local_4c = CStack_d4.x._0_4_;
              local_48 = CStack_d4.x._4_4_;
            }
          }
          else {
            CStack_d4.x._0_4_ = *(uint *)(local_24 + 0x10);
            local_98 = (double)CONCAT44 /* combine 2-byte values */(CStack_d4.x._0_4_,(uint)local_98);
            CStack_d4.x._4_4_ = *(uint *)(local_24 + 0x14);
            CStack_d4.y._0_4_ = *(uint *)(local_24 + 0x20);
            CStack_d4.y._4_4_ = *(uint *)(local_24 + 0x24);
            local_90 = CStack_d4.x._4_4_;
            local_8c = CStack_d4.y._0_4_;
            local_88 = CStack_d4.y._4_4_;
          }
        }
        else {
          CStack_d4.x._0_4_ = *(uint *)(local_24 + 0x18);
          CStack_d4.x._4_4_ = *(uint *)(local_24 + 0x1c);
          CStack_d4.y._0_4_ = *(uint *)(local_24 + 0x20);
          CStack_d4.y._4_4_ = *(uint *)(local_24 + 0x24);
          local_c4 = CStack_d4.x._0_4_;
          local_c0 = CStack_d4.x._4_4_;
          local_74 = CStack_d4.y._0_4_;
          local_70 = CStack_d4.y._4_4_;
        }
        iVar3 = 0;
        bVar1 = false;
        if (in_stack_00000010 != 0) {
          local_20 = in_stack_0000000c + in_stack_00000010 * 0x60;
          uVar2 = in_stack_0000000c;
          do {
            if (iStack_14 == 0) {
              if (local_18 == 0) {
                if (local_1c != 0) {
                  uStack_f4 = *(uint *)(uVar2 + 0x10);
                  local_f0 = *(uint *)(uVar2 + 0x14);
                  uStack_ec = *(uint *)(uVar2 + 0x18);
                  local_e8 = *(uint *)(uVar2 + 0x1c);
                  CStack_e4.x._0_4_ = *(uint *)(uVar2 + 0x28);
                  CStack_e4.x._4_4_ = *(uint *)(uVar2 + 0x2c);
                  CStack_e4.y._0_4_ = *(uint *)(uVar2 + 0x30);
                  CStack_e4.y._4_4_ = *(uint *)(uVar2 + 0x34);
                  local_ac = uStack_f4;
                  local_a8 = local_f0;
                  local_a4 = CStack_e4.y._0_4_;
                  local_a0 = CStack_e4.y._4_4_;
                  local_5c = CStack_e4.x._0_4_;
                  local_58 = CStack_e4.x._4_4_;
                  local_44 = uStack_ec;
                  local_40 = local_e8;
                }
              }
              else {
                uStack_f4 = *(uint *)(uVar2 + 0x10);
                local_f0 = *(uint *)(uVar2 + 0x14);
                uStack_ec = *(uint *)(uVar2 + 0x20);
                local_e8 = *(uint *)(uVar2 + 0x24);
                CStack_e4.x._0_4_ = *(uint *)(uVar2 + 0x28);
                CStack_e4.x._4_4_ = *(uint *)(uVar2 + 0x2c);
                CStack_e4.y._0_4_ = *(uint *)(uVar2 + 0x38);
                CStack_e4.y._4_4_ = *(uint *)(uVar2 + 0x3c);
                local_bc = CStack_e4.x._0_4_;
                local_b8 = CStack_e4.x._4_4_;
                local_b4 = uStack_ec;
                local_b0 = local_e8;
                local_84 = CStack_e4.y._0_4_;
                local_80 = CStack_e4.y._4_4_;
                local_64 = uStack_f4;
                local_60 = local_f0;
              }
            }
            else {
              uStack_f4 = *(uint *)(uVar2 + 0x18);
              local_f0 = *(uint *)(uVar2 + 0x1c);
              uStack_ec = *(uint *)(uVar2 + 0x20);
              local_e8 = *(uint *)(uVar2 + 0x24);
              CStack_e4.x._0_4_ = *(uint *)(uVar2 + 0x30);
              CStack_e4.x._4_4_ = *(uint *)(uVar2 + 0x34);
              CStack_e4.y._0_4_ = *(uint *)(uVar2 + 0x38);
              CStack_e4.y._4_4_ = *(uint *)(uVar2 + 0x3c);
              local_6c = CStack_e4.y._0_4_;
              local_68 = CStack_e4.y._4_4_;
              local_54 = uStack_f4;
              local_50 = local_f0;
              local_3c = CStack_e4.x._0_4_;
              local_38 = CStack_e4.x._4_4_;
              local_34 = uStack_ec;
              local_30 = local_e8;
            }
            if ((((double)CONCAT44 /* combine 2-byte values */(local_f0,uStack_f4) !=
                  (double)CONCAT44 /* combine 2-byte values */(CStack_d4.x._4_4_,CStack_d4.x._0_4_)) ||
                ((double)CONCAT44 /* combine 2-byte values */(local_e8,uStack_ec) !=
                 (double)CONCAT44 /* combine 2-byte values */(CStack_d4.y._4_4_,CStack_d4.y._0_4_))) &&
               (((double)CONCAT44 /* combine 2-byte values */(CStack_e4.x._4_4_,CStack_e4.x._0_4_) !=
                 (double)CONCAT44 /* combine 2-byte values */(CStack_d4.x._4_4_,CStack_d4.x._0_4_) ||
                ((double)CONCAT44 /* combine 2-byte values */(CStack_e4.y._4_4_,CStack_e4.y._0_4_) !=
                 (double)CONCAT44 /* combine 2-byte values */(CStack_d4.y._4_4_,CStack_d4.y._0_4_))))) {
              local_98 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640
                                   (&CStack_e4,&CStack_d4,SUB84 /* extract 2-byte value */(dVar4,0));
              local_128 = (uint)((ulonglong)local_98 >> 0x20);
              iStack_12c = SUB84 /* extract 2-byte value */(local_98,0);
              if ((((ulonglong)local_98 & 0x7fffffff00000000) != 0) || (iStack_12c != 0)) {
                if (bVar1) {
                  if ((((double)CONCAT44 /* combine 2-byte values */(local_110,iStack_114) < 0.0) && (0.0 < local_98)) ||
                     ((0.0 < (double)CONCAT44 /* combine 2-byte values */(local_110,iStack_114) && (local_98 < 0.0)))) break;
                }
                else {
                  iStack_114 = iStack_12c;
                  bVar1 = true;
                  local_110 = local_128;
                }
              }
            }
            uVar2 = uVar2 + 0x60;
            iVar3 = iVar3 + 1;
          } while (uVar2 < local_20);
        }
        if (iVar3 == in_stack_00000010) {
          return 1;
        }
      }
      local_24 = local_24 + 0x60;
    } while (local_24 < local_2c);
  }
  return 0;
}
