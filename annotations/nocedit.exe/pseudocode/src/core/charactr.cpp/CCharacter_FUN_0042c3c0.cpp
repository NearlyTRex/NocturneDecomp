// Name: core_charactr.cpp_CCharacter_FUN_0042c3c0
// Address: 0042c3c0
// Address Range: [[0042c3c0, 0042c579]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042c3c0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042c3c0(CCharacter *this_ptr)

{
  uint uVar1;
  uint *extraout_EDX;
  uint *puVar2;
  uint *extraout_EDX_00;
  uint *extraout_EDX_01;
  uint *extraout_EDX_02;
  uint *extraout_EDX_03;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  uint *in_stack_00000008;
  CCharacter *in_stack_ffffffc8;
  CVector3f *input_local_point;
  CVector3f CStack_24;
  byte auStack_18 [4];
  int iStack_14;
  
  if ((float)in_stack_00000008[1] <= 0.0) {
    return;
  }
  puVar2 = in_stack_00000008 + 3;
  uVar1 = in_stack_00000008[0xc];
  if (uVar1 < 6) {
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        in_stack_ffffffc8 = (CCharacter *)0x42c426;
        core_charactr_cpp_CCharacter_FUN_0042b930(this_ptr);
        puVar2 = extraout_EDX;
      }
      goto LAB_0042c429;
    }
    if (4 < uVar1) {
      core_charactr_cpp_CCharacter_FUN_0042b8e0(this_ptr);
      puVar2 = extraout_EDX_03;
      goto LAB_0042c429;
    }
LAB_0042c50c:
    in_stack_ffffffc8 = this_ptr;
    core_charactr_cpp_CCharacter_FUN_0042b9e0(this_ptr);
    puVar2 = extraout_EDX_01;
  }
  else {
    if (6 < uVar1) {
      if (uVar1 < 0x68) {
        if (uVar1 != 7) goto LAB_0042c429;
        goto LAB_0042c50c;
      }
      if (uVar1 < 0x69) {
        core_charactr_cpp_CCharacter_FUN_0042b190(this_ptr);
        puVar2 = extraout_EDX_02;
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
  if (in_stack_00000008[10] == 5) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base_actor,&CStack_24,(CVector3f *)(in_stack_00000008 + 7));
    in_stack_ffffffc8 = (CCharacter *)*in_stack_00000008;
    core_charactr_cpp_CCharacter_FUN_0042b5b0(this_ptr);
    puVar2 = extraout_EDX_00;
  }
  if (0.0 < (float)in_stack_00000008[2]) {
    fVar3 = (float10)(float)in_stack_00000008[1] * (float10)(float)in_stack_00000008[2];
    input_local_point = (CVector3f *)0x42c47c;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(puVar2,auStack_18));
    iStack_14 = (int)ROUND(fVar3);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base_actor,(CVector3f *)in_stack_ffffffc8,input_local_point);
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
