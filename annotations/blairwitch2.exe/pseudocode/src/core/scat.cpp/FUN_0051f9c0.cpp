// Name: core_scat.cpp_FUN_0051f9c0
// Address: 0051f9c0
// Address Range: [[0051f9c0, 0051fa4d]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_0051f9c0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_FUN_0051f9c0(CScat *this_ptr,float delta_time)

{
  int iVar1;
  SDamageInfo aSStack_50 [4];
  uint local_4c;
  CScat *local_1c;
  CScat *local_18;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&this_ptr->field_0x2b4,&delta_time);
    if (iVar1 == 100) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)&this_ptr->field_0x276c,g_CEnemyClassInfo.name_hash);
      if (iVar1 != 0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_50);
        local_4c = 0x40a00000;
        local_1c = this_ptr;
        local_18 = this_ptr;
        (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x110))(iVar1,aSStack_50);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar1);
    }
  } while (0.0 < delta_time);
  return;
}
