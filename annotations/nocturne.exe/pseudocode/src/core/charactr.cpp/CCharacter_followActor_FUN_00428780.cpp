// Name: core_charactr.cpp_CCharacter_followActor_FUN_00428780
// Address: 00428780
// Address Range: [[00428780, 00428aa7]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_followActor_FUN_00428780(CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state )

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_followActor_FUN_00428780(CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state )

{
  uint uVar1;
  CPathMap *path_map;
  int iVar2;
  CVector3f *direction;
  float fVar3;
  float fVar4;
  float local_50;
  float local_4c;
  float local_48;
  byte local_44 [12];
  byte local_38 [12];
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  
  if (actor == (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s tried to follow NULL actor!\n",this_ptr);
    *out_state = 3;
    return;
  }
  local_50 = (actor->location).position.x - (this_ptr->base).location.position.x;
  local_4c = (actor->location).position.y - (this_ptr->base).location.position.y;
  local_48 = (actor->location).position.z - (this_ptr->base).location.position.z;
  if (0.0 <= min_dist) {
    if ((((float)20 < ABS(local_4c)) || ((float)40 < ABS(local_50))) ||
       ((float)40 < ABS(local_48))) {
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while following %s\n",this_ptr,actor);
      *out_state = 3;
      return;
    }
    local_2c = SQRT(local_48 * local_48 + local_50 * local_50);
    local_4c = 0.0;
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
      fVar3 = 0.0;
      direction = (CVector3f *)&DAT_02dd1184;
      path_map = (*((actor->vtable)._ub)->getPathMap)(actor);
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        (this_ptr,&(actor->location).position,path_map,direction,fVar3,fVar4);
      if (iVar2 < 0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s confused after pathmap call while following %s\n",this_ptr,actor);
        *out_state = 3;
        return;
      }
      if (local_2c <= max_dist) {
        *out_state = 1;
        return;
      }
      *out_state = 2;
      return;
    }
    *out_state = 0;
    return;
  }
  local_4c = 0.0;
  uVar1 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                    (this_ptr,local_44,&local_50);
  iVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_38,uVar1);
  this_ptr->turn_angle_accumulator = *(float *)(iVar2 + 4);
  if (*out_state == 0) {
    if ((float)0.17453292519444399 < ABS(this_ptr->turn_angle_accumulator)) goto LAB_00428901;
    if (*out_state != 1) goto LAB_0042899e;
  }
  else {
    if (ABS(this_ptr->turn_angle_accumulator) < (float)0.034906585038888903) {
      *out_state = 0;
LAB_0042899e:
      this_ptr->turn_angle_accumulator = 0.0;
      goto LAB_0042895c;
    }
LAB_00428901:
    *out_state = 1;
  }
  local_1c = this_ptr->turn_angle_accumulator;
  local_18 = this_ptr->turn_speed;
  fVar4 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_1c);
  fVar3 = -local_18;
  if ((fVar3 <= fVar4) && (fVar3 = fVar4, local_18 < fVar4)) {
    fVar3 = local_18;
  }
  this_ptr->turn_angle_accumulator = fVar3;
LAB_0042895c:
  (this_ptr->model).accumulated_root_motion.z = 0.0;
  (this_ptr->model).accumulated_root_motion.y = (this_ptr->model).accumulated_root_motion.z;
  (this_ptr->model).accumulated_root_motion.x = (this_ptr->model).accumulated_root_motion.y;
  return;
}
