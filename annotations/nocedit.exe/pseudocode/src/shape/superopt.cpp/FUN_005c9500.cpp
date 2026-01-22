// Name: shape_superopt.cpp_FUN_005c9500
// Address: 005c9500
// Address Range: [[005c9500, 005c9a9e]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c9500()

#include "nocturne.h"

int shape_superopt_cpp_FUN_005c9500(void)

{
  bool bVar1;
  bool bVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  int in_stack_00000004;
  double *in_stack_00000008;
  uint local_188 [4];
  uint local_178;
  uint uStack_174;
  uint local_170 [6];
  uint local_158 [6];
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  double local_100;
  double local_f8;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0 [4];
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  uint local_c4;
  double local_c0;
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
  uint local_68 [6];
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  int local_28;
  int local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14;
  
  bVar11 = 0;
  if ((*(int *)(in_stack_00000004 + 0x2c) != 0) &&
     (iVar7 = *(int *)(in_stack_00000004 + 0x30), iVar7 != 0)) {
    puVar9 = (uint *)(iVar7 + 0x10);
    puVar10 = local_e0;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar9 = local_e0;
    puVar10 = local_188;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    uVar8 = 0;
    if (*(int *)(in_stack_00000004 + 0x2c) != 0) {
      pdVar6 = (double *)(iVar7 + 0x10);
      do {
        if (*pdVar6 < (double)CONCAT44(local_e0[1],local_e0[0])) {
          local_e0[0] = *(uint *)pdVar6;
          local_e0[1] = *(uint *)((int)pdVar6 + 4);
        }
        if (pdVar6[1] < (double)CONCAT44(local_e0[3],local_e0[2])) {
          local_e0[2] = *(uint *)(pdVar6 + 1);
          local_e0[3] = *(uint *)((int)pdVar6 + 0xc);
        }
        if (pdVar6[2] < (double)CONCAT44(uStack_cc,local_d0)) {
          local_d0 = *(uint *)(pdVar6 + 2);
          uStack_cc = *(uint *)((int)pdVar6 + 0x14);
        }
        if ((double)CONCAT44(local_188[1],local_188[0]) < *pdVar6) {
          local_188[0] = *(uint *)pdVar6;
          local_188[1] = *(uint *)((int)pdVar6 + 4);
        }
        if ((double)CONCAT44(local_188[3],local_188[2]) < pdVar6[1]) {
          local_188[2] = *(uint *)(pdVar6 + 1);
          local_188[3] = *(uint *)((int)pdVar6 + 0xc);
        }
        if ((double)CONCAT44(uStack_174,local_178) < pdVar6[2]) {
          local_178 = *(uint *)(pdVar6 + 2);
          uStack_174 = *(uint *)((int)pdVar6 + 0x14);
        }
        uVar8 = uVar8 + 1;
        pdVar6 = pdVar6 + 0xc;
      } while (uVar8 < *(uint *)(in_stack_00000004 + 0x2c));
    }
    local_1c = crt_memory_c_malloc_FUN_006021da(*(int *)(in_stack_00000004 + 0x2c) * 0xc0);
    local_28 = 0;
    if (local_1c != (void *)0x0) {
      local_18 = local_1c;
      local_20 = crt_memory_c_malloc_FUN_006021da(*(int *)(in_stack_00000004 + 0x2c) * 0xc0);
      local_14 = local_20;
      local_24 = 0;
      if (local_20 == (void *)0x0) {
        crt_memory_c_free_FUN_005fe659(local_18);
        return 0;
      }
      if (*in_stack_00000008 + 0.5 <
          (double)CONCAT44(local_188[1],local_188[0]) - (double)CONCAT44(local_e0[1],local_e0[0])) {
        local_80 = 0;
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        local_6c = 0;
        local_7c = 0x3ff00000;
        local_f0 = local_e0[2];
        local_ec = local_e0[3];
        local_28 = 0;
        local_e8 = local_d0;
        local_24 = 0;
        local_e4 = uStack_cc;
        local_f8 = *in_stack_00000008 + (double)CONCAT44(local_e0[1],local_e0[0]);
        pdVar6 = &local_f8;
        puVar9 = local_158;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *(uint *)pdVar6;
          pdVar6 = (double *)((int)pdVar6 + (uint)bVar11 * -8 + 4);
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        }
        local_140 = 0;
        local_13c = 0x3ff00000;
        local_138 = 0;
        local_134 = 0;
        local_130 = 0;
        local_12c = 0;
      }
      else if (in_stack_00000008[1] + 0.5 <
               (double)CONCAT44(local_188[3],local_188[2]) -
               (double)CONCAT44(local_e0[3],local_e0[2])) {
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_40 = 0;
        local_3c = 0;
        local_44 = 0x3ff00000;
        local_38 = *(uint *)(in_stack_00000008 + 1);
        uStack_34 = *(uint *)((int)in_stack_00000008 + 0xc);
        local_c8 = local_e0[0];
        local_c4 = local_e0[1];
        local_b8 = local_d0;
        local_b4 = uStack_cc;
        local_28 = 0;
        local_c0 = (double)CONCAT44(local_e0[3],local_e0[2]) + in_stack_00000008[1];
        puVar9 = &local_c8;
        puVar10 = local_170;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        local_128 = 0;
        local_124 = 0;
        local_120 = 0;
        local_118 = 0;
        local_114 = 0;
        local_11c = 0x3ff00000;
      }
      else {
        if ((double)CONCAT44(uStack_174,local_178) - (double)CONCAT44(uStack_cc,local_d0) <=
            in_stack_00000008[2] + 0.5) {
          crt_memory_c_free_FUN_005fe659(local_18);
          crt_memory_c_free_FUN_005fe659(local_20);
          return 0;
        }
        local_98 = 0;
        local_94 = 0;
        local_90 = 0;
        local_8c = 0;
        local_88 = 0;
        local_84 = 0x3ff00000;
        local_30 = *(uint *)(in_stack_00000008 + 2);
        uStack_2c = *(uint *)((int)in_stack_00000008 + 0x14);
        local_110 = local_e0[0];
        local_10c = local_e0[1];
        local_108 = local_e0[2];
        local_104 = local_e0[3];
        local_100 = (double)CONCAT44(uStack_cc,local_d0) + in_stack_00000008[2];
        puVar9 = &local_110;
        puVar10 = local_68;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        local_28 = 0;
        local_b0 = 0;
        local_ac = 0;
        local_a8 = 0;
        local_a4 = 0;
        local_a0 = 0;
        local_9c = 0x3ff00000;
      }
      shape_superopt_cpp_FUN_005c9aa0();
      pvVar4 = local_1c;
      bVar1 = false;
      if (local_28 != 0) {
        pvVar3 = local_1c;
        do {
          if ((*(int *)((int)pvVar3 + 8) == 0) || (*(int *)((int)pvVar3 + 0xc) == 0)) {
            bVar1 = true;
            break;
          }
          pvVar3 = (void *)((int)pvVar3 + 0x60);
        } while (pvVar3 < (void *)(local_28 * 0x60 + (int)local_1c));
      }
      bVar2 = false;
      if (local_24 != 0) {
        pvVar3 = local_14;
        do {
          if ((*(int *)((int)pvVar3 + 8) == 0) || (*(int *)((int)pvVar3 + 0xc) == 0)) {
            bVar2 = true;
            break;
          }
          pvVar3 = (void *)((int)pvVar3 + 0x60);
        } while (pvVar3 < (void *)(local_24 * 0x60 + (int)local_14));
      }
      if ((bVar1) || (bVar2)) {
        iVar7 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        if (iVar7 == 0) {
          crt_memory_c_free_FUN_005fe659(pvVar4);
          crt_memory_c_free_FUN_005fe659(local_14);
          return 0;
        }
        iVar7 = shape_superopt_cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590();
        if (iVar7 == 0) {
          crt_memory_c_free_FUN_005fe659(pvVar4);
          crt_memory_c_free_FUN_005fe659(local_14);
          return 0;
        }
      }
      pvVar4 = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(0x34);
      iVar7 = 0;
      if (pvVar4 != (void *)0x0) {
        iVar7 = shape_superopt_cpp_FUN_005c79a0();
      }
      if (iVar7 == 0) {
        crt_memory_c_free_FUN_005fe659(local_1c);
        crt_memory_c_free_FUN_005fe659(local_14);
        return 0;
      }
      *(uint *)(iVar7 + 0x10) = *(uint *)(in_stack_00000004 + 0x10);
      *(uint *)(iVar7 + 0x14) = *(uint *)(in_stack_00000004 + 0x14);
      *(uint *)(iVar7 + 0x18) = *(uint *)(in_stack_00000004 + 0x18);
      *(uint *)(iVar7 + 0x1c) = *(uint *)(in_stack_00000004 + 0x1c);
      *(uint *)(iVar7 + 0x20) = *(uint *)(in_stack_00000004 + 0x20);
      *(uint *)(iVar7 + 0x24) = *(uint *)(in_stack_00000004 + 0x24);
      *(uint *)(iVar7 + 0x28) = *(uint *)(in_stack_00000004 + 0x28);
      *(int *)(iVar7 + 0x2c) = local_28;
      *(void **)(iVar7 + 0x30) = local_1c;
      shape_superopt_cpp_FUN_005c79f0();
      *(int *)(in_stack_00000004 + 0x2c) = local_24;
      *(void **)(in_stack_00000004 + 0x30) = local_14;
      return iVar7;
    }
  }
  return 0;
}
