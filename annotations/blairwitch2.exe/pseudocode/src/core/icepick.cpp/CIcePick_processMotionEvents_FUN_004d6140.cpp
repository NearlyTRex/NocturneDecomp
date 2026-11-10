// Name: core_icepick.cpp_CIcePick_processMotionEvents_FUN_004d6140
// Address: 004d6140
// Address Range: [[004d6140, 004d622f]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004d6140(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004d6140(CIcePick *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  int iVar2;
  uint uVar3;
  
  do {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&this_ptr->field_0x2b4,&delta_time);
    switch(iVar2) {
    case 100:
      iVar2 = this_ptr->attack_count + 1;
      this_ptr->attack_count = iVar2;
      if (4 < iVar2) {
        this_ptr->attack_count = 0;
      }
      break;
    case 0x65:
      core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004d6230(this_ptr,_DAT_01cee0e8);
      break;
    case 0x66:
      core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004d6230(this_ptr,_DAT_01cee0ec);
      break;
    case 0x67:
      uVar3 = rand();
      if ((uVar3 & 3) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,0x15,1);
      }
      break;
    case 0x68:
      pCVar1 = this_ptr->pending_pickup_target;
      if (pCVar1 != (CDemonActor *)0x0) {
        this_ptr->pending_pickup_target = (CDemonActor *)0x0;
        core_charactr_cpp_FUN_00428b10(this_ptr,1,pCVar1,0x3e4ccccd,0);
      }
      break;
    case 0x69:
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,1,0);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar2);
    }
  } while (0.0 < delta_time);
  return;
}
