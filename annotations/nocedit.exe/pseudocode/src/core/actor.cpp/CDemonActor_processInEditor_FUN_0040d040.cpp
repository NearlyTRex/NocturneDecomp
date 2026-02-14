// Name: core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
// Address: 0040d040
// Address Range: [[0040d040, 0040d140]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  CSlew CStack_20;
  
  this_ptr->was_created = 0;
  pCVar1 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  if (pCVar1 == (CDemonActor *)0x0) {
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x29);
    if (iVar2 == 0) {
      if (&CStack_20 != (CSlew *)&this_ptr->location) {
        CStack_20.position.x = (this_ptr->location).position.x;
        CStack_20.position.y = (this_ptr->location).position.y;
        CStack_20.position.z = (this_ptr->location).position.z;
      }
      if ((UOrientationVector *)&CStack_20.pitch != &this_ptr->orient) {
        CStack_20.pitch = (this_ptr->orient).vec.x;
        CStack_20.yaw = (this_ptr->orient).vec.y;
        CStack_20.roll = (this_ptr->orient).vec.z;
      }
      core_slew_cpp_CSlew_processInput_FUN_005a20b0(&CStack_20);
      (this_ptr->location).position.x = CStack_20.position.x;
      (this_ptr->location).position.y = CStack_20.position.y;
      (this_ptr->location).position.z = CStack_20.position.z;
      if (&this_ptr->orient != (UOrientationVector *)&CStack_20.pitch) {
        (this_ptr->orient).vec.x = CStack_20.pitch;
        (this_ptr->orient).vec.y = CStack_20.yaw;
        (this_ptr->orient).vec.z = CStack_20.roll;
      }
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x22);
    if (iVar2 != 0) {
      core_msnedit_cpp_CDemonMission_FUN_0053c8d0(g_CDemonMissionPtr);
    }
    if ((g_MouseButtonFlags.bytes[0] & 2) != 0) {
      core_msnedit_cpp_CDemonMission_FUN_0053ca00(g_CDemonMissionPtr);
      return;
    }
  }
  return;
}
