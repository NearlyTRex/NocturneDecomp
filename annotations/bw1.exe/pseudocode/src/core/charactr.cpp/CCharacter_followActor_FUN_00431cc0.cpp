// Name: core_charactr.cpp_CCharacter_followActor_FUN_00431cc0
// Address: 00431cc0
// Address Range: [[00431cc0, 0043204c]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_followActor_FUN_00431cc0(CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_followActor_FUN_00431cc0(CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state )

{
  CPathMap *path_map;
  int iVar1;
  byte bVar2;
  float afStackY_1060 [1012];
  CVector3f *direction;
  float fVar3;
  float fVar4;
  CVector3f local_78;
  CVector3f local_6c;
  uint local_60;
  float afStack_5c [5];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float afStack_38 [4];
  float local_28;
  float local_20;
  float local_1c;
  
  bVar2 = 0;
  if (actor == (CDemonActor *)0x0) {
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"%s tried to follow NULL actor!\n");
    *out_state = 3;
    return;
  }
  local_6c.x = (actor->location).position.x - (this_ptr->base).location.position.x;
  local_44 = (actor->location).position.y - (this_ptr->base).location.position.y;
  local_6c.z = (actor->location).position.z - (this_ptr->base).location.position.z;
  local_48 = local_6c.x;
  local_40 = local_6c.z;
  if (0.0 <= min_dist) {
    if ((this_ptr->is_spectral == 0) &&
       ((((float)_DAT_005d5b1f < ABS(local_44) || ((float)_DAT_005d5b27 < ABS(local_6c.x))) ||
        ((float)_DAT_005d5b27 < ABS(local_6c.z))))) {
      local_6c.y = local_44;
      engine_console_cpp_CConsole_printf_FUN_00445430
                (g_CConsolePtr,"%s confused while following %s\n");
      *out_state = 3;
      return;
    }
    local_6c.y = 0.0;
    afStack_38[2] = SQRT(local_6c.z * local_6c.z + local_6c.x * local_6c.x);
    if (max_dist < 0.0) {
      max_dist = 1e+30;
    }
    local_20 = min_dist * (float)_DAT_005d5b2f;
    iVar1 = *out_state;
    if (iVar1 == 0) {
      min_dist = min_dist + local_20;
    }
    else if (iVar1 == 1) {
      max_dist = max_dist + local_20;
      min_dist = min_dist - local_20;
    }
    else if (iVar1 == 2) {
      max_dist = max_dist - local_20;
    }
    if (min_dist < (float)_DAT_005d5b37) {
      min_dist = 0.01;
    }
    if (min_dist <= afStack_38[2]) {
      fVar4 = 0.0;
      fVar3 = 0.0;
      direction = (CVector3f *)&DAT_02c8af28;
      path_map = (*((actor->vtable)._ub)->getPathMap)(actor);
      iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        (this_ptr,&(actor->location).position,path_map,direction,fVar3,fVar4);
      if (iVar1 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00445430
                  (g_CConsolePtr,"%s confused after pathmap call while following %s\n");
        *out_state = 3;
        return;
      }
      if (afStack_38[2] <= max_dist) {
        *out_state = 1;
        return;
      }
      *out_state = 2;
      return;
    }
    *out_state = 0;
    return;
  }
  local_6c.y = 0.0;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b00
            (&this_ptr->base,&local_6c,&local_78);
  local_3c = local_78.x;
  afStack_38[(uint)bVar2 * -2] = *(float *)((int)&local_78 + (uint)bVar2 * -8 + 4);
  afStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&local_78 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_3c);
  afStack_5c[2] = (float)local_60;
  afStack_5c[(uint)bVar2 * -2 + 3] = afStack_5c[(uint)bVar2 * -2];
  afStack_5c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       afStack_5c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  this_ptr->turn_angle_accumulator = afStack_5c[3];
  if (*out_state == 0) {
    if ((float)_DAT_005d5b47 < ABS(this_ptr->turn_angle_accumulator)) goto LAB_00431e84;
    if (*out_state != 1) goto LAB_00431f2b;
  }
  else {
    if (ABS(this_ptr->turn_angle_accumulator) < (float)_DAT_005d5b3f) {
      *out_state = 0;
LAB_00431f2b:
      this_ptr->turn_angle_accumulator = 0.0;
      goto LAB_00431ee2;
    }
LAB_00431e84:
    *out_state = 1;
  }
  local_1c = this_ptr->turn_angle_accumulator;
  local_28 = this_ptr->turn_speed;
  fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_1c);
  fVar3 = -local_28;
  if ((fVar3 <= fVar4) && (fVar3 = fVar4, local_28 < fVar4)) {
    fVar3 = local_28;
  }
  this_ptr->turn_angle_accumulator = fVar3;
LAB_00431ee2:
  (this_ptr->model).accumulated_root_motion.z = 0.0;
  (this_ptr->model).accumulated_root_motion.y = (this_ptr->model).accumulated_root_motion.z;
  (this_ptr->model).accumulated_root_motion.x = (this_ptr->model).accumulated_root_motion.y;
  return;
}
