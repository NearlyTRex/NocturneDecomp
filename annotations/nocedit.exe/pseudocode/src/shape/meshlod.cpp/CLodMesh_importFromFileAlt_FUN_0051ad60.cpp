// Name: shape_meshlod.cpp_CLodMesh_importFromFileAlt_FUN_0051ad60
// Address: 0051ad60
// Address Range: [[0051ad60, 0051ade8]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_importFromFileAlt_FUN_0051ad60(CLodMesh * this_ptr, char * filename)
// Globals:
//   TerminatedCString s_Importing_s_00637c09
//   TerminatedCString s_shape_meshlod_cpp_00637c16
//   TerminatedCString s_rt_00637c2b
//   TerminatedCString s_shape_meshlod_cpp_00637c2e
//   TerminatedCString s_Can_t_open_s_00637c43
//   TerminatedCString s_shape_meshlod_cpp_00637c51
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_importFromFileAlt_FUN_0051ad60(CLodMesh *this_ptr,char *filename)

{
  FILE *file_handle;
  CLodMesh *in_stack_00000010;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing %s");
  file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (filename,(char *)0x0,"rt","..\\shape\\meshlod.cpp",0x10ce);
  if (file_handle == (FILE *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x10cf;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",filename);
  }
  shape_meshlod_cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0(in_stack_00000010,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\shape\\meshlod.cpp",0x10d7);
  return;
}


// Assembly code:
// 0051ad60: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_importFromFileAlt_FUN_0051ad60
// 0051ad61: PUSH ESI
// 0051ad62: PUSH EBP
// 0051ad63: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0051ad67: PUSH ESI
// 0051ad68: PUSH 0x637c09
//   XREF to: 00637c09 (DATA)
// 0051ad6d: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0051ad73: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0051ad74: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0051ad79: ADD ESP,0xc
// 0051ad7c: PUSH 0x10ce
// 0051ad81: PUSH 0x637c16
//   XREF to: 00637c16 (DATA)
// 0051ad86: PUSH 0x637c2b
//   XREF to: 00637c2b (DATA)
// 0051ad8b: PUSH 0x0
// 0051ad8d: PUSH ESI
// 0051ad8e: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0051ad93: ADD ESP,0x14
// 0051ad96: MOV EBX,EAX
// 0051ad98: TEST EAX,EAX
// 0051ad9a: JZ 0x0051adc1
//   XREF to: 0051adc1 (CONDITIONAL_JUMP)
// 0051ad9c: PUSH EBX
//   Label: LAB_0051ad9c
// 0051ad9d: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051ada1: PUSH EBP
// 0051ada2: CALL shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0
//   XREF to: 0051adf0 (UNCONDITIONAL_CALL)
// 0051ada7: ADD ESP,0x8
// 0051adaa: PUSH 0x10d7
// 0051adaf: PUSH 0x637c51
//   XREF to: 00637c51 (DATA)
// 0051adb4: PUSH EBX
// 0051adb5: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0051adba: ADD ESP,0xc
// 0051adbd: POP EBP
// 0051adbe: POP ESI
// 0051adbf: POP EBX
// 0051adc0: RET
// 0051adc1: PUSH EDI
//   Label: LAB_0051adc1
// 0051adc2: PUSH ESI
// 0051adc3: MOV ECX,0x637c2e
//   XREF to: 00637c2e (DATA)
// 0051adc8: MOV EDI,0x10cf
// 0051adcd: PUSH 0x637c43
//   XREF to: 00637c43 (DATA)
// 0051add2: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0051add8: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0051adde: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051ade3: ADD ESP,0x8
// 0051ade6: POP EDI
// 0051ade7: JMP 0x0051ad9c
//   XREF to: 0051ad9c (UNCONDITIONAL_JUMP)
