// Name: core_dmodel.cpp_copyFile_FUN_0047c930
// Address: 0047c930
// Address Range: [[0047c930, 0047ca40]]
// Convention: __cdecl
// Signature: int core_dmodel.cpp_copyFile_FUN_0047c930(char * source_filename, char * destination_filename, int show_error_if_missing)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50 (0047ca50) at 0047cb95 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d975 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_006205bb
//   TerminatedCString s_rb_006205ce
//   TerminatedCString s_Can_t_open_s_006205d1
//   TerminatedCString s_core_dmodel_cpp_006205df
//   TerminatedCString s_wb_006205f2
//   TerminatedCString s_core_dmodel_cpp_006205f5
//   TerminatedCString s_Can_t_create_s_00620608
//   TerminatedCString s_Copying_s_s_00620618
//   TerminatedCString s_core_dmodel_cpp_00620629
//   TerminatedCString s_core_dmodel_cpp_0062063c
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fputc_FUN_006007a0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

int __cdecl
core_dmodel_cpp_copyFile_FUN_0047c930
          (char *source_filename,char *destination_filename,int show_error_if_missing)

{
  FILE *file_ptr;
  FILE *file_ptr_00;
  int character;
  int in_stack_00000010;
  
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (source_filename,(char *)0x0,"rb","..\\core\\dmodel.cpp",0xb7c);
  if (file_ptr != (FILE *)0x0) {
    file_ptr_00 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            (destination_filename,(char *)0x0,"wb",
                             "..\\core\\dmodel.cpp",0xb83);
    if (file_ptr_00 != (FILE *)0x0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Copying %s -> %s");
      while( true ) {
        character = crt_stdio_c_fgetc_FUN_005fe840(file_ptr);
        if (character < 0) break;
        crt_stdio_c_fputc_FUN_006007a0(character,file_ptr_00);
      }
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\dmodel.cpp",0xb92);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr_00,"..\\core\\dmodel.cpp",0xb93);
      return 1;
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\dmodel.cpp",0xb85);
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create %s",destination_filename);
    return 0;
  }
  if (in_stack_00000010 == 0) {
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't open %s",destination_filename);
  return 0;
}


// Assembly code:
// 0047c930: PUSH EBX
//   Label: core_dmodel.cpp_copyFile_FUN_0047c930
// 0047c931: PUSH ESI
// 0047c932: PUSH EDI
// 0047c933: PUSH EBP
// 0047c934: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047c938: PUSH 0xb7c
// 0047c93d: PUSH 0x6205bb
//   XREF to: 006205bb (DATA)
// 0047c942: PUSH 0x6205ce
//   XREF to: 006205ce (DATA)
// 0047c947: PUSH 0x0
// 0047c949: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0047c94d: PUSH EDX
// 0047c94e: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0047c953: MOV EDI,EAX
// 0047c955: ADD ESP,0x14
// 0047c958: MOV ESI,EAX
// 0047c95a: TEST EAX,EAX
// 0047c95c: JNZ 0x0047c98f
//   XREF to: 0047c98f (CONDITIONAL_JUMP)
// 0047c95e: CMP dword ptr [ESP + 0x1c],0x0
//   XREF to: Stack[0xc] (READ)
// 0047c963: JNZ 0x0047c96f
//   XREF to: 0047c96f (CONDITIONAL_JUMP)
// 0047c965: MOV EAX,0x1
// 0047c96a: POP EBP
// 0047c96b: POP EDI
// 0047c96c: POP ESI
// 0047c96d: POP EBX
// 0047c96e: RET
// 0047c96f: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_0047c96f
//   XREF to: Stack[0x4] (READ)
// 0047c973: PUSH EDX
// 0047c974: PUSH 0x6205d1
//   XREF to: 006205d1 (DATA)
// 0047c979: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047c97f: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0047c980: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047c985: ADD ESP,0xc
// 0047c988: XOR EAX,EAX
// 0047c98a: POP EBP
// 0047c98b: POP EDI
// 0047c98c: POP ESI
// 0047c98d: POP EBX
// 0047c98e: RET
// 0047c98f: PUSH 0xb83
//   Label: LAB_0047c98f
// 0047c994: PUSH 0x6205df
//   XREF to: 006205df (DATA)
// 0047c999: PUSH 0x6205f2
//   XREF to: 006205f2 (DATA)
// 0047c99e: PUSH 0x0
// 0047c9a0: PUSH EBP
// 0047c9a1: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0047c9a6: ADD ESP,0x14
// 0047c9a9: MOV EBX,EAX
// 0047c9ab: TEST EAX,EAX
// 0047c9ad: JZ 0x0047c9e2
//   XREF to: 0047c9e2 (CONDITIONAL_JUMP)
// 0047c9af: PUSH EBP
// 0047c9b0: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0047c9b4: PUSH ECX
// 0047c9b5: PUSH 0x620618
//   XREF to: 00620618 (DATA)
// 0047c9ba: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047c9c0: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0047c9c1: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0047c9c6: ADD ESP,0x10
// 0047c9c9: PUSH ESI
//   Label: LAB_0047c9c9
// 0047c9ca: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0047c9cf: ADD ESP,0x4
// 0047c9d2: TEST EAX,EAX
// 0047c9d4: JL 0x0047ca11
//   XREF to: 0047ca11 (CONDITIONAL_JUMP)
// 0047c9d6: PUSH EBX
// 0047c9d7: PUSH EAX
// 0047c9d8: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 0047c9dd: ADD ESP,0x8
// 0047c9e0: JMP 0x0047c9c9
//   XREF to: 0047c9c9 (UNCONDITIONAL_JUMP)
// 0047c9e2: PUSH 0xb85
//   Label: LAB_0047c9e2
// 0047c9e7: PUSH 0x6205f5
//   XREF to: 006205f5 (DATA)
// 0047c9ec: PUSH EDI
// 0047c9ed: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0047c9f2: ADD ESP,0xc
// 0047c9f5: PUSH EBP
// 0047c9f6: PUSH 0x620608
//   XREF to: 00620608 (DATA)
// 0047c9fb: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047ca01: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 0047ca02: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047ca07: ADD ESP,0xc
// 0047ca0a: XOR EAX,EAX
// 0047ca0c: POP EBP
// 0047ca0d: POP EDI
// 0047ca0e: POP ESI
// 0047ca0f: POP EBX
// 0047ca10: RET
// 0047ca11: PUSH 0xb92
//   Label: LAB_0047ca11
// 0047ca16: PUSH 0x620629
//   XREF to: 00620629 (DATA)
// 0047ca1b: PUSH ESI
// 0047ca1c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0047ca21: ADD ESP,0xc
// 0047ca24: PUSH 0xb93
// 0047ca29: PUSH 0x62063c
//   XREF to: 0062063c (DATA)
// 0047ca2e: PUSH EBX
// 0047ca2f: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0047ca34: MOV EAX,0x1
// 0047ca39: ADD ESP,0xc
// 0047ca3c: POP EBP
// 0047ca3d: POP EDI
// 0047ca3e: POP ESI
// 0047ca3f: POP EBX
// 0047ca40: RET
