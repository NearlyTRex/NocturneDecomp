// Name: shape_superopt.cpp_FUN_005c8e70
// Address: 005c8e70
// Address Range: [[005c8e70, 005c90fe]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_FUN_005c8e70(void)

#include "nocturne.h"

/* Signature: byte shape_superopt.cpp_FUN_005c8e70(uint param_1, uint param_2,
   uint param_3) */

int __cdecl shape_superopt_cpp_FUN_005c8e70(void)

{
  int iVar1;
  int iVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint *puVar3;
  double *pdVar4;
  uint *puVar5;
  byte bVar6;
  int in_stack_00000004;
  double local_9c;
  double local_94;
  double local_8c;
  uint local_84 [6];
  uint local_6c [6];
  int local_54;
  uint uStack_50;
  int local_44;
  int local_3c;
  uint uStack_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  local_18 = 0;
  local_24 = 0;
  local_3c = 0;
  uStack_38 = 0;
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    local_28 = 0;
    local_1c = in_stack_00000004 + 0x14;
    do {
      iVar2 = local_28 + *(int *)(in_stack_00000004 + 0x30);
      puVar3 = (uint *)(iVar2 + 0x10);
      puVar5 = local_6c;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      local_9c = *(double *)(iVar2 + 0x28) - *(double *)(iVar2 + 0x10);
      local_94 = *(double *)(iVar2 + 0x30) - *(double *)(iVar2 + 0x18);
      local_8c = *(double *)(iVar2 + 0x38) - *(double *)(iVar2 + 0x20);
      pdVar4 = &local_9c;
      puVar3 = local_84;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *(uint *)pdVar4;
        pdVar4 = (double *)((int)pdVar4 + (uint)bVar6 * -8 + 4);
        puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      }
      local_2c = 0;
      local_14 = 0;
      local_20 = iVar2;
      shape_superopt_cpp_FUN_005c9aa0();
      if ((local_2c != 0) && (local_14 != 0)) {
        iVar1 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        iVar2 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        if ((iVar1 == 0) && (iVar2 == 0)) {
          return 0;
        }
        local_44 = shape_superopt_cpp_FUN_005c9100();
        if ((double)CONCAT44(uStack_38,local_3c) < (double)CONCAT44(extraout_EDX,local_44)) {
          local_18 = local_20;
          local_3c = local_44;
          uStack_38 = extraout_EDX;
        }
        local_34 = local_44;
        local_34 = shape_superopt_cpp_FUN_005c9100();
        local_30 = extraout_EDX_00;
        local_54 = local_34;
        uStack_50 = extraout_EDX_00;
        if ((double)CONCAT44(uStack_38,local_3c) < (double)CONCAT44(extraout_EDX_00,local_34)) {
          local_3c = local_34;
          uStack_38 = extraout_EDX_00;
          local_18 = local_20;
        }
      }
      local_24 = local_24 + 1;
      local_28 = local_28 + 0x60;
    } while (local_24 < *(uint *)(in_stack_00000004 + 0x2c));
  }
  return local_18;
}
