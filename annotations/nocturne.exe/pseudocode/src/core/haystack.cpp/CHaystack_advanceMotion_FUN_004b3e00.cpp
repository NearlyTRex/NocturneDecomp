// Name: core_haystack.cpp_CHaystack_advanceMotion_FUN_004b3e00
// Address: 004b3e00
// Address Range: [[004b3e00, 004b3f35]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_advanceMotion_FUN_004b3e00(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_haystack_cpp_CHaystack_advanceMotion_FUN_004b3e00(CCharacter *param_1,float param_2)

{
  int iVar1;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&(param_1->model).motion_controller,&param_2);
    switch(iVar1) {
    case 0x65:
      core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004b3f40(param_1,_DAT_01cae04c);
      iVar1 = *(int *)(param_1[2].flames[0x1d].on_event + 8);
      goto LAB_004b3e4c;
    case 0x66:
      core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004b3f40(param_1,_DAT_01cae050);
      iVar1 = *(int *)(param_1[2].flames[0x1d].on_event + 8);
LAB_004b3e4c:
      *(uint *)(param_1[2].flames[0x1d].on_event + 8) = (uint)(iVar1 == 0);
      break;
    case 0x67:
    case 0x69:
    case 0x6b:
      iVar1 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880
                        ((double)(param_1->base).location.position.x,
                         (double)(param_1->base).location.position.y,
                         (double)(param_1->base).location.position.z,40.0);
      if (iVar1 != 0) {
        (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"box-swing?.wav");
      }
      break;
    case 0x68:
    case 0x6a:
    case 0x6c:
      iVar1 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880
                        ((double)(param_1->base).location.position.x,
                         (double)(param_1->base).location.position.y,
                         (double)(param_1->base).location.position.z,40.0);
      if ((iVar1 != 0) && (iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0.4), iVar1 != 0)) {
        (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"box-punch?.wav");
      }
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,iVar1);
    }
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
