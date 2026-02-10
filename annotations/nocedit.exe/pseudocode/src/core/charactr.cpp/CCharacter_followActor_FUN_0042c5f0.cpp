// Name: core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0
// Address: 0042c5f0
// Address Range: [[0042c5f0, 0042c7fc] [0042c83e, 0042c917]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0 (CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0
          (CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state)

{
  float fVar1;
  CPathMap *path_map;
  int iVar2;
  CVector3f *pCVar3;
  float fVar4;
  CVector3f local_44;
  CVector3f local_38;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if (actor == (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s tried to follow NULL actor!\n",this_ptr);
    *out_state = 3;
    return;
  }
  fVar1 = (actor->location).position.x - (this_ptr->base).location.position.x;
  fVar4 = (actor->location).position.z - (this_ptr->base).location.position.z;
  if (0.0 <= min_dist) {
    if ((((float)20 <
          ABS((actor->location).position.y - (this_ptr->base).location.position.y)) ||
        ((float)40 < ABS(fVar1))) || ((float)40 < ABS(fVar4))) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while following %s\n",this_ptr,actor);
      *out_state = 3;
      return;
    }
    local_2c = SQRT(fVar4 * fVar4 + fVar1 * fVar1);
    if (max_dist < 0.0) {
      max_dist = 1e+30;
    }
    local_20 = min_dist * (float)0.10000000000000001;
    iVar2 = *out_state;
    if (iVar2 == 0) {
      min_dist = min_dist + local_20;
    }
    else if (iVar2 == 1) {
      max_dist = max_dist + local_20;
      min_dist = min_dist - local_20;
    }
    else if (iVar2 == 2) {
      max_dist = max_dist - local_20;
    }
    if (min_dist < (float)0.01) {
      min_dist = 0.01;
    }
    if (min_dist <= local_2c) {
      fVar4 = 0.0;
      pCVar3 = (CVector3f *)0x0;
      path_map = (*((actor->vtable)._ub)->getPathMap)(actor);
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        (this_ptr,&(actor->location).position,path_map,pCVar3,fVar4,fVar1);
      if (iVar2 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused after pathmap call while following %s\n",this_ptr);
        *out_state = 3;
        return;
      }
      if (local_28 <= max_dist) {
        *out_state = 1;
        return;
      }
      *out_state = 2;
      return;
    }
    *out_state = 0;
    return;
  }
  pCVar3 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                     (&this_ptr->base,&local_44,(CVector3f *)&stack0xffffffb0);
  pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_38,pCVar3);
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
  local_1c = this_ptr->turn_angle_accumulator;
  local_18 = this_ptr->turn_speed;
  fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_1c);
  fVar1 = -local_18;
  if ((fVar1 <= fVar4) && (fVar1 = fVar4, local_18 < fVar4)) {
    fVar1 = local_18;
  }
  this_ptr->turn_angle_accumulator = fVar1;
LAB_0042c7cc:
  (this_ptr->model).accumulated_root_motion.z = 0.0;
  (this_ptr->model).accumulated_root_motion.y = (this_ptr->model).accumulated_root_motion.z;
  (this_ptr->model).accumulated_root_motion.x = (this_ptr->model).accumulated_root_motion.y;
  return;
}
