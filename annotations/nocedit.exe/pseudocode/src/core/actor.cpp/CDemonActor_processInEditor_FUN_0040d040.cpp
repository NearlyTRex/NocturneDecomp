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
  float unaff_EBX;
  float unaff_retaddr;
  float in_stack_ffffffec;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  this_ptr->was_created = 0;
  pCVar1 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
  if (pCVar1 == (CDemonActor *)0x0) {
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x29);
    if (iVar2 == 0) {
      if ((CLocation *)&stack0xffffffec != &this_ptr->location) {
        in_stack_ffffffec = (this_ptr->location).position.x;
        fStack_10 = (this_ptr->location).position.y;
        fStack_c = (this_ptr->location).position.z;
      }
      if ((COrientation *)&fStack_8 != &this_ptr->orient) {
        fStack_8 = (this_ptr->orient).pitch;
        unaff_EBX = (this_ptr->orient).bank;
        unaff_retaddr = (this_ptr->orient).heading;
      }
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&stack0xffffffec);
      (this_ptr->location).position.x = in_stack_ffffffec;
      (this_ptr->location).position.y = fStack_10;
      (this_ptr->location).position.z = fStack_c;
      if (&this_ptr->orient != (COrientation *)&fStack_8) {
        (this_ptr->orient).pitch = fStack_8;
        (this_ptr->orient).bank = unaff_EBX;
        (this_ptr->orient).heading = unaff_retaddr;
      }
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x22);
    if (iVar2 != 0) {
      core_msnedit_cpp_CDemonMission_FUN_0053c8d0(g_CDemonMissionPtr);
    }
    if (((byte)g_MouseButtonFlags & 2) != 0) {
      core_msnedit_cpp_CDemonMission_FUN_0053ca00(g_CDemonMissionPtr);
      return;
    }
  }
  return;
}
