// Name: core_msnedit.cpp_CDemonMission_FUN_0053c8d0
// Address: 0053c8d0
// Address Range: [[0053c8d0, 0053c924]]
// Convention: __cdecl
// Signature: void core_msnedit.cpp_CDemonMission_FUN_0053c8d0(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c8d0(CDemonMission *this_ptr)

{
  float fVar1;
  CDemonActor *in_stack_00000008;
  
  if (in_stack_00000008 == (CDemonActor *)0x0) {
    return;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000008);
  fVar1 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (g_CDemonSetPtr,&(in_stack_00000008->location).position,0.0);
  (in_stack_00000008->location).position.y = fVar1;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  return;
}
