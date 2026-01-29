// Name: shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0
// Address: 005c84c0
// Address Range: [[005c84c0, 005c8b45]]
// Convention: unknown
// Signature: undefined4 shape_superopt_cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0(void)

#include "nocturne.h"

uint shape_superopt_cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0(void)

{
  double dVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  uint *puVar7;
  byte bVar8;
  int in_stack_00000004;
  uint local_114 [6];
  double local_fc;
  double local_f4;
  double local_ec;
  double local_e4;
  double local_dc;
  double local_d4;
  ulonglong local_cc;
  ulonglong local_c4;
  ulonglong local_bc;
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
  uint uStack_80;
  uint local_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  uint local_6c [6];
  uint local_54;
  uint uStack_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  uint uStack_40;
  int local_2c;
  int local_28;
  uint *local_24;
  uint *local_20;
  double *local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
    iVar2 = shape_superopt_cpp_FUN_005c91e0();
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
      puVar3 = shape_memdbg_cpp_malloc_FUN_006021da(*(int *)(in_stack_00000004 + 0x2c) * 0xc0);
      if (puVar3 == (uint *)0x0) {
        return 0;
      }
      local_20 = puVar3;
      local_24 = shape_memdbg_cpp_malloc_FUN_006021da(*(int *)(in_stack_00000004 + 0x2c) * 0xc0);
      if (local_24 == (uint *)0x0) {
        shape_memdbg_cpp_free_FUN_005fe659(puVar3);
        return 0;
      }
      local_1c = (double *)(in_stack_00000004 + 0x14);
      while( true ) {
        puVar3 = local_24;
        iVar2 = shape_superopt_cpp_FUN_005c8b50();
        if (iVar2 == 0) break;
        puVar3 = (uint *)(iVar2 + 0x10);
        puVar7 = local_114;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar3;
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        local_fc = *(double *)(iVar2 + 0x28) - *(double *)(iVar2 + 0x10);
        local_f4 = *(double *)(iVar2 + 0x30) - *(double *)(iVar2 + 0x18);
        local_ec = *(double *)(iVar2 + 0x38) - *(double *)(iVar2 + 0x20);
        pdVar6 = &local_fc;
        puVar3 = &local_84;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *(uint *)pdVar6;
          pdVar6 = (double *)((int)pdVar6 + (uint)bVar8 * -8 + 4);
          puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
        }
        local_b4 = local_84;
        local_b0 = uStack_80;
        local_ac = local_7c;
        local_a8 = uStack_78;
        local_a4 = local_74;
        local_a0 = uStack_70;
        local_cc = (double)CONCAT44(uStack_78,local_7c) * local_1c[2] -
                   (double)CONCAT44(uStack_70,local_74) * local_1c[1];
        local_c4 = (double)CONCAT44(uStack_70,local_74) * *local_1c -
                   (double)CONCAT44(uStack_80,local_84) * local_1c[2];
        local_bc = (double)CONCAT44(uStack_80,local_84) * local_1c[1] -
                   (double)CONCAT44(uStack_78,local_7c) * *local_1c;
        dVar1 = 1.0 / SQRT(local_bc * local_bc + local_cc * local_cc + local_c4 * local_c4);
        local_cc = local_cc * dVar1;
        local_c4 = local_c4 * dVar1;
        local_bc = local_bc * dVar1;
        local_18 = 0;
        local_14 = 0;
        shape_superopt_cpp_FUN_005c9aa0();
        if ((local_18 == 0) || (local_14 == 0)) {
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          shape_memdbg_cpp_free_FUN_005fe659(local_24);
          return 0;
        }
        iVar2 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        puVar3 = local_24;
        if (iVar2 == 0) goto LAB_005c8a4c;
        iVar2 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        if (iVar2 == 0) goto LAB_005c8a6e;
        iVar2 = shape_superopt_cpp_FUN_005c91e0();
        if (iVar2 == 0) {
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          shape_memdbg_cpp_free_FUN_005fe659(puVar3);
          return 0;
        }
        iVar2 = shape_superopt_cpp_FUN_005c91e0();
        if (iVar2 == 0) goto LAB_005c8a6e;
        if ((local_18 == 0) && (local_14 == 0)) goto LAB_005c89e6;
        if ((local_18 != 0) && (local_14 != 0)) {
          shape_memdbg_cpp_free_FUN_005fe659(local_20);
          shape_memdbg_cpp_free_FUN_005fe659(local_24);
          return 0;
        }
        if (local_18 == 0) {
          puVar3 = local_24;
          puVar7 = *(uint **)(in_stack_00000004 + 0x30);
          for (uVar5 = (uint)(local_14 * 0x60) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar7 = *puVar3;
            puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(byte *)puVar7 = *(byte *)puVar3;
            puVar3 = (uint *)((int)puVar3 + (uint)bVar8 * -2 + 1);
            puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
          }
          *(int *)(in_stack_00000004 + 0x2c) = local_14;
        }
        else {
          puVar3 = local_20;
          puVar7 = *(uint **)(in_stack_00000004 + 0x30);
          for (uVar5 = (uint)(local_18 * 0x60) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar7 = *puVar3;
            puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(byte *)puVar7 = *(byte *)puVar3;
            puVar3 = (uint *)((int)puVar3 + (uint)bVar8 * -2 + 1);
            puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
          }
          *(int *)(in_stack_00000004 + 0x2c) = local_18;
        }
      }
      iVar2 = shape_superopt_cpp_FUN_005c8e70();
      if (iVar2 == 0) {
        shape_memdbg_cpp_free_FUN_005fe659(local_20);
        shape_memdbg_cpp_free_FUN_005fe659(puVar3);
        return 0;
      }
      puVar3 = (uint *)(iVar2 + 0x10);
      puVar7 = local_6c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      local_e4 = *(double *)(iVar2 + 0x28) - *(double *)(iVar2 + 0x10);
      local_dc = *(double *)(iVar2 + 0x30) - *(double *)(iVar2 + 0x18);
      local_d4 = *(double *)(iVar2 + 0x38) - *(double *)(iVar2 + 0x20);
      pdVar6 = &local_e4;
      puVar3 = &local_54;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *(uint *)pdVar6;
        pdVar6 = (double *)((int)pdVar6 + (uint)bVar8 * -8 + 4);
        puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
      }
      local_9c = local_54;
      local_98 = uStack_50;
      local_94 = local_4c;
      local_90 = uStack_48;
      local_8c = local_44;
      local_88 = uStack_40;
      local_28 = 0;
      local_2c = 0;
      shape_superopt_cpp_FUN_005c9aa0();
      if ((local_28 != 0) && (local_2c != 0)) {
        iVar2 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        puVar3 = local_24;
        if (iVar2 != 0) {
          iVar2 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
          if (iVar2 == 0) {
LAB_005c8a6e:
            shape_memdbg_cpp_free_FUN_005fe659(local_20);
            shape_memdbg_cpp_free_FUN_005fe659(puVar3);
            return 0;
          }
          if ((local_28 == 0) || (local_2c == 0)) goto LAB_005c8a2a;
          puVar3 = local_20;
          puVar7 = *(uint **)(in_stack_00000004 + 0x30);
          for (uVar5 = (uint)(local_28 * 0x60) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar7 = *puVar3;
            puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(byte *)puVar7 = *(byte *)puVar3;
            puVar3 = (uint *)((int)puVar3 + (uint)bVar8 * -2 + 1);
            puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
          }
          *(int *)(in_stack_00000004 + 0x2c) = local_28;
          iVar2 = shape_superopt_cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0();
          if (iVar2 == 0) {
            shape_memdbg_cpp_free_FUN_005fe659(local_20);
            shape_memdbg_cpp_free_FUN_005fe659(local_24);
            return 0;
          }
          puVar3 = local_24;
          puVar7 = *(uint **)(in_stack_00000004 + 0x30);
          for (uVar5 = (uint)(local_2c * 0x60) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar7 = *puVar3;
            puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(byte *)puVar7 = *(byte *)puVar3;
            puVar3 = (uint *)((int)puVar3 + (uint)bVar8 * -2 + 1);
            puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
          }
          *(int *)(in_stack_00000004 + 0x2c) = local_2c;
          iVar2 = shape_superopt_cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0();
          if (iVar2 != 0) {
LAB_005c89e6:
            shape_memdbg_cpp_free_FUN_005fe659(local_20);
            shape_memdbg_cpp_free_FUN_005fe659(local_24);
            return 1;
          }
        }
LAB_005c8a4c:
        shape_memdbg_cpp_free_FUN_005fe659(local_20);
        shape_memdbg_cpp_free_FUN_005fe659(local_24);
        return 0;
      }
LAB_005c8a2a:
      shape_memdbg_cpp_free_FUN_005fe659(local_20);
      shape_memdbg_cpp_free_FUN_005fe659(local_24);
      return 0;
    }
  }
  return 1;
}
