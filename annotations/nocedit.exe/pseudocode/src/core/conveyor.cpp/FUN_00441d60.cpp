// Name: core_conveyor.cpp_FUN_00441d60
// Address: 00441d60
// Address Range: [[00441d60, 00441dec]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_00441d60()

#include "nocturne.h"

/* Signature: byte actors_other_conveyor.cpp_FUN_00441d60(uint param_1) */

void core_conveyor_cpp_FUN_00441d60(void)

{
  BADSPACEBASE *in_ESP;
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  int in_stack_00000004;
  uint auStackY_17f4 [1525];
  CVector3f *in_stack_ffffffe4;
  uint uStack_18;
  
  bVar5 = 0;
  puVar1 = (uint *)(in_stack_00000004 + 0x328);
  if (puVar1 != (uint *)(in_stack_00000004 + 0x20)) {
    *puVar1 = *(uint *)(in_stack_00000004 + 0x20);
    *(uint *)(in_stack_00000004 + 0x32c) = *(uint *)(in_stack_00000004 + 0x24);
    *(uint *)(in_stack_00000004 + 0x330) = *(uint *)(in_stack_00000004 + 0x28);
  }
  if ((uint *)(in_stack_00000004 + 0x31c) != puVar1) {
    *(uint *)(in_stack_00000004 + 0x31c) = *puVar1;
    *(uint *)(in_stack_00000004 + 800) = *(uint *)(in_stack_00000004 + 0x32c);
    *(uint *)(in_stack_00000004 + 0x324) = *(uint *)(in_stack_00000004 + 0x330);
  }
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20
            ((CQuaternion4f *)(in_stack_00000004 + 0x30),in_stack_ffffffe4);
  puVar1 = (uint *)(in_stack_00000004 + 0x348 + (uint)bVar5 * -8);
  *(uint *)(in_stack_00000004 + 0x344) = uStack_18;
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *puVar1 = *(uint *)(&stack0xffffffec + (uint)bVar5 * -8);
  *puVar2 = *(uint *)(&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar2[(uint)bVar5 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  puVar3 = (uint *)(in_stack_00000004 + 0x338 + (uint)bVar5 * -8);
  puVar1 = (uint *)(in_stack_00000004 + 0x348 + (uint)bVar5 * -8);
  *(uint *)(in_stack_00000004 + 0x334) = *(uint *)(in_stack_00000004 + 0x344);
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *puVar3 = *puVar1;
  *puVar4 = *puVar2;
  puVar4[(uint)bVar5 * -2 + 1] = puVar2[(uint)bVar5 * -2 + 1];
  core_platfrm_cpp_CPlatform_LoadCourseSomething_FUN_0054ca20();
  *(uint *)(in_stack_00000004 + 0xfc) = 1;
  return;
}
