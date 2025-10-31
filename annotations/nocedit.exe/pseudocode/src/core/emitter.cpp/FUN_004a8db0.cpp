// Name: core_emitter.cpp_FUN_004a8db0
// Address: 004a8db0
// Address Range: [[004a8db0, 004a8fd8]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a8db0()
// Globals:
//   TerminatedCString s_Emitter_type_006241e7
//   TerminatedCString s_State_006241f4
//   TerminatedCString s_Max_Emit_Time_006241fa
//   TerminatedCString s_Emit_period_00624208
//   TerminatedCString s_On_event_00624214
//   TerminatedCString s_Off_event_0062421d
//   TerminatedCString s_Laser_R_00624227
//   TerminatedCString s_Laser_G_0062422f
//   TerminatedCString s_Laser_B_00624237
//   TerminatedCString s_Laser_Type_0062423f
//   TerminatedCString s_Slew_target_mode_0062424a
//   TerminatedCString s_Target_0062425b
//   TerminatedCString s_Model_file_kfm_00624262
//   TerminatedCString s_Speed_00624274
//   TerminatedCString s_Periodic_0062427a
//   TerminatedCString s_Off_time_00624283
//   TerminatedCString s_CDemonActor_0062428c
//   TerminatedCString s_Actor_to_fry_00624298
//   TerminatedCString s_Sound_006242a5
//   TerminatedCString s_Sound_type_006242bb
//   void* PTR_s_Spark_006792ec = 00624185
//   void* PTR_s_Normal_00679344 = 006242ab
//   undefined4 DAT_02cf2b5c
//   undefined4 DAT_02cf2b60
//   undefined4 DAT_02cf2b78
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e260
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_emitter.cpp_FUN_004a8db0(undefined4 param_1, undefined4
   param_2) */

