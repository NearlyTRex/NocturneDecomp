// Name: core_drip.cpp_FUN_0048e930
// Address: 0048e930
// Address Range: [[0048e930, 0048ea24]]
// Convention: unknown
// Signature: undefined core_drip.cpp_FUN_0048e930()
// Globals:
//   TerminatedCString s_Type_006222d5
//   TerminatedCString s_Model_file_kfm_006222da
//   TerminatedCString s_Auto_drop_006222ec
//   TerminatedCString s_Auto_drop_min_time_006222f6
//   TerminatedCString s_Auto_drop_max_time_00622309
//   TerminatedCString s_Drip_radius_0062231c
//   TerminatedCString s_Damage_00622328
//   TerminatedCString s_Hit_sound_0062232f
//   TerminatedCString s_No_rocks_on_hitting_grou_00622339
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e670
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_drip.cpp_FUN_0048e930(undefined4 param_1, undefined4 param_2)
    */

void core_drip_cpp_FUN_0048e930(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  if (in_stack_00000004[2].location.position.y == 2.8026e-45) {
    core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 0048e930: PUSH EBX
//   Label: core_drip.cpp_FUN_0048e930
// 0048e931: PUSH ESI
// 0048e932: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0048e936: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0048e93a: PUSH EBX
// 0048e93b: PUSH ESI
// 0048e93c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 0048e941: ADD ESP,0x8
// 0048e944: PUSH 0x48e8d0
//   XREF to: 0048e8d0 (DATA)
// 0048e949: PUSH 0x48e830
//   XREF to: 0048e830 (DATA)
// 0048e94e: PUSH 0x6222d5
//   XREF to: 006222d5 (DATA)
// 0048e953: PUSH EBX
// 0048e954: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 0048e959: MOV EDX,dword ptr [ESI + 0x2d4]
// 0048e95f: ADD ESP,0x10
// 0048e962: CMP EDX,0x2
// 0048e965: JZ 0x0048ea09
//   XREF to: 0048ea09 (CONDITIONAL_JUMP)
// 0048e96b: LEA EAX,[ESI + 0x2d8]
//   Label: LAB_0048e96b
// 0048e971: PUSH EAX
// 0048e972: PUSH 0x6222ec
//   XREF to: 006222ec (DATA)
// 0048e977: PUSH EBX
// 0048e978: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0048e97d: ADD ESP,0xc
// 0048e980: PUSH 0x0
// 0048e982: LEA EAX,[ESI + 0x2e0]
// 0048e988: PUSH EAX
// 0048e989: PUSH 0x6222f6
//   XREF to: 006222f6 (DATA)
// 0048e98e: PUSH EBX
// 0048e98f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0048e994: ADD ESP,0x10
// 0048e997: PUSH 0x0
// 0048e999: LEA EAX,[ESI + 0x2e4]
// 0048e99f: PUSH EAX
// 0048e9a0: PUSH 0x622309
//   XREF to: 00622309 (DATA)
// 0048e9a5: PUSH EBX
// 0048e9a6: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0048e9ab: ADD ESP,0x10
// 0048e9ae: PUSH 0x0
// 0048e9b0: LEA EAX,[ESI + 0x2e8]
// 0048e9b6: PUSH EAX
// 0048e9b7: PUSH 0x62231c
//   XREF to: 0062231c (DATA)
// 0048e9bc: PUSH EBX
// 0048e9bd: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0048e9c2: ADD ESP,0x10
// 0048e9c5: PUSH 0x0
// 0048e9c7: LEA EAX,[ESI + 0x310]
// 0048e9cd: PUSH EAX
// 0048e9ce: PUSH 0x622328
//   XREF to: 00622328 (DATA)
// 0048e9d3: PUSH EBX
// 0048e9d4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0048e9d9: ADD ESP,0x10
// 0048e9dc: LEA EAX,[ESI + 0x314]
// 0048e9e2: PUSH EAX
// 0048e9e3: PUSH 0x62232f
//   XREF to: 0062232f (DATA)
// 0048e9e8: PUSH EBX
// 0048e9e9: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 0048e9ee: ADD ESP,0xc
// 0048e9f1: ADD ESI,0x334
// 0048e9f7: PUSH ESI
// 0048e9f8: PUSH 0x622339
//   XREF to: 00622339 (DATA)
// 0048e9fd: PUSH EBX
// 0048e9fe: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0048ea03: ADD ESP,0xc
// 0048ea06: POP ESI
// 0048ea07: POP EBX
// 0048ea08: RET
// 0048ea09: PUSH 0x0
//   Label: LAB_0048ea09
// 0048ea0b: LEA EAX,[ESI + 0x158]
// 0048ea11: PUSH EAX
// 0048ea12: PUSH 0x6222da
//   XREF to: 006222da (DATA)
// 0048ea17: PUSH EBX
// 0048ea18: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 0048ea1d: ADD ESP,0x10
// 0048ea20: JMP 0x0048e96b
//   XREF to: 0048e96b (UNCONDITIONAL_JUMP)
