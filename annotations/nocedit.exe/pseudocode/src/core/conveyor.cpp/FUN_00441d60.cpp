// Name: core_conveyor.cpp_FUN_00441d60
// Address: 00441d60
// Address Range: [[00441d60, 00441dec]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_FUN_00441d60(void)

#include "nocturne.h"

/* Signature: byte actors_other_conveyor.cpp_FUN_00441d60(uint param_1) */

void __cdecl core_conveyor_cpp_FUN_00441d60(void)

{
  CLocation *pCVar1;
  CVector3f *pCVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  CPlatform *in_stack_00000004;
  float afStackY_17f8 [1526];
  CQuaternion4f local_1c;
  
  bVar7 = 0;
  pCVar2 = &in_stack_00000004->end_pos;
  pCVar1 = &(in_stack_00000004->base).location;
  if ((CLocation *)pCVar2 != pCVar1) {
    pCVar2->x = (pCVar1->position).x;
    (in_stack_00000004->end_pos).y = (in_stack_00000004->base).location.position.y;
    (in_stack_00000004->end_pos).z = (in_stack_00000004->base).location.position.z;
  }
  if (&in_stack_00000004->start_pos != pCVar2) {
    (in_stack_00000004->start_pos).x = pCVar2->x;
    (in_stack_00000004->start_pos).y = (in_stack_00000004->end_pos).y;
    (in_stack_00000004->start_pos).z = (in_stack_00000004->end_pos).z;
  }
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20
            ((CVector3f *)&(in_stack_00000004->base).orient,&local_1c);
  puVar4 = (uint *)((int)in_stack_00000004 + (uint)bVar7 * -8 + 0x348);
  (in_stack_00000004->end_orient).w = local_1c.w;
  puVar5 = puVar4 + (uint)bVar7 * -2 + 1;
  puVar3 = (uint *)((int)&local_1c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *puVar4 = *(uint *)((int)&local_1c + (uint)bVar7 * -8 + 4);
  *puVar5 = *puVar3;
  puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
  puVar5 = (uint *)((int)in_stack_00000004 + (uint)bVar7 * -8 + 0x338);
  puVar3 = (uint *)((int)in_stack_00000004 + (uint)bVar7 * -8 + 0x348);
  (in_stack_00000004->orig_orient).w = (in_stack_00000004->end_orient).w;
  puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
  puVar4 = puVar3 + (uint)bVar7 * -2 + 1;
  *puVar5 = *puVar3;
  *puVar6 = *puVar4;
  puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
  core_platfrm_cpp_CPlatform_setup_FUN_0054ca20(in_stack_00000004);
  (in_stack_00000004->base).is_transparent = 1;
  return;
}
