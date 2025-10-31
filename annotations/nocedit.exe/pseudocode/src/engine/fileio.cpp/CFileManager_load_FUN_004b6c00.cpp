// Name: engine_fileio.cpp_CFileManager_load_FUN_004b6c00
// Address: 004b6c00
// Address Range: [[004b6c00, 004b6e0c]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_load_FUN_004b6c00(CFileManager * this_ptr)
// Cross-references:
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b5abc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_fileio_cpp_00627ab1
//   TerminatedCString s_rt_00627ac6
//   TerminatedCString s_level_lst_00627ac9
//   TerminatedCString s_engine_fileio_cpp_00627ad3
//   TerminatedCString s_Unable_to_open_read_leve_00627ae8
//   TerminatedCString s_anon_00627b06
//   TerminatedCString s_engine_fileio_cpp_00627b0e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_load_FUN_004b6c00(CFileManager *this_ptr)

{
  char cVar1;
  FILE *file;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBX;
  uint uVar5;
  char (*str2) [128];
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char (*pacVar7) [128];
  char *pcVar8;
  char *pcVar9;
  char *str1;
  byte bVar10;
  CFileManager *in_stack_00000010;
  int in_stack_00000014;
  undefined4 uStack_218;
  undefined1 auStack_214 [508];
  int local_18;
  int local_14;
  
  bVar10 = 0;
  this_ptr->tracked_file_count = 0;
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("level.lst",(char *)0x0,"rt","..\\engine\\fileio.cpp",
                    0x906);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x907;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to open read level.lst");
  }
LAB_004b6c3c:
  iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0(file," %[^\n]\n",&stack0xfffffde4);
  if (iVar2 != -1) {
    uVar5 = 0;
    do {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)&uStack_218;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar10 * -2 + 1;
      } while (cVar1 != '\0');
      if (~uVar4 - 1 <= uVar5) goto LAB_004b6ca0;
      iVar3 = crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)auStack_214[uVar5 - 4]);
      auStack_214[uVar5] = (char)iVar3;
      uVar5 = uVar5 + 1;
    } while( true );
  }
  goto LAB_004b6cb3;
LAB_004b6ca0:
  engine_fileio_cpp_CFileManager_registerFiles_FUN_004b5640(in_stack_00000010,(char *)&uStack_218);
LAB_004b6cb3:
  if (iVar2 == -1) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0x914);
    local_14 = 0;
    local_18 = 0;
    do {
      iVar2 = local_18;
      if (in_stack_00000010->tracked_file_count + -1 <= local_14) {
        return;
      }
      if (local_14 + 1 < in_stack_00000010->tracked_file_count) {
        str2 = in_stack_00000010->file_entries + local_14 + 1;
        do {
          str1 = in_stack_00000010->file_entries[0] + iVar2;
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,*str2);
          pcVar9 = (char *)&uStack_218;
          pcVar8 = (char *)&uStack_218;
          pcVar6 = str1;
          if (0 < iVar3) {
            do {
              cVar1 = *pcVar6;
              *pcVar9 = cVar1;
              pacVar7 = str2;
              if (cVar1 == '\0') break;
              cVar1 = pcVar6[1];
              pcVar9[1] = cVar1;
              pcVar9 = pcVar9 + 2;
              pcVar6 = pcVar6 + 2;
            } while (cVar1 != '\0');
            do {
              cVar1 = (*pacVar7)[0];
              *str1 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = (*pacVar7)[1];
              str1[1] = cVar1;
              str1 = str1 + 2;
              pacVar7 = (char (*) [128])(*pacVar7 + 2);
            } while (cVar1 != '\0');
            uStack_218 = str2;
            pacVar7 = str2;
            do {
              cVar1 = *pcVar8;
              (*pacVar7)[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar8[1];
              pcVar8 = pcVar8 + 2;
              (*pacVar7)[1] = cVar1;
              pacVar7 = (char (*) [128])(*pacVar7 + 2);
            } while (cVar1 != '\0');
          }
          unaff_EBX = unaff_EBX + 1;
          str2 = str2 + 1;
        } while (unaff_EBX < *(int *)(in_stack_00000014 + 4));
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x80;
    } while( true );
  }
  goto LAB_004b6c3c;
}


