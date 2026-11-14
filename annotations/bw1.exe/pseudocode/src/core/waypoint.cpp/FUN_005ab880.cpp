// Name: core_waypoint.cpp_FUN_005ab880
// Address: 005ab880
// Address Range: [[005ab880, 005ab980]]
// Convention: unknown
// Signature: bool core_waypoint_cpp_FUN_005ab880(float *param_1,CLocation *param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool core_waypoint_cpp_FUN_005ab880(float *param_1,CLocation *param_2,int param_3,int param_4)

{
  CPathMap *this_ptr;
  int iVar1;
  CVector3f local_40;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_28 = *param_1 - (param_2->position).x;
  local_24 = param_1[1] - (param_2->position).y;
  local_20 = param_1[2] - (param_2->position).z;
  if (param_3 == 0) {
    if ((((float)_DAT_005f93fb < ABS(local_24)) || ((float)_DAT_005f9403 < ABS(local_28))) ||
       ((float)_DAT_005f9403 < ABS(local_20))) {
      return false;
    }
  }
  else if ((((float)_DAT_005f940b < ABS(local_24)) || ((float)_DAT_005f9413 < ABS(local_28))) ||
          ((float)_DAT_005f9413 < ABS(local_20))) {
    return false;
  }
  if (param_4 != 0) {
    return true;
  }
  local_40.x = *param_1;
  local_40.y = param_1[1];
  local_40.z = param_1[2];
  local_1c = local_28;
  local_18 = local_24;
  local_14 = local_20;
  this_ptr = core_path_cpp_getPathMap_FUN_005351f0(param_2);
  iVar1 = core_path_cpp_CPathMap_findPathWithRetry_FUN_005349a0(this_ptr,&local_40,&local_34,0);
  return iVar1 == 1;
}
