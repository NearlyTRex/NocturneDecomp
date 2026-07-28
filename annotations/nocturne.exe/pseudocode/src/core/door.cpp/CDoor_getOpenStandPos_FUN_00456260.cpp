// Name: core_door.cpp_CDoor_getOpenStandPos_FUN_00456260
// Address: 00456260
// Address Range: [[00456260, 00456454]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_door_cpp_CDoor_getOpenStandPos_FUN_00456260(CDoor *this_ptr,CVector3f *out_pos,CVector3f *direction,CVector3f *actor_pos)

#include "nocturne.h"

CVector3f * __cdecl core_door_cpp_CDoor_getOpenStandPos_FUN_00456260(CDoor *this_ptr,CVector3f *out_pos,CVector3f *direction,CVector3f *actor_pos)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  float *pfVar6;
  byte local_68 [12];
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  CVector3f local_2c;
  byte local_20 [16];
  
  local_5c = direction->x;
  local_58 = direction->y;
  local_54 = direction->z;
  if (local_54 < 0.0) {
    local_38 = -local_5c;
    local_34 = -local_58;
    local_30 = -local_54;
    if (&local_5c != &local_38) {
      local_5c = local_38;
      local_58 = local_34;
      local_54 = local_30;
    }
  }
  switch(this_ptr->door_type) {
  case DOOR_TYPE_SWING:
  case DOOR_TYPE_VERTICAL:
  case DOOR_TYPE_SLIDE:
    pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       (&this_ptr->base,&local_2c,actor_pos);
    if (pCVar5->z <= 0.0) {
      pfVar6 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                  (this_ptr,local_20,&local_5c);
      fVar1 = (this_ptr->open_position).y;
      fVar2 = pfVar6[1];
      fVar3 = (this_ptr->open_position).z;
      fVar4 = pfVar6[2];
      if (out_pos != &local_50) {
        out_pos->x = (this_ptr->open_position).x - *pfVar6;
        out_pos->y = fVar1 - fVar2;
        out_pos->z = fVar3 - fVar4;
        out_pos->y = (this_ptr->base).location.position.y;
        return out_pos;
      }
    }
    else {
      pfVar6 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                  (this_ptr,local_68,&local_5c);
      fVar1 = (this_ptr->open_position).y;
      fVar2 = pfVar6[1];
      fVar3 = (this_ptr->open_position).z;
      fVar4 = pfVar6[2];
      if (out_pos != &local_44) {
        out_pos->x = (this_ptr->open_position).x + *pfVar6;
        out_pos->y = fVar1 + fVar2;
        out_pos->z = fVar3 + fVar4;
        out_pos->y = (this_ptr->base).location.position.y;
        return out_pos;
      }
    }
    break;
  case DOOR_TYPE_TILT:
    if (out_pos != &this_ptr->open_position) {
      out_pos->x = (this_ptr->open_position).x;
      out_pos->y = (this_ptr->open_position).y;
      out_pos->z = (this_ptr->open_position).z;
      out_pos->y = (this_ptr->base).location.position.y;
      return out_pos;
    }
    break;
  default:
    PTR_01cc4800 = "..\\core\\door.cpp";
    INT_01cc4804 = 0x340;
    core_main_c_FUN_004c8440("CDoor::getOpenStandPos - invalid doorType");
    out_pos->y = (this_ptr->base).location.position.y;
    return out_pos;
  }
  out_pos->y = (this_ptr->base).location.position.y;
  return out_pos;
}
