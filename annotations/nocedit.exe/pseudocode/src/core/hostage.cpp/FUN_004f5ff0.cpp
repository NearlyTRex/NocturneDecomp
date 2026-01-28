// Name: core_hostage.cpp_FUN_004f5ff0
// Address: 004f5ff0
// Address Range: [[004f5ff0, 004f6111]]
// Convention: unknown
// Signature: undefined4 core_hostage_cpp_FUN_004f5ff0(void)

#include "nocturne.h"

/* Signature: byte actors_npc_hostage.cpp_FUN_004f5ff0(uint param_1, uint param_2)
    */

uint core_hostage_cpp_FUN_004f5ff0(void)

{
  int iVar1;
  CVector3f *pCVar2;
  int in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_20;
  CVector3f local_14;
  float local_8;
  
  if (*(int *)(in_stack_00000004 + 0x1fae8) == 0) {
    return 0;
  }
  in_stack_00000008 = *(float *)(in_stack_00000004 + 0x1faec) - in_stack_00000008;
  *(float *)(in_stack_00000004 + 0x1faec) = in_stack_00000008;
  if ((0.0 < in_stack_00000008) &&
     (*(float *)(in_stack_00000004 + 0x2dd4) <= (float)1.5)) {
    iVar1 = *(int *)(in_stack_00000004 + 0x1fae8);
    local_20.x = *(float *)(in_stack_00000004 + 0x20) - *(float *)(iVar1 + 0x20);
    local_20.y = *(float *)(in_stack_00000004 + 0x24) - *(float *)(iVar1 + 0x24);
    local_20.z = *(float *)(in_stack_00000004 + 0x28) - *(float *)(iVar1 + 0x28);
    pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_14,&local_20);
    local_8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (pCVar2->y - *(float *)(in_stack_00000004 + 0x34));
    *(float *)(in_stack_00000004 + 0x2418) = local_8;
    if (*(float *)(in_stack_00000004 + 0x2418) < -*(float *)(in_stack_00000004 + 0x2438)) {
      *(uint *)(in_stack_00000004 + 0x2418) = *(uint *)(in_stack_00000004 + 0x2438);
    }
    if (*(float *)(in_stack_00000004 + 0x2438) < *(float *)(in_stack_00000004 + 0x2418)) {
      *(uint *)(in_stack_00000004 + 0x2418) = *(uint *)(in_stack_00000004 + 0x2438);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 0x158),2,1);
    return 1;
  }
  *(uint *)(in_stack_00000004 + 0x1fae8) = 0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),0,1);
  return 0;
}
