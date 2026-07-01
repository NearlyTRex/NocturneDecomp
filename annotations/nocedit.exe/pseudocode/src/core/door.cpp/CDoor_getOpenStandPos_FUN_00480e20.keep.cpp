// Name: core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20
// Address: 00480e20
// MANUAL RECONSTRUCTION
// Address Range: [[00480e20, 00481014]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_door_cpp_CDoor_getOpenStandPos_FUN_00480e20(CDoor *this_ptr,CVector3f *out_pos,CVector3f *direction,CVector3f *actor_pos)

#include "nocturne.h"

CVector3f * __cdecl core_door_cpp_CDoor_getOpenStandPos_FUN_00480e20(CDoor *this_ptr,CVector3f *out_pos,CVector3f *direction,CVector3f *actor_pos)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  CVector3f local_68;
  CVector3f local_5c;
  float local_50 [3];
  float local_44 [3];
  CVector3f local_2c;
  CVector3f local_20;

  local_5c = *direction;
  if (local_5c.z < 0.0) {
    local_5c.x = -local_5c.x;
    local_5c.y = -local_5c.y;
    local_5c.z = -local_5c.z;
  }
  switch(this_ptr->door_type) {
  case DOOR_TYPE_SWING:
  case DOOR_TYPE_VERTICAL:
  case DOOR_TYPE_SLIDE:
    pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (&this_ptr->base,&local_2c,actor_pos);
    if (pCVar5->z <= 0.0) {
      pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (&this_ptr->base,&local_20,&local_5c);
      fVar1 = (this_ptr->open_position).y;
      fVar2 = pCVar5->y;
      fVar3 = (this_ptr->open_position).z;
      fVar4 = pCVar5->z;
      if (out_pos != (CVector3f *)local_50) {
        out_pos->x = (this_ptr->open_position).x - pCVar5->x;
        out_pos->y = fVar1 - fVar2;
        out_pos->z = fVar3 - fVar4;
        out_pos->y = (this_ptr->base).location.position.y;
        return out_pos;
      }
    }
    else {
      pCVar5 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (&this_ptr->base,&local_68,&local_5c);
      fVar1 = (this_ptr->open_position).y;
      fVar2 = pCVar5->y;
      fVar3 = (this_ptr->open_position).z;
      fVar4 = pCVar5->z;
      if (out_pos != (CVector3f *)local_44) {
        out_pos->x = (this_ptr->open_position).x + pCVar5->x;
        out_pos->y = fVar1 + fVar2;
        out_pos->z = fVar3 + fVar4;
        out_pos->y = (this_ptr->base).location.position.y;
        return out_pos;
      }
    }
    break;
  case DOOR_TYPE_TILT:
    if (out_pos != &this_ptr->open_position) {
      *out_pos = this_ptr->open_position;
      out_pos->y = (this_ptr->base).location.position.y;
      return out_pos;
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\door.cpp";
    g_CurrentLineNumber = 832;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDoor::getOpenStandPos - invalid doorType");
    out_pos->y = (this_ptr->base).location.position.y;
    return out_pos;
  }
  out_pos->y = (this_ptr->base).location.position.y;
  return out_pos;
}
