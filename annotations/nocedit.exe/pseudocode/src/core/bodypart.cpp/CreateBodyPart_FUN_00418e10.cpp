// Name: core_bodypart.cpp_CreateBodyPart_FUN_00418e10
// Address: 00418e10
// Address Range: [[00418e10, 00418f34] [00418fa2, 00418fca]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_CreateBodyPart_FUN_00418e10()
// Cross-references:
//   core_batcreat.cpp_FUN_00415dd0 (00415dd0) at 00415f25 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_00417660 (00417660) at 00417732 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424600 (00424600) at 004246c2 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042bcc0 (0042bcc0) at 0042bcfe [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_004448c0 (004448c0) at 00444969 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00485b20 (00485b20) at 00485b5d [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk4_FUN_004e5530 (004e5530) at 004e55f2 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8520 (004e8520) at 004e85ed [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fab60 (004fab60) at 004fac32 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527380 (00527380) at 0052748b [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c8f7 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a0fe0 (005a0fe0) at 005a0ffe [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a32a0 (005a32a0) at 005a338c [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc220 (005fc220) at 005fc2ed [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_..\core\bodypart.cpp_00615b7c
//   TerminatedCString s_core_bodypart_cpp_00615b91
//   TerminatedCString s_Can_t_create_body_part_00615ba6
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408c10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_bodypart.cpp_CBodyPart_ctor_FUN_00419010
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

/* Signature: undefined1 actors_other_bodypart.cpp_CreateBodyPart(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6,
   undefined4 param_7) */

CBodyPart * core_bodypart_cpp_CreateBodyPart_FUN_00418e10(void)

{
  COrientation *pCVar1;
  CBodyPart *this_ptr;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000030;
  int in_stack_00000034;
  undefined4 in_stack_00000038;
  float local_14;
  
  this_ptr = (CBodyPart *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xf30,"?..\\core\\bodypart.cpp" + 1,0x31);
  if (this_ptr != (CBodyPart *)0x0) {
    this_ptr = core_bodypart_cpp_CBodyPart_ctor_FUN_00419010(this_ptr);
  }
  if (this_ptr == (CBodyPart *)0x0) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 0x32;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create body part!");
  }
  (this_ptr->base_actor).location.position.x = *in_stack_0000000c;
  (this_ptr->base_actor).location.position.y = in_stack_0000000c[1];
  (this_ptr->base_actor).location.position.z = in_stack_0000000c[2];
  pCVar1 = &(this_ptr->base_actor).orient;
  if (pCVar1 != (COrientation *)in_stack_00000008) {
    pCVar1->pitch = *in_stack_00000008;
    (this_ptr->base_actor).orient.bank = in_stack_00000008[1];
    (this_ptr->base_actor).orient.heading = in_stack_00000008[2];
  }
  core_actor_cpp_CDemonActor_FUN_00408c10(&this_ptr->base_actor);
  if (in_stack_0000000c == (float *)0x0) {
    core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
    fVar3 = (float10)fcos((float10)fVar2);
    fVar4 = (float10)fcos((float10)local_14);
    fVar5 = (float10)fsin((float10)fVar2);
    fVar6 = (float10)fsin((float10)local_14);
    fVar7 = (float10)FLOAT_00615bc0;
    *(float *)(this_ptr->field1_0x158 + 300) = (float)(fVar6 * fVar7);
    *(float *)(this_ptr->field1_0x158 + 0x128) = (float)(fVar3 * fVar7 * fVar4);
    *(float *)(this_ptr->field1_0x158 + 0x130) = (float)(fVar5 * fVar7 * fVar4);
  }
  else if ((float *)(this_ptr->field1_0x158 + 0x128) != in_stack_0000000c) {
    *(float *)(this_ptr->field1_0x158 + 0x128) = *in_stack_0000000c;
    *(float *)(this_ptr->field1_0x158 + 300) = in_stack_0000000c[1];
    *(float *)(this_ptr->field1_0x158 + 0x130) = in_stack_0000000c[2];
  }
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
  if (in_stack_00000010 != 0) {
    (this_ptr->base_actor).scale.x = *(int *)(in_stack_00000010 + 0x108);
    (this_ptr->base_actor).scale.y = *(int *)(in_stack_00000010 + 0x10c);
    (this_ptr->base_actor).scale.z = *(int *)(in_stack_00000010 + 0x110);
  }
  *(undefined4 *)(this_ptr->field1_0x158 + 0xb58) = in_stack_00000030;
  (this_ptr->base_actor).is_transparent = in_stack_00000034;
  *(int *)(this_ptr->field1_0x158 + 0xb5c) = in_stack_00000034;
  *(undefined4 *)(this_ptr->field1_0x158 + 0xb60) = in_stack_00000038;
  return this_ptr;
}


