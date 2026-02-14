// Name: core_path.cpp_CPathMap_getDirection_FUN_005465b0
// Address: 005465b0
// Address Range: [[005465b0, 00546a50]]
// Convention: __cdecl
// Signature: float __cdecl core_path_cpp_CPathMap_getDirection_FUN_005465b0(CPathMap *this_ptr,int current_direction,int next_direction,int prev_direction,CVector3f *dest_position)

#include "nocturne.h"

float __cdecl core_path_cpp_CPathMap_getDirection_FUN_005465b0(CPathMap *this_ptr,int current_direction,int next_direction,int prev_direction,CVector3f *dest_position)

{
  CVector3f *pCVar1;
  CVector3f local_e0;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  CVector3f local_bc;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  CVector3f local_98;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  CVector3f local_68;
  uint local_5c;
  uint local_58;
  uint local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  int local_18;
  
  local_98.x = (this_ptr->current_position).x - dest_position->x;
  local_98.y = (this_ptr->current_position).y - dest_position->y;
  local_98.z = (this_ptr->current_position).z - dest_position->z;
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_68,&local_98);
  local_a4 = pCVar1->x / 100.0f;
  local_9c = 0.01f * pCVar1->z;
  local_18 = 1;
  local_50 = 0.0;
  local_4c = 0.0;
  local_48 = 0.0;
  local_a0 = -(pCVar1->y * 0.01f);
  switch(current_direction) {
  case 1:
    local_48 = 1.0;
    local_40 = 0;
    local_44 = 0;
    local_3c = 0x3f800000;
    break;
  case 2:
    local_48 = -1.0;
    local_88 = 0;
    local_8c = 0;
    local_84 = 0xbf800000;
    break;
  case 3:
    local_50 = 1.0;
    switch(next_direction) {
    case 1:
      goto switchD_0054667e_caseD_1;
    case 2:
      goto switchD_0054667e_caseD_2;
    case 3:
      goto switchD_0054667e_caseD_3;
    case 4:
      goto switchD_0054667e_caseD_4;
    default:
      goto switchD_0054667e_default;
    }
  case 4:
    local_d0 = 0;
    local_cc = 0;
    local_50 = -1.0;
    local_d4 = 0xbf800000;
    switch(next_direction) {
    case 1:
      goto switchD_0054667e_caseD_1;
    case 2:
      goto switchD_0054667e_caseD_2;
    case 3:
      goto switchD_0054667e_caseD_3;
    case 4:
      goto switchD_0054667e_caseD_4;
    }
    goto switchD_0054667e_default;
  }
  switch(next_direction) {
  case 1:
switchD_0054667e_caseD_1:
    local_74 = 0;
    local_70 = 0;
    local_48 = local_48 + 1.0;
    local_6c = 0x3f800000;
    goto LAB_005466ab;
  case 2:
switchD_0054667e_caseD_2:
    local_80 = 0;
    local_7c = 0;
    local_48 = local_48 + -1.0f;
    local_78 = 0xbf800000;
LAB_005466ab:
    local_18 = 2;
    break;
  case 3:
switchD_0054667e_caseD_3:
    local_18 = 2;
    local_c8 = 0x3f800000;
    local_c4 = 0;
    local_50 = local_50 + 1.0;
    local_c0 = 0;
    break;
  case 4:
switchD_0054667e_caseD_4:
    local_18 = 2;
    local_2c = 0xbf800000;
    local_28 = 0;
    local_50 = local_50 + -1.0f;
    local_24 = 0;
  }
switchD_0054667e_default:
  if ((ABS(local_50) == 0.0) && (ABS(local_48) == 0.0)) {
    switch(current_direction) {
    case 1:
      return local_a0;
    case 2:
      return local_a0 + (float)3.1415926535000001;
    case 3:
      return local_a0 + (float)1.57079632675;
    case 4:
      return local_a0 + (float)-1.57079632675;
    case 5:
      return local_a0 + (float)0.78539816337500001;
    case 6:
      return local_a0 + (float)-0.78539816337500001;
    case 7:
      return local_a0 + (float)2.356194490125;
    case 8:
      return local_a0 + (float)-2.356194490125;
    default:
      g_CurrentFilename = "..\\core\\path.cpp";
      g_CurrentLineNumber = 0x183;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CPathMap::getDirection - Should never get here either");
    }
  }
  if ((current_direction != prev_direction) && (prev_direction != next_direction))
  goto switchD_00546911_default;
  switch(prev_direction) {
  case 1:
    local_48 = local_48 + 1.0;
    goto LAB_00546935;
  case 2:
    local_b0 = 0;
    local_ac = 0;
    local_48 = local_48 + -1.0f;
    local_a8 = 0xbf800000;
LAB_00546935:
    local_18 = local_18 + 1;
    break;
  case 3:
    local_18 = local_18 + 1;
    local_5c = 0x3f800000;
    local_58 = 0;
    local_50 = local_50 + 1.0;
    local_54 = 0;
    break;
  case 4:
    local_18 = local_18 + 1;
    local_38 = 0xbf800000;
    local_34 = 0;
    local_50 = local_50 + -1.0f;
    local_30 = 0;
  }
switchD_00546911_default:
  local_20 = (float)local_18;
  local_e0.z = 1.0 / local_20;
  local_e0.x = local_50 * local_e0.z;
  local_e0.y = local_4c * local_e0.z;
  local_e0.z = local_48 * local_e0.z;
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_bc,&local_e0);
  return pCVar1->y + local_a0;
}
