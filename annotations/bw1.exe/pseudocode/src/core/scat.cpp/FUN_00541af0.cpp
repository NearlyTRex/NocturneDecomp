// Name: core_scat.cpp_FUN_00541af0
// Address: 00541af0
// Address Range: [[00541af0, 00541b7d]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_00541af0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_FUN_00541af0(CScat *this_ptr,float delta_time)

{
  int iVar1;
  SDamageInfo aSStack_50 [4];
  uint local_4c;
  CScat *local_1c;
  CScat *local_18;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&this_ptr->field_0x158,&delta_time);
    if (iVar1 == 100) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                        (*(uint *)&this_ptr->field_0x26fc,g_CEnemyClassInfo.name_hash);
      if (iVar1 != 0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_50);
        local_4c = 0x40a00000;
        local_1c = this_ptr;
        local_18 = this_ptr;
        (**(code **)(*(int *)(iVar1 + 0x154) + 0x108))(iVar1,aSStack_50);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar1);
    }
  } while (0.0 < delta_time);
  return;
}
