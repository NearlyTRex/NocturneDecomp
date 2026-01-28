// Name: shape_superopt.cpp_FUN_005c9340
// Address: 005c9340
// Address Range: [[005c9340, 005c94f5]]
// Convention: unknown
// Signature: void shape_superopt_cpp_FUN_005c9340(void)

#include "nocturne.h"

void shape_superopt_cpp_FUN_005c9340(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint *puVar8;
  double *pdVar9;
  byte bVar10;
  int in_stack_00000008;
  uint *in_stack_0000000c;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  uint local_18;
  
  bVar10 = 0;
  uVar7 = 0;
  if (*in_stack_0000000c != 0) {
    do {
      pvVar6 = (void *)(uVar7 * 0x60 + in_stack_00000008);
      dVar1 = *(double *)((int)pvVar6 + 0x28) - *(double *)((int)pvVar6 + 0x10);
      dVar3 = *(double *)((int)pvVar6 + 0x30) - *(double *)((int)pvVar6 + 0x18);
      dVar2 = *(double *)((int)pvVar6 + 0x38) - *(double *)((int)pvVar6 + 0x20);
      if (SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1) < 1e-10) {
        crt_string_c_memmove_FUN_005fe5e0
                  (pvVar6,(void *)((uVar7 + 1) * 0x60 + in_stack_00000008),
                   ((*in_stack_0000000c - uVar7) + -1) * 0x60);
        uVar7 = uVar7 - 1;
        *in_stack_0000000c = *in_stack_0000000c - 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *in_stack_0000000c);
  }
  local_18 = 0;
  while ((local_18 < *in_stack_0000000c - 1 && (2 < *in_stack_0000000c))) {
    pvVar6 = (void *)(local_18 * 0x60 + in_stack_00000008);
    iVar4 = local_18 + 1;
    puVar8 = (uint *)((int)pvVar6 + 0x10);
    pdVar9 = &local_c0;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pdVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pdVar9 = (double *)((int)pdVar9 + ((uint)bVar10 * -2 + 1) * 4);
    }
    puVar8 = (uint *)((int)pvVar6 + 0x28);
    pdVar9 = &local_78;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pdVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pdVar9 = (double *)((int)pdVar9 + (uint)bVar10 * -8 + 4);
    }
    iVar4 = iVar4 * 0x60 + in_stack_00000008;
    puVar8 = (uint *)(iVar4 + 0x10);
    pdVar9 = &local_a8;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pdVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pdVar9 = (double *)((int)pdVar9 + (uint)bVar10 * -8 + 4);
    }
    dVar1 = local_a8 - local_78;
    dVar3 = local_a0 - local_70;
    dVar2 = local_98 - local_68;
    puVar8 = (uint *)(iVar4 + 0x28);
    pdVar9 = &local_90;
    for (iVar5 = 6; uVar7 = local_18, iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pdVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pdVar9 = (double *)((int)pdVar9 + (uint)bVar10 * -8 + 4);
    }
    if ((1e-10 < SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1)) ||
       (1e-10 <
        SQRT((local_80 - local_b0) * (local_80 - local_b0) +
             (local_88 - local_b8) * (local_88 - local_b8) +
             (local_90 - local_c0) * (local_90 - local_c0)))) {
      local_18 = local_18 + 1;
    }
    else {
      crt_string_c_memmove_FUN_005fe5e0
                (pvVar6,(void *)((local_18 + 2) * 0x60 + in_stack_00000008),
                 ((*in_stack_0000000c - local_18) + -2) * 0x60);
      *in_stack_0000000c = *in_stack_0000000c - 2;
      local_18 = uVar7;
    }
  }
  if (2 < *in_stack_0000000c) {
    return;
  }
  *in_stack_0000000c = 0;
  return;
}