void core_emitter_cpp_FUN_004a8db0(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  if (*(int *)in_stack_00000004[1].actor_name != 3) {
    core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  if (*(int *)in_stack_00000004[1].actor_name == 3) {
    core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
    if ((DAT_02cf2b5c != 0) && (in_stack_00000004 == DAT_02cf2b78)) {
      core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
    }
  }
  if (*(int *)in_stack_00000004[1].actor_name == 4) {
    core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  if (in_stack_00000004[2].field20_0x118 != 0) {
    core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  }
  if (*(int *)in_stack_00000004[1].actor_name == 9) {
    core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  return;
}


// Assembly code:
// 004a8db0: PUSH EBX
//   Label: core_emitter.cpp_FUN_004a8db0
// 004a8db1: PUSH ESI
// 004a8db2: PUSH EDI
// 004a8db3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004a8db7: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004a8dbb: PUSH ESI
// 004a8dbc: PUSH EBX
// 004a8dbd: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 004a8dc2: ADD ESP,0x8
// 004a8dc5: LEA EAX,[EBX + 0x158]
// 004a8dcb: PUSH EAX
// 004a8dcc: PUSH 0x6792ec
//   XREF to: 006792ec (DATA)
// 004a8dd1: PUSH 0xb
// 004a8dd3: PUSH 0x6241e7
//   XREF to: 006241e7 (DATA)
// 004a8dd8: PUSH ESI
// 004a8dd9: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 004a8dde: ADD ESP,0x14
// 004a8de1: LEA EAX,[EBX + 0x168]
// 004a8de7: PUSH EAX
// 004a8de8: PUSH 0x6241f4
//   XREF to: 006241f4 (DATA)
// 004a8ded: PUSH ESI
// 004a8dee: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004a8df3: ADD ESP,0xc
// 004a8df6: PUSH 0x0
// 004a8df8: LEA EAX,[EBX + 0x234]
// 004a8dfe: PUSH EAX
// 004a8dff: PUSH 0x6241fa
//   XREF to: 006241fa (DATA)
// 004a8e04: PUSH ESI
// 004a8e05: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004a8e0a: MOV EDX,dword ptr [EBX + 0x158]
// 004a8e10: ADD ESP,0x10
// 004a8e13: CMP EDX,0x3
// 004a8e16: JNZ 0x004a8f96
//   XREF to: 004a8f96 (CONDITIONAL_JUMP)
// 004a8e1c: LEA EAX,[EBX + 0x16c]
//   Label: LAB_004a8e1c
// 004a8e22: PUSH EAX
// 004a8e23: PUSH 0x624214
//   XREF to: 00624214 (DATA)
// 004a8e28: PUSH ESI
// 004a8e29: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004a8e2e: ADD ESP,0xc
// 004a8e31: LEA EAX,[EBX + 0x1d0]
// 004a8e37: PUSH EAX
// 004a8e38: PUSH 0x62421d
//   XREF to: 0062421d (DATA)
// 004a8e3d: PUSH ESI
// 004a8e3e: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004a8e43: MOV ECX,dword ptr [EBX + 0x158]
// 004a8e49: ADD ESP,0xc
// 004a8e4c: CMP ECX,0x3
// 004a8e4f: JNZ 0x004a8eeb
//   XREF to: 004a8eeb (CONDITIONAL_JUMP)
// 004a8e55: PUSH 0x0
// 004a8e57: LEA EAX,[EBX + 0x23c]
// 004a8e5d: PUSH EAX
// 004a8e5e: PUSH 0x624227
//   XREF to: 00624227 (DATA)
// 004a8e63: PUSH ESI
// 004a8e64: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 004a8e69: ADD ESP,0x10
// 004a8e6c: PUSH 0x0
// 004a8e6e: LEA EAX,[EBX + 0x240]
// 004a8e74: PUSH EAX
// 004a8e75: PUSH 0x62422f
//   XREF to: 0062422f (DATA)
// 004a8e7a: PUSH ESI
// 004a8e7b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 004a8e80: ADD ESP,0x10
// 004a8e83: PUSH 0x0
// 004a8e85: LEA EAX,[EBX + 0x244]
// 004a8e8b: PUSH EAX
// 004a8e8c: PUSH 0x624237
//   XREF to: 00624237 (DATA)
// 004a8e91: PUSH ESI
// 004a8e92: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 004a8e97: ADD ESP,0x10
// 004a8e9a: PUSH 0x0
// 004a8e9c: LEA EAX,[EBX + 0x238]
// 004a8ea2: PUSH EAX
// 004a8ea3: PUSH 0x62423f
//   XREF to: 0062423f (DATA)
// 004a8ea8: PUSH ESI
// 004a8ea9: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 004a8eae: ADD ESP,0x10
// 004a8eb1: PUSH 0x2cf2b5c
//   XREF to: 02cf2b5c (DATA)
// 004a8eb6: PUSH 0x62424a
//   XREF to: 0062424a (DATA)
// 004a8ebb: PUSH ESI
// 004a8ebc: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004a8ec1: MOV EDI,dword ptr [0x02cf2b5c]
//   XREF to: 02cf2b5c (READ)
// 004a8ec7: ADD ESP,0xc
// 004a8eca: TEST EDI,EDI
// 004a8ecc: JZ 0x004a8eeb
//   XREF to: 004a8eeb (CONDITIONAL_JUMP)
// 004a8ece: CMP EBX,dword ptr [0x02cf2b78]
//   XREF to: 02cf2b78 (READ)
// 004a8ed4: JNZ 0x004a8eeb
//   XREF to: 004a8eeb (CONDITIONAL_JUMP)
// 004a8ed6: PUSH 0x0
// 004a8ed8: PUSH 0x2cf2b60
//   XREF to: 02cf2b60 (DATA)
// 004a8edd: PUSH 0x62425b
//   XREF to: 0062425b (DATA)
// 004a8ee2: PUSH ESI
// 004a8ee3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e260
//   XREF to: 0040e260 (UNCONDITIONAL_CALL)
// 004a8ee8: ADD ESP,0x10
// 004a8eeb: CMP dword ptr [EBX + 0x158],0x4
//   Label: LAB_004a8eeb
// 004a8ef2: JNZ 0x004a8f22
//   XREF to: 004a8f22 (CONDITIONAL_JUMP)
// 004a8ef4: PUSH 0x0
// 004a8ef6: LEA EAX,[EBX + 0x248]
// 004a8efc: PUSH EAX
// 004a8efd: PUSH 0x624262
//   XREF to: 00624262 (DATA)
// 004a8f02: PUSH ESI
// 004a8f03: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 004a8f08: ADD ESP,0x10
// 004a8f0b: PUSH 0x0
// 004a8f0d: LEA EAX,[EBX + 0x3c4]
// 004a8f13: PUSH EAX
// 004a8f14: PUSH 0x624274
//   XREF to: 00624274 (DATA)
// 004a8f19: PUSH ESI
// 004a8f1a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004a8f1f: ADD ESP,0x10
// 004a8f22: LEA EAX,[EBX + 0x3c8]
//   Label: LAB_004a8f22
// 004a8f28: PUSH EAX
// 004a8f29: PUSH 0x62427a
//   XREF to: 0062427a (DATA)
// 004a8f2e: PUSH ESI
// 004a8f2f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004a8f34: MOV EDX,dword ptr [EBX + 0x3c8]
// 004a8f3a: ADD ESP,0xc
// 004a8f3d: TEST EDX,EDX
// 004a8f3f: JZ 0x004a8f58
//   XREF to: 004a8f58 (CONDITIONAL_JUMP)
// 004a8f41: PUSH 0x0
// 004a8f43: LEA EAX,[EBX + 0x3cc]
// 004a8f49: PUSH EAX
// 004a8f4a: PUSH 0x624283
//   XREF to: 00624283 (DATA)
// 004a8f4f: PUSH ESI
// 004a8f50: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004a8f55: ADD ESP,0x10
// 004a8f58: CMP dword ptr [EBX + 0x158],0x9
//   Label: LAB_004a8f58
// 004a8f5f: JZ 0x004a8fb9
//   XREF to: 004a8fb9 (CONDITIONAL_JUMP)
// 004a8f61: LEA EAX,[EBX + 0x3d4]
//   Label: LAB_004a8f61
// 004a8f67: PUSH EAX
// 004a8f68: PUSH 0x6242a5
//   XREF to: 006242a5 (DATA)
// 004a8f6d: PUSH ESI
// 004a8f6e: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 004a8f73: ADD ESP,0xc
// 004a8f76: ADD EBX,0x43c
// 004a8f7c: PUSH EBX
// 004a8f7d: PUSH 0x679344
//   XREF to: 00679344 (DATA)
// 004a8f82: PUSH 0x2
// 004a8f84: PUSH 0x6242bb
//   XREF to: 006242bb (DATA)
// 004a8f89: PUSH ESI
// 004a8f8a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 004a8f8f: ADD ESP,0x14
// 004a8f92: POP EDI
// 004a8f93: POP ESI
// 004a8f94: POP EBX
// 004a8f95: RET
// 004a8f96: PUSH 0x0
//   Label: LAB_004a8f96
// 004a8f98: PUSH 0x461c3c00
// 004a8f9d: LEA EAX,[EBX + 0x444]
// 004a8fa3: PUSH 0x0
// 004a8fa5: PUSH EAX
// 004a8fa6: PUSH 0x624208
//   XREF to: 00624208 (DATA)
// 004a8fab: PUSH ESI
// 004a8fac: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 004a8fb1: ADD ESP,0x18
// 004a8fb4: JMP 0x004a8e1c
//   XREF to: 004a8e1c (UNCONDITIONAL_JUMP)
// 004a8fb9: PUSH 0x0
//   Label: LAB_004a8fb9
// 004a8fbb: PUSH 0x62428c
//   XREF to: 0062428c (DATA)
// 004a8fc0: PUSH 0x1
// 004a8fc2: LEA EAX,[EBX + 0x3d0]
// 004a8fc8: PUSH EAX
// 004a8fc9: PUSH 0x624298
//   XREF to: 00624298 (DATA)
// 004a8fce: PUSH ESI
// 004a8fcf: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 004a8fd4: ADD ESP,0x18
// 004a8fd7: JMP 0x004a8f61
//   XREF to: 004a8f61 (UNCONDITIONAL_JUMP)
