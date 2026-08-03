// Name: core_zombie.cpp_CZombie_renderOpaque_FUN_00561900
// Address: 00561900
// Address Range: [[00561900, 00561935]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_renderOpaque_FUN_00561900(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_renderOpaque_FUN_00561900(CZombie *this_ptr)

{
  SMotion *pSVar1;
  int iVar2;
  
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(this_ptr->base).base.model.motion_controller);
  if ((pSVar1->state_index == 0xe) && (g_CDemonMission_PTR_005baf90->is_in_editor == 0)) {
    return 0;
  }
  iVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440((CCharacter *)this_ptr);
  return iVar2;
}
