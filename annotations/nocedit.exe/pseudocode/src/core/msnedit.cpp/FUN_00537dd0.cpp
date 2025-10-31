// Name: core_msnedit.cpp_FUN_00537dd0
// Address: 00537dd0
// Address Range: [[00537dd0, 00537f55]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00537dd0()
// Globals:
//   TerminatedCString s_Can_t_find_s_s_to_copy_t_0063bc4b
//   TerminatedCString s_rb_0063bc6d
//   TerminatedCString s_core_msnedit_cpp_0063bc70
//   TerminatedCString s_Can_t_open_world_s_0063bc84
//   TerminatedCString s_wb_0063bc98
//   TerminatedCString s_core_msnedit_cpp_0063bc9b
//   TerminatedCString s_Can_t_create_world_s_0063bcaf
//   TerminatedCString s_core_msnedit_cpp_0063bcc5
//   TerminatedCString s_Error_reading_world_s_0063bcd9
//   TerminatedCString s_core_msnedit_cpp_0063bcf0
//   TerminatedCString s_Error_writing_world_s_0063bd04
//   TerminatedCString s_core_msnedit_cpp_0063bd1b
//   TerminatedCString s_core_msnedit_cpp_0063bd2f
//   TerminatedCString s_Copied_s_s_to_s_s_0063bd43
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fputc_FUN_006007a0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void core_msnedit_cpp_FUN_00537dd0(void)

