// Name: engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0
// Address: 004b7ac0
// Address Range: [[004b7ac0, 004b7c0f]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0(CFileManager * this_ptr)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be43a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_response_filename_00627fb1
//   TerminatedCString s_engine_fileio_cpp_00627fc9
//   TerminatedCString s_rt_00627fde
//   TerminatedCString s_Unable_to_open_response__00627fe1
//   TerminatedCString s_engine_fileio_cpp_00627fff
//   TerminatedCString s_engine_fileio_cpp_00628014
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fputc_FUN_006007a0
//   engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0(CFileManager *this_ptr)

{
  int *piVar1;
  FILE *pFVar2;
  byte *pbVar3;
  int iVar4;
  FILE *file;
  uint character;
  BADSPACEBASE *in_ESP;
  
  iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Enter response filename",&stack0xffffffa4,0x14,0);
  if (iVar4 == 0) {
    return;
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (&stack0xffffffa8,(char *)0x0,"rt","..\\engine\\fileio.cpp",0xa67);
  if (file != (FILE *)0x0) {
    engine_fileio_cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(this_ptr);
    while( true ) {
      if ((file->_cnt < 1) || ((byte)*file->_ptr - 0xd < 0xfe)) {
        character = crt_stdio_c_fgetc_FUN_005fe840(file);
      }
      else {
        pbVar3 = (byte *)file->_ptr;
        file->_cnt = file->_cnt + -1;
        file->_ptr = (char *)(pbVar3 + 1);
        character = (uint)*pbVar3;
      }
      if (character == 0xffffffff) break;
      pFVar2 = this_ptr->file_ptr;
      if (((pFVar2->_flag & 0x400) == 0) && (1 < pFVar2->_bufsize - pFVar2->_cnt)) {
        *pFVar2->_ptr = (char)character;
        if (*pFVar2->_ptr == '\n') {
          crt_stdio_c_fputc_FUN_006007a0(10,this_ptr->file_ptr);
        }
        else {
          pbVar3 = (byte *)((int)&this_ptr->file_ptr->_flag + 1);
          *pbVar3 = *pbVar3 | 0x10;
          piVar1 = &this_ptr->file_ptr->_cnt;
          *piVar1 = *piVar1 + 1;
          this_ptr->file_ptr->_ptr = this_ptr->file_ptr->_ptr + 1;
        }
      }
      else {
        crt_stdio_c_fputc_FUN_006007a0(character,this_ptr->file_ptr);
      }
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(this_ptr->file_ptr,"..\\engine\\fileio.cpp",0xa79);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0xa7a);
    engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50(this_ptr,(char *)0x0,(char *)0x0);
    return;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Unable to open response file!");
  return;
}


// Assembly code:
// 004b7ac0: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0
// 004b7ac1: PUSH ESI
// 004b7ac2: PUSH EBP
// 004b7ac3: SUB ESP,0x50
// 004b7ac6: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 004b7aca: PUSH 0x0
// 004b7acc: PUSH 0x14
// 004b7ace: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x5c] (DATA)
// 004b7ad2: PUSH EAX
// 004b7ad3: PUSH 0x627fb1
//   XREF to: 00627fb1 (DATA)
// 004b7ad8: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b7ade: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b7adf: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004b7ae4: ADD ESP,0x14
// 004b7ae7: TEST EAX,EAX
// 004b7ae9: JNZ 0x004b7af2
//   XREF to: 004b7af2 (CONDITIONAL_JUMP)
// 004b7aeb: ADD ESP,0x50
// 004b7aee: POP EBP
// 004b7aef: POP ESI
// 004b7af0: POP EBX
// 004b7af1: RET
// 004b7af2: PUSH 0xa67
//   Label: LAB_004b7af2
// 004b7af7: PUSH 0x627fc9
//   XREF to: 00627fc9 (DATA)
// 004b7afc: PUSH 0x627fde
//   XREF to: 00627fde (DATA)
// 004b7b01: PUSH 0x0
// 004b7b03: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x5c] (DATA)
// 004b7b07: PUSH EAX
// 004b7b08: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b7b0d: ADD ESP,0x14
// 004b7b10: MOV EBX,EAX
// 004b7b12: TEST EAX,EAX
// 004b7b14: JZ 0x004b7b64
//   XREF to: 004b7b64 (CONDITIONAL_JUMP)
// 004b7b16: PUSH EDI
// 004b7b17: PUSH ESI
// 004b7b18: CALL engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10
//   XREF to: 004b7c10 (UNCONDITIONAL_CALL)
// 004b7b1d: ADD ESP,0x4
// 004b7b20: MOV EDI,dword ptr [EBX + 0x4]
//   Label: LAB_004b7b20
// 004b7b23: TEST EDI,EDI
// 004b7b25: JLE 0x004b7b3a
//   XREF to: 004b7b3a (CONDITIONAL_JUMP)
// 004b7b27: MOV EAX,dword ptr [EBX]
// 004b7b29: MOV AL,byte ptr [EAX]
// 004b7b2b: AND EAX,0xff
// 004b7b30: SUB EAX,0xd
// 004b7b33: CMP EAX,0xfd
// 004b7b38: JA 0x004b7b7f
//   XREF to: 004b7b7f (CONDITIONAL_JUMP)
// 004b7b3a: PUSH EBX
//   Label: LAB_004b7b3a
// 004b7b3b: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004b7b40: ADD ESP,0x4
// 004b7b43: MOV ECX,EAX
//   Label: LAB_004b7b43
// 004b7b45: CMP EAX,-0x1
// 004b7b48: JZ 0x004b7bd3
//   XREF to: 004b7bd3 (CONDITIONAL_JUMP)
// 004b7b4e: MOV EAX,dword ptr [ESI]
// 004b7b50: TEST byte ptr [EAX + 0xd],0x4
// 004b7b54: JZ 0x004b7b95
//   XREF to: 004b7b95 (CONDITIONAL_JUMP)
// 004b7b56: MOV EDI,dword ptr [ESI]
//   Label: LAB_004b7b56
// 004b7b58: PUSH EDI
// 004b7b59: PUSH ECX
// 004b7b5a: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 004b7b5f: ADD ESP,0x8
// 004b7b62: JMP 0x004b7b20
//   XREF to: 004b7b20 (UNCONDITIONAL_JUMP)
// 004b7b64: PUSH 0x627fe1
//   Label: LAB_004b7b64
//   XREF to: 00627fe1 (DATA)
// 004b7b69: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b7b6f: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b7b70: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b7b75: ADD ESP,0x8
// 004b7b78: ADD ESP,0x50
// 004b7b7b: POP EBP
// 004b7b7c: POP ESI
// 004b7b7d: POP EBX
// 004b7b7e: RET
// 004b7b7f: MOV EAX,dword ptr [EBX]
//   Label: LAB_004b7b7f
// 004b7b81: LEA EBP,[EDI + -0x1]
// 004b7b84: LEA EDX,[EAX + 0x1]
// 004b7b87: MOV dword ptr [EBX + 0x4],EBP
// 004b7b8a: MOV dword ptr [EBX],EDX
// 004b7b8c: MOV AL,byte ptr [EAX]
// 004b7b8e: AND EAX,0xff
// 004b7b93: JMP 0x004b7b43
//   XREF to: 004b7b43 (UNCONDITIONAL_JUMP)
// 004b7b95: MOV EDI,dword ptr [EAX + 0x4]
//   Label: LAB_004b7b95
// 004b7b98: MOV EDX,dword ptr [EAX + 0x14]
// 004b7b9b: SUB EDX,EDI
// 004b7b9d: CMP EDX,0x1
// 004b7ba0: JBE 0x004b7b56
//   XREF to: 004b7b56 (CONDITIONAL_JUMP)
// 004b7ba2: MOV EDX,dword ptr [EAX]
// 004b7ba4: MOV byte ptr [EDX],CL
// 004b7ba6: MOV EAX,dword ptr [EAX]
// 004b7ba8: CMP byte ptr [EAX],0xa
// 004b7bab: JNZ 0x004b7bbf
//   XREF to: 004b7bbf (CONDITIONAL_JUMP)
// 004b7bad: MOV ECX,dword ptr [ESI]
// 004b7baf: PUSH ECX
// 004b7bb0: PUSH 0xa
// 004b7bb2: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 004b7bb7: ADD ESP,0x8
// 004b7bba: JMP 0x004b7b20
//   XREF to: 004b7b20 (UNCONDITIONAL_JUMP)
// 004b7bbf: MOV EAX,dword ptr [ESI]
//   Label: LAB_004b7bbf
// 004b7bc1: OR byte ptr [EAX + 0xd],0x10
// 004b7bc5: MOV EAX,dword ptr [ESI]
// 004b7bc7: INC dword ptr [EAX + 0x4]
// 004b7bca: MOV EAX,dword ptr [ESI]
// 004b7bcc: INC dword ptr [EAX]
// 004b7bce: JMP 0x004b7b20
//   XREF to: 004b7b20 (UNCONDITIONAL_JUMP)
// 004b7bd3: PUSH 0xa79
//   Label: LAB_004b7bd3
// 004b7bd8: PUSH 0x627fff
//   XREF to: 00627fff (DATA)
// 004b7bdd: MOV EAX,dword ptr [ESI]
// 004b7bdf: PUSH EAX
// 004b7be0: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b7be5: ADD ESP,0xc
// 004b7be8: PUSH 0xa7a
// 004b7bed: PUSH 0x628014
//   XREF to: 00628014 (DATA)
// 004b7bf2: PUSH EBX
// 004b7bf3: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b7bf8: ADD ESP,0xc
// 004b7bfb: PUSH 0x0
// 004b7bfd: PUSH 0x0
// 004b7bff: PUSH ESI
// 004b7c00: CALL engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50
//   XREF to: 004b5a50 (UNCONDITIONAL_CALL)
// 004b7c05: ADD ESP,0xc
// 004b7c08: POP EDI
// 004b7c09: ADD ESP,0x50
// 004b7c0c: POP EBP
// 004b7c0d: POP ESI
// 004b7c0e: POP EBX
// 004b7c0f: RET
