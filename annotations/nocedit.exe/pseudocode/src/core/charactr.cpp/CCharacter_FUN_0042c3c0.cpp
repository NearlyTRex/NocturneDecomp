// Name: core_charactr.cpp_CCharacter_FUN_0042c3c0
// Address: 0042c3c0
// Address Range: [[0042c3c0, 0042c579]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042c3c0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042c3c0(CCharacter *this_ptr)

{
  uint uVar1;
  double dVar2;
  int in_stack_00000008;
  CVector3f *output_world_point;
  CVector3f *input_local_point;
  CVector3f local_28;
  CVector3f local_1c;
  
  if (*(float *)(in_stack_00000008 + 4) <= 0.0) {
    return;
  }
  uVar1 = *(uint *)(in_stack_00000008 + 0x30);
  if (uVar1 < 6) {
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        core_charactr_cpp_CCharacter_FUN_0042b930(this_ptr);
      }
      goto LAB_0042c429;
    }
    if (4 < uVar1) {
      core_charactr_cpp_CCharacter_FUN_0042b8e0(this_ptr);
      goto LAB_0042c429;
    }
LAB_0042c50c:
    core_charactr_cpp_CCharacter_FUN_0042b9e0(this_ptr);
  }
  else {
    if (6 < uVar1) {
      if (uVar1 < 0x68) {
        if (uVar1 != 7) goto LAB_0042c429;
        goto LAB_0042c50c;
      }
      if (uVar1 < 0x69) {
        core_charactr_cpp_CCharacter_FUN_0042b190(this_ptr);
        goto LAB_0042c429;
      }
      if (uVar1 != 0x6a) goto LAB_0042c429;
    }
    this_ptr->cloth_data[0x8d48] = '\0';
    this_ptr->cloth_data[0x8d49] = '\0';
    this_ptr->cloth_data[0x8d4a] = '\0';
    this_ptr->cloth_data[0x8d4b] = '@';
  }
LAB_0042c429:
  if (*(int *)(in_stack_00000008 + 0x28) == 5) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base,&local_28,(CVector3f *)(in_stack_00000008 + 0x1c));
    core_charactr_cpp_CCharacter_FUN_0042b5b0(this_ptr);
  }
  if (0.0 < *(float *)(in_stack_00000008 + 8)) {
    input_local_point = &local_1c;
    output_world_point = (CVector3f *)0x42c47c;
    dVar2 = crt_math_c_round_FUN_005fe6b0
                      ((double)(*(float *)(in_stack_00000008 + 4) *
                               *(float *)(in_stack_00000008 + 8)));
    local_1c.z = (float)(int)ROUND(dVar2);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base,output_world_point,input_local_point);
    core_gore_cpp_FUN_004edbb0();
  }
  if ((this_ptr->health_bar_mode == 1) && ((CHero *)this_ptr != g_HeroActors[g_LocalHeroIndex])) {
    core_game_cpp_CGame_FUN_004e0bf0(g_CGamePtr);
  }
  if (0.0 < this_ptr->hit_points) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042d060(this_ptr);
  return;
}
