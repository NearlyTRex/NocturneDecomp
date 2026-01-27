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
  float *in_stack_00000008;
  float *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  CVector3f local_68;
  CVector3f local_5c;
  float local_50 [3];
  float local_44 [3];
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  
  local_5c.x = *in_stack_0000000c;
  local_5c.y = in_stack_0000000c[1];
  local_5c.z = in_stack_0000000c[2];
  if (local_5c.z < 0.0) {
    local_38.x = -local_5c.x;
    local_38.y = -local_5c.y;
    local_38.z = -local_5c.z;
    if (&local_5c != &local_38) {
      local_5c.x = local_38.x;
      local_5c.y = local_38.y;
      local_5c.z = local_38.z;
    }
  }
  switch(this_ptr->door_type) {
  case 0:
  case 1:
  case 2:
    pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (&this_ptr->base,&local_2c,in_stack_00000010);
    if (pCVar5->z <= 0.0) {
      pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (&this_ptr->base,&local_20,&local_5c);
      fVar1 = *(float *)(this_ptr->unk3 + 4);
      fVar2 = pCVar5->y;
      fVar3 = *(float *)(this_ptr->unk3 + 8);
      fVar4 = pCVar5->z;
      if (in_stack_00000008 != local_50) {
        *in_stack_00000008 = *(float *)this_ptr->unk3 - pCVar5->x;
        in_stack_00000008[1] = fVar1 - fVar2;
        in_stack_00000008[2] = fVar3 - fVar4;
        in_stack_00000008[1] = (this_ptr->base).location.position.y;
        return in_stack_00000008;
      }
    }
    else {
      pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (&this_ptr->base,&local_68,&local_5c);
      fVar1 = *(float *)(this_ptr->unk3 + 4);
      fVar2 = pCVar5->y;
      fVar3 = *(float *)(this_ptr->unk3 + 8);
      fVar4 = pCVar5->z;
      if (in_stack_00000008 != local_44) {
        *in_stack_00000008 = *(float *)this_ptr->unk3 + pCVar5->x;
        in_stack_00000008[1] = fVar1 + fVar2;
        in_stack_00000008[2] = fVar3 + fVar4;
        in_stack_00000008[1] = (this_ptr->base).location.position.y;
        return in_stack_00000008;
      }
    }
    break;
  case 3:
    if (in_stack_00000008 != (float *)this_ptr->unk3) {
      *in_stack_00000008 = *(float *)this_ptr->unk3;
      in_stack_00000008[1] = *(float *)(this_ptr->unk3 + 4);
      in_stack_00000008[2] = *(float *)(this_ptr->unk3 + 8);
      in_stack_00000008[1] = (this_ptr->base).location.position.y;
      return in_stack_00000008;
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\door.cpp";
    g_CurrentLineNumber = 0x340;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDoor::getOpenStandPos - invalid doorType");
    in_stack_00000008[1] = (this_ptr->base).location.position.y;
    return in_stack_00000008;
  }
  in_stack_00000008[1] = (this_ptr->base).location.position.y;
  return in_stack_00000008;
}
