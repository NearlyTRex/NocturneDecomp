// Name: shape_superopt.cpp_FUN_005c8b50
// Address: 005c8b50
// Address Range: [[005c8b50, 005c8e6a]]
// Convention: unknown
// Signature: int shape_superopt_cpp_FUN_005c8b50(void)

#include "nocturne.h"

/* Signature: byte shape_superopt.cpp_FUN_005c8b50(uint param_1, uint param_2,
   uint param_3) */

int shape_superopt_cpp_FUN_005c8b50(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  double *pdVar4;
  uint *puVar5;
  byte bVar6;
  double dVar7;
  int in_stack_00000004;
  uint local_cc;
  uint uStack_c8;
  uint local_c4;
  uint uStack_c0;
  uint local_bc;
  uint uStack_b8;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_94;
  double local_8c;
  double local_84;
  double local_7c;
  double local_74;
  uint local_6c [6];
  ulonglong local_54;
  ulonglong local_44;
  ulonglong local_3c;
  ulonglong local_34;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  double *local_14;
  
  dVar7 = (double)CONCAT44(local_3c._4_4_,(uint)local_3c);
  bVar6 = 0;
  local_1c = 0;
  local_20 = 0;
  local_44._0_4_ = 0;
  local_44._4_4_ = 0;
  local_44 = 0.0;
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    local_24 = 0;
    local_14 = (double *)(in_stack_00000004 + 0x14);
    do {
      iVar2 = local_24 + *(int *)(in_stack_00000004 + 0x30);
      local_18 = iVar2;
      puVar3 = (uint *)(iVar2 + 0x10);
      puVar5 = local_6c;
      local_3c = dVar7;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      local_84 = *(double *)(iVar2 + 0x28) - *(double *)(iVar2 + 0x10);
      local_7c = *(double *)(iVar2 + 0x30) - *(double *)(iVar2 + 0x18);
      local_74 = *(double *)(iVar2 + 0x38) - *(double *)(iVar2 + 0x20);
      pdVar4 = &local_84;
      puVar3 = &local_cc;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *(uint *)pdVar4;
        pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      }
      local_9c = (double)CONCAT44(uStack_c0,local_c4) * local_14[2] -
                 (double)CONCAT44(uStack_b8,local_bc) * local_14[1];
      local_94 = (double)CONCAT44(uStack_b8,local_bc) * *local_14 -
                 (double)CONCAT44(uStack_c8,local_cc) * local_14[2];
      local_8c = (double)CONCAT44(uStack_c8,local_cc) * local_14[1] -
                 (double)CONCAT44(uStack_c0,local_c4) * *local_14;
      dVar7 = 1.0 / SQRT(local_8c * local_8c + local_9c * local_9c + local_94 * local_94);
      local_9c = local_9c * dVar7;
      local_94 = local_94 * dVar7;
      local_2c = 0;
      local_28 = 0;
      local_8c = local_8c * dVar7;
      local_b4 = local_9c;
      local_ac = local_94;
      local_a4 = local_8c;
      shape_superopt_cpp_FUN_005c9aa0();
      dVar7 = local_3c;
      if ((local_2c != 0) && (local_28 != 0)) {
        iVar1 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        iVar2 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        if ((iVar1 == 0) && (iVar2 == 0)) {
          return 0;
        }
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = shape_superopt_cpp_FUN_005cb3a0();
        }
        if (iVar2 == 0) {
          iVar2 = 0;
          dVar7 = local_3c;
        }
        else {
          iVar2 = shape_superopt_cpp_FUN_005cb3a0();
          dVar7 = local_3c;
        }
        if ((iVar1 != 0) || (iVar2 != 0)) {
          if ((iVar1 != 0) && (iVar2 != 0)) {
            return local_18;
          }
          local_3c = dVar7;
          if (iVar1 == 0) {
            dVar7 = (double)shape_superopt_cpp_FUN_005c9100();
            local_3c = dVar7;
            local_54 = dVar7;
            if (local_44 < dVar7) {
              local_44 = dVar7;
              local_1c = local_18;
            }
          }
          else {
            dVar7 = (double)shape_superopt_cpp_FUN_005c9100();
            local_3c = dVar7;
            local_34 = dVar7;
            if (local_44 < dVar7) {
              local_44 = dVar7;
              local_1c = local_18;
            }
          }
        }
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + 0x60;
    } while (local_20 < *(uint *)(in_stack_00000004 + 0x2c));
  }
  return local_1c;
}
