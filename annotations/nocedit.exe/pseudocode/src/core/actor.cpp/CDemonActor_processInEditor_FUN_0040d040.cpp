// Name: core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
// Address: 0040d040
// Address Range: [[0040d040, 0040d140]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  float in_stack_00000008;
  float in_stack_0000000c;
  CDemonMission *in_stack_00000010;
  CDemonMission *in_stack_00000014;
  float in_stack_00000018;
  
  pCVar1 = this_ptr;
  this_ptr->was_created = 0;
  pCVar2 = (*this_ptr->vtable->getCarrier)(this_ptr);
  if (pCVar2 == (CDemonActor *)0x0) {
    iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x29);
    if (iVar3 == 0) {
      if ((CLocation *)&stack0x00000000 != &this_ptr->location) {
        in_stack_00000008 = (this_ptr->location).position.z;
        this_ptr = (CDemonActor *)(this_ptr->location).position.y;
      }
      if ((COrientation *)&stack0x0000000c != &pCVar1->orient) {
        in_stack_0000000c = (pCVar1->orient).pitch;
        in_stack_00000010 = (CDemonMission *)(pCVar1->orient).bank;
        in_stack_00000014 = (CDemonMission *)(pCVar1->orient).heading;
      }
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&stack0x00000000);
      (pCVar1->location).position.x = (float)this_ptr;
      (pCVar1->location).position.y = in_stack_00000008;
      (pCVar1->location).position.z = in_stack_0000000c;
      if (&pCVar1->orient != (COrientation *)&stack0x00000010) {
        (pCVar1->orient).pitch = (float)in_stack_00000010;
        (pCVar1->orient).bank = (float)in_stack_00000014;
        (pCVar1->orient).heading = in_stack_00000018;
      }
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x22);
    if (iVar3 != 0) {
      in_stack_00000014 = (CDemonMission *)pCVar1;
      in_stack_00000010 = g_CDemonMissionPtr;
      in_stack_0000000c = 5.952307e-39;
      core_msnedit_cpp_CDemonMission_FUN_0053c8d0(g_CDemonMissionPtr);
    }
    if (((byte)g_MouseButtonFlags & 2) != 0) {
      in_stack_00000014 = g_CDemonMissionPtr;
      in_stack_00000010 = (CDemonMission *)0x40d0b5;
      core_msnedit_cpp_CDemonMission_FUN_0053ca00(g_CDemonMissionPtr);
      return;
    }
  }
  return;
}
