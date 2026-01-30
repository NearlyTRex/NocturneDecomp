// Name: core_waypoint.cpp_FUN_005ebd40
// Address: 005ebd40
// Address Range: [[005ebd40, 005ebe2c]]
// Convention: __cdecl
// Signature: bool __cdecl core_waypoint_cpp_FUN_005ebd40(void)

#include "nocturne.h"

/* Signature: byte actors_other_waypoint.cpp_FUN_005ebd40(uint param_1, uint
   param_2, uint param_3) */

bool __cdecl core_waypoint_cpp_FUN_005ebd40(void)

{
  CPathMap *this_ptr;
  int iVar1;
  float *in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f local_18;
  
  local_24 = *in_stack_00000004 - *in_stack_00000008;
  local_20 = in_stack_00000004[1] - in_stack_00000008[1];
  local_1c = in_stack_00000004[2] - in_stack_00000008[2];
  if (in_stack_0000000c == 0) {
    if ((ABS(local_20) <= (float)10) && (ABS(local_24) <= (float)30)) {
      if ((float)30 < ABS(local_1c)) {
        return false;
      }
      goto LAB_005ebde7;
    }
  }
  else if (((ABS(local_20) <= (float)8) && (ABS(local_24) <= (float)25))
          && (ABS(local_1c) <= (float)25)) {
LAB_005ebde7:
    local_18.x = *in_stack_00000004;
    local_18.y = in_stack_00000004[1];
    local_18.z = in_stack_00000004[2];
    core_path_cpp_FUN_00548500();
    iVar1 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00(this_ptr,&local_18,&local_30,0);
    return iVar1 == 1;
  }
  return false;
}
