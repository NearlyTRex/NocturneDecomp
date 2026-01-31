// Name: core_crate.cpp_FUN_00448660
// Address: 00448660
// Address Range: [[00448660, 0044887d]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_FUN_00448660(void)

#include "nocturne.h"

/* Signature: byte actors_other_crate.cpp_FUN_00448660(uint param_1) */

void __cdecl core_crate_cpp_FUN_00448660(void)

{
  CPlatform *pCVar1;
  COrientation *pCVar2;
  float unaff_retaddr;
  CDemonActor *in_stack_00000004;
  float local_c;
  
  if (in_stack_00000004[2].location.position.y != 0.0) {
    in_stack_00000004[2].location.area_id = 0;
    return;
  }
  (in_stack_00000004->location).position.x =
       (in_stack_00000004->unk3).x + (in_stack_00000004->location).position.x;
  (in_stack_00000004->location).position.y =
       (in_stack_00000004->unk3).y + (in_stack_00000004->location).position.y;
  (in_stack_00000004->location).position.z =
       (in_stack_00000004->unk3).z + (in_stack_00000004->location).position.z;
  (in_stack_00000004->unk3).z = 0.0;
  (in_stack_00000004->unk3).y = (in_stack_00000004->unk3).z;
  (in_stack_00000004->unk3).x = (in_stack_00000004->unk3).y;
  (in_stack_00000004->orient).pitch =
       (in_stack_00000004->unk4).x + (in_stack_00000004->orient).pitch;
  (in_stack_00000004->orient).bank = (in_stack_00000004->unk4).y + (in_stack_00000004->orient).bank;
  (in_stack_00000004->orient).heading =
       (in_stack_00000004->unk4).z + (in_stack_00000004->orient).heading;
  (in_stack_00000004->unk4).z = 0.0;
  (in_stack_00000004->unk4).y = (in_stack_00000004->unk4).z;
  (in_stack_00000004->unk4).x = (in_stack_00000004->unk4).y;
  if (((((in_stack_00000004[2].orient.pitch == (in_stack_00000004->location).position.x) &&
        (in_stack_00000004[2].orient.bank == (in_stack_00000004->location).position.y)) &&
       (in_stack_00000004[2].orient.heading == (in_stack_00000004->location).position.z)) &&
      ((in_stack_00000004[2].orient_matrix.m[0].x == (in_stack_00000004->orient).pitch &&
       (in_stack_00000004[2].orient_matrix.m[0].y == (in_stack_00000004->orient).bank)))) &&
     (in_stack_00000004[2].orient_matrix.m[0].z == (in_stack_00000004->orient).heading)) {
    local_c = in_stack_00000004[2].orient_matrix.m[1].x;
  }
  else {
    unaff_retaddr =
         (*((in_stack_00000004->vtable)._ub)->cylinderGroundCheck)
                   (in_stack_00000004,in_stack_00000004[2].location.position.z,(CVector3f *)0x0);
    if ((CLocation *)&in_stack_00000004[2].orient != &in_stack_00000004->location) {
      in_stack_00000004[2].orient.pitch = (in_stack_00000004->location).position.x;
      in_stack_00000004[2].orient.bank = (in_stack_00000004->location).position.y;
      in_stack_00000004[2].orient.heading = (in_stack_00000004->location).position.z;
    }
    if ((COrientation *)&in_stack_00000004[2].orient_matrix != &in_stack_00000004->orient) {
      in_stack_00000004[2].orient_matrix.m[0].x = (in_stack_00000004->orient).pitch;
      in_stack_00000004[2].orient_matrix.m[0].y = (in_stack_00000004->orient).bank;
      in_stack_00000004[2].orient_matrix.m[0].z = (in_stack_00000004->orient).heading;
    }
    in_stack_00000004[2].orient_matrix.m[1].x = unaff_retaddr;
  }
  if ((in_stack_00000004[2].location.area_id == 0) &&
     (in_stack_00000004->standing_platform != (CPlatform *)0x0)) {
    in_stack_00000004[2].location.area_id = (int)in_stack_00000004->standing_platform;
  }
  pCVar1 = (CPlatform *)in_stack_00000004[2].location.area_id;
  if (pCVar1 != (CPlatform *)0x0) {
    in_stack_00000004->standing_platform = pCVar1;
    (in_stack_00000004->location).position.x = (pCVar1->base).location.position.x;
    (in_stack_00000004->location).position.y = (pCVar1->base).location.position.y;
    (in_stack_00000004->location).position.z = (pCVar1->base).location.position.z;
    (in_stack_00000004->location).area_id = (pCVar1->base).location.area_id;
    pCVar1 = in_stack_00000004->standing_platform;
    pCVar2 = &(pCVar1->base).orient;
    if (&in_stack_00000004->orient != pCVar2) {
      (in_stack_00000004->orient).pitch = pCVar2->pitch;
      (in_stack_00000004->orient).bank = (pCVar1->base).orient.bank;
      (in_stack_00000004->orient).heading = (pCVar1->base).orient.heading;
    }
    (*((in_stack_00000004->standing_platform->base).vtable._ub)->getBoundingBox)
              (&in_stack_00000004->standing_platform->base,(CBoundingBox3D *)&stack0xffffffe8);
    (in_stack_00000004->location).position.y =
         (unaff_retaddr - local_c) + (in_stack_00000004->location).position.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
    return;
  }
  (in_stack_00000004->location).position.y = unaff_retaddr;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  return;
}
