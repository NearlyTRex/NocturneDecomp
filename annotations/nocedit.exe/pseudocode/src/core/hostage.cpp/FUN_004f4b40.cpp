// Name: core_hostage.cpp_FUN_004f4b40
// Address: 004f4b40
// Address Range: [[004f4b40, 004f4b8f]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_FUN_004f4b40()

#include "nocturne.h"

/* Signature: byte actors_npc_hostage.cpp_FUN_004f4b40(uint param_1) */

int core_hostage_cpp_FUN_004f4b40(void)

{
  int iVar1;
  SMotion *pSVar2;
  CCharacter *in_stack_00000004;
  
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x53fc) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if ((iVar1 != 0) && (*(int *)(in_stack_00000004[2].cloth_data + 0x53dc) == 4)) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->model).motion_controller);
      if (pSVar2->state_index == 10) {
        return 0;
      }
    }
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(in_stack_00000004);
  return iVar1;
}