{
  int iVar1;
  FILE *file_ptr;
  FILE *file_ptr_00;
  int character;
  FILE *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000014;
  undefined4 in_stack_00000018;
  
  iVar1 = engine_dosio_c_getFileSize_FUN_00481880(in_stack_0000000c,(char *)in_stack_00000004);
  if (-1 < iVar1) {
    file_ptr = engine_dosio_c_getFile_FUN_00481a50
                         (in_stack_0000000c,in_stack_00000008,"rb");
    if (file_ptr == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2eb;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open world\\%s",in_stack_0000000c);
    }
    file_ptr_00 = engine_dosio_c_getFile_FUN_00481a50
                            (in_stack_0000000c,in_stack_00000014,"wb");
    if (file_ptr_00 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2ed;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Can't create world\\%s",in_stack_00000018);
    }
    for (; 0 < iVar1; iVar1 = iVar1 + -1) {
      character = crt_stdio_c_fgetc_FUN_005fe840(file_ptr);
      crt_stdio_c_fputc_FUN_006007a0(character,in_stack_00000004);
    }
    if ((file_ptr->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f2;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading world\\%s");
    }
    if ((file_ptr_00->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing world\\%s");
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\msnedit.cpp",0x2f4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr_00,"..\\core\\msnedit.cpp",0x2f5);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Copied %s\\%s to %s\\%s",in_stack_0000000c);
    return;
  }
  shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
            (g_CEditorToolsPtr,"Can't find %s\\%s to copy to %s\\%s",in_stack_0000000c,
             in_stack_00000008,in_stack_0000000c,in_stack_0000000c);
  return;
}


// Assembly code:
// 00537dd0: PUSH EBX
//   Label: core_msnedit.cpp_FUN_00537dd0
// 00537dd1: PUSH ESI
// 00537dd2: PUSH EDI
// 00537dd3: PUSH EBP
// 00537dd4: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00537dd8: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00537ddc: PUSH EDX
// 00537ddd: PUSH EBP
// 00537dde: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 00537de3: ADD ESP,0x8
// 00537de6: MOV EBX,EAX
// 00537de8: TEST EAX,EAX
// 00537dea: JL 0x00537e63
//   XREF to: 00537e63 (CONDITIONAL_JUMP)
// 00537df0: PUSH 0x63bc6d
//   XREF to: 0063bc6d (DATA)
// 00537df5: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00537df9: PUSH ECX
// 00537dfa: PUSH EBP
// 00537dfb: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00537e00: ADD ESP,0xc
// 00537e03: MOV ESI,EAX
// 00537e05: TEST EAX,EAX
// 00537e07: JNZ 0x00537e30
//   XREF to: 00537e30 (CONDITIONAL_JUMP)
// 00537e09: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00537e0d: PUSH EDX
// 00537e0e: MOV EDI,0x63bc70
//   XREF to: 0063bc70 (DATA)
// 00537e13: MOV EAX,0x2eb
// 00537e18: PUSH 0x63bc84
//   XREF to: 0063bc84 (DATA)
// 00537e1d: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00537e23: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00537e28: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00537e2d: ADD ESP,0x8
// 00537e30: PUSH 0x63bc98
//   Label: LAB_00537e30
//   XREF to: 0063bc98 (DATA)
// 00537e35: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00537e39: PUSH ECX
// 00537e3a: PUSH EBP
// 00537e3b: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00537e40: ADD ESP,0xc
// 00537e43: MOV EDI,EAX
// 00537e45: TEST EAX,EAX
// 00537e47: JZ 0x00537e88
//   XREF to: 00537e88 (CONDITIONAL_JUMP)
// 00537e49: TEST EBX,EBX
//   Label: LAB_00537e49
// 00537e4b: JLE 0x00537eb1
//   XREF to: 00537eb1 (CONDITIONAL_JUMP)
// 00537e4d: PUSH EDI
// 00537e4e: PUSH ESI
// 00537e4f: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00537e54: ADD ESP,0x4
// 00537e57: PUSH EAX
// 00537e58: DEC EBX
// 00537e59: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 00537e5e: ADD ESP,0x8
// 00537e61: JMP 0x00537e49
//   XREF to: 00537e49 (UNCONDITIONAL_JUMP)
// 00537e63: MOV EBX,dword ptr [ESP + 0x18]
//   Label: LAB_00537e63
//   XREF to: Stack[0x8] (READ)
// 00537e67: PUSH EBX
// 00537e68: PUSH EBP
// 00537e69: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00537e6d: PUSH ESI
// 00537e6e: PUSH EBP
// 00537e6f: PUSH 0x63bc4b
//   XREF to: 0063bc4b (DATA)
// 00537e74: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00537e7a: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00537e7b: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 00537e80: ADD ESP,0x18
// 00537e83: POP EBP
// 00537e84: POP EDI
// 00537e85: POP ESI
// 00537e86: POP EBX
// 00537e87: RET
// 00537e88: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_00537e88
//   XREF to: Stack[0x8] (READ)
// 00537e8c: PUSH ECX
// 00537e8d: MOV EAX,0x63bc9b
//   XREF to: 0063bc9b (DATA)
// 00537e92: MOV EDX,0x2ed
// 00537e97: PUSH 0x63bcaf
//   XREF to: 0063bcaf (DATA)
// 00537e9c: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00537ea1: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00537ea7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00537eac: ADD ESP,0x8
// 00537eaf: JMP 0x00537e49
//   XREF to: 00537e49 (UNCONDITIONAL_JUMP)
// 00537eb1: TEST byte ptr [ESI + 0xc],0x20
//   Label: LAB_00537eb1
// 00537eb5: JZ 0x00537ede
//   XREF to: 00537ede (CONDITIONAL_JUMP)
// 00537eb7: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00537ebb: PUSH ECX
// 00537ebc: MOV EAX,0x63bcc5
//   XREF to: 0063bcc5 (DATA)
// 00537ec1: MOV EDX,0x2f2
// 00537ec6: PUSH 0x63bcd9
//   XREF to: 0063bcd9 (DATA)
// 00537ecb: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00537ed0: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00537ed6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00537edb: ADD ESP,0x8
// 00537ede: TEST byte ptr [EDI + 0xc],0x20
//   Label: LAB_00537ede
// 00537ee2: JZ 0x00537f0b
//   XREF to: 00537f0b (CONDITIONAL_JUMP)
// 00537ee4: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00537ee8: PUSH EDX
// 00537ee9: MOV EBX,0x63bcf0
//   XREF to: 0063bcf0 (DATA)
// 00537eee: MOV EAX,0x2f3
// 00537ef3: PUSH 0x63bd04
//   XREF to: 0063bd04 (DATA)
// 00537ef8: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00537efe: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00537f03: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00537f08: ADD ESP,0x8
// 00537f0b: PUSH 0x2f4
//   Label: LAB_00537f0b
// 00537f10: PUSH 0x63bd1b
//   XREF to: 0063bd1b (DATA)
// 00537f15: PUSH ESI
// 00537f16: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00537f1b: ADD ESP,0xc
// 00537f1e: PUSH 0x2f5
// 00537f23: PUSH 0x63bd2f
//   XREF to: 0063bd2f (DATA)
// 00537f28: PUSH EDI
// 00537f29: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00537f2e: ADD ESP,0xc
// 00537f31: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00537f35: PUSH ECX
// 00537f36: PUSH EBP
// 00537f37: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00537f3b: PUSH EBX
// 00537f3c: PUSH EBP
// 00537f3d: PUSH 0x63bd43
//   XREF to: 0063bd43 (DATA)
// 00537f42: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00537f48: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00537f49: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 00537f4e: ADD ESP,0x18
// 00537f51: POP EBP
// 00537f52: POP EDI
// 00537f53: POP ESI
// 00537f54: POP EBX
// 00537f55: RET
