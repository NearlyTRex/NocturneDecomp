// Name: engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
// Address: 004b2a60
// Address Range: [[004b2a60, 004b2cf8]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList * this_ptr, FILE * * file)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3c96 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4b6e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b37ab [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 (004b2890) at 004b297a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbcd5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004bab49 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_fileio_cpp_0062604b
//   TerminatedCString s_File_I_O_error_accessing_006262a7
//   TerminatedCString s_anon_006262cf
//   TerminatedCString s_anon_006262d1
//   TerminatedCString s_Checkout_file_is_corrupt_006262df
//   TerminatedCString s_Multiple_checkout_detect_00626335
//   TerminatedCString s_Out_of_memory_reading_ch_006263b3
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char[256] g_CharacterClassificationTable
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_string.c_memmove_FUN_005fe5e0
//   engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
//   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList *this_ptr,FILE **file)

{
  char cVar1;
  undefined4 dest;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  uint uVar5;
  SIZE_T SVar6;
  BADSPACEBASE *in_ESP;
  FILE *pFVar7;
  byte bVar8;
  int in_stack_0000000c;
  CCheckOutList *in_stack_00000010;
  CCheckOutList *in_stack_00000014;
  char *format;
  FILE aFStack_168 [9];
  undefined1 auStack_6c [7];
  char acStack_65 [2];
  FILE aFStack_63 [2];
  
  bVar8 = 0;
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(this_ptr);
  iVar2 = crt_stdio_c_fseek_FUN_005ffacc(*file,0,0);
  if (iVar2 == 0) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(*file," ");
      format = &stack0xfffffe94;
      if (((*file)->_flag & 0x10) != 0) {
        return 1;
      }
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0(*file,"%[^=]= %[^\n]\n");
      if (iVar2 != 2) {
        pFVar7 = *file;
        if (pFVar7 != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar7,"..\\engine\\fileio.cpp",0xc4);
          *file = (FILE *)0x0;
          format = (char *)pFVar7;
        }
        aFStack_168[0]._ptr = "Checkout file is corrupt, or file I/O error.\nGet Fletch, this is a serious situation.";
        goto LAB_004b2acd;
      }
      uVar5 = 0xffffffff;
      pFVar7 = aFStack_168;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *(char *)pFVar7;
        pFVar7 = (FILE *)((int)pFVar7 + (uint)bVar8 * -2 + 1);
      } while (cVar1 != '\0');
      SVar6 = ~uVar5 - 1;
      if (0 < (int)SVar6) {
        puVar3 = &stack0xfffffe97 + ~uVar5;
        do {
          if ((g_CharacterClassificationTable[(byte)(puVar3[-1] + 1)] & 2U) == 0) break;
          SVar6 = SVar6 - 1;
          puVar3 = puVar3 + -1;
        } while (0 < (int)SVar6);
      }
      *(undefined1 *)((int)&aFStack_168[0]._ptr + SVar6) = 0;
      while ((g_CharacterClassificationTable[(byte)((char)aFStack_168[0]._ptr + 1)] & 2U) != 0) {
        format = (char *)aFStack_168;
        crt_string_c_memmove_FUN_005fe5e0(aFStack_168,(void *)((int)&aFStack_168[0]._ptr + 1),SVar6)
        ;
        SVar6 = SVar6 - 1;
      }
      dest = (int)acStack_65 + 1;
      uVar5 = 0xffffffff;
      pcVar4 = (char *)((int)acStack_65 + 1);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      SVar6 = ~uVar5 - 1;
      if (0 < (int)SVar6) {
        pcVar4 = acStack_65 + ~uVar5;
        do {
          if ((g_CharacterClassificationTable[(byte)(pcVar4[-1] + 1)] & 2U) == 0) break;
          SVar6 = SVar6 - 1;
          pcVar4 = pcVar4 + -1;
        } while (0 < (int)SVar6);
      }
      *(undefined1 *)(dest + SVar6) = 0;
      while ((g_CharacterClassificationTable[(byte)(acStack_65[1] + 1)] & 2U) != 0) {
        format = (char *)dest;
        crt_string_c_memmove_FUN_005fe5e0((void *)dest,(FILE *)(acStack_65 + 2),SVar6);
        SVar6 = SVar6 - 1;
      }
      iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                        (in_stack_00000014,(char *)aFStack_168);
      if (-1 < iVar2) {
        if (*file != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file,"..\\engine\\fileio.cpp",0xc4);
          *file = (FILE *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Multiple checkout detected for %s (users %s and %s).\nCheckout file probably corrupt.\nGet Fletch, this is a serious situation.",&stack0xfffffe90,
                   iVar2 * 0x168 + *(int *)(in_stack_0000000c + 4) + 0x104,auStack_6c);
        goto LAB_004b2ad5;
      }
      iVar2 = engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00
                        ((CCheckOutList *)file,(CCheckOutItem *)&stack0xfffffe90);
    } while (iVar2 != 0);
    if (*file != (FILE *)0x0) {
      format = (char *)0xc4;
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file,"..\\engine\\fileio.cpp",0xc4);
      *file = (FILE *)0x0;
    }
  }
  else {
    format = "File I/O error accessing checkout file.";
  }
