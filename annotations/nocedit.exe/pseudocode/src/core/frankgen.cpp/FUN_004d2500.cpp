// Name: core_frankgen.cpp_FUN_004d2500
// Address: 004d2500
// Address Range: [[004d2500, 004d2557]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d2500()
// Globals:
//   TerminatedCString s_Master_frame_0_g_0062abdf
//   undefined4 DAT_0065e670
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_frankgen.cpp_FUN_004d2500(undefined4 param_1, undefined4
   param_2) */

void core_frankgen_cpp_FUN_004d2500(void)

{
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  CActorPropertyList *in_stack_00000014;
  int aiStack_64 [24];
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  crt_stdio_c_sprintf_FUN_005fdbd0
            ((char *)aiStack_64,"Master frame (%0..%g)",(double)_DAT_0065e670);
  aiStack_64[0] = 0;
  aiStack_64[0] = core_frankgen_cpp_CFrankenstienMachine_findLeader_FUN_004d2330();
  aiStack_64[0] = aiStack_64[0] + 0x15c;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000014);
  return;
}


// Assembly code:
// 004d2500: PUSH EBX
//   Label: core_frankgen.cpp_FUN_004d2500
// 004d2501: SUB ESP,0x64
// 004d2504: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 004d2508: PUSH EDX
// 004d2509: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 004d250d: PUSH ECX
// 004d250e: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 004d2513: ADD ESP,0x8
// 004d2516: SUB ESP,0x8
// 004d2519: FLD float ptr [0x0065e670]
//   XREF to: 0065e670 (READ)
// 004d251f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 004d2522: PUSH 0x62abdf
//   XREF to: 0062abdf (DATA)
// 004d2527: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x68] (DATA)
// 004d252b: PUSH EAX
// 004d252c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004d2531: ADD ESP,0x10
// 004d2534: PUSH 0x0
// 004d2536: CALL core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330
//   XREF to: 004d2330 (UNCONDITIONAL_CALL)
// 004d253b: ADD EAX,0x15c
// 004d2540: PUSH EAX
// 004d2541: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x68] (DATA)
// 004d2545: PUSH EAX
// 004d2546: MOV EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x8] (READ)
// 004d254a: PUSH EBX
// 004d254b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004d2550: ADD ESP,0x10
// 004d2553: ADD ESP,0x64
// 004d2556: POP EBX
// 004d2557: RET
