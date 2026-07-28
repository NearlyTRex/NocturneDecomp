// Name: core_icepick.cpp_CIcePick_processMotionEvents_FUN_004bb2d0
// Address: 004bb2d0
// Address Range: [[004bb2d0, 004bb3bd]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004bb2d0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_CIcePick_processMotionEvents_FUN_004bb2d0(CCharacter *param_1,float param_2)

{
  CDemonActor *object;
  CFlame *pCVar1;
  int iVar2;
  uint uVar3;
  
  do {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&(param_1->model).motion_controller,&param_2);
    switch(iVar2) {
    case 100:
      iVar2 = *(int *)(param_1[2].flames[0x1d].on_event + 8) + 1;
      *(int *)(param_1[2].flames[0x1d].on_event + 8) = iVar2;
      if (4 < iVar2) {
        pCVar1 = param_1[2].flames;
        pCVar1[0x1d].on_event[8] = '\0';
        pCVar1[0x1d].on_event[9] = '\0';
        pCVar1[0x1d].on_event[10] = '\0';
        pCVar1[0x1d].on_event[0xb] = '\0';
      }
      break;
    case 0x65:
      core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004bb3c0(param_1,_DAT_01cae2bc);
      break;
    case 0x66:
      core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004bb3c0(param_1,_DAT_01cae2c0);
      break;
    case 0x67:
      uVar3 = rand();
      if ((uVar3 & 3) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->model).motion_controller,0x15,1);
      }
      break;
    case 0x68:
      object = *(CDemonActor **)(param_1[2].flames[0x1d].on_event + 0x28);
      if (object != (CDemonActor *)0x0) {
        pCVar1 = param_1[2].flames;
        pCVar1[0x1d].on_event[0x28] = '\0';
        pCVar1[0x1d].on_event[0x29] = '\0';
        pCVar1[0x1d].on_event[0x2a] = '\0';
        pCVar1[0x1d].on_event[0x2b] = '\0';
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40(param_1,1,object,0.2);
      }
      break;
    case 0x69:
      (*(((param_1->base).vtable._uc)->_uc).getDeathState)(param_1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,iVar2);
    }
  } while (0.0 < param_2);
  return;
}
