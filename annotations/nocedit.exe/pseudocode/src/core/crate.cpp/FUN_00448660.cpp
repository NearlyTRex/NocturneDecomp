// Name: core_crate.cpp_FUN_00448660
// Address: 00448660
// Address Range: [[00448660, 0044887d]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448660()

#include "nocturne.h"

/* Signature: byte actors_other_crate.cpp_FUN_00448660(uint param_1) */

void core_crate_cpp_FUN_00448660(void)

{
  int iVar1;
  float unaff_retaddr;
  CDemonActor *in_stack_00000004;
  float fStack_14;
  float fStack_8;
  
  if (in_stack_00000004[2].location.position.y != 0.0) {
    in_stack_00000004[2].location.area_id = 0;
    return;
  }
  (in_stack_00000004->location).position.x =
       (in_stack_00000004->field12_0xe0).x + (in_stack_00000004->location).position.x;
  (in_stack_00000004->location).position.y =
       (in_stack_00000004->field12_0xe0).y + (in_stack_00000004->location).position.y;
  (in_stack_00000004->location).position.z =
       (in_stack_00000004->field12_0xe0).z + (in_stack_00000004->location).position.z;
  (in_stack_00000004->field12_0xe0).z = 0.0;
  (in_stack_00000004->field12_0xe0).y = (in_stack_00000004->field12_0xe0).z;
  (in_stack_00000004->field12_0xe0).x = (in_stack_00000004->field12_0xe0).y;
  (in_stack_00000004->orient).pitch =
       (in_stack_00000004->field13_0xec).x + (in_stack_00000004->orient).pitch;
  (in_stack_00000004->orient).bank =
       (in_stack_00000004->field13_0xec).y + (in_stack_00000004->orient).bank;
  (in_stack_00000004->orient).heading =
       (in_stack_00000004->field13_0xec).z + (in_stack_00000004->orient).heading;
  (in_stack_00000004->field13_0xec).z = 0.0;
  (in_stack_00000004->field13_0xec).y = (in_stack_00000004->field13_0xec).z;
  (in_stack_00000004->field13_0xec).x = (in_stack_00000004->field13_0xec).y;
  if (((((in_stack_00000004[2].orient.pitch != (in_stack_00000004->location).position.x) ||
        (in_stack_00000004[2].orient.bank != (in_stack_00000004->location).position.y)) ||
       (in_stack_00000004[2].orient.heading != (in_stack_00000004->location).position.z)) ||
      ((in_stack_00000004[2].orient_matrix.m[0].x != (in_stack_00000004->orient).pitch ||
       (in_stack_00000004[2].orient_matrix.m[0].y != (in_stack_00000004->orient).bank)))) ||
     (in_stack_00000004[2].orient_matrix.m[0].z != (in_stack_00000004->orient).heading)) {
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
  if ((in_stack_00000004[2].location.area_id == 0) && (in_stack_00000004->field11_0xdc != 0)) {
    in_stack_00000004[2].location.area_id = in_stack_00000004->field11_0xdc;
  }
  iVar1 = in_stack_00000004[2].location.area_id;
  if (iVar1 == 0) {
    (in_stack_00000004->location).position.y = unaff_retaddr;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
    return;
  }
  in_stack_00000004->field11_0xdc = iVar1;
  (in_stack_00000004->location).position.x = *(float *)(iVar1 + 0x20);
  (in_stack_00000004->location).position.y = *(float *)(iVar1 + 0x24);
  (in_stack_00000004->location).position.z = *(float *)(iVar1 + 0x28);
  (in_stack_00000004->location).area_id = *(int *)(iVar1 + 0x2c);
  iVar1 = in_stack_00000004->field11_0xdc;
  if (&in_stack_00000004->orient != (COrientation *)(iVar1 + 0x30)) {
    (in_stack_00000004->orient).pitch = *(float *)(iVar1 + 0x30);
    (in_stack_00000004->orient).bank = *(float *)(iVar1 + 0x34);
    (in_stack_00000004->orient).heading = *(float *)(iVar1 + 0x38);
  }
  (**(code **)(*(int *)(in_stack_00000004->field11_0xdc + 0x154) + 0x14))();
  (in_stack_00000004->location).position.y =
       (fStack_8 - fStack_14) + (in_stack_00000004->location).position.y;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  return;
}
