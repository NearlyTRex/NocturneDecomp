// Name: shape_superopt.cpp_FUN_005c8b50
// Address: 005c8b50
// Address Range: [[005c8b50, 005c8e6a]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_FUN_005c8b50(void)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_FUN_005c8b50(void)

{
  double dVar1;
  int iVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int iVar3;
  uint *puVar4;
  double *pdVar5;
  uint *puVar6;
  byte bVar7;
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
  int local_54;
  uint uStack_50;
  int local_44;
  uint uStack_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint uStack_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  double *local_14;
  
  bVar7 = 0;
  local_1c = 0;
  local_20 = 0;
  local_44 = 0;
  uStack_40 = 0;
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    local_24 = 0;
    local_14 = (double *)(in_stack_00000004 + 0x14);
    do {
      iVar3 = local_24 + *(int *)(in_stack_00000004 + 0x30);
      local_18 = iVar3;
      puVar4 = (uint *)(iVar3 + 0x10);
      puVar6 = local_6c;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      local_84 = *(double *)(iVar3 + 0x28) - *(double *)(iVar3 + 0x10);
      local_7c = *(double *)(iVar3 + 0x30) - *(double *)(iVar3 + 0x18);
      local_74 = *(double *)(iVar3 + 0x38) - *(double *)(iVar3 + 0x20);
      pdVar5 = &local_84;
      puVar4 = &local_cc;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *(uint *)pdVar5;
        pdVar5 = (double *)((int)pdVar5 + (uint)bVar7 * -8 + 4);
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      }
      local_9c = __BITCAST_DOUBLE(CONCAT44(uStack_c0,local_c4)) * local_14[2] -
                 __BITCAST_DOUBLE(CONCAT44(uStack_b8,local_bc)) * local_14[1];
      local_94 = __BITCAST_DOUBLE(CONCAT44(uStack_b8,local_bc)) * *local_14 -
                 __BITCAST_DOUBLE(CONCAT44(uStack_c8,local_cc)) * local_14[2];
      local_8c = __BITCAST_DOUBLE(CONCAT44(uStack_c8,local_cc)) * local_14[1] -
                 __BITCAST_DOUBLE(CONCAT44(uStack_c0,local_c4)) * *local_14;
      dVar1 = 1.0 / SQRT(local_8c * local_8c + local_9c * local_9c + local_94 * local_94);
      local_9c = local_9c * dVar1;
      local_94 = local_94 * dVar1;
      local_2c = 0;
      local_28 = 0;
      local_8c = local_8c * dVar1;
      local_b4 = local_9c;
      local_ac = local_94;
      local_a4 = local_8c;
      shape_superopt_cpp_FUN_005c9aa0();
      if ((local_2c != 0) && (local_28 != 0)) {
        iVar2 = shape_superopt_cpp_FUN_005ca590();
        iVar3 = shape_superopt_cpp_FUN_005ca590();
        if ((iVar2 == 0) && (iVar3 == 0)) {
          return 0;
        }
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = shape_superopt_cpp_FUN_005cb3a0();
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = shape_superopt_cpp_FUN_005cb3a0();
        }
        if ((iVar2 != 0) || (iVar3 != 0)) {
          if ((iVar2 != 0) && (iVar3 != 0)) {
            return local_18;
          }
          if (iVar2 == 0) {
            local_3c = shape_superopt_cpp_FUN_005c9100();
            local_38 = extraout_EDX_00;
            local_54 = local_3c;
            uStack_50 = extraout_EDX_00;
            if (__BITCAST_DOUBLE(CONCAT44(uStack_40,local_44)) < __BITCAST_DOUBLE(CONCAT44(extraout_EDX_00,local_3c))) {
              local_44 = local_3c;
              uStack_40 = extraout_EDX_00;
              local_1c = local_18;
            }
          }
          else {
            local_3c = shape_superopt_cpp_FUN_005c9100();
            local_38 = extraout_EDX;
            local_34 = local_3c;
            uStack_30 = extraout_EDX;
            if (__BITCAST_DOUBLE(CONCAT44(uStack_40,local_44)) < __BITCAST_DOUBLE(CONCAT44(extraout_EDX,local_3c))) {
              local_44 = local_3c;
              uStack_40 = extraout_EDX;
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
