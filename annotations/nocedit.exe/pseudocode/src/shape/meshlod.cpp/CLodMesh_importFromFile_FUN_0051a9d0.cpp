// Name: shape_meshlod.cpp_CLodMesh_importFromFile_FUN_0051a9d0
// Address: 0051a9d0
// Address Range: [[0051a9d0, 0051aa58]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_importFromFile_FUN_0051a9d0(CLodMesh * this_ptr, char * filename)
// Globals:
//   TerminatedCString s_Importing_s_00637ad3
//   TerminatedCString s_shape_meshlod_cpp_00637ae0
//   TerminatedCString s_rt_00637af5
//   TerminatedCString s_shape_meshlod_cpp_00637af8
//   TerminatedCString s_Can_t_open_s_00637b0d
//   TerminatedCString s_shape_meshlod_cpp_00637b1b
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   shape_meshlod.cpp_CLodMesh_parseS3DFile_FUN_0051aa60

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_importFromFile_FUN_0051a9d0(CLodMesh *this_ptr,char *filename)

{
  FILE *file_handle;
  CLodMesh *in_stack_00000010;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing %s");
  file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (filename,(char *)0x0,"rt","..\\shape\\meshlod.cpp",0x1062);
  if (file_handle == (FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1063;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",filename);
  }
  shape_meshlod_cpp_CLodMesh_parseS3DFile_FUN_0051aa60(in_stack_00000010,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\shape\\meshlod.cpp",0x106b);
  return;
}


// Assembly code:
// 0051a9d0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_importFromFile_FUN_0051a9d0
// 0051a9d1: PUSH ESI
// 0051a9d2: PUSH EBP
// 0051a9d3: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0051a9d7: PUSH ESI
// 0051a9d8: PUSH 0x637ad3
//   XREF to: 00637ad3 (DATA)
// 0051a9dd: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0051a9e3: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0051a9e4: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0051a9e9: ADD ESP,0xc
// 0051a9ec: PUSH 0x1062
// 0051a9f1: PUSH 0x637ae0
//   XREF to: 00637ae0 (DATA)
// 0051a9f6: PUSH 0x637af5
//   XREF to: 00637af5 (DATA)
// 0051a9fb: PUSH 0x0
// 0051a9fd: PUSH ESI
// 0051a9fe: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0051aa03: ADD ESP,0x14
// 0051aa06: MOV EBX,EAX
// 0051aa08: TEST EAX,EAX
// 0051aa0a: JZ 0x0051aa31
//   XREF to: 0051aa31 (CONDITIONAL_JUMP)
// 0051aa0c: PUSH EBX
//   Label: LAB_0051aa0c
// 0051aa0d: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051aa11: PUSH EBP
// 0051aa12: CALL shape_meshlod.cpp_CLodMesh_parseS3DFile_FUN_0051aa60
//   XREF to: 0051aa60 (UNCONDITIONAL_CALL)
// 0051aa17: ADD ESP,0x8
// 0051aa1a: PUSH 0x106b
// 0051aa1f: PUSH 0x637b1b
//   XREF to: 00637b1b (DATA)
// 0051aa24: PUSH EBX
// 0051aa25: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0051aa2a: ADD ESP,0xc
// 0051aa2d: POP EBP
// 0051aa2e: POP ESI
// 0051aa2f: POP EBX
// 0051aa30: RET
// 0051aa31: PUSH EDI
//   Label: LAB_0051aa31
// 0051aa32: PUSH ESI
// 0051aa33: MOV ECX,0x637af8
//   XREF to: 00637af8 (DATA)
// 0051aa38: MOV EDI,0x1063
// 0051aa3d: PUSH 0x637b0d
//   XREF to: 00637b0d (DATA)
// 0051aa42: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0051aa48: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0051aa4e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051aa53: ADD ESP,0x8
// 0051aa56: POP EDI
// 0051aa57: JMP 0x0051aa0c
//   XREF to: 0051aa0c (UNCONDITIONAL_JUMP)
