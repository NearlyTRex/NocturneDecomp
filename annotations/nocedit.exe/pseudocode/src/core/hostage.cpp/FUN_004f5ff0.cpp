// Name: core_hostage.cpp_FUN_004f5ff0
// Address: 004f5ff0
// Address Range: [[004f5ff0, 004f6111]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_FUN_004f5ff0()

#include "nocturne.h"

/* Signature: byte actors_npc_hostage.cpp_FUN_004f5ff0(uint param_1, uint param_2)
    */

uint core_hostage_cpp_FUN_004f5ff0(void)

{
  CVector3f *pCVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_14;
  
  if (*(int *)(in_stack_00000004 + 0x1fae8) == 0) {
    return 0;
  }
  in_stack_00000008 = *(float *)(in_stack_00000004 + 0x1faec) - in_stack_00000008;
  *(float *)(in_stack_00000004 + 0x1faec) = in_stack_00000008;
  if ((0.0 < in_stack_00000008) &&
     (*(float *)(in_stack_00000004 + 0x2dd4) <= (float)1.5)) {
    pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&local_14,(CVector3f *)&stack0xffffffe0);
    fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (pCVar1->y - *(float *)(in_stack_00000004 + 0x34));
    *(float *)(in_stack_00000004 + 0x2418) = fVar2;
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
