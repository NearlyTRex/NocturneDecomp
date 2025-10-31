// Name: core_wateract.cpp_CWaterActor_serialize_FUN_005eb510
// Address: 005eb510
// Address Range: [[005eb510, 005eb701]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_serialize_FUN_005eb510(CWaterActor * this_ptr)
// Globals:
//   TerminatedCString s_size_0065730f
//   TerminatedCString s_opacity_00657314
//   TerminatedCString s_heightDelta_0065731c
//   TerminatedCString s_timeToMove_00657328
//   TerminatedCString s_moveSound_00657333
//   TerminatedCString s_moveEvent_0065733d
//   TerminatedCString s_param_00657347
//   TerminatedCString s_heightDelta_0065734d
//   TerminatedCString s_timeToMoveUp_00657359
//   TerminatedCString s_timeToMoveDown_00657366
//   TerminatedCString s_moveUpSound_00657375
//   TerminatedCString s_moveDownSound_00657381
//   TerminatedCString s_moveUpEvent_0065738f
//   TerminatedCString s_moveDownEvent_0065739b
//   TerminatedCString s_param_006573a9
//   TerminatedCString s_state_006573af
//   TerminatedCString s_patchSize_006573b5
//   TerminatedCString s_roundFlag_006573bf
//   TerminatedCString s_colR_006573c9
//   TerminatedCString s_colG_006573ce
//   TerminatedCString s_colB_006573d3
//   int g_CWaterActorVersion = 0x6
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_serialize_FUN_005eb510(CWaterActor *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeVector_FUN_0040b340(&this_ptr->size,"size");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->opacity,"opacity");
  if (g_CWaterActorVersion == 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->height_delta,"heightDelta");
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->time_to_move,"timeToMove");
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)&this_ptr->move_sound,"moveSound")
    ;
    core_actor_cpp_serializeString_FUN_0040b5c0(&this_ptr->move_event,"moveEvent");
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->param,"param");
  }
  if (2 < g_CWaterActorVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->height_delta,"heightDelta");
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->time_to_move,"timeToMoveUp");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&this_ptr->time_to_move_down,"timeToMoveDown");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&this_ptr->move_sound,"moveUpSound");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&this_ptr->move_down_sound,"moveDownSound");
    core_actor_cpp_serializeString_FUN_0040b5c0(&this_ptr->move_event,"moveUpEvent");
    core_actor_cpp_serializeString_FUN_0040b5c0(&this_ptr->move_down_event,"moveDownEvent")
    ;
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->param,"param");
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->state,"state");
  }
  if (3 < g_CWaterActorVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->patch_size,"patchSize");
  }
  if (4 < g_CWaterActorVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->round_flag,"roundFlag");
  }
  if (g_CWaterActorVersion < 6) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->col_r,"colR");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->col_g,"colG");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->col_b,"colB");
  return;
}


