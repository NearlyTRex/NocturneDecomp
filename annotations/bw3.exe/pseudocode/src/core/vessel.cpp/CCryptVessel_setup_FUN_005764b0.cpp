// Name: core_vessel.cpp_CCryptVessel_setup_FUN_005764b0
// Address: 005764b0
// Address Range: [[005764b0, 00576604]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_setup_FUN_005764b0(CCryptVessel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_vessel_cpp_CCryptVessel_setup_FUN_005764b0(CCryptVessel *this_ptr)

{
  CLocation *pCVar1;
  CLocation *pCVar2;
  UOrientationVector *pUVar3;
  CActorDestination *pCVar4;
  UOrientationVector *pUVar5;
  byte bVar6;
  float afStackY_1008 [1009];
  CBoundingBox3D *in_stack_ffffffc0;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->orb_model);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffffc0);
  pCVar4 = this_ptr->start_loc;
  this_ptr->carrier = (CDemonActor *)0x0;
  if (pCVar4 != (CActorDestination *)0x0) {
    pCVar1 = &(pCVar4->base).location;
    pCVar2 = &(this_ptr->base).location;
    fStack_14 = (pCVar1->position).x - (pCVar2->position).x;
    fStack_20 = fStack_14;
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    if (SQRT(fStack_18 * fStack_18 + fStack_20 * fStack_20 + fStack_1c * fStack_1c) <
        (float)_DAT_005d7097) {
      (pCVar2->position).x = (pCVar1->position).x;
      (this_ptr->base).location.position.y = (pCVar4->base).location.position.y;
      (this_ptr->base).location.position.z = (pCVar4->base).location.position.z;
      (this_ptr->base).location.area_id = (pCVar4->base).location.area_id;
      pCVar4 = this_ptr->start_loc;
      pUVar3 = &(this_ptr->base).orient;
      pUVar5 = &(pCVar4->base).orient;
      if (pUVar3 != pUVar5) {
        (pUVar3->vec).x = (pUVar5->vec).x;
        (this_ptr->base).orient.vec.y = (pCVar4->base).orient.vec.y;
        (this_ptr->base).orient.vec.z = (pCVar4->base).orient.vec.z;
      }
    }
  }
  this_ptr->init_frame = 1;
  (this_ptr->flame).which_flame = FLAME_TYPE_TORCH;
  (this_ptr->flame).flame_state = 1;
  (this_ptr->flame).globe_scalar = 0.0;
  (this_ptr->flame).flame_size.x = 0.5;
  (this_ptr->flame).flame_size.y = 1.0;
  (this_ptr->flame).flame_size.z = 0.5;
  core_flame_cpp_CFlame_setup_FUN_004a5aa0(&this_ptr->flame);
  (this_ptr->base).is_transparent = 1;
  return;
}
