// Name: core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
// Address: 0040d040
// MANUAL RECONSTRUCTION
// Address Range: [[0040d040, 0040d140]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  CSlew CStack_20;
  
  this_ptr->lifecycle_state = ACTOR_NOT_CREATED;
  pCVar1 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  if (pCVar1 == (CDemonActor *)0x0) {
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_GRAVE);
    if (iVar2 == 0) {
      CStack_20.position = (this_ptr->location).position;
      CStack_20.orientation.vec = (this_ptr->orient).vec;
      core_slew_cpp_CSlew_processInput_FUN_005a20b0(&CStack_20);
      (this_ptr->location).position = CStack_20.position;
      (this_ptr->orient).vec = CStack_20.orientation.vec;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_G);
    if (iVar2 != 0) {
      core_msnedit_cpp_CDemonMission_dropActorToGround_FUN_0053c8d0(g_CDemonMissionPtr,this_ptr);
    }
    if ((g_MouseButtonFlags.bytes[0] & 2) != 0) {
      core_msnedit_cpp_CDemonMission_moveActorToMousePos_FUN_0053ca00(g_CDemonMissionPtr,this_ptr);
      return;
    }
  }
  return;
}
