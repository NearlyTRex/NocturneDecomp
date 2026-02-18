// Name: core_fire.cpp_CCrater_activate_FUN_004c4200
// Address: 004c4200
// Address Range: [[004c4200, 004c4287]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_activate_FUN_004c4200(CCrater *this_ptr,CVector3f *center_position,float radius)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_activate_FUN_004c4200(CCrater *this_ptr,CVector3f *center_position,float radius)

{
  float fVar1;
  float fVar2;
  CDemonSet *pCVar3;
  float fVar4;
  CCrater *pCVar5;
  CVector3f *pCVar6;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (&this_ptr->center_position != center_position) {
    (this_ptr->center_position).x = center_position->x;
    (this_ptr->center_position).y = center_position->y;
    (this_ptr->center_position).z = center_position->z;
  }
  core_fire_cpp_CCrater_render_FUN_004c4620(this_ptr);
  this_ptr->active = 1;
  pCVar3 = g_CDemonSetPtr;
  this_ptr->has_smoke = 0;
  this_ptr->smoke_delay = 0.1;
  local_14 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (pCVar3,&this_ptr->center_position,0.0);
  (this_ptr->center_position).y = local_14;
  pCVar5 = this_ptr;
  do {
    local_18 = -radius;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_18,radius);
    pCVar5->smoke_positions[0].x = local_14 * (float)0.5 + (this_ptr->center_position).x
    ;
    pCVar5->smoke_positions[0].y = (this_ptr->center_position).y;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_18,radius);
    pCVar6 = &pCVar5->center_position;
    pCVar5->smoke_positions[0].z = local_14 * (float)0.5 + (this_ptr->center_position).z
    ;
    pCVar5 = (CCrater *)pCVar6;
  } while (pCVar6 != (CVector3f *)&this_ptr->smoke_positions[0].z);
  local_48 = (this_ptr->center_position).x + local_18;
  local_44 = (this_ptr->center_position).y;
  local_40 = (this_ptr->center_position).z + local_18;
  if (this_ptr->corner_positions != (CVector3f *)&local_48) {
    this_ptr->corner_positions[0].x = local_48;
    this_ptr->corner_positions[0].y = local_44;
    this_ptr->corner_positions[0].z = local_40;
  }
  local_24 = (this_ptr->center_position).x + radius;
  local_20 = (this_ptr->center_position).y;
  local_1c = (this_ptr->center_position).z + -radius;
  if (this_ptr->corner_positions + 1 != (CVector3f *)&local_24) {
    this_ptr->corner_positions[1].x = local_24;
    this_ptr->corner_positions[1].y = local_20;
    this_ptr->corner_positions[1].z = local_1c;
  }
  local_3c = (this_ptr->center_position).x + radius;
  local_38 = (this_ptr->center_position).y;
  local_34 = (this_ptr->center_position).z + radius;
  if (this_ptr->corner_positions + 2 != (CVector3f *)&local_3c) {
    this_ptr->corner_positions[2].x = local_3c;
    this_ptr->corner_positions[2].y = local_38;
    this_ptr->corner_positions[2].z = local_34;
  }
  local_30 = -radius;
  local_2c = 0;
  local_28 = radius;
  local_54 = (this_ptr->center_position).x + local_30;
  local_50 = (this_ptr->center_position).y;
  local_4c = (this_ptr->center_position).z + radius;
  if (this_ptr->corner_positions + 3 != (CVector3f *)&local_54) {
    this_ptr->corner_positions[3].x = local_54;
    this_ptr->corner_positions[3].y = local_50;
    this_ptr->corner_positions[3].z = local_4c;
  }
  local_14 = local_30;
  local_14 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (g_CDemonSetPtr,this_ptr->corner_positions,0.0);
  pCVar3 = g_CDemonSetPtr;
  this_ptr->corner_positions[0].y = local_14 + (float)0.14999999999999999;
  local_14 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (pCVar3,this_ptr->corner_positions + 1,0.0);
  pCVar3 = g_CDemonSetPtr;
  this_ptr->corner_positions[1].y = local_14 + (float)0.14999999999999999;
  local_14 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                       (pCVar3,this_ptr->corner_positions + 2,0.0);
  pCVar3 = g_CDemonSetPtr;
  this_ptr->corner_positions[2].y = local_14 + (float)0.14999999999999999;
  fVar4 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (pCVar3,this_ptr->corner_positions + 3,0.0);
  fVar1 = this_ptr->corner_positions[0].y;
  fVar2 = (this_ptr->center_position).y;
  this_ptr->corner_positions[3].y = fVar4 + (float)0.14999999999999999;
  if (1.0 < ABS(fVar1 - fVar2)) {
    this_ptr->corner_positions[0].y = (this_ptr->center_position).y;
  }
  if (1.0 < ABS(this_ptr->corner_positions[1].y - (this_ptr->center_position).y)) {
    this_ptr->corner_positions[1].y = (this_ptr->center_position).y;
  }
  if (1.0 < ABS(this_ptr->corner_positions[2].y - (this_ptr->center_position).y)) {
    this_ptr->corner_positions[2].y = (this_ptr->center_position).y;
  }
  if (ABS(this_ptr->corner_positions[3].y - (this_ptr->center_position).y) <= 1.0) {
    return;
  }
  this_ptr->corner_positions[3].y = (this_ptr->center_position).y;
  return;
}
