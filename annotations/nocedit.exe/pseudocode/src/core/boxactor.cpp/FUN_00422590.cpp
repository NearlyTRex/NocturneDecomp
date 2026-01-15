// Name: core_boxactor.cpp_FUN_00422590
// Address: 00422590
// Address Range: [[00422590, 00422632]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422590()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_00422590(uint param_1) */

void core_boxactor_cpp_FUN_00422590(void)

{
  CBoundingBox3D *this_ptr;
  CVector3f *pCVar1;
  int in_stack_00000004;
  CVector3f *out_point;
  CVector3f CStack_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  if (*(CDemonActor **)(in_stack_00000004 + 0x324) == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (*(CDemonActor **)(in_stack_00000004 + 0x324),&local_1c,
             (CVector3f *)(in_stack_00000004 + 0x20));
  pCVar1 = &local_1c;
  out_point = &local_10;
  this_ptr = (CBoundingBox3D *)
             (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x324) + 0x154) + 0x14))();
  pCVar1 = core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(this_ptr,out_point,pCVar1);
  if (&local_1c != pCVar1) {
    local_1c.x = pCVar1->x;
    local_1c.y = pCVar1->y;
    local_1c.z = pCVar1->z;
  }
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (*(CDemonActor **)(in_stack_00000004 + 0x324),&CStack_28,&local_1c);
  *(float *)(in_stack_00000004 + 0x20) = pCVar1->x;
  *(float *)(in_stack_00000004 + 0x24) = pCVar1->y;
  *(float *)(in_stack_00000004 + 0x28) = pCVar1->z;
  return;
}
