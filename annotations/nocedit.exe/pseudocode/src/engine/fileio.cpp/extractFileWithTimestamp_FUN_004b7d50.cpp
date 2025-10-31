// Name: engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50
// Address: 004b7d50
// Address Range: [[004b7d50, 004b7f42]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50(FILE * source_file, char * dest_filename, char * name_or_offset, int file_size, int file_offset, int checksum, int timestamp)
// Cross-references:
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b7993 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b72d9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_WARNING_Error_setting_da_00626577
//   TerminatedCString s_engine_fileio_cpp_00628112
//   TerminatedCString s_wb_00628127
//   TerminatedCString s_engine_fileio_cpp_0062812a
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_file.c_create_directory_FUN_00600e10
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fputc_FUN_006007a0
//   crt_stdio.c_fseek_FUN_005ffacc
//   engine_dosio.c_copyFileTimestamp_FUN_00481910
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_extractFileWithTimestamp_FUN_004b7d50
          (FILE *source_file,char *dest_filename,char *name_or_offset,int file_size,int file_offset,
          int checksum,int timestamp)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  FILE *file_ptr;
  uint uVar5;
  byte *pbVar6;
  BADSPACEBASE *in_ESP;
  uint uVar7;
  char *pcVar8;
  FILE *pFVar9;
  byte bVar10;
  int iVar4;
  
  bVar10 = 0;
  bVar1 = *name_or_offset;
  uVar5 = 0;
  pbVar6 = (byte *)name_or_offset;
  while (uVar7 = uVar5, bVar1 != 0x5c) {
    uVar7 = uVar5 + 1;
    iVar3 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar6);
    (&stack0xfffffeec)[uVar5] = (char)iVar3;
    pbVar6 = pbVar6 + 1;
    uVar5 = 0xffffffff;
    pcVar8 = name_or_offset;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar10 * -2 + 1;
    } while (cVar2 != '\0');
    if (~uVar5 - 1 < uVar7) break;
    uVar5 = uVar7;
    bVar1 = *pbVar6;
  }
  (&stack0xfffffeec)[uVar7] = 0;
  crt_stdio_c_fseek_FUN_005ffacc((FILE *)dest_filename,file_offset,0);
  crt_file_c_create_directory_FUN_00600e10(&stack0xfffffeec);
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (name_or_offset,(char *)0x0,"wb","..\\engine\\fileio.cpp",0xae4)
  ;
  pFVar9 = file_ptr;
  if (file_ptr != (FILE *)0x0) {
    iVar3 = 0;
    if (0 < file_size) {
      do {
        pFVar9 = file_ptr;
        if (((file_ptr->_flag & 0x400) == 0) && (1 < file_ptr->_bufsize - file_ptr->_cnt)) {
          if ((*(int *)(dest_filename + 4) < 1) || (**(byte **)dest_filename - 0xd < 0xfe)) {
            iVar4 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)dest_filename);
            cVar2 = (char)iVar4;
          }
          else {
            *(int *)(dest_filename + 4) = *(int *)(dest_filename + 4) + -1;
            pcVar8 = *(char **)dest_filename;
            *(char **)dest_filename = pcVar8 + 1;
            cVar2 = *pcVar8;
          }
          *file_ptr->_ptr = cVar2;
          if (*file_ptr->_ptr == '\n') {
            uVar5 = 10;
            goto LAB_004b7e34;
          }
          iVar4 = file_ptr->_cnt;
          *(byte *)((int)&file_ptr->_flag + 1) = *(byte *)((int)&file_ptr->_flag + 1) | 0x10;
          file_ptr->_cnt = iVar4 + 1;
          file_ptr->_ptr = file_ptr->_ptr + 1;
        }
        else {
          if ((*(int *)(dest_filename + 4) < 1) || (**(byte **)dest_filename - 0xd < 0xfe)) {
            uVar5 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)dest_filename);
          }
          else {
            pbVar6 = *(byte **)dest_filename;
            *(byte **)dest_filename = pbVar6 + 1;
            *(int *)(dest_filename + 4) = *(int *)(dest_filename + 4) + -1;
            uVar5 = (uint)*pbVar6;
          }
