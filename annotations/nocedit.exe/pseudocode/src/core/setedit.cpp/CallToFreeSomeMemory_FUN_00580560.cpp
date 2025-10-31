// Name: core_setedit.cpp_CallToFreeSomeMemory_FUN_00580560
// Address: 00580560
// Address Range: [[00580560, 00580591]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CallToFreeSomeMemory_FUN_00580560(CDemonSet * this_ptr)
// Cross-references:
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 00576db2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057ae0e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057eb5a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setedit_cpp_0064859e
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
//   undefined4 DAT_03659384
// Function calls:
//   crt_memory.c_free_FUN_005fe659

#include "nocturne.h"

void __cdecl core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(CDemonSet *this_ptr)

{
  g_CurrentDebugFilename = "..\\core\\setedit.cpp";
  g_CurrentDebugLine = 0x1036;
  crt_memory_c_free_FUN_005fe659(DAT_03659384);
  DAT_03659384 = (void *)0x0;
  return;
}


// Assembly code:
// 00580560: PUSH EBX
//   Label: core_setedit.cpp_CallToFreeSomeMemory_FUN_00580560
// 00580561: PUSH ESI
// 00580562: MOV EDX,0x64859e
//   XREF to: 0064859e (PARAM)
// 00580567: MOV ECX,0x1036
// 0058056c: MOV EBX,dword ptr [0x03659384]
//   XREF to: 03659384 (READ)
// 00580572: XOR ESI,ESI
// 00580574: PUSH EBX
// 00580575: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 0058057b: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 00580581: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00580586: ADD ESP,0x4
// 00580589: MOV dword ptr [0x03659384],ESI
//   XREF to: 03659384 (WRITE)
// 0058058f: POP ESI
// 00580590: POP EBX
// 00580591: RET
