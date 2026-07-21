// Name: core_waypoint.cpp_CWayPoint_isReachable_FUN_005523b0
// Address: 005523b0
// Address Range: [[005523b0, 0055249c]]
// Convention: __cdecl
// Signature: bool __cdecl core_waypoint_cpp_CWayPoint_isReachable_FUN_005523b0(float *param_1,float *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl core_waypoint_cpp_CWayPoint_isReachable_FUN_005523b0(float *param_1,float *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte local_30 [12];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  local_24 = *param_1 - *param_2;
  local_20 = param_1[1] - param_2[1];
  local_1c = param_1[2] - param_2[2];
  if (param_3 == 0) {
    if ((ABS(local_20) <= (float)_DAT_00597748) && (ABS(local_24) <= (float)_DAT_00597750)) {
      if ((float)_DAT_00597750 < ABS(local_1c)) {
        return false;
      }
      goto LAB_00552457;
    }
  }
  else if (((ABS(local_20) <= (float)_DAT_00597758) && (ABS(local_24) <= (float)_DAT_00597760)) &&
          (ABS(local_1c) <= (float)_DAT_00597760)) {
LAB_00552457:
    local_18 = *param_1;
    local_14 = param_1[1];
    local_10 = param_1[2];
    uVar1 = core_path_cpp_getPathMap_FUN_004f1e00(param_2);
    iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600(uVar1,&local_18,local_30,0);
    return iVar2 == 1;
  }
  return false;
}
