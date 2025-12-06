// Name: core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20
// Address: 00480e20
// Address Range: [[00480e20, 00481014]]
// Convention: __cdecl
// Signature: float * core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20(CDoor * this_ptr)

#include "nocturne.h"

float * __cdecl core_door_cpp_CDoor_getOpenStandPos_FUN_00480e20(CDoor *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  CVector3f CStack_64;
  CVector3f local_58;
  float local_48 [3];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  CVector3f local_2c;
  CVector3f CStack_1c;
  
  CStack_64.z = *in_stack_0000000c;
  local_58.x = in_stack_0000000c[1];
  local_58.y = in_stack_0000000c[2];
  if (local_58.y < 0.0) {
    local_38 = -CStack_64.z;
    local_34 = -local_58.x;
    local_30 = -local_58.y;
    if (&CStack_64.z != &local_38) {
      CStack_64.z = local_38;
      local_58.x = local_34;
      local_58.y = local_30;
    }
  }
  switch(this_ptr->door_type) {
  case 0:
  case 1:
  case 2:
    pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (&this_ptr->base_actor,&local_2c,in_stack_00000010);
    if (pCVar5->z <= 0.0) {
      pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (&this_ptr->base_actor,&CStack_1c,&local_58);
      fVar1 = *(float *)(this_ptr->field17_0x9bc + 4);
      fVar2 = pCVar5->y;
      fVar3 = *(float *)(this_ptr->field17_0x9bc + 8);
      fVar4 = pCVar5->z;
      if (in_stack_00000008 != local_48) {
        *in_stack_00000008 = *(float *)this_ptr->field17_0x9bc - pCVar5->x;
        in_stack_00000008[1] = fVar1 - fVar2;
        in_stack_00000008[2] = fVar3 - fVar4;
        in_stack_00000008[1] = (this_ptr->base_actor).location.position.y;
        return in_stack_00000008;
      }
    }
    else {
      pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (&this_ptr->base_actor,&CStack_64,&local_58);
      fVar1 = *(float *)(this_ptr->field17_0x9bc + 4);
      fVar2 = pCVar5->y;
      fVar3 = *(float *)(this_ptr->field17_0x9bc + 8);
      fVar4 = pCVar5->z;
      if (in_stack_00000008 != &local_3c) {
        *in_stack_00000008 = *(float *)this_ptr->field17_0x9bc + pCVar5->x;
        in_stack_00000008[1] = fVar1 + fVar2;
        in_stack_00000008[2] = fVar3 + fVar4;
        in_stack_00000008[1] = (this_ptr->base_actor).location.position.y;
        return in_stack_00000008;
      }
    }
    break;
  case 3:
    if (in_stack_00000008 != (float *)this_ptr->field17_0x9bc) {
      *in_stack_00000008 = *(float *)this_ptr->field17_0x9bc;
      in_stack_00000008[1] = *(float *)(this_ptr->field17_0x9bc + 4);
      in_stack_00000008[2] = *(float *)(this_ptr->field17_0x9bc + 8);
      in_stack_00000008[1] = (this_ptr->base_actor).location.position.y;
      return in_stack_00000008;
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\door.cpp";
    g_CurrentLineNumber = 0x340;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDoor::getOpenStandPos - invalid doorType");
    in_stack_00000008[1] = (this_ptr->base_actor).location.position.y;
    return in_stack_00000008;
  }
  in_stack_00000008[1] = (this_ptr->base_actor).location.position.y;
  return in_stack_00000008;
}
