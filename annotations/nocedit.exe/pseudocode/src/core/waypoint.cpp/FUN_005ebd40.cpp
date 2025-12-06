// Name: core_waypoint.cpp_FUN_005ebd40
// Address: 005ebd40
// Address Range: [[005ebd40, 005ebe2c]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_FUN_005ebd40()

#include "nocturne.h"

/* Signature: byte actors_other_waypoint.cpp_FUN_005ebd40(uint param_1, uint
   param_2, uint param_3) */

bool core_waypoint_cpp_FUN_005ebd40(void)

{
  CPathMap *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  CVector3f CStack_2c;
  float local_20;
  float local_1c;
  float local_18;
  CVector3f local_14;
  
  CStack_2c.z = *in_stack_00000004 - *in_stack_00000008;
  local_20 = in_stack_00000004[1] - in_stack_00000008[1];
  local_1c = in_stack_00000004[2] - in_stack_00000008[2];
  if (in_stack_0000000c == 0) {
    if ((ABS(local_20) <= (float)10) && (ABS(CStack_2c.z) <= (float)30)) {
      if ((float)30 < ABS(local_1c)) {
        return false;
      }
      goto LAB_005ebde7;
    }
  }
  else if (((ABS(local_20) <= (float)8) &&
           (ABS(CStack_2c.z) <= (float)25)) &&
          (ABS(local_1c) <= (float)25)) {
LAB_005ebde7:
    local_18 = *in_stack_00000004;
    local_14.x = in_stack_00000004[1];
    local_14.y = in_stack_00000004[2];
    this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
    iVar1 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00(this_ptr,&local_14,&CStack_2c,0);
    return iVar1 == 1;
  }
  return false;
}