LAB_004b2acd:
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,format);
LAB_004b2ad5:
  if (*file != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(*file,"..\\engine\\fileio.cpp",0xc4);
    *file = (FILE *)0x0;
  }
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(in_stack_00000010);
  return 0;
}


// Assembly code:
// 004b2a60: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
// 004b2a61: PUSH ESI
// 004b2a62: PUSH EDI
// 004b2a63: PUSH EBP
// 004b2a64: SUB ESP,0x168
// 004b2a6a: MOV EBP,dword ptr [ESP + 0x180]
//   XREF to: Stack[0x8] (READ)
// 004b2a71: MOV EDX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[0x4] (READ)
// 004b2a78: PUSH EDX
// 004b2a79: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b2a7e: ADD ESP,0x4
// 004b2a81: PUSH 0x0
// 004b2a83: PUSH 0x0
// 004b2a85: MOV ECX,dword ptr [EBP]
// 004b2a88: PUSH ECX
// 004b2a89: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 004b2a8e: ADD ESP,0xc
// 004b2a91: TEST EAX,EAX
// 004b2a93: JNZ 0x004b2ac1
//   XREF to: 004b2ac1 (CONDITIONAL_JUMP)
// 004b2a95: PUSH 0x6262cf
//   Label: LAB_004b2a95
//   XREF to: 006262cf (DATA)
// 004b2a9a: MOV ESI,dword ptr [EBP]
// 004b2a9d: PUSH ESI
// 004b2a9e: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b2aa3: MOV EAX,dword ptr [EBP]
// 004b2aa6: MOV DL,byte ptr [EAX + 0xc]
// 004b2aa9: ADD ESP,0x8
// 004b2aac: TEST DL,0x10
// 004b2aaf: JZ 0x004b2b0a
//   XREF to: 004b2b0a (CONDITIONAL_JUMP)
// 004b2ab1: MOV EAX,0x1
// 004b2ab6: ADD ESP,0x168
//   Label: LAB_004b2ab6
// 004b2abc: POP EBP
// 004b2abd: POP EDI
// 004b2abe: POP ESI
// 004b2abf: POP EBX
// 004b2ac0: RET
// 004b2ac1: PUSH 0x6262a7
//   Label: LAB_004b2ac1
//   XREF to: 006262a7 (DATA)
// 004b2ac6: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b2acc: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b2acd: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   Label: LAB_004b2acd
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b2ad2: ADD ESP,0x8
// 004b2ad5: MOV ESI,dword ptr [EBP]
//   Label: LAB_004b2ad5
// 004b2ad8: TEST ESI,ESI
// 004b2ada: JZ 0x004b2af6
//   XREF to: 004b2af6 (CONDITIONAL_JUMP)
// 004b2adc: PUSH 0xc4
// 004b2ae1: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b2ae6: PUSH ESI
// 004b2ae7: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b2aec: ADD ESP,0xc
// 004b2aef: MOV dword ptr [EBP],0x0
// 004b2af6: MOV EBP,dword ptr [ESP + 0x17c]
//   Label: LAB_004b2af6
//   XREF to: Stack[0x4] (READ)
// 004b2afd: PUSH EBP
// 004b2afe: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b2b03: ADD ESP,0x4
// 004b2b06: XOR EAX,EAX
// 004b2b08: JMP 0x004b2ab6
//   XREF to: 004b2ab6 (UNCONDITIONAL_JUMP)
// 004b2b0a: LEA EDX,[ESP + 0x104]
//   Label: LAB_004b2b0a
//   XREF to: Stack[-0x74] (DATA)
// 004b2b11: PUSH EDX
// 004b2b12: LEA EDX,[ESP + 0x4]
//   XREF to: Stack[-0x178] (DATA)
// 004b2b16: PUSH EDX
// 004b2b17: PUSH 0x6262d1
//   XREF to: 006262d1 (DATA)
// 004b2b1c: PUSH EAX
// 004b2b1d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004b2b22: ADD ESP,0x10
// 004b2b25: CMP EAX,0x2
// 004b2b28: JZ 0x004b2b5c
//   XREF to: 004b2b5c (CONDITIONAL_JUMP)
// 004b2b2a: MOV EDI,dword ptr [EBP]
// 004b2b2d: TEST EDI,EDI
// 004b2b2f: JZ 0x004b2b4b
//   XREF to: 004b2b4b (CONDITIONAL_JUMP)
// 004b2b31: PUSH 0xc4
// 004b2b36: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b2b3b: PUSH EDI
// 004b2b3c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b2b41: ADD ESP,0xc
// 004b2b44: MOV dword ptr [EBP],0x0
// 004b2b4b: PUSH 0x6262df
//   Label: LAB_004b2b4b
//   XREF to: 006262df (DATA)
// 004b2b50: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b2b56: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b2b57: JMP 0x004b2acd
//   XREF to: 004b2acd (UNCONDITIONAL_JUMP)
// 004b2b5c: MOV EDI,ESP
//   Label: LAB_004b2b5c
// 004b2b5e: MOV EBX,ESP
// 004b2b60: SUB ECX,ECX
// 004b2b62: DEC ECX
// 004b2b63: XOR EAX,EAX
// 004b2b65: SCASB.REPNE ES:EDI
// 004b2b67: NOT ECX
// 004b2b69: DEC ECX
// 004b2b6a: MOV EAX,ECX
// 004b2b6c: MOV EDI,ECX
// 004b2b6e: TEST ECX,ECX
// 004b2b70: JLE 0x004b2b8b
//   XREF to: 004b2b8b (CONDITIONAL_JUMP)
// 004b2b72: MOV EDX,ESP
// 004b2b74: LEA EAX,[ECX + EDX*0x1]
// 004b2b77: MOV DL,byte ptr [EAX + -0x1]
//   Label: LAB_004b2b77
// 004b2b7a: INC DL
// 004b2b7c: AND EDX,0xff
// 004b2b82: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004b2b89: JNZ 0x004b2bb4
//   XREF to: 004b2bb4 (CONDITIONAL_JUMP)
// 004b2b8b: LEA EAX,[EBX + EDI*0x1]
//   Label: LAB_004b2b8b
//   XREF to: Stack[-0x178] (DATA)
// 004b2b8e: LEA ESI,[EBX + 0x1]
//   XREF to: Stack[-0x177] (DATA)
// 004b2b91: MOV byte ptr [EAX],0x0
//   XREF to: Stack[-0x178] (DATA)
// 004b2b94: MOV AL,byte ptr [EBX]
//   Label: LAB_004b2b94
//   XREF to: Stack[-0x178] (DATA)
// 004b2b96: INC AL
// 004b2b98: AND EAX,0xff
// 004b2b9d: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004b2ba4: JZ 0x004b2bbc
//   XREF to: 004b2bbc (CONDITIONAL_JUMP)
// 004b2ba6: PUSH EDI
// 004b2ba7: PUSH ESI
// 004b2ba8: PUSH EBX
// 004b2ba9: DEC EDI
// 004b2baa: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b2baf: ADD ESP,0xc
// 004b2bb2: JMP 0x004b2b94
//   XREF to: 004b2b94 (UNCONDITIONAL_JUMP)
// 004b2bb4: DEC EDI
//   Label: LAB_004b2bb4
// 004b2bb5: DEC EAX
// 004b2bb6: TEST EDI,EDI
// 004b2bb8: JG 0x004b2b77
//   XREF to: 004b2b77 (CONDITIONAL_JUMP)
// 004b2bba: JMP 0x004b2b8b
//   XREF to: 004b2b8b (UNCONDITIONAL_JUMP)
// 004b2bbc: LEA EDI,[ESP + 0x104]
//   Label: LAB_004b2bbc
//   XREF to: Stack[-0x74] (DATA)
// 004b2bc3: LEA EBX,[ESP + 0x104]
//   XREF to: Stack[-0x74] (DATA)
// 004b2bca: SUB ECX,ECX
// 004b2bcc: DEC ECX
// 004b2bcd: XOR EAX,EAX
// 004b2bcf: SCASB.REPNE ES:EDI
// 004b2bd1: NOT ECX
// 004b2bd3: DEC ECX
// 004b2bd4: MOV EDI,ECX
// 004b2bd6: TEST ECX,ECX
// 004b2bd8: JLE 0x004b2bf7
//   XREF to: 004b2bf7 (CONDITIONAL_JUMP)
// 004b2bda: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x74] (DATA)
// 004b2be1: ADD EAX,ECX
// 004b2be3: MOV DL,byte ptr [EAX + -0x1]
//   Label: LAB_004b2be3
//   XREF to: Stack[-0x75] (READ)
// 004b2be6: INC DL
// 004b2be8: AND EDX,0xff
// 004b2bee: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004b2bf5: JNZ 0x004b2c20
//   XREF to: 004b2c20 (CONDITIONAL_JUMP)
// 004b2bf7: LEA EAX,[EBX + EDI*0x1]
//   Label: LAB_004b2bf7
//   XREF to: Stack[-0x74] (DATA)
// 004b2bfa: LEA ESI,[EBX + 0x1]
//   XREF to: Stack[-0x73] (DATA)
// 004b2bfd: MOV byte ptr [EAX],0x0
//   XREF to: Stack[-0x74] (DATA)
// 004b2c00: MOV AL,byte ptr [EBX]
//   Label: LAB_004b2c00
//   XREF to: Stack[-0x74] (DATA)
// 004b2c02: INC AL
// 004b2c04: AND EAX,0xff
// 004b2c09: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004b2c10: JZ 0x004b2c28
//   XREF to: 004b2c28 (CONDITIONAL_JUMP)
// 004b2c12: PUSH EDI
// 004b2c13: PUSH ESI
// 004b2c14: PUSH EBX
// 004b2c15: DEC EDI
// 004b2c16: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b2c1b: ADD ESP,0xc
// 004b2c1e: JMP 0x004b2c00
//   XREF to: 004b2c00 (UNCONDITIONAL_JUMP)
// 004b2c20: DEC EDI
//   Label: LAB_004b2c20
// 004b2c21: DEC EAX
// 004b2c22: TEST EDI,EDI
// 004b2c24: JG 0x004b2be3
//   XREF to: 004b2be3 (CONDITIONAL_JUMP)
// 004b2c26: JMP 0x004b2bf7
//   XREF to: 004b2bf7 (UNCONDITIONAL_JUMP)
// 004b2c28: MOV EAX,ESP
//   Label: LAB_004b2c28
// 004b2c2a: PUSH EAX
// 004b2c2b: MOV ECX,dword ptr [ESP + 0x180]
//   XREF to: Stack[0x4] (READ)
// 004b2c32: PUSH ECX
// 004b2c33: CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
// 004b2c38: ADD ESP,0x8
// 004b2c3b: MOV EBX,EAX
// 004b2c3d: TEST EAX,EAX
// 004b2c3f: JL 0x004b2cad
//   XREF to: 004b2cad (CONDITIONAL_JUMP)
// 004b2c41: MOV EDX,dword ptr [EBP]
// 004b2c44: TEST EDX,EDX
// 004b2c46: JZ 0x004b2c62
//   XREF to: 004b2c62 (CONDITIONAL_JUMP)
// 004b2c48: PUSH 0xc4
// 004b2c4d: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b2c52: PUSH EDX
// 004b2c53: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b2c58: ADD ESP,0xc
// 004b2c5b: MOV dword ptr [EBP],0x0
// 004b2c62: LEA EAX,[ESP + 0x104]
//   Label: LAB_004b2c62
//   XREF to: Stack[-0x74] (DATA)
// 004b2c69: PUSH EAX
// 004b2c6a: LEA EAX,[EBX*0x4 + 0x0]
// 004b2c71: SUB EAX,EBX
// 004b2c73: SHL EAX,0x3
// 004b2c76: MOV EDX,dword ptr [ESP + 0x180]
//   XREF to: Stack[0x4] (READ)
// 004b2c7d: MOV EBX,EAX
// 004b2c7f: SHL EAX,0x4
// 004b2c82: MOV EDX,dword ptr [EDX + 0x4]
// 004b2c85: SUB EAX,EBX
// 004b2c87: ADD EAX,EDX
// 004b2c89: ADD EAX,0x104
// 004b2c8e: PUSH EAX
// 004b2c8f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x178] (DATA)
// 004b2c93: PUSH EAX
// 004b2c94: PUSH 0x626335
//   XREF to: 00626335 (DATA)
// 004b2c99: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b2c9f: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b2ca0: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b2ca5: ADD ESP,0x14
// 004b2ca8: JMP 0x004b2ad5
//   XREF to: 004b2ad5 (UNCONDITIONAL_JUMP)
// 004b2cad: MOV EAX,ESP
//   Label: LAB_004b2cad
// 004b2caf: PUSH EAX
// 004b2cb0: MOV EBX,dword ptr [ESP + 0x180]
//   XREF to: Stack[0x4] (READ)
// 004b2cb7: PUSH EBX
// 004b2cb8: CALL engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
//   XREF to: 004b2d00 (UNCONDITIONAL_CALL)
// 004b2cbd: ADD ESP,0x8
// 004b2cc0: TEST EAX,EAX
// 004b2cc2: JNZ 0x004b2a95
//   XREF to: 004b2a95 (CONDITIONAL_JUMP)
// 004b2cc8: MOV ESI,dword ptr [EBP]
// 004b2ccb: TEST ESI,ESI
// 004b2ccd: JZ 0x004b2ce9
//   XREF to: 004b2ce9 (CONDITIONAL_JUMP)
// 004b2ccf: PUSH 0xc4
// 004b2cd4: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b2cd9: PUSH ESI
// 004b2cda: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b2cdf: ADD ESP,0xc
// 004b2ce2: MOV dword ptr [EBP],0x0
// 004b2ce9: PUSH 0x6263b3
//   Label: LAB_004b2ce9
//   XREF to: 006263b3 (DATA)
// 004b2cee: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b2cf3: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b2cf4: JMP 0x004b2acd
//   XREF to: 004b2acd (UNCONDITIONAL_JUMP)