// Assembly code:
// 00418e10: PUSH EBX
//   Label: core_bodypart.cpp_CreateBodyPart_FUN_00418e10
// 00418e11: PUSH ESI
// 00418e12: PUSH EDI
// 00418e13: PUSH EBP
// 00418e14: SUB ESP,0x28
// 00418e17: MOV EBP,dword ptr [ESP + 0x40]
// 00418e1b: MOV ESI,dword ptr [ESP + 0x44]
// 00418e1f: MOV EDI,dword ptr [ESP + 0x48]
// 00418e23: PUSH 0x31
// 00418e25: PUSH 0x615b7c
//   XREF to: 00615b7c (DATA)
// 00418e2a: PUSH 0xf30
// 00418e2f: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00418e34: ADD ESP,0xc
// 00418e37: TEST EAX,EAX
// 00418e39: JNZ 0x00418f18
//   XREF to: 00418f18 (CONDITIONAL_JUMP)
// 00418e3f: MOV EBX,EAX
//   Label: LAB_00418e3f
// 00418e41: TEST EAX,EAX
// 00418e43: JNZ 0x00418e68
//   XREF to: 00418e68 (CONDITIONAL_JUMP)
// 00418e45: MOV EDX,0x615b91
//   XREF to: 00615b91 (DATA)
// 00418e4a: MOV ECX,0x32
// 00418e4f: PUSH 0x615ba6
//   XREF to: 00615ba6 (DATA)
// 00418e54: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00418e5a: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00418e60: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00418e65: ADD ESP,0x4
// 00418e68: MOV EDX,dword ptr [ESP + 0x3c]
//   Label: LAB_00418e68
// 00418e6c: LEA EAX,[EBX + 0x20]
// 00418e6f: MOV ECX,dword ptr [EDX]
// 00418e71: MOV dword ptr [EAX],ECX
// 00418e73: MOV ECX,dword ptr [EDX + 0x4]
// 00418e76: MOV dword ptr [EAX + 0x4],ECX
// 00418e79: MOV ECX,dword ptr [EDX + 0x8]
// 00418e7c: MOV dword ptr [EAX + 0x8],ECX
// 00418e7f: LEA EAX,[EBX + 0x30]
// 00418e82: CMP EAX,EBP
// 00418e84: JZ 0x00418e97
//   XREF to: 00418e97 (CONDITIONAL_JUMP)
// 00418e86: MOV EDX,dword ptr [EBP]
// 00418e89: MOV dword ptr [EAX],EDX
// 00418e8b: MOV EDX,dword ptr [EBP + 0x4]
// 00418e8e: MOV dword ptr [EAX + 0x4],EDX
// 00418e91: MOV EDX,dword ptr [EBP + 0x8]
// 00418e94: MOV dword ptr [EAX + 0x8],EDX
// 00418e97: PUSH EBX
//   Label: LAB_00418e97
// 00418e98: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 00418e9d: ADD ESP,0x4
// 00418ea0: TEST ESI,ESI
// 00418ea2: JZ 0x00418f26
//   XREF to: 00418f26 (CONDITIONAL_JUMP)
// 00418ea8: LEA EAX,[EBX + 0x280]
// 00418eae: CMP EAX,ESI
// 00418eb0: JZ 0x00418ec2
//   XREF to: 00418ec2 (CONDITIONAL_JUMP)
// 00418eb2: MOV EDX,dword ptr [ESI]
// 00418eb4: MOV dword ptr [EAX],EDX
// 00418eb6: MOV EDX,dword ptr [ESI + 0x4]
// 00418eb9: MOV dword ptr [EAX + 0x4],EDX
// 00418ebc: MOV EDX,dword ptr [ESI + 0x8]
// 00418ebf: MOV dword ptr [EAX + 0x8],EDX
// 00418ec2: PUSH EBX
//   Label: LAB_00418ec2
// 00418ec3: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 00418ec9: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 00418eca: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 00418ecf: ADD ESP,0x8
// 00418ed2: PUSH EBX
// 00418ed3: MOV EBP,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 00418ed9: PUSH EBP
//   XREF to: 02f33740 (DATA)
// 00418eda: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 00418edf: ADD ESP,0x8
// 00418ee2: TEST EDI,EDI
// 00418ee4: JNZ 0x00418fa2
//   XREF to: 00418fa2 (CONDITIONAL_JUMP)
// 00418eea: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00418eea
// 00418eee: MOV dword ptr [EBX + 0xcb0],EAX
// 00418ef4: MOV EAX,dword ptr [ESP + 0x50]
// 00418ef8: MOV dword ptr [EBX + 0xfc],EAX
// 00418efe: MOV dword ptr [EBX + 0xcb4],EAX
// 00418f04: MOV EAX,dword ptr [ESP + 0x54]
// 00418f08: MOV dword ptr [EBX + 0xcb8],EAX
// 00418f0e: MOV EAX,EBX
// 00418f10: ADD ESP,0x28
// 00418f13: POP EBP
// 00418f14: POP EDI
// 00418f15: POP ESI
// 00418f16: POP EBX
// 00418f17: RET
// 00418f18: PUSH EAX
//   Label: LAB_00418f18
// 00418f19: CALL core_bodypart.cpp_CBodyPart_ctor_FUN_00419010
//   XREF to: 00419010 (UNCONDITIONAL_CALL)
// 00418f1e: ADD ESP,0x4
// 00418f21: JMP 0x00418e3f
//   XREF to: 00418e3f (UNCONDITIONAL_JUMP)
// 00418f26: PUSH 0x3fc90fdb
//   Label: LAB_00418f26
// 00418f2b: PUSH 0x3f490fdb
// 00418f30: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00418fa2: MOV EAX,dword ptr [EDI + 0x108]
//   Label: LAB_00418fa2
// 00418fa8: MOV dword ptr [EBX + 0x108],EAX
// 00418fae: MOV EAX,dword ptr [EDI + 0x10c]
// 00418fb4: MOV dword ptr [EBX + 0x10c],EAX
// 00418fba: MOV EAX,dword ptr [EDI + 0x110]
// 00418fc0: MOV dword ptr [EBX + 0x110],EAX
// 00418fc6: JMP 0x00418eea
//   XREF to: 00418eea (UNCONDITIONAL_JUMP)
