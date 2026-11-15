// Name: core_charactr.cpp_FUN_00428260
// Address: 00428260
// Address Range: [[00428260, 004285ec]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00428260(CCharacter *param_1,int param_2,float param_3,float param_4,int *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_00428260(CCharacter *param_1,int param_2,float param_3,float param_4,int *param_5)

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
  if (param_2 == 0) {
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"%s tried to follow NULL actor!\n");
    *param_5 = 3;
    return;
  }
  local_6c.x = *(float *)(param_2 + 0x20) - (param_1->base).location.position.x;
  local_44 = *(float *)(param_2 + 0x24) - (param_1->base).location.position.y;
  local_6c.z = *(float *)(param_2 + 0x28) - (param_1->base).location.position.z;
  local_48 = local_6c.x;
  local_40 = local_6c.z;
  if (0.0 <= param_3) {
    if ((param_1->is_spectral == 0) &&
       ((((float)_DAT_005cce8e < ABS(local_44) || ((float)_DAT_005cce96 < ABS(local_6c.x))) ||
        ((float)_DAT_005cce96 < ABS(local_6c.z))))) {
      local_6c.y = local_44;
      engine_console_cpp_CConsole_printf_FUN_00436710
                (g_CConsolePtr,"%s confused while following %s\n");
      *param_5 = 3;
      return;
    }
    local_6c.y = 0.0;
    afStack_38[2] = SQRT(local_6c.z * local_6c.z + local_6c.x * local_6c.x);
    if (param_4 < 0.0) {
      param_4 = 1e+30;
    }
    local_20 = param_3 * (float)_DAT_005cce9e;
    iVar1 = *param_5;
    if (iVar1 == 0) {
      param_3 = param_3 + local_20;
    }
    else if (iVar1 == 1) {
      param_4 = param_4 + local_20;
      param_3 = param_3 - local_20;
    }
    else if (iVar1 == 2) {
      param_4 = param_4 - local_20;
    }
    if (param_3 < (float)_DAT_005ccea6) {
      param_3 = 0.01;
    }
    if (param_3 <= afStack_38[2]) {
      fVar4 = 0.0;
      fVar3 = 0.0;
      direction = (CVector3f *)&DAT_0265370c;
      path_map = (CPathMap *)(**(code **)(*(int *)(param_2 + 0x2b0) + 0xcc))(param_2);
      iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        (param_1,(CVector3f *)(param_2 + 0x20),path_map,direction,fVar3,fVar4);
      if (iVar1 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00436710
                  (g_CConsolePtr,"%s confused after pathmap call while following %s\n");
        *param_5 = 3;
        return;
      }
      if (afStack_38[2] <= param_4) {
        *param_5 = 1;
        return;
      }
      *param_5 = 2;
      return;
    }
    *param_5 = 0;
    return;
  }
  local_6c.y = 0.0;
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408d30(&param_1->base,&local_6c,&local_78)
  ;
  local_3c = local_78.x;
  afStack_38[(uint)bVar2 * -2] = *(float *)((int)&local_78 + (uint)bVar2 * -8 + 4);
  afStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&local_78 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_3c);
  afStack_5c[2] = (float)local_60;
  afStack_5c[(uint)bVar2 * -2 + 3] = afStack_5c[(uint)bVar2 * -2];
  afStack_5c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       afStack_5c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  param_1->turn_angle_accumulator = afStack_5c[3];
  if (*param_5 == 0) {
    if ((float)_DAT_005cceb6 < ABS(param_1->turn_angle_accumulator)) goto LAB_00428424;
    if (*param_5 != 1) goto LAB_004284cb;
  }
  else {
    if (ABS(param_1->turn_angle_accumulator) < (float)_DAT_005cceae) {
      *param_5 = 0;
LAB_004284cb:
      param_1->turn_angle_accumulator = 0.0;
      goto LAB_00428482;
    }
LAB_00428424:
    *param_5 = 1;
  }
  local_1c = param_1->turn_angle_accumulator;
  local_28 = param_1->turn_speed;
  fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_1c);
  fVar3 = -local_28;
  if ((fVar3 <= fVar4) && (fVar3 = fVar4, local_28 < fVar4)) {
    fVar3 = local_28;
  }
  param_1->turn_angle_accumulator = fVar3;
LAB_00428482:
  (param_1->model).accumulated_root_motion.z = 0.0;
  (param_1->model).accumulated_root_motion.y = (param_1->model).accumulated_root_motion.z;
  (param_1->model).accumulated_root_motion.x = (param_1->model).accumulated_root_motion.y;
  return;
}
