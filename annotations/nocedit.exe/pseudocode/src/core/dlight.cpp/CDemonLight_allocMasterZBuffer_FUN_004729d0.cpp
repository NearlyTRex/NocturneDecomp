// Name: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0
// Address: 004729d0
// Address Range: [[004729d0, 00472a47]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0(CDemonLight * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b5da [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dlight_cpp_0061ef3a
//   TerminatedCString s_CDemonLight_allocMasterZ_0061ef4d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dlight.cpp_getRestoreMemory_FUN_00472950
//   core_event.cpp_FUN_004b1a78
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0(CDemonLight *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->base).zbuffer_raw != (void *)0x0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 0xcd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::allocMasterZBuffer - We already have one!");
  }
  iVar1 = core_dlight_cpp_getRestoreMemory_FUN_00472950
                    (this_ptr->shadow_map_width * this_ptr->shadow_map_height);
  this_ptr->restore_memory_size = iVar1;
  core_event_cpp_FUN_004b1a78();
  return;
}


// Assembly code:
// 004729d0: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0
// 004729d1: PUSH EBP
// 004729d2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004729d6: CMP dword ptr [EBX + 0x164],0x0
// 004729dd: JNZ 0x00472a21
//   XREF to: 00472a21 (CONDITIONAL_JUMP)
// 004729df: MOV EAX,dword ptr [EBX + 0x1cc0]
//   Label: LAB_004729df
// 004729e5: IMUL EAX,dword ptr [EBX + 0x1cc4]
// 004729ec: PUSH EAX
// 004729ed: CALL core_dlight.cpp_getRestoreMemory_FUN_00472950
//   XREF to: 00472950 (UNCONDITIONAL_CALL)
// 004729f2: MOV dword ptr [EBX + 0x2f9c],EAX
// 004729f8: MOV EBP,dword ptr [EBX + 0x1cc4]
// 004729fe: MOV EAX,dword ptr [EBX + 0x1cc0]
// 00472a04: IMUL EAX,EBP
// 00472a07: ADD ESP,0x4
// 00472a0a: ADD EAX,EAX
// 00472a0c: PUSH EAX
// 00472a0d: MOV EDX,dword ptr [EBX + 0x2f94]
// 00472a13: MOV ECX,dword ptr [EBX + 0x2f9c]
// 00472a19: CALL core_event.cpp_FUN_004b1a78
//   XREF to: 004b1a78 (UNCONDITIONAL_CALL)
// 00472a1e: POP EBP
// 00472a1f: POP EBX
// 00472a20: RET
// 00472a21: PUSH ESI
//   Label: LAB_00472a21
// 00472a22: MOV ECX,0x61ef3a
//   XREF to: 0061ef3a (PARAM)
// 00472a27: MOV ESI,0xcd
// 00472a2c: PUSH 0x61ef4d
//   XREF to: 0061ef4d (DATA)
// 00472a31: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00472a37: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00472a3d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00472a42: ADD ESP,0x4
// 00472a45: POP ESI
// 00472a46: JMP 0x004729df
//   XREF to: 004729df (UNCONDITIONAL_JUMP)
