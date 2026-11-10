// Name: core_basicene.cpp_CBasicEnemy_advanceMotion_FUN_0059e7d0
// Address: 0059e7d0
// Address Range: [[0059e7d0, 0059e87a]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_advanceMotion_FUN_0059e7d0(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_advanceMotion_FUN_0059e7d0(CBasicEnemy *this_ptr,float delta_time)

{
  int bone_index;
  float afStack_18 [2];
  
  *(uint *)(this_ptr + 0x2510) = 0;
  *(uint *)(this_ptr + 0x250c) = *(uint *)(this_ptr + 0x2510);
  *(uint *)(this_ptr + 0x2508) = *(uint *)(this_ptr + 0x250c);
  afStack_18[0] = delta_time * *(float *)(this_ptr + 0x10a60);
  while (0.0 < afStack_18[0]) {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_005030c0
                           ((CMotionController *)(this_ptr + 0x2b4),afStack_18);
    if (bone_index < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index);
    }
    if (100 < bone_index) {
      (**(code **)(*(int *)(this_ptr + 0x2b0) + 0x168))(this_ptr,bone_index);
    }
  }
  *(uint *)(this_ptr + 0x2594) = *(uint *)(this_ptr + 0x2510);
  core_charactr_cpp_FUN_0042b2a0
            (this_ptr,delta_time * *(float *)(this_ptr + 0x10a60) * *(float *)(this_ptr + 0x1134c));
  return;
}