// Assembly code:
// 005eb510: PUSH EBX
//   Label: core_wateract.cpp_CWaterActor_serialize_FUN_005eb510
// 005eb511: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005eb515: PUSH EBX
// 005eb516: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 005eb51b: ADD ESP,0x4
// 005eb51e: PUSH 0x65730f
//   XREF to: 0065730f (DATA)
// 005eb523: LEA EAX,[EBX + 0x158]
// 005eb529: PUSH EAX
// 005eb52a: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 005eb52f: ADD ESP,0x8
// 005eb532: PUSH 0x657314
//   XREF to: 00657314 (DATA)
// 005eb537: LEA EAX,[EBX + 0x164]
// 005eb53d: PUSH EAX
// 005eb53e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005eb543: MOV EDX,dword ptr [0x00684870]
//   XREF to: 00684870 (READ)
// 005eb549: ADD ESP,0x8
// 005eb54c: CMP EDX,0x2
// 005eb54f: JZ 0x005eb65b
//   XREF to: 005eb65b (CONDITIONAL_JUMP)
// 005eb555: CMP dword ptr [0x00684870],0x3
//   Label: LAB_005eb555
//   XREF to: 00684870 (READ)
// 005eb55c: JL 0x005eb616
//   XREF to: 005eb616 (CONDITIONAL_JUMP)
// 005eb562: PUSH 0x65734d
//   XREF to: 0065734d (DATA)
// 005eb567: LEA EAX,[EBX + 0x168]
// 005eb56d: PUSH EAX
// 005eb56e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005eb573: ADD ESP,0x8
// 005eb576: PUSH 0x657359
//   XREF to: 00657359 (DATA)
// 005eb57b: LEA EAX,[EBX + 0x16c]
// 005eb581: PUSH EAX
// 005eb582: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005eb587: ADD ESP,0x8
// 005eb58a: PUSH 0x657366
//   XREF to: 00657366 (DATA)
// 005eb58f: LEA EAX,[EBX + 0x170]
// 005eb595: PUSH EAX
// 005eb596: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005eb59b: ADD ESP,0x8
// 005eb59e: PUSH 0x657375
//   XREF to: 00657375 (DATA)
// 005eb5a3: LEA EAX,[EBX + 0x174]
// 005eb5a9: PUSH EAX
// 005eb5aa: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005eb5af: ADD ESP,0x8
// 005eb5b2: PUSH 0x657381
//   XREF to: 00657381 (DATA)
// 005eb5b7: LEA EAX,[EBX + 0x194]
// 005eb5bd: PUSH EAX
// 005eb5be: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005eb5c3: ADD ESP,0x8
// 005eb5c6: PUSH 0x65738f
//   XREF to: 0065738f (DATA)
// 005eb5cb: LEA EAX,[EBX + 0x1b4]
// 005eb5d1: PUSH EAX
// 005eb5d2: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005eb5d7: ADD ESP,0x8
// 005eb5da: PUSH 0x65739b
//   XREF to: 0065739b (DATA)
// 005eb5df: LEA EAX,[EBX + 0x218]
// 005eb5e5: PUSH EAX
// 005eb5e6: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005eb5eb: ADD ESP,0x8
// 005eb5ee: PUSH 0x6573a9
//   XREF to: 006573a9 (DATA)
// 005eb5f3: LEA EAX,[EBX + 0x27c]
// 005eb5f9: PUSH EAX
// 005eb5fa: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005eb5ff: ADD ESP,0x8
// 005eb602: PUSH 0x6573af
//   XREF to: 006573af (DATA)
// 005eb607: LEA EAX,[EBX + 0x280]
// 005eb60d: PUSH EAX
// 005eb60e: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005eb613: ADD ESP,0x8
// 005eb616: CMP dword ptr [0x00684870],0x4
//   Label: LAB_005eb616
//   XREF to: 00684870 (READ)
// 005eb61d: JL 0x005eb633
//   XREF to: 005eb633 (CONDITIONAL_JUMP)
// 005eb61f: PUSH 0x6573b5
//   XREF to: 006573b5 (DATA)
// 005eb624: LEA EAX,[EBX + 0x284]
// 005eb62a: PUSH EAX
// 005eb62b: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005eb630: ADD ESP,0x8
// 005eb633: CMP dword ptr [0x00684870],0x5
//   Label: LAB_005eb633
//   XREF to: 00684870 (READ)
// 005eb63a: JL 0x005eb650
//   XREF to: 005eb650 (CONDITIONAL_JUMP)
// 005eb63c: PUSH 0x6573bf
//   XREF to: 006573bf (DATA)
// 005eb641: LEA EAX,[EBX + 0x288]
// 005eb647: PUSH EAX
// 005eb648: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005eb64d: ADD ESP,0x8
// 005eb650: CMP dword ptr [0x00684870],0x6
//   Label: LAB_005eb650
//   XREF to: 00684870 (READ)
// 005eb657: JGE 0x005eb6c4
//   XREF to: 005eb6c4 (CONDITIONAL_JUMP)
// 005eb659: POP EBX
// 005eb65a: RET
// 005eb65b: PUSH 0x65731c
//   Label: LAB_005eb65b
//   XREF to: 0065731c (DATA)
// 005eb660: LEA EAX,[EBX + 0x168]
// 005eb666: PUSH EAX
// 005eb667: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005eb66c: ADD ESP,0x8
// 005eb66f: PUSH 0x657328
//   XREF to: 00657328 (DATA)
// 005eb674: LEA EAX,[EBX + 0x16c]
// 005eb67a: PUSH EAX
// 005eb67b: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005eb680: ADD ESP,0x8
// 005eb683: PUSH 0x657333
//   XREF to: 00657333 (DATA)
// 005eb688: LEA EAX,[EBX + 0x174]
// 005eb68e: PUSH EAX
// 005eb68f: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005eb694: ADD ESP,0x8
// 005eb697: PUSH 0x65733d
//   XREF to: 0065733d (DATA)
// 005eb69c: LEA EAX,[EBX + 0x1b4]
// 005eb6a2: PUSH EAX
// 005eb6a3: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 005eb6a8: ADD ESP,0x8
// 005eb6ab: PUSH 0x657347
//   XREF to: 00657347 (DATA)
// 005eb6b0: LEA EAX,[EBX + 0x27c]
// 005eb6b6: PUSH EAX
// 005eb6b7: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005eb6bc: ADD ESP,0x8
// 005eb6bf: JMP 0x005eb555
//   XREF to: 005eb555 (UNCONDITIONAL_JUMP)
// 005eb6c4: PUSH 0x6573c9
//   Label: LAB_005eb6c4
//   XREF to: 006573c9 (DATA)
// 005eb6c9: LEA EAX,[EBX + 0x28c]
// 005eb6cf: PUSH EAX
// 005eb6d0: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005eb6d5: ADD ESP,0x8
// 005eb6d8: PUSH 0x6573ce
//   XREF to: 006573ce (DATA)
// 005eb6dd: LEA EAX,[EBX + 0x290]
// 005eb6e3: PUSH EAX
// 005eb6e4: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005eb6e9: ADD ESP,0x8
// 005eb6ec: PUSH 0x6573d3
//   XREF to: 006573d3 (DATA)
// 005eb6f1: ADD EBX,0x294
// 005eb6f7: PUSH EBX
// 005eb6f8: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005eb6fd: ADD ESP,0x8
// 005eb700: POP EBX
// 005eb701: RET
