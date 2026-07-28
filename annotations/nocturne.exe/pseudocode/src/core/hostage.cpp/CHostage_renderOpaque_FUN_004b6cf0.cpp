// Name: core_hostage.cpp_CHostage_renderOpaque_FUN_004b6cf0
// Address: 004b6cf0
// Address Range: [[004b6cf0, 004b6d3f]]
// Convention: unknown
// Signature: int core_hostage_cpp_CHostage_renderOpaque_FUN_004b6cf0(CCharacter *param_1)

#include "nocturne.h"

int core_hostage_cpp_CHostage_renderOpaque_FUN_004b6cf0(CCharacter *param_1)

{
  int iVar1;
  SMotion *pSVar2;
  
  if (*(int *)(param_1[2].flames[0x1d].base.create_event + 0x44) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
    if ((iVar1 != 0) && (*(int *)(param_1[2].flames[0x1d].base.create_event + 0x24) == 4)) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&(param_1->model).motion_controller);
      if (pSVar2->state_index == 10) {
        return 0;
      }
    }
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(param_1);
  return iVar1;
}
