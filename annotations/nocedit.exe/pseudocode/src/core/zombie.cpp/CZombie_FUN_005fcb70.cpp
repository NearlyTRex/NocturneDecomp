// Name: core_zombie.cpp_CZombie_FUN_005fcb70
// Address: 005fcb70
// Address Range: [[005fcb70, 005fcc14]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005fcb70()
// Globals:
//   void* switchdataD_005fcb58 = 005fcba3
//   TerminatedCString s_jeff_dfm_00658aa7
//   TerminatedCString s_zombie1_dfm_00658ab0
//   TerminatedCString s_zombie2_dfm_00658abc
//   TerminatedCString s_zombie3_dfm_00658ac8
//   TerminatedCString s_fletch_dfm_00658ad4
//   TerminatedCString s_skinned_dfm_00658adf
// Function calls:
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_enemy.cpp_CEnemy_FUN_004aa250
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_zombie.cpp_CZombie_FUN_005fcb70(CZombie* param_1) */

void core_zombie_cpp_CZombie_FUN_005fcb70(void)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004aa250(in_stack_00000004);
  this_ptr = &(in_stack_00000004->base_character).model;
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                    ((in_stack_00000004->base_character).model.model_name,"jeff.dfm");
  if (iVar1 != 0) {
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,4);
    switch(iVar1) {
    case 0:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr,"zombie1.dfm");
      return;
    case 1:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr,"zombie2.dfm");
      return;
    case 2:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr,"zombie3.dfm");
      return;
    case 3:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr,"fletch.dfm");
      return;
    case 4:
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr,"skinned.dfm");
      return;
    }
  }
  return;
}


// Assembly code:
// 005fcb70: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fcb70
// 005fcb71: PUSH ESI
// 005fcb72: PUSH EBP
// 005fcb73: MOV EBP,ESP
// 005fcb75: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005fcb78: PUSH ESI
// 005fcb79: CALL core_enemy.cpp_CEnemy_FUN_004aa250
//   XREF to: 004aa250 (UNCONDITIONAL_CALL)
// 005fcb7e: ADD ESP,0x4
// 005fcb81: LEA EBX,[ESI + 0x158]
// 005fcb87: PUSH 0x658aa7
//   XREF to: 00658aa7 (DATA)
// 005fcb8c: LEA EAX,[ESI + 0x23b8]
// 005fcb92: PUSH EAX
// 005fcb93: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005fcb98: ADD ESP,0x8
// 005fcb9b: TEST EAX,EAX
// 005fcb9d: JNZ 0x005fcbfd
//   XREF to: 005fcbfd (CONDITIONAL_JUMP)
// 005fcb9f: POP EBP
//   Label: default
// 005fcba0: POP ESI
// 005fcba1: POP EBX
// 005fcba2: RET
// 005fcba3: PUSH 0x658ab0
//   Label: caseD_0
//   XREF to: 00658ab0 (DATA)
// 005fcba8: PUSH EBX
// 005fcba9: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005fcbae: ADD ESP,0x8
// 005fcbb1: POP EBP
// 005fcbb2: POP ESI
// 005fcbb3: POP EBX
// 005fcbb4: RET
// 005fcbb5: PUSH 0x658abc
//   Label: caseD_1
//   XREF to: 00658abc (DATA)
// 005fcbba: PUSH EBX
// 005fcbbb: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005fcbc0: ADD ESP,0x8
// 005fcbc3: POP EBP
// 005fcbc4: POP ESI
// 005fcbc5: POP EBX
// 005fcbc6: RET
// 005fcbc7: PUSH 0x658ac8
//   Label: caseD_2
//   XREF to: 00658ac8 (DATA)
// 005fcbcc: PUSH EBX
// 005fcbcd: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005fcbd2: ADD ESP,0x8
// 005fcbd5: POP EBP
// 005fcbd6: POP ESI
// 005fcbd7: POP EBX
// 005fcbd8: RET
// 005fcbd9: PUSH 0x658ad4
//   Label: caseD_3
//   XREF to: 00658ad4 (DATA)
// 005fcbde: PUSH EBX
// 005fcbdf: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005fcbe4: ADD ESP,0x8
// 005fcbe7: POP EBP
// 005fcbe8: POP ESI
// 005fcbe9: POP EBX
// 005fcbea: RET
// 005fcbeb: PUSH 0x658adf
//   Label: caseD_4
//   XREF to: 00658adf (DATA)
// 005fcbf0: PUSH EBX
// 005fcbf1: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005fcbf6: ADD ESP,0x8
// 005fcbf9: POP EBP
// 005fcbfa: POP ESI
// 005fcbfb: POP EBX
// 005fcbfc: RET
// 005fcbfd: PUSH 0x4
//   Label: LAB_005fcbfd
// 005fcbff: PUSH 0x0
// 005fcc01: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 005fcc06: ADD ESP,0x8
// 005fcc09: CMP EAX,0x4
// 005fcc0c: JA 0x005fcb9f
//   XREF to: 005fcb9f (CONDITIONAL_JUMP)
// 005fcc0e: JMP dword ptr [EAX*0x4 + 0x5fcb58]
//   Label: switchD
//   XREF to: 005fcba3 (COMPUTED_JUMP)
//   XREF to: 005fcbb5 (COMPUTED_JUMP)
//   XREF to: 005fcbc7 (COMPUTED_JUMP)
//   XREF to: 005fcbd9 (COMPUTED_JUMP)
//   XREF to: 005fcbeb (COMPUTED_JUMP)
//   XREF to: 005fcb58 (DATA)
