// Name: core_platfrm.cpp_FUN_0054e7d0
// Address: 0054e7d0
// Address Range: [[0054e7d0, 0054e9ef]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e7d0()
// Globals:
//   TerminatedCString s_Model_file_kfm_0063fab6
//   TerminatedCString s_Move_to_end_event_0063fac8
//   TerminatedCString s_Move_to_start_event_0063fada
//   TerminatedCString s_Stop_event_0063faee
//   TerminatedCString s_Start_sound_0063faf9
//   TerminatedCString s_Stop_sound_0063fb05
//   TerminatedCString s_Active_sound_0063fb10
//   TerminatedCString s_Travel_time_start_end_se_0063fb1d
//   TerminatedCString s_Travel_time_end_start_se_0063fb3a
//   TerminatedCString s_groundType_0063fb57
//   TerminatedCString s_course_0063fb62
//   TerminatedCString s_Editor_slew_mode_0063fb69
//   TerminatedCString s_state_0063fb7a
//   TerminatedCString s_Paramater_0_1_0063fb80
//   TerminatedCString s_One_shot_0_no_1_yes_2_do_0063fb91
//   TerminatedCString s_Block_virtual_director_0063fbae
//   TerminatedCString s_Render_backgnd_when_not__0063fbc5
//   TerminatedCString s_Camera_while_moving_0063fbe4
//   TerminatedCString s_Recompute_fog_in_backgro_0063fbfb
//   TerminatedCString s_Plot_as_a_box_in_shadow_0063fc1a
//   TerminatedCString s_Push_actor_instead_of_ki_0063fc32
//   TerminatedCString s_Plot_in_shadow_flag_0063fc54
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e300
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e670
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054e7d0(undefined4 param_1, undefined4
   param_2) */

void core_platfrm_cpp_FUN_0054e7d0(void)

