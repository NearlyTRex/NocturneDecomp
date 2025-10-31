// Name: engine_fileio.cpp_copyFileTimestamp_FUN_004b31e0
// Address: 004b31e0
// Address Range: [[004b31e0, 004b321b]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_copyFileTimestamp_FUN_004b31e0(char * source_file, char * dest_file)
// Globals:
//   TerminatedCString s_WARNING_Error_setting_da_00626577
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   engine_dosio.c_copyFileTimestamp_FUN_00481910
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740

#include "nocturne.h"

int __cdecl engine_fileio_cpp_copyFileTimestamp_FUN_004b31e0(char *source_file,char *dest_file)

{
  int iVar1;
  
  iVar1 = engine_dosio_c_copyFileTimestamp_FUN_00481910(source_file,dest_file);
  if (iVar1 != 0) {
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"WARNING: Error setting date/time on %s.\n(Most likely reason: Tried to set the file time to a time\nnewer than the current system time on your computer)",dest_file);
  return 0;
}


// Assembly code:
// 004b31e0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: engine_fileio.cpp_copyFileTimestamp_FUN_004b31e0
//   XREF to: Stack[0x8] (READ)
// 004b31e4: PUSH EDX
// 004b31e5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004b31e9: PUSH ECX
// 004b31ea: CALL engine_dosio.c_copyFileTimestamp_FUN_00481910
//   XREF to: 00481910 (UNCONDITIONAL_CALL)
// 004b31ef: ADD ESP,0x8
// 004b31f2: TEST EAX,EAX
// 004b31f4: JZ 0x004b31fc
//   XREF to: 004b31fc (CONDITIONAL_JUMP)
// 004b31f6: MOV EAX,0x1
// 004b31fb: RET
// 004b31fc: PUSH ESI
//   Label: LAB_004b31fc
// 004b31fd: PUSH EBX
// 004b31fe: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004b3202: PUSH EBX
// 004b3203: PUSH 0x626577
//   XREF to: 00626577 (DATA)
// 004b3208: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b320e: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004b320f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b3214: ADD ESP,0xc
// 004b3217: XOR EAX,EAX
// 004b3219: POP EBX
// 004b321a: POP ESI
// 004b321b: RET
