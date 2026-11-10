// Name: core_haystack.cpp_CHaystack_advanceMotion_FUN_004cd660
// Address: 004cd660
// Address Range: [[004cd660, 004cd791]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_advanceMotion_FUN_004cd660(CHaystack *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_haystack_cpp_CHaystack_advanceMotion_FUN_004cd660(CHaystack *this_ptr,float delta_time)

{
  int iVar1;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&this_ptr->field_0x2b4,&delta_time);
    switch(iVar1) {
    case 0x65:
      core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004cd7a0(this_ptr,_DAT_01cede54);
      iVar1 = this_ptr->attack_side;
      goto LAB_004cd6ac;
    case 0x66:
      core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004cd7a0(this_ptr,_DAT_01cede58);
      iVar1 = this_ptr->attack_side;
LAB_004cd6ac:
      this_ptr->attack_side = (uint)(iVar1 == 0);
      break;
    case 0x67:
    case 0x69:
    case 0x6b:
      iVar1 = sound_sndmain_cpp_FUN_005515e0
                        ((double)*(float *)&this_ptr->field_0x20,
                         (double)*(float *)&this_ptr->field_0x24,
                         (double)*(float *)&this_ptr->field_0x28,0x42200000);
      if (iVar1 != 0) {
        (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))();
      }
      break;
    case 0x68:
    case 0x6a:
    case 0x6c:
      iVar1 = sound_sndmain_cpp_FUN_005515e0
                        ((double)*(float *)&this_ptr->field_0x20,
                         (double)*(float *)&this_ptr->field_0x24,
                         (double)*(float *)&this_ptr->field_0x28,0x42200000);
      if ((iVar1 != 0) && (iVar1 = core_actor_cpp_randomChance_FUN_0040d060(0.4), iVar1 != 0)) {
        (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))();
      }
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar1);
    }
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
