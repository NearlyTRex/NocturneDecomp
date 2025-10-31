// Name: core_tvbat.cpp_CTVBat_FUN_005e4050
// Address: 005e4050
// Address Range: [[005e4050, 005e409e]]
// Convention: __cdecl
// Signature: void core_tvbat.cpp_CTVBat_FUN_005e4050(CTVBat * this_ptr)
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_enemy.cpp_CEnemy_FUN_004a9650

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_FUN_005e4050(CTVBat *this_ptr)

{
  float min_value;
  float fVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(this_ptr->field1_0xbeb4 + 0xc));
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  (this_ptr->base_enemy).base_character.hit_points = 10.0;
  this_ptr->field16_0xc0e8[8] = '\0';
  this_ptr->field16_0xc0e8[9] = '\0';
  this_ptr->field16_0xc0e8[10] = '\0';
  this_ptr->field16_0xc0e8[0xb] = '\0';
  fVar1 = this_ptr->periodic_sound_timer_max;
  min_value = this_ptr->periodic_sound_timer_min;
  this_ptr->field16_0xc0e8[0] = '\0';
  this_ptr->field16_0xc0e8[1] = '\0';
  this_ptr->field16_0xc0e8[2] = '\0';
  this_ptr->field16_0xc0e8[3] = '\0';
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(min_value,fVar1);
  *(float *)(this_ptr->field16_0xc0e8 + 4) = fVar1;
  return;
}


// Assembly code:
// 005e4050: PUSH EBX
//   Label: core_tvbat.cpp_CTVBat_FUN_005e4050
// 005e4051: SUB ESP,0x4
// 005e4054: MOV EBX,dword ptr [ESP + 0xc]
// 005e4058: LEA EAX,[EBX + 0xbec0]
// 005e405e: PUSH EAX
// 005e405f: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 005e4064: ADD ESP,0x4
// 005e4067: PUSH EBX
// 005e4068: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 005e406d: MOV dword ptr [EBX + 0x243c],0x41200000
// 005e4077: ADD ESP,0x4
// 005e407a: MOV dword ptr [EBX + 0xc0f0],0x0
// 005e4084: PUSH dword ptr [EBX + 0xc0e4]
// 005e408a: PUSH dword ptr [EBX + 0xc0e0]
// 005e4090: MOV dword ptr [EBX + 0xc0e8],0x0
// 005e409a: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