// Assembly code:
// 004b6c00: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_load_FUN_004b6c00
// 004b6c01: PUSH ESI
// 004b6c02: PUSH EDI
// 004b6c03: PUSH EBP
// 004b6c04: SUB ESP,0x214
// 004b6c0a: PUSH 0x906
// 004b6c0f: PUSH 0x627ab1
//   XREF to: 00627ab1 (DATA)
// 004b6c14: PUSH 0x627ac6
//   XREF to: 00627ac6 (DATA)
// 004b6c19: PUSH 0x0
// 004b6c1b: MOV EAX,dword ptr [ESP + 0x238]
//   XREF to: Stack[0x4] (READ)
// 004b6c22: PUSH 0x627ac9
//   XREF to: 00627ac9 (DATA)
// 004b6c27: MOV dword ptr [EAX + 0x4],0x0
// 004b6c2e: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b6c33: ADD ESP,0x14
// 004b6c36: MOV EBP,EAX
// 004b6c38: TEST EAX,EAX
// 004b6c3a: JZ 0x004b6c7b
//   XREF to: 004b6c7b (CONDITIONAL_JUMP)
// 004b6c3c: MOV EAX,ESP
//   Label: LAB_004b6c3c
// 004b6c3e: PUSH EAX
// 004b6c3f: PUSH 0x627b06
//   XREF to: 00627b06 (DATA)
// 004b6c44: PUSH EBP
// 004b6c45: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b6c4a: ADD ESP,0xc
// 004b6c4d: MOV ESI,EAX
// 004b6c4f: CMP EAX,-0x1
// 004b6c52: JZ 0x004b6cb3
//   XREF to: 004b6cb3 (CONDITIONAL_JUMP)
// 004b6c54: XOR EBX,EBX
// 004b6c56: MOV EDI,ESP
//   Label: LAB_004b6c56
// 004b6c58: SUB ECX,ECX
// 004b6c5a: DEC ECX
// 004b6c5b: XOR EAX,EAX
// 004b6c5d: SCASB.REPNE ES:EDI
// 004b6c5f: NOT ECX
// 004b6c61: DEC ECX
// 004b6c62: CMP EBX,ECX
// 004b6c64: JNC 0x004b6ca0
//   XREF to: 004b6ca0 (CONDITIONAL_JUMP)
// 004b6c66: XOR EAX,EAX
// 004b6c68: MOV AL,byte ptr [ESP + EBX*0x1]
//   XREF to: Stack[-0x224] (DATA)
// 004b6c6b: PUSH EAX
// 004b6c6c: INC EBX
// 004b6c6d: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 004b6c72: ADD ESP,0x4
// 004b6c75: MOV byte ptr [ESP + EBX*0x1 + -0x1],AL
//   XREF to: Stack[-0x224] (DATA)
// 004b6c79: JMP 0x004b6c56
//   XREF to: 004b6c56 (UNCONDITIONAL_JUMP)
// 004b6c7b: MOV EDX,0x627ad3
//   Label: LAB_004b6c7b
//   XREF to: 00627ad3 (PARAM)
// 004b6c80: MOV ECX,0x907
// 004b6c85: PUSH 0x627ae8
//   XREF to: 00627ae8 (DATA)
// 004b6c8a: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004b6c90: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004b6c96: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b6c9b: ADD ESP,0x4
// 004b6c9e: JMP 0x004b6c3c
//   XREF to: 004b6c3c (UNCONDITIONAL_JUMP)
// 004b6ca0: MOV EAX,ESP
//   Label: LAB_004b6ca0
// 004b6ca2: PUSH EAX
// 004b6ca3: MOV EBX,dword ptr [ESP + 0x22c]
//   XREF to: Stack[0x4] (READ)
// 004b6caa: PUSH EBX
// 004b6cab: CALL engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640
//   XREF to: 004b5640 (UNCONDITIONAL_CALL)
// 004b6cb0: ADD ESP,0x8
// 004b6cb3: CMP ESI,-0x1
//   Label: LAB_004b6cb3
// 004b6cb6: JNZ 0x004b6c3c
//   XREF to: 004b6c3c (CONDITIONAL_JUMP)
// 004b6cb8: PUSH 0x914
// 004b6cbd: PUSH 0x627b0e
//   XREF to: 00627b0e (DATA)
// 004b6cc2: PUSH EBP
// 004b6cc3: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b6cc8: ADD ESP,0xc
// 004b6ccb: XOR ESI,ESI
// 004b6ccd: MOV EAX,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x4] (READ)
// 004b6cd4: MOV dword ptr [ESP + 0x204],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 004b6cdb: ADD EAX,0x8
// 004b6cde: MOV dword ptr [ESP + 0x200],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 004b6ce5: MOV dword ptr [ESP + 0x20c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004b6cec: MOV EAX,dword ptr [ESP + 0x228]
//   Label: LAB_004b6cec
//   XREF to: Stack[0x4] (READ)
// 004b6cf3: MOV EAX,dword ptr [EAX + 0x4]
// 004b6cf6: MOV EBP,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0x20] (READ)
// 004b6cfd: DEC EAX
// 004b6cfe: CMP EAX,EBP
// 004b6d00: JLE 0x004b370a
//   XREF to: 004b370a (CONDITIONAL_JUMP)
// 004b6d06: MOV ECX,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x4] (READ)
// 004b6d0d: LEA EAX,[EBP + 0x1]
// 004b6d10: MOV EDX,dword ptr [ECX + 0x4]
// 004b6d13: MOV dword ptr [ESP + 0x210],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004b6d1a: CMP EAX,EDX
// 004b6d1c: JL 0x004b6de9
//   XREF to: 004b6de9 (CONDITIONAL_JUMP)
// 004b6d22: MOV EBP,dword ptr [ESP + 0x204]
//   Label: LAB_004b6d22
//   XREF to: Stack[-0x20] (READ)
// 004b6d29: MOV EDI,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x24] (READ)
// 004b6d30: INC EBP
// 004b6d31: ADD EDI,0x80
// 004b6d37: MOV dword ptr [ESP + 0x204],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 004b6d3e: MOV dword ptr [ESP + 0x200],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 004b6d45: JMP 0x004b6cec
//   XREF to: 004b6cec (UNCONDITIONAL_JUMP)
// 004b6d47: MOV ECX,dword ptr [ESP + 0x210]
//   Label: LAB_004b6d47
//   XREF to: Stack[-0x14] (READ)
// 004b6d4e: INC ECX
// 004b6d4f: MOV dword ptr [ESP + 0x210],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004b6d56: MOV EAX,ECX
// 004b6d58: MOV ECX,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x4] (READ)
// 004b6d5f: MOV ESI,dword ptr [ECX + 0x4]
// 004b6d62: ADD EBX,0x80
// 004b6d68: CMP EAX,ESI
// 004b6d6a: JGE 0x004b6d22
//   XREF to: 004b6d22 (CONDITIONAL_JUMP)
// 004b6d6c: MOV EBP,dword ptr [ESP + 0x20c]
//   Label: LAB_004b6d6c
//   XREF to: Stack[-0x18] (READ)
// 004b6d73: MOV EDX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x1c] (READ)
// 004b6d7a: PUSH EBX
// 004b6d7b: ADD EBP,EDX
// 004b6d7d: PUSH EBP
// 004b6d7e: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b6d83: ADD ESP,0x8
// 004b6d86: TEST EAX,EAX
// 004b6d88: JLE 0x004b6d47
//   XREF to: 004b6d47 (CONDITIONAL_JUMP)
// 004b6d8a: MOV EDI,ESP
// 004b6d8c: MOV ESI,EBP
// 004b6d8e: PUSH EDI
// 004b6d8f: MOV AL,byte ptr [ESI]
//   Label: LAB_004b6d8f
// 004b6d91: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x224] (DATA)
// 004b6d93: CMP AL,0x0
// 004b6d95: JZ 0x004b6da7
//   XREF to: 004b6da7 (CONDITIONAL_JUMP)
// 004b6d97: MOV AL,byte ptr [ESI + 0x1]
// 004b6d9a: ADD ESI,0x2
// 004b6d9d: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x223] (WRITE)
// 004b6da0: ADD EDI,0x2
// 004b6da3: CMP AL,0x0
// 004b6da5: JNZ 0x004b6d8f
//   XREF to: 004b6d8f (CONDITIONAL_JUMP)
// 004b6da7: POP EDI
//   Label: LAB_004b6da7
// 004b6da8: MOV ESI,EBX
// 004b6daa: MOV EDI,EBP
// 004b6dac: PUSH EDI
// 004b6dad: MOV AL,byte ptr [ESI]
//   Label: LAB_004b6dad
// 004b6daf: MOV byte ptr [EDI],AL
// 004b6db1: CMP AL,0x0
// 004b6db3: JZ 0x004b6dc5
//   XREF to: 004b6dc5 (CONDITIONAL_JUMP)
// 004b6db5: MOV AL,byte ptr [ESI + 0x1]
// 004b6db8: ADD ESI,0x2
// 004b6dbb: MOV byte ptr [EDI + 0x1],AL
// 004b6dbe: ADD EDI,0x2
// 004b6dc1: CMP AL,0x0
// 004b6dc3: JNZ 0x004b6dad
//   XREF to: 004b6dad (CONDITIONAL_JUMP)
// 004b6dc5: POP EDI
//   Label: LAB_004b6dc5
// 004b6dc6: MOV ESI,ESP
// 004b6dc8: MOV EDI,EBX
// 004b6dca: PUSH EDI
// 004b6dcb: MOV AL,byte ptr [ESI]
//   Label: LAB_004b6dcb
//   XREF to: Stack[-0x224] (DATA)
// 004b6dcd: MOV byte ptr [EDI],AL
// 004b6dcf: CMP AL,0x0
// 004b6dd1: JZ 0x004b6de3
//   XREF to: 004b6de3 (CONDITIONAL_JUMP)
// 004b6dd3: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x223] (READ)
// 004b6dd6: ADD ESI,0x2
// 004b6dd9: MOV byte ptr [EDI + 0x1],AL
// 004b6ddc: ADD EDI,0x2
// 004b6ddf: CMP AL,0x0
// 004b6de1: JNZ 0x004b6dcb
//   XREF to: 004b6dcb (CONDITIONAL_JUMP)
// 004b6de3: POP EDI
//   Label: LAB_004b6de3
// 004b6de4: JMP 0x004b6d47
//   XREF to: 004b6d47 (UNCONDITIONAL_JUMP)
// 004b6de9: MOV EAX,dword ptr [ESP + 0x200]
//   Label: LAB_004b6de9
//   XREF to: Stack[-0x24] (READ)
// 004b6df0: MOV EBX,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x14] (READ)
// 004b6df7: MOV dword ptr [ESP + 0x208],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004b6dfe: SHL EBX,0x7
// 004b6e01: ADD EBX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x18] (READ)
// 004b6e08: JMP 0x004b6d6c
//   XREF to: 004b6d6c (UNCONDITIONAL_JUMP)
