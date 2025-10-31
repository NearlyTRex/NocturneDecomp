// Name: shape_meshlod.cpp_FUN_0051c070
// Address: 0051c070
// Address Range: [[0051c070, 0051c0f8]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051c070()
// Globals:
//   undefined4 s_Exporting_%s_00637e25
//   TerminatedCString s_shape_meshlod_cpp_00637e32
//   TerminatedCString s_wt_00637e47
//   TerminatedCString s_shape_meshlod_cpp_00637e4a
//   TerminatedCString s_Can_t_create_s_00637e5f
//   TerminatedCString s_shape_meshlod_cpp_00637e6f
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   shape_meshlod.cpp_FUN_0051c100

#include "nocturne.h"

void shape_meshlod_cpp_FUN_0051c070(void)

{
  FILE *file_ptr;
  char *in_stack_00000008;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"p@Exporting %s" + 2);
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (in_stack_00000008,(char *)0x0,"wt","..\\shape\\meshlod.cpp",
                        0x133e);
  if (file_ptr == (FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x133f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s",in_stack_00000008);
  }
  shape_meshlod_cpp_FUN_0051c100();
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\shape\\meshlod.cpp",0x1347);
  return;
}


// Assembly code:
// 0051c070: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051c070
// 0051c071: PUSH ESI
// 0051c072: PUSH EBP
// 0051c073: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0051c077: PUSH ESI
// 0051c078: PUSH 0x637e25
//   XREF to: 00637e25 (DATA)
// 0051c07d: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0051c083: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0051c084: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0051c089: ADD ESP,0xc
// 0051c08c: PUSH 0x133e
// 0051c091: PUSH 0x637e32
//   XREF to: 00637e32 (DATA)
// 0051c096: PUSH 0x637e47
//   XREF to: 00637e47 (DATA)
// 0051c09b: PUSH 0x0
// 0051c09d: PUSH ESI
// 0051c09e: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0051c0a3: ADD ESP,0x14
// 0051c0a6: MOV EBX,EAX
// 0051c0a8: TEST EAX,EAX
// 0051c0aa: JZ 0x0051c0d1
//   XREF to: 0051c0d1 (CONDITIONAL_JUMP)
// 0051c0ac: PUSH EBX
//   Label: LAB_0051c0ac
// 0051c0ad: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051c0b1: PUSH EBP
// 0051c0b2: CALL shape_meshlod.cpp_FUN_0051c100
//   XREF to: 0051c100 (UNCONDITIONAL_CALL)
// 0051c0b7: ADD ESP,0x8
// 0051c0ba: PUSH 0x1347
// 0051c0bf: PUSH 0x637e6f
//   XREF to: 00637e6f (DATA)
// 0051c0c4: PUSH EBX
// 0051c0c5: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0051c0ca: ADD ESP,0xc
// 0051c0cd: POP EBP
// 0051c0ce: POP ESI
// 0051c0cf: POP EBX
// 0051c0d0: RET
// 0051c0d1: PUSH EDI
//   Label: LAB_0051c0d1
// 0051c0d2: PUSH ESI
// 0051c0d3: MOV ECX,0x637e4a
//   XREF to: 00637e4a (DATA)
// 0051c0d8: MOV EDI,0x133f
// 0051c0dd: PUSH 0x637e5f
//   XREF to: 00637e5f (DATA)
// 0051c0e2: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0051c0e8: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0051c0ee: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051c0f3: ADD ESP,0x8
// 0051c0f6: POP EDI
// 0051c0f7: JMP 0x0051c0ac
//   XREF to: 0051c0ac (UNCONDITIONAL_JUMP)