LAB_004b7e34:
          crt_stdio_c_fputc_FUN_006007a0(uVar5,pFVar9);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < file_size);
    }
    pFVar9 = (FILE *)(uint)((dest_filename[0xc] & 0x20U) == 0);
    if ((file_ptr->_flag & 0x20) != 0) {
      pFVar9 = (FILE *)0x0;
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\engine\\fileio.cpp",0xaf5);
    iVar3 = engine_dosio_c_copyFileTimestamp_FUN_00481910(name_or_offset,(char *)checksum);
    if (iVar3 == 0) {
      pFVar9 = (FILE *)0x0;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"WARNING: Error setting date/time on %s.\n(Most likely reason: Tried to set the file time to a time\nnewer than the current system time on your computer)");
    }
  }
  return (int)pFVar9;
}


// Assembly code:
// 004b7d50: PUSH EBX
//   Label: engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50
// 004b7d51: PUSH ESI
// 004b7d52: PUSH EDI
// 004b7d53: PUSH EBP
// 004b7d54: MOV EBP,ESP
// 004b7d56: SUB ESP,0x104
// 004b7d5c: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b7d5f: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004b7d62: XOR ESI,ESI
// 004b7d64: MOV DL,byte ptr [EAX]
// 004b7d66: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004b7d69: CMP DL,0x5c
// 004b7d6c: JZ 0x004b7daa
//   XREF to: 004b7daa (CONDITIONAL_JUMP)
// 004b7d6e: MOV ECX,dword ptr [EBP + -0x4]
//   Label: LAB_004b7d6e
//   XREF to: Stack[-0x14] (READ)
// 004b7d71: XOR EAX,EAX
// 004b7d73: MOV AL,byte ptr [ECX]
// 004b7d75: PUSH EAX
// 004b7d76: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004b7d79: INC ESI
// 004b7d7a: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004b7d7f: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004b7d82: ADD ESP,0x4
// 004b7d85: MOV byte ptr [ESI + EBP*0x1 + 0xfffffefb],AL
// 004b7d8c: INC EDX
// 004b7d8d: SUB ECX,ECX
// 004b7d8f: DEC ECX
// 004b7d90: XOR EAX,EAX
// 004b7d92: SCASB.REPNE ES:EDI
// 004b7d94: NOT ECX
// 004b7d96: DEC ECX
// 004b7d97: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004b7d9a: CMP ESI,ECX
// 004b7d9c: JBE 0x004b7ea1
//   XREF to: 004b7ea1 (CONDITIONAL_JUMP)
// 004b7da2: XOR CL,CL
// 004b7da4: MOV byte ptr [EBP + 0xfffffefc],CL
//   XREF to: Stack[-0x114] (WRITE)
// 004b7daa: XOR CH,CH
//   Label: LAB_004b7daa
// 004b7dac: PUSH 0x0
// 004b7dae: MOV byte ptr [ESI + EBP*0x1 + 0xfffffefc],CH
// 004b7db5: MOV ECX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004b7db8: PUSH ECX
// 004b7db9: PUSH EBX
// 004b7dba: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 004b7dbf: ADD ESP,0xc
// 004b7dc2: LEA EAX,[EBP + 0xfffffefc]
//   XREF to: Stack[-0x114] (DATA)
// 004b7dc8: PUSH EAX
// 004b7dc9: CALL crt_file.c_create_directory_FUN_00600e10
//   XREF to: 00600e10 (UNCONDITIONAL_CALL)
// 004b7dce: ADD ESP,0x4
// 004b7dd1: PUSH 0xae4
// 004b7dd6: PUSH 0x628112
//   XREF to: 00628112 (DATA)
// 004b7ddb: PUSH 0x628127
//   XREF to: 00628127 (DATA)
// 004b7de0: PUSH 0x0
// 004b7de2: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004b7de5: PUSH ESI
// 004b7de6: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b7deb: ADD ESP,0x14
// 004b7dee: MOV ESI,EAX
// 004b7df0: TEST EAX,EAX
// 004b7df2: JZ 0x004b7e9a
//   XREF to: 004b7e9a (CONDITIONAL_JUMP)
// 004b7df8: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004b7dfb: XOR EDI,EDI
// 004b7dfd: TEST EAX,EAX
// 004b7dff: JLE 0x004b7e44
//   XREF to: 004b7e44 (CONDITIONAL_JUMP)
// 004b7e01: TEST byte ptr [ESI + 0xd],0x4
//   Label: LAB_004b7e01
// 004b7e05: JZ 0x004b7eb2
//   XREF to: 004b7eb2 (CONDITIONAL_JUMP)
// 004b7e0b: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_004b7e0b
// 004b7e0e: PUSH ESI
// 004b7e0f: TEST EAX,EAX
// 004b7e11: JLE 0x004b7e2a
//   XREF to: 004b7e2a (CONDITIONAL_JUMP)
// 004b7e13: MOV EAX,dword ptr [EBX]
// 004b7e15: MOV AL,byte ptr [EAX]
// 004b7e17: AND EAX,0xff
// 004b7e1c: SUB EAX,0xd
// 004b7e1f: CMP EAX,0xfd
// 004b7e24: JA 0x004b7f0b
//   XREF to: 004b7f0b (CONDITIONAL_JUMP)
// 004b7e2a: PUSH EBX
//   Label: LAB_004b7e2a
// 004b7e2b: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004b7e30: ADD ESP,0x4
// 004b7e33: PUSH EAX
//   Label: LAB_004b7e33
// 004b7e34: CALL crt_stdio.c_fputc_FUN_006007a0
//   Label: LAB_004b7e34
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 004b7e39: ADD ESP,0x8
// 004b7e3c: MOV EDX,dword ptr [EBP + 0x20]
//   Label: LAB_004b7e3c
//   XREF to: Stack[0x10] (READ)
// 004b7e3f: INC EDI
// 004b7e40: CMP EDI,EDX
// 004b7e42: JL 0x004b7e01
//   XREF to: 004b7e01 (CONDITIONAL_JUMP)
// 004b7e44: MOV AL,byte ptr [EBX + 0xc]
//   Label: LAB_004b7e44
// 004b7e47: MOV EDI,0x1
// 004b7e4c: TEST AL,0x20
// 004b7e4e: JZ 0x004b7e52
//   XREF to: 004b7e52 (CONDITIONAL_JUMP)
// 004b7e50: XOR EDI,EDI
// 004b7e52: TEST byte ptr [ESI + 0xc],0x20
//   Label: LAB_004b7e52
// 004b7e56: JZ 0x004b7e5a
//   XREF to: 004b7e5a (CONDITIONAL_JUMP)
// 004b7e58: XOR EDI,EDI
// 004b7e5a: PUSH 0xaf5
//   Label: LAB_004b7e5a
// 004b7e5f: PUSH 0x62812a
//   XREF to: 0062812a (DATA)
// 004b7e64: PUSH ESI
// 004b7e65: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b7e6a: ADD ESP,0xc
// 004b7e6d: MOV EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004b7e70: PUSH EAX
// 004b7e71: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004b7e74: PUSH EBX
// 004b7e75: CALL engine_dosio.c_copyFileTimestamp_FUN_00481910
//   XREF to: 00481910 (UNCONDITIONAL_CALL)
// 004b7e7a: ADD ESP,0x8
// 004b7e7d: TEST EAX,EAX
// 004b7e7f: JNZ 0x004b7e98
//   XREF to: 004b7e98 (CONDITIONAL_JUMP)
// 004b7e81: PUSH EBX
// 004b7e82: PUSH 0x626577
//   XREF to: 00626577 (DATA)
// 004b7e87: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b7e8d: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b7e8e: XOR EDI,EDI
// 004b7e90: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b7e95: ADD ESP,0xc
// 004b7e98: MOV EAX,EDI
//   Label: LAB_004b7e98
// 004b7e9a: MOV ESP,EBP
//   Label: LAB_004b7e9a
// 004b7e9c: POP EBP
// 004b7e9d: POP EDI
// 004b7e9e: POP ESI
// 004b7e9f: POP EBX
// 004b7ea0: RET
// 004b7ea1: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_004b7ea1
//   XREF to: Stack[-0x14] (READ)
// 004b7ea4: CMP byte ptr [EAX],0x5c
// 004b7ea7: JNZ 0x004b7d6e
//   XREF to: 004b7d6e (CONDITIONAL_JUMP)
// 004b7ead: JMP 0x004b7daa
//   XREF to: 004b7daa (UNCONDITIONAL_JUMP)
// 004b7eb2: MOV EDX,dword ptr [ESI + 0x4]
//   Label: LAB_004b7eb2
// 004b7eb5: MOV EAX,dword ptr [ESI + 0x14]
// 004b7eb8: SUB EAX,EDX
// 004b7eba: CMP EAX,0x1
// 004b7ebd: JBE 0x004b7e0b
//   XREF to: 004b7e0b (CONDITIONAL_JUMP)
// 004b7ec3: MOV ECX,dword ptr [EBX + 0x4]
// 004b7ec6: TEST ECX,ECX
// 004b7ec8: JLE 0x004b7edd
//   XREF to: 004b7edd (CONDITIONAL_JUMP)
// 004b7eca: MOV EAX,dword ptr [EBX]
// 004b7ecc: MOV AL,byte ptr [EAX]
// 004b7ece: AND EAX,0xff
// 004b7ed3: SUB EAX,0xd
// 004b7ed6: CMP EAX,0xfd
// 004b7edb: JA 0x004b7f25
//   XREF to: 004b7f25 (CONDITIONAL_JUMP)
// 004b7edd: PUSH EBX
//   Label: LAB_004b7edd
// 004b7ede: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004b7ee3: ADD ESP,0x4
// 004b7ee6: MOV ECX,dword ptr [ESI]
//   Label: LAB_004b7ee6
// 004b7ee8: MOV byte ptr [ECX],AL
// 004b7eea: MOV EAX,dword ptr [ESI]
// 004b7eec: CMP byte ptr [EAX],0xa
// 004b7eef: JZ 0x004b7f3b
//   XREF to: 004b7f3b (CONDITIONAL_JUMP)
// 004b7ef1: MOV CL,byte ptr [ESI + 0xd]
// 004b7ef4: OR CL,0x10
// 004b7ef7: MOV EDX,dword ptr [ESI + 0x4]
// 004b7efa: MOV byte ptr [ESI + 0xd],CL
// 004b7efd: INC EDX
// 004b7efe: MOV ECX,dword ptr [ESI]
// 004b7f00: MOV dword ptr [ESI + 0x4],EDX
// 004b7f03: INC ECX
// 004b7f04: MOV dword ptr [ESI],ECX
// 004b7f06: JMP 0x004b7e3c
//   XREF to: 004b7e3c (UNCONDITIONAL_JUMP)
// 004b7f0b: MOV EAX,dword ptr [EBX]
//   Label: LAB_004b7f0b
// 004b7f0d: MOV EDX,dword ptr [EBX + 0x4]
// 004b7f10: LEA ECX,[EAX + 0x1]
// 004b7f13: DEC EDX
// 004b7f14: MOV dword ptr [EBX],ECX
// 004b7f16: MOV dword ptr [EBX + 0x4],EDX
// 004b7f19: MOV AL,byte ptr [EAX]
// 004b7f1b: AND EAX,0xff
// 004b7f20: JMP 0x004b7e33
//   XREF to: 004b7e33 (UNCONDITIONAL_JUMP)
// 004b7f25: LEA EAX,[ECX + -0x1]
//   Label: LAB_004b7f25
// 004b7f28: MOV dword ptr [EBX + 0x4],EAX
// 004b7f2b: MOV EAX,dword ptr [EBX]
// 004b7f2d: LEA ECX,[EAX + 0x1]
// 004b7f30: MOV dword ptr [EBX],ECX
// 004b7f32: MOV AL,byte ptr [EAX]
// 004b7f34: AND EAX,0xff
// 004b7f39: JMP 0x004b7ee6
//   XREF to: 004b7ee6 (UNCONDITIONAL_JUMP)
// 004b7f3b: PUSH ESI
//   Label: LAB_004b7f3b
// 004b7f3c: PUSH 0xa
// 004b7f3e: JMP 0x004b7e34
//   XREF to: 004b7e34 (UNCONDITIONAL_JUMP)
