// Name: shape_superopt.cpp_FUN_005c9340
// Address: 005c9340
// Address Range: [[005c9340, 005c94f5]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c9340()

#include "nocturne.h"

void shape_superopt_cpp_FUN_005c9340(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  BADSPACEBASE *in_ESP;
  uint uVar7;
  uint *puVar8;
  double *pdVar9;
  byte bVar10;
  int in_stack_00000008;
  uint *in_stack_0000000c;
  double dStack_bc;
  double dStack_b4;
  double dStack_ac;
  double dStack_a4;
  double dStack_9c;
  double dStack_94;
  double dStack_8c;
  double dStack_84;
  double dStack_7c;
  double dStack_74;
  double dStack_6c;
  double dStack_64;
  uint uStack_14;
  
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
  uStack_14 = 0;
  while( true ) {
    if ((*in_stack_0000000c - 1 <= uStack_14) || (*in_stack_0000000c < 3)) break;
    pvVar6 = (void *)(uStack_14 * 0x60 + in_stack_00000008);
    iVar4 = uStack_14 + 1;
    puVar8 = (uint *)((int)pvVar6 + 0x10);
    pdVar9 = &dStack_bc;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pdVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pdVar9 = (double *)((int)pdVar9 + ((uint)bVar10 * -2 + 1) * 4);
    }
    puVar8 = (uint *)((int)pvVar6 + 0x28);
    pdVar9 = &dStack_74;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pdVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pdVar9 = (double *)((int)pdVar9 + (uint)bVar10 * -8 + 4);
    }
    iVar4 = iVar4 * 0x60 + in_stack_00000008;
    puVar8 = (uint *)(iVar4 + 0x10);
    pdVar9 = &dStack_a4;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pdVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pdVar9 = (double *)((int)pdVar9 + (uint)bVar10 * -8 + 4);
    }
    dVar1 = dStack_a4 - dStack_74;
    dVar3 = dStack_9c - dStack_6c;
    dVar2 = dStack_94 - dStack_64;
    puVar8 = (uint *)(iVar4 + 0x28);
    pdVar9 = &dStack_8c;
    for (iVar5 = 6; uVar7 = uStack_14, iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pdVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pdVar9 = (double *)((int)pdVar9 + (uint)bVar10 * -8 + 4);
    }
    if ((1e-10 < SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1)) ||
       (1e-10 <
        SQRT((dStack_7c - dStack_ac) * (dStack_7c - dStack_ac) +
             (dStack_84 - dStack_b4) * (dStack_84 - dStack_b4) +
             (dStack_8c - dStack_bc) * (dStack_8c - dStack_bc)))) {
      uStack_14 = uStack_14 + 1;
    }
    else {
      crt_string_c_memmove_FUN_005fe5e0
                (pvVar6,(void *)((uStack_14 + 2) * 0x60 + in_stack_00000008),
                 ((*in_stack_0000000c - uStack_14) + -2) * 0x60);
      *in_stack_0000000c = *in_stack_0000000c - 2;
      uStack_14 = uVar7;
    }
  }
  if (2 < *in_stack_0000000c) {
    return;
  }
  *in_stack_0000000c = 0;
  return;
}
