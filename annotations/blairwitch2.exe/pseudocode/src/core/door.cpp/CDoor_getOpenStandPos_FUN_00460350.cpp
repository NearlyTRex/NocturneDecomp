// Name: core_door.cpp_CDoor_getOpenStandPos_FUN_00460350
// Address: 00460350
// Address Range: [[00460350, 004605d3]]
// Convention: __stack3_esi
// Signature: CVector3f * __stack3_esi core_door_cpp_CDoor_getOpenStandPos_FUN_00460350(CDoor *this_ptr,CVector3f *direction,CVector3f *actor_pos,CVector3f *out_pos)

#include "nocturne.h"

CVector3f * __stack3_esi core_door_cpp_CDoor_getOpenStandPos_FUN_00460350(CDoor *this_ptr,CVector3f *direction,CVector3f *actor_pos,CVector3f *out_pos)

{
  float *pfVar1;
  byte bVar2;
  float afStackY_10a0 [1016];
  CVector3f local_b8;
  float local_ac;
  float local_a8 [4];
  float local_98;
  float local_94;
  float local_90 [4];
  float local_80;
  CVector3f local_7c;
  CVector3f local_70;
  float local_64;
  float local_60 [2];
  CVector3f local_58;
  float local_4c;
  float afStack_48 [4];
  float local_38;
  CVector3f local_34;
  float local_28;
  float local_24 [4];
  uint local_14;
  CVector3f *local_10;
  
  bVar2 = 0;
  local_10 = out_pos;
  local_58.x = direction->x;
  local_58.y = direction->y;
  local_58.z = direction->z;
  if (local_58.z < 0.0) {
    local_a8[2] = -direction->x;
    local_a8[3] = -direction->y;
    local_98 = -local_58.z;
    local_34.x = local_a8[2];
    local_34.y = local_a8[3];
    local_34.z = local_98;
    if (&local_58 != (CVector3f *)(afStack_48 + 5)) {
      local_58.x = local_a8[2];
      local_58.y = local_a8[3];
      local_58.z = local_98;
    }
  }
  switch(this_ptr->door_type) {
  case DOOR_TYPE_SWING:
  case DOOR_TYPE_VERTICAL:
  case DOOR_TYPE_SLIDE:
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(&this_ptr->base,actor_pos,&local_70);
    local_4c = local_70.x;
    afStack_48[(uint)bVar2 * -2] = *(float *)((int)&local_70 + (uint)bVar2 * -8 + 4);
    afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         *(float *)((int)&local_70 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    if (afStack_48[1] <= 0.0) {
      core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0(&this_ptr->base,&local_58,&local_7c);
      local_64 = local_7c.x;
      local_60[(uint)bVar2 * -2] = *(float *)((int)&local_7c + (uint)bVar2 * -8 + 4);
      local_60[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           *(float *)((int)&local_7c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      local_94 = (this_ptr->open_position).x - local_64;
      local_90[0] = (this_ptr->open_position).y - local_60[0];
      local_90[1] = (this_ptr->open_position).z - local_60[1];
      local_24[2] = local_94;
      local_24[(uint)bVar2 * -2 + 3] = local_90[(uint)bVar2 * -2];
      local_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
           local_90[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
      if (local_90 + 2 != local_24 + 2) {
        local_90[2] = local_24[2];
        local_80 = (float)local_14;
      }
    }
    else {
      core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0(&this_ptr->base,&local_58,&local_b8);
      local_28 = local_b8.x;
      local_24[(uint)bVar2 * -2] = *(float *)((int)&local_b8 + (uint)bVar2 * -8 + 4);
      local_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           *(float *)((int)&local_b8 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      afStack_48[2] = (this_ptr->open_position).x + local_28;
      afStack_48[3] = (this_ptr->open_position).y + local_24[0];
      local_38 = (this_ptr->open_position).z + local_24[1];
      local_ac = afStack_48[2];
      local_a8[(uint)bVar2 * -2] = afStack_48[(uint)bVar2 * -2 + 3];
      local_a8[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           afStack_48[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
      if (local_90 + 2 != &local_ac) {
        local_90[2] = local_ac;
        local_80 = local_a8[1];
      }
    }
    break;
  case DOOR_TYPE_TILT:
    if ((CVector3f *)(local_90 + 2) != &this_ptr->open_position) {
      local_90[2] = (this_ptr->open_position).x;
      local_80 = (this_ptr->open_position).z;
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\door.cpp";
    g_CurrentLineNumber = 894;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDoor::getOpenStandPos - invalid doorType");
  }
  local_90[3] = (this_ptr->base).location.position.y;
  pfVar1 = (float *)((int)local_10 + (uint)bVar2 * -8 + 4);
  local_10->x = local_90[2];
  *pfVar1 = local_90[(uint)bVar2 * -2 + 3];
  pfVar1[(uint)bVar2 * -2 + 1] = local_90[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  return local_10;
}