{
  int extraout_EAX;
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e300(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  *(undefined4 *)(extraout_EAX + 0x58) = 1;
  if (*(char *)&in_stack_00000004[2].orient_matrix.m[0].y == '\0') {
    core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  if (*(int *)(in_stack_00000004[3].create_event + 0x48) != 0) {
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 0054e7d0: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054e7d0
// 0054e7d1: PUSH ESI
// 0054e7d2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0054e7d6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0054e7da: PUSH EBX
// 0054e7db: PUSH ESI
// 0054e7dc: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 0054e7e1: ADD ESP,0x8
// 0054e7e4: PUSH 0x0
// 0054e7e6: LEA EAX,[ESI + 0x158]
// 0054e7ec: PUSH EAX
// 0054e7ed: PUSH 0x63fab6
//   XREF to: 0063fab6 (DATA)
// 0054e7f2: PUSH EBX
// 0054e7f3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 0054e7f8: ADD ESP,0x10
// 0054e7fb: LEA EAX,[ESI + 0x3b8]
// 0054e801: PUSH EAX
// 0054e802: PUSH 0x63fac8
//   XREF to: 0063fac8 (DATA)
// 0054e807: PUSH EBX
// 0054e808: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0054e80d: ADD ESP,0xc
// 0054e810: LEA EAX,[ESI + 0x354]
// 0054e816: PUSH EAX
// 0054e817: PUSH 0x63fada
//   XREF to: 0063fada (DATA)
// 0054e81c: PUSH EBX
// 0054e81d: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0054e822: ADD ESP,0xc
// 0054e825: LEA EAX,[ESI + 0x41c]
// 0054e82b: PUSH EAX
// 0054e82c: PUSH 0x63faee
//   XREF to: 0063faee (DATA)
// 0054e831: PUSH EBX
// 0054e832: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0054e837: ADD ESP,0xc
// 0054e83a: LEA EAX,[ESI + 0x480]
// 0054e840: PUSH EAX
// 0054e841: PUSH 0x63faf9
//   XREF to: 0063faf9 (DATA)
// 0054e846: PUSH EBX
// 0054e847: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 0054e84c: ADD ESP,0xc
// 0054e84f: LEA EAX,[ESI + 0x494]
// 0054e855: PUSH EAX
// 0054e856: PUSH 0x63fb05
//   XREF to: 0063fb05 (DATA)
// 0054e85b: PUSH EBX
// 0054e85c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 0054e861: ADD ESP,0xc
// 0054e864: LEA EAX,[ESI + 0x4a8]
// 0054e86a: PUSH EAX
// 0054e86b: PUSH 0x63fb10
//   XREF to: 0063fb10 (DATA)
// 0054e870: PUSH EBX
// 0054e871: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 0054e876: ADD ESP,0xc
// 0054e879: PUSH 0x0
// 0054e87b: LEA EAX,[ESI + 0x2e8]
// 0054e881: PUSH EAX
// 0054e882: PUSH 0x63fb1d
//   XREF to: 0063fb1d (DATA)
// 0054e887: PUSH EBX
// 0054e888: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0054e88d: ADD ESP,0x10
// 0054e890: PUSH 0x0
// 0054e892: LEA EAX,[ESI + 0x2ec]
// 0054e898: PUSH EAX
// 0054e899: PUSH 0x63fb3a
//   XREF to: 0063fb3a (DATA)
// 0054e89e: PUSH EBX
// 0054e89f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0054e8a4: ADD ESP,0x10
// 0054e8a7: LEA EAX,[ESI + 0x2d8]
// 0054e8ad: PUSH EAX
// 0054e8ae: PUSH 0x63fb57
//   XREF to: 0063fb57 (DATA)
// 0054e8b3: PUSH EBX
// 0054e8b4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e300
//   XREF to: 0040e300 (UNCONDITIONAL_CALL)
// 0054e8b9: ADD ESP,0xc
// 0054e8bc: PUSH 0x54e530
//   XREF to: 0054e530 (DATA)
// 0054e8c1: PUSH 0x54e4e0
//   XREF to: 0054e4e0 (DATA)
// 0054e8c6: PUSH 0x63fb62
//   XREF to: 0063fb62 (DATA)
// 0054e8cb: PUSH EBX
// 0054e8cc: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 0054e8d1: MOV dword ptr [EAX + 0x58],0x1
// 0054e8d8: MOV AH,byte ptr [ESI + 0x2f0]
// 0054e8de: ADD ESP,0x10
// 0054e8e1: TEST AH,AH
// 0054e8e3: JNZ 0x0054e8fd
//   XREF to: 0054e8fd (CONDITIONAL_JUMP)
// 0054e8e5: PUSH 0x54e480
//   XREF to: 0054e480 (DATA)
// 0054e8ea: PUSH 0x54e400
//   XREF to: 0054e400 (DATA)
// 0054e8ef: PUSH 0x63fb69
//   XREF to: 0063fb69 (DATA)
// 0054e8f4: PUSH EBX
// 0054e8f5: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 0054e8fa: ADD ESP,0x10
// 0054e8fd: PUSH 0x54e760
//   Label: LAB_0054e8fd
//   XREF to: 0054e760 (DATA)
// 0054e902: PUSH 0x54e700
//   XREF to: 0054e700 (DATA)
// 0054e907: PUSH 0x63fb7a
//   XREF to: 0063fb7a (DATA)
// 0054e90c: PUSH EBX
// 0054e90d: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 0054e912: ADD ESP,0x10
// 0054e915: PUSH 0x0
// 0054e917: PUSH 0x3f800000
// 0054e91c: LEA EAX,[ESI + 0x2dc]
// 0054e922: PUSH 0x0
// 0054e924: PUSH EAX
// 0054e925: PUSH 0x63fb80
//   XREF to: 0063fb80 (DATA)
// 0054e92a: PUSH EBX
// 0054e92b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 0054e930: ADD ESP,0x18
// 0054e933: PUSH 0x0
// 0054e935: LEA EAX,[ESI + 0x4c0]
// 0054e93b: PUSH EAX
// 0054e93c: PUSH 0x63fb91
//   XREF to: 0063fb91 (DATA)
// 0054e941: PUSH EBX
// 0054e942: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 0054e947: ADD ESP,0x10
// 0054e94a: LEA EAX,[ESI + 0x4c4]
// 0054e950: PUSH EAX
// 0054e951: PUSH 0x63fbae
//   XREF to: 0063fbae (DATA)
// 0054e956: PUSH EBX
// 0054e957: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0054e95c: ADD ESP,0xc
// 0054e95f: LEA EAX,[ESI + 0x4c8]
// 0054e965: PUSH EAX
// 0054e966: PUSH 0x63fbc5
//   XREF to: 0063fbc5 (DATA)
// 0054e96b: PUSH EBX
// 0054e96c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0054e971: MOV EDX,dword ptr [ESI + 0x4c8]
// 0054e977: ADD ESP,0xc
// 0054e97a: TEST EDX,EDX
// 0054e97c: JNZ 0x0054e9c0
//   XREF to: 0054e9c0 (CONDITIONAL_JUMP)
// 0054e97e: LEA EAX,[ESI + 0x50c]
//   Label: LAB_0054e97e
// 0054e984: PUSH EAX
// 0054e985: PUSH 0x63fc1a
//   XREF to: 0063fc1a (DATA)
// 0054e98a: PUSH EBX
// 0054e98b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0054e990: ADD ESP,0xc
// 0054e993: LEA EAX,[ESI + 0x510]
// 0054e999: PUSH EAX
// 0054e99a: PUSH 0x63fc32
//   XREF to: 0063fc32 (DATA)
// 0054e99f: PUSH EBX
// 0054e9a0: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0054e9a5: ADD ESP,0xc
// 0054e9a8: ADD ESI,0x518
// 0054e9ae: PUSH ESI
// 0054e9af: PUSH 0x63fc54
//   XREF to: 0063fc54 (DATA)
// 0054e9b4: PUSH EBX
// 0054e9b5: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0054e9ba: ADD ESP,0xc
// 0054e9bd: POP ESI
// 0054e9be: POP EBX
// 0054e9bf: RET
// 0054e9c0: PUSH 0x0
//   Label: LAB_0054e9c0
// 0054e9c2: PUSH 0x3f
// 0054e9c4: LEA EAX,[ESI + 0x4cc]
// 0054e9ca: PUSH EAX
// 0054e9cb: PUSH 0x63fbe4
//   XREF to: 0063fbe4 (DATA)
// 0054e9d0: PUSH EBX
// 0054e9d1: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 0054e9d6: ADD ESP,0x14
// 0054e9d9: LEA EAX,[ESI + 0x514]
// 0054e9df: PUSH EAX
// 0054e9e0: PUSH 0x63fbfb
//   XREF to: 0063fbfb (DATA)
// 0054e9e5: PUSH EBX
// 0054e9e6: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0054e9eb: ADD ESP,0xc
// 0054e9ee: JMP 0x0054e97e
//   XREF to: 0054e97e (UNCONDITIONAL_JUMP)
