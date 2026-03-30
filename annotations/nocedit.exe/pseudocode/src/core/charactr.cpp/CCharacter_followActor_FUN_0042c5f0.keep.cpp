// Name: core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0
// Address: 0042c5f0
// MANUAL RECONSTRUCTION
// Address Range: [[0042c5f0, 0042c7fc] [0042c83e, 0042c917]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0(CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state )

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0(CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state )

{
  int iVar1;
  float fVar2;
  CVector3f *pCVar1;
  CVector3f *pCVar3;
  float fVar5;
  float fVar6;
  CPathMap *path_map;
  int iVar2;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  UVector3 *direction;
  float fVar3;
  float fVar4;
  
  if (actor == (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s tried to follow NULL actor!\n",this_ptr->base.actor_name);
    *out_state = 3;
    return;
  }
  local_50.x = (actor->location).position.x - (this_ptr->base).location.position.x;
  local_50.y = (actor->location).position.y - (this_ptr->base).location.position.y;
  local_50.z = (actor->location).position.z - (this_ptr->base).location.position.z;
  if (0.0 <= min_dist) {
    if ((((float)20 < ABS(local_50.y)) || ((float)40 < ABS(local_50.x)))
       || ((float)40 < ABS(local_50.z))) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while following %s\n",this_ptr->base.actor_name,actor->actor_name);
      *out_state = 3;
      return;
    }
    fVar2 = SQRT(local_50.z * local_50.z + local_50.x * local_50.x);
    local_50.y = 0.0;
    if (max_dist < 0.0) {
      max_dist = 1e+30;
    }
    fVar6 = min_dist * (float)0.10000000000000001;
    iVar1 = *out_state;
    if (iVar1 == 0) {
      min_dist = min_dist + fVar6;
    }
    else if (iVar1 == 1) {
      max_dist = max_dist + fVar6;
      min_dist = min_dist - fVar6;
    }
    else if (iVar1 == 2) {
      max_dist = max_dist - fVar6;
    }
    if (min_dist < (float)0.01) {
      min_dist = 0.01;
    }
    if (min_dist <= fVar2) {
      fVar4 = 0.0;
      fVar3 = 0.0;
      direction = &g_ZeroVector;
      path_map = (*((actor->vtable)._ub)->getPathMap)(actor);
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        (this_ptr,&(actor->location).position,path_map,&direction->f,fVar3,fVar4);
      if (iVar2 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused after pathmap call while following %s\n",this_ptr->base.actor_name,actor->actor_name);
        *out_state = 3;
        return;
      }
      if (fVar2 <= max_dist) {
        *out_state = 1;
        return;
      }
      *out_state = 2;
      return;
    }
    *out_state = 0;
    return;
  }
  local_50.y = 0.0;
  pCVar1 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base,&local_44,&local_50);
  pCVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_38,pCVar1);
  this_ptr->turn_angle_accumulator = pCVar3->y;
  if (*out_state == 0) {
    if ((float)0.17453292519444399 < ABS(this_ptr->turn_angle_accumulator)) goto LAB_0042c771;
    if (*out_state != 1) goto LAB_0042c80e;
  }
  else {
    if (ABS(this_ptr->turn_angle_accumulator) < (float)0.034906585038888903) {
      *out_state = 0;
LAB_0042c80e:
      this_ptr->turn_angle_accumulator = 0.0;
      goto LAB_0042c7cc;
    }
LAB_0042c771:
    *out_state = 1;
  }
  fVar2 = this_ptr->turn_speed;
  fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(this_ptr->turn_angle_accumulator);
  fVar6 = -fVar2;
  if ((fVar6 <= fVar5) && (fVar6 = fVar5, fVar2 < fVar5)) {
    fVar6 = fVar2;
  }
  this_ptr->turn_angle_accumulator = fVar6;
LAB_0042c7cc:
  (this_ptr->model).accumulated_root_motion.z = 0.0;
  (this_ptr->model).accumulated_root_motion.y = (this_ptr->model).accumulated_root_motion.z;
  (this_ptr->model).accumulated_root_motion.x = (this_ptr->model).accumulated_root_motion.y;
  return;
}
