// Name: core_vessel.cpp_CCryptVessel_setup_FUN_005e8fc0
// Address: 005e8fc0
// Address Range: [[005e8fc0, 005e8fcd]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_setup_FUN_005e8fc0(CCryptVessel *this_ptr)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_setup_FUN_005e8fc0(CCryptVessel *this_ptr)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  CDemonActor *pCVar3;
  CBoundingBox3D CStack_28;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->unk5);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_28);
  pCVar3 = this_ptr->start_loc;
  this_ptr->carrier = (CDemonActor *)0x0;
  if (pCVar3 != (CDemonActor *)0x0) {
    pCVar1 = &(this_ptr->base).location;
    fStack_10 = (pCVar3->location).position.x - (pCVar1->position).x;
    fStack_c = (pCVar3->location).position.y - (this_ptr->base).location.position.y;
    fStack_8 = (pCVar3->location).position.z - (this_ptr->base).location.position.z;
    if (SQRT(fStack_8 * fStack_8 + fStack_10 * fStack_10 + fStack_c * fStack_c) <
        (float)0.5) {
      pCVar3 = this_ptr->start_loc;
      (pCVar1->position).x = (pCVar3->location).position.x;
      (this_ptr->base).location.position.y = (pCVar3->location).position.y;
      (this_ptr->base).location.position.z = (pCVar3->location).position.z;
      (this_ptr->base).location.area_id = (pCVar3->location).area_id;
      pCVar3 = this_ptr->start_loc;
      pUVar2 = &(this_ptr->base).orient;
      if (pUVar2 != &pCVar3->orient) {
        (pUVar2->vec).x = (pCVar3->orient).vec.x;
        (this_ptr->base).orient.vec.y = (pCVar3->orient).vec.y;
        (this_ptr->base).orient.vec.z = (pCVar3->orient).vec.z;
      }
    }
  }
  this_ptr->unk2[0] = '\x01';
  this_ptr->unk2[1] = '\0';
  this_ptr->unk2[2] = '\0';
  this_ptr->unk2[3] = '\0';
  (this_ptr->unk3).which_flame = 0;
  (this_ptr->unk3).flame_state = 1;
  (this_ptr->unk3).globe_scalar = 0.0;
  (this_ptr->unk3).flame_size.x = 0.5;
  (this_ptr->unk3).flame_size.y = 1.0;
  (this_ptr->unk3).flame_size.z = 0.5;
  core_flame_cpp_CFlame_setup_FUN_004c9b90(&this_ptr->unk3);
  (this_ptr->base).is_transparent = 1;
  return;
}
