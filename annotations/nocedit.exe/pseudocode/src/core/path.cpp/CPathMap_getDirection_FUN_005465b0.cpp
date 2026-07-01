// Name: core_path.cpp_CPathMap_getDirection_FUN_005465b0
// Address: 005465b0
// Address Range: [[005465b0, 00546a50]]
// Convention: __cdecl
// Signature: float __cdecl core_path_cpp_CPathMap_getDirection_FUN_005465b0(CPathMap *this_ptr,int current_direction,int next_direction,int prev_direction,CVector3f *dest_position)

#include "nocturne.h"

float __cdecl core_path_cpp_CPathMap_getDirection_FUN_005465b0(CPathMap *this_ptr,int current_direction,int next_direction,int prev_direction,CVector3f *dest_position)

{
  float fVar1;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CVector3f local_e0;
  CVector3f local_bc;
  float local_a4;
  float local_a0;
  float local_9c;
  CVector3f local_98;
  CVector3f local_68;
  float local_50;
  float local_4c;
  float local_48;
  float local_20;
  int local_18;
  
  local_98.x = (this_ptr->current_position).x - dest_position->x;
  local_98.y = (this_ptr->current_position).y - dest_position->y;
  local_98.z = (this_ptr->current_position).z - dest_position->z;
  pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_68,&local_98);
  iVar3 = 1;
  local_50 = 0.0;
  local_48 = 0.0;
  local_a0 = -(pCVar1->y * 0.01f);
  switch(current_direction) {
  case 1:
    local_48 = 1.0;
    break;
  case 2:
    local_48 = -1.0;
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
    local_50 = -1.0;
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
    local_48 = local_48 + 1.0;
    goto LAB_005466ab;
  case 2:
switchD_0054667e_caseD_2:
    local_48 = local_48 + -1.0f;
LAB_005466ab:
    iVar3 = 2;
    break;
  case 3:
switchD_0054667e_caseD_3:
    iVar3 = 2;
    local_50 = local_50 + 1.0;
    break;
  case 4:
switchD_0054667e_caseD_4:
    iVar3 = 2;
    local_50 = local_50 + -1.0f;
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
      g_CurrentLineNumber = 387;
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
    local_48 = local_48 + -1.0f;
LAB_00546935:
    iVar3 = iVar3 + 1;
    break;
  case 3:
    iVar3 = iVar3 + 1;
    local_50 = local_50 + 1.0;
    break;
  case 4:
    iVar3 = iVar3 + 1;
    local_50 = local_50 + -1.0f;
  }
switchD_00546911_default:
  fVar1 = 1.0 / (float)iVar3;
  local_e0.x = local_50 * fVar1;
  local_e0.y = fVar1 * 0.0;
  local_e0.z = local_48 * fVar1;
  pCVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_bc,&local_e0);
  return pCVar2->y + local_a0;
}
