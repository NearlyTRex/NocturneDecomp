// Name: core_conveyor.cpp_CConveyor_setup_FUN_00447810
// Address: 00447810
// Address Range: [[00447810, 0044789c]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConveyor_setup_FUN_00447810(CConveyor *this_ptr)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_CConveyor_setup_FUN_00447810(CConveyor *this_ptr)

{
  CLocation *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_17f8 [1526];
  float fStack_1c;
  
  bVar8 = 0;
  pCVar2 = &(this_ptr->base).end_pos;
  pCVar1 = &(this_ptr->base).base.location;
  if ((CLocation *)pCVar2 != pCVar1) {
    pCVar2->x = (pCVar1->position).x;
    (this_ptr->base).end_pos.y = (this_ptr->base).base.location.position.y;
    (this_ptr->base).end_pos.z = (this_ptr->base).base.location.position.z;
  }
  pCVar3 = &(this_ptr->base).start_pos;
  if (pCVar3 != pCVar2) {
    pCVar3->x = pCVar2->x;
    (this_ptr->base).start_pos.y = (this_ptr->base).end_pos.y;
    (this_ptr->base).start_pos.z = (this_ptr->base).end_pos.z;
  }
  core_xform_cpp_FUN_005b7ed0(&(this_ptr->base).base.orient);
  puVar4 = (uint *)((int)this_ptr + (uint)bVar8 * -8 + 0x348);
  (this_ptr->base).end_orient.w = fStack_1c;
  puVar5 = puVar4 + (uint)bVar8 * -2 + 1;
  *puVar4 = *(uint *)(&stack0xffffffe8 + (uint)bVar8 * -8);
  *puVar5 = *(uint *)(&stack0xffffffec + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  puVar5[(uint)bVar8 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffec + (uint)bVar8 * -8 + (uint)bVar8 * -8) + ((uint)bVar8 * -2 + 1) * 4)
  ;
  puVar6 = (uint *)((int)this_ptr + (uint)bVar8 * -8 + 0x338);
  puVar4 = (uint *)((int)this_ptr + (uint)bVar8 * -8 + 0x348);
  (this_ptr->base).orig_orient.w = (this_ptr->base).end_orient.w;
  puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
  puVar5 = puVar4 + (uint)bVar8 * -2 + 1;
  *puVar6 = *puVar4;
  *puVar7 = *puVar5;
  puVar7[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
  core_platfrm_cpp_CPlatform_setup_FUN_005395d0(&this_ptr->base);
  (this_ptr->base).base.is_transparent = 1;
  return;
}
