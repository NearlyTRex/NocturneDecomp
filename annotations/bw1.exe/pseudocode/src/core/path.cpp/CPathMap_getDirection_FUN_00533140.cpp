// Name: core_path.cpp_CPathMap_getDirection_FUN_00533140
// Address: 00533140
// Address Range: [[00533140, 005334ed]]
// Convention: __cdecl
// Signature: float __cdecl core_path_cpp_CPathMap_getDirection_FUN_00533140(CPathMap *this_ptr,int current_direction,int next_direction,int prev_direction,CVector3f *dest_position)

#include "nocturne.h"

float __cdecl core_path_cpp_CPathMap_getDirection_FUN_00533140(CPathMap *this_ptr,int current_direction,int next_direction,int prev_direction,CVector3f *dest_position)

{
  float fVar1;
  byte bVar2;
  float afStackY_1090 [1017];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  CVector3f local_78;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  CVector3f local_48;
  float local_3c;
  float local_38 [2];
  CVector3f local_30;
  float local_24;
  int local_18;
  
  bVar2 = 0;
  local_78.x = (this_ptr->current_position).x - dest_position->x;
  local_78.y = (this_ptr->current_position).y - dest_position->y;
  local_78.z = (this_ptr->current_position).z - dest_position->z;
  local_60 = local_78.x;
  local_5c = local_78.y;
  local_58 = local_78.z;
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_78,&local_48);
  local_90 = local_48.x;
  *(uint *)((int)&stack0xffffff74 + (uint)bVar2 * -8) =
       *(uint *)((int)&local_48 + (uint)bVar2 * -8 + 4);
  *(uint *)((int)&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&local_48 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  local_3c = local_90 * 0.01f;
  local_38[0] = local_8c * 0.01f;
  local_38[1] = local_88 * 0.01f;
  local_84 = local_90 * 0.01f;
  *(float *)((int)&stack0xffffff80 + (uint)bVar2 * -8) = local_38[(uint)bVar2 * -2];
  *(float *)(&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  local_18 = 1;
  local_6c = 0.0;
  local_80 = -local_80;
  local_68 = 0.0;
  local_64 = 0.0;
  switch(current_direction) {
  case 1:
    local_64 = 1.0;
  default:
    switch(next_direction) {
    case 1:
switchD_0053320f_caseD_1:
      local_64 = local_64 + 1.0;
      goto LAB_0053321c;
    case 2:
switchD_0053320f_caseD_2:
      local_64 = local_64 + -1.0f;
LAB_0053321c:
      local_18 = 2;
      break;
    case 3:
switchD_0053320f_caseD_3:
      local_18 = 2;
      local_6c = local_6c + 1.0;
      break;
    case 4:
switchD_0053320f_caseD_4:
      local_18 = 2;
      local_6c = local_6c + -1.0f;
    }
    break;
  case 2:
    local_64 = -1.0;
    switch(next_direction) {
    case 1:
      goto switchD_0053320f_caseD_1;
    case 2:
      goto switchD_0053320f_caseD_2;
    case 3:
      goto switchD_0053320f_caseD_3;
    case 4:
      goto switchD_0053320f_caseD_4;
    default:
      break;
    }
  case 3:
    local_68 = 0.0;
    local_64 = 0.0;
    local_6c = 1.0;
    switch(next_direction) {
    case 1:
      goto switchD_0053320f_caseD_1;
    case 2:
      goto switchD_0053320f_caseD_2;
    case 3:
      goto switchD_0053320f_caseD_3;
    case 4:
      goto switchD_0053320f_caseD_4;
    }
    break;
  case 4:
    local_6c = -1.0;
    switch(next_direction) {
    case 1:
      goto switchD_0053320f_caseD_1;
    case 2:
      goto switchD_0053320f_caseD_2;
    case 3:
      goto switchD_0053320f_caseD_3;
    case 4:
      goto switchD_0053320f_caseD_4;
    }
  }
  local_68 = 0.0;
  if ((ABS(local_6c) == 0.0) && (ABS(local_64) == 0.0)) {
    switch(current_direction) {
    case 1:
      return local_80;
    case 2:
      return local_80 + 3.141593f;
    case 3:
      return local_80 + (float)1.57079632675;
    case 4:
      return local_80 + (float)-1.57079632675;
    case 5:
      return local_80 + (float)0.78539816337500001;
    case 6:
      return local_80 + (float)-0.78539816337500001;
    case 7:
      return local_80 + (float)2.356194490125;
    case 8:
      return local_80 + (float)-2.356194490125;
    default:
      g_CurrentFilename = "..\\core\\path.cpp";
      g_CurrentLineNumber = 387;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CPathMap::getDirection - Should never get here either");
    }
  }
  if ((current_direction != prev_direction) && (prev_direction != next_direction))
  goto switchD_00533418_default;
  switch(prev_direction) {
  case 1:
    local_64 = local_64 + 1.0;
    goto LAB_00533425;
  case 2:
    local_64 = local_64 + -1.0f;
LAB_00533425:
    local_18 = local_18 + 1;
    break;
  case 3:
    local_18 = local_18 + 1;
    local_6c = local_6c + 1.0;
    break;
  case 4:
    local_18 = local_18 + 1;
    local_6c = local_6c + -1.0f;
  }
switchD_00533418_default:
  local_24 = (float)local_18;
  fVar1 = 1.0 / (float)local_18;
  local_a8 = local_6c * fVar1;
  local_a4 = local_68 * fVar1;
  local_a0 = local_64 * fVar1;
  local_54.x = local_6c * fVar1;
  *(uint *)((int)&local_54 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&stack0xffffff5c + (uint)bVar2 * -8);
  *(uint *)((int)&local_54 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&stack0xffffff60 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_54,&local_30);
  local_9c = local_30.x;
  *(uint *)((int)&stack0xffffff68 + (uint)bVar2 * -8) =
       *(uint *)((int)&local_30 + (uint)bVar2 * -8 + 4);
  *(uint *)(&stack0xffffff6c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&local_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  return local_98 + local_80;
}
