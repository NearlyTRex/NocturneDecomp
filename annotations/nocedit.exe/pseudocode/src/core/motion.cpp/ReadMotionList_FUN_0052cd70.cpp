// Name: core_motion.cpp_ReadMotionList_FUN_0052cd70
// Address: 0052cd70
// Address Range: [[0052cd70, 0052d169]]
// Convention: unknown
// Signature: undefined core_motion.cpp_ReadMotionList_FUN_0052cd70()
// Cross-references:
//   core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0 (00599bb0) at 00599ec6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_0063a547
//   TerminatedCString s_core_motion_cpp_0063a54b
//   TerminatedCString s_Error_reading_motion_lis_0063a55e
//   TerminatedCString s_core_motion_cpp_0063a579
//   TerminatedCString s_Can_t_read_motion_list_i_0063a58c
//   TerminatedCString s_d_0063a5ff
//   TerminatedCString s_s_0063a603
//   TerminatedCString s_d_0063a607
//   TerminatedCString s_f_d_d_d_0063a60b
//   TerminatedCString s_d_d_f_0063a620
//   TerminatedCString s_d_f_d_0063a62a
//   TerminatedCString s_d_f_0063a634
//   TerminatedCString s_d_0063a63b
//   TerminatedCString s_d_d_d_f_f_d_0063a63f
//   TerminatedCString s_d_0063a652
//   TerminatedCString s_d_d_0063a656
//   TerminatedCString s_d_0063a65d
//   TerminatedCString s_d_0063a660
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

/* Signature: undefined1 core_motion.cpp_ReadMotionList(float* param_1, undefined4 pFilePtr) */

void core_motion_cpp_ReadMotionList_FUN_0052cd70
               (undefined4 param_1,undefined4 param_2,FILE *unaff_EBX,undefined4 param_4,
               undefined4 param_5,FILE *param_6,FILE *param_7,undefined4 param_8,int *param_9,
               FILE *param_10,undefined4 param_11,int param_12)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  BADSPACEBASE *in_ESP;
  FILE *pFStack00000028;
  undefined4 uVar4;
  int in_stack_ffffffd4;
  int in_stack_ffffffd8;
  char *pcVar5;
  char *pcVar6;
  
  uVar4 = 0xffffffff;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(param_6);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n",&stack0xffffffd0,uVar4);
  if (in_stack_ffffffd4 < 0) {
    g_CurrentFilename = "..\\core\\motion.cpp";
    g_CurrentLineNumber = 0x5b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading motion list.");
  }
  if (2 < in_stack_ffffffd8) {
    g_CurrentFilename = "..\\core\\motion.cpp";
    g_CurrentLineNumber = 0x5d;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Can't read motion list - it's version %d, and I can only handle up to version %d.  (Probably you have an old .exe)",in_stack_ffffffd8);
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(param_6);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  if (0 < *param_9) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%s\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_10->_ptr);
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(param_6);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  if (0 < *(int *)(param_12 + 0x964)) {
    puVar2 = (uint *)(param_12 + 0x968);
LAB_0052ce73:
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(param_6);
      if (-1 < iVar1) {
        if (iVar1 != 10) goto LAB_0052ce73;
      }
      crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"\"%[^\"]\",%f,%d,%d,%d\n");
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(param_6);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d,%d,%f\n");
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(param_6);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d,%f,%d\n");
      puVar2[0xc] = (uint)unaff_EBX;
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(param_6);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      pcVar6 = "%d,%f\n";
      pcVar5 = (char *)param_6;
      crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d,%f\n");
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(param_6);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = 0;
      unaff_EBX = param_6;
      crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
      if (0 < (int)puVar2[0x1a]) {
        param_12 = (int)(puVar2 + 0x1b);
        pFStack00000028 = (FILE *)(puVar2 + 0x1d);
        do {
          pcVar3 = (char *)(param_12 + iVar1 * 0x18);
          pcVar5 = "%d,%d,%d,%f,%f,%d\n";
          pcVar6 = pcVar3;
          unaff_EBX = pFStack00000028;
          crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d,%d,%d,%f,%f,%d\n");
          iVar1 = iVar1 + 1;
          *(FILE **)(pcVar3 + 4) = param_7;
          pFStack00000028 = (FILE *)&pFStack00000028->_ungotten;
        } while (iVar1 < (int)puVar2[0x1a]);
      }
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(param_6);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      param_7 = (FILE *)(puVar2 + 0x129);
      iVar1 = 0;
      crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
      if (0 < (int)puVar2[0x129]) {
        do {
          param_7 = (FILE *)(puVar2 + iVar1 * 2 + 0x12a);
          iVar1 = iVar1 + 1;
          unaff_EBX = (FILE *)0x52d054;
          crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d,%d\n");
        } while (iVar1 < (int)puVar2[0x129]);
      }
      if ((int)param_10 < 2) {
        puVar2[0x148] = 0;
      }
      else {
        do {
          iVar1 = crt_stdio_c_fgetc_FUN_005fe840(param_6);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        param_7 = param_6;
        iVar1 = 0;
        crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d");
        if (0 < (int)puVar2[0x148]) {
          do {
            iVar1 = iVar1 + 1;
            crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d");
          } while (iVar1 < (int)puVar2[0x148]);
        }
        do {
          param_10 = param_6;
          iVar1 = crt_stdio_c_fgetc_FUN_005fe840(param_6);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
      }
      puVar2 = &((FILE *)((int)pcVar5 + 0x540))->_flag;
    } while ((int)(pcVar6 + 1) < *(int *)(param_12 + 0x964));
  }
  return;
}


// Assembly code:
// 0052cd70: PUSH EBX
//   Label: core_motion.cpp_ReadMotionList_FUN_0052cd70
// 0052cd71: PUSH ESI
// 0052cd72: PUSH EDI
// 0052cd73: PUSH EBP
// 0052cd74: SUB ESP,0x28
// 0052cd77: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 0052cd7b: MOV EDX,0xffffffff
// 0052cd80: MOV EBX,EDI
// 0052cd82: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0052cd86: PUSH EBX
//   Label: LAB_0052cd86
// 0052cd87: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052cd8c: ADD ESP,0x4
// 0052cd8f: TEST EAX,EAX
// 0052cd91: JL 0x0052cd98
//   XREF to: 0052cd98 (CONDITIONAL_JUMP)
// 0052cd93: CMP EAX,0xa
// 0052cd96: JNZ 0x0052cd86
//   XREF to: 0052cd86 (CONDITIONAL_JUMP)
// 0052cd98: LEA EAX,[ESP + 0x4]
//   Label: LAB_0052cd98
//   XREF to: Stack[-0x34] (DATA)
// 0052cd9c: PUSH EAX
// 0052cd9d: PUSH 0x63a547
//   XREF to: 0063a547 (DATA)
// 0052cda2: PUSH EDI
// 0052cda3: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052cda8: ADD ESP,0xc
// 0052cdab: CMP dword ptr [ESP + 0x4],0x0
//   XREF to: Stack[-0x34] (READ)
// 0052cdb0: JL 0x0052d109
//   XREF to: 0052d109 (CONDITIONAL_JUMP)
// 0052cdb6: MOV EBP,dword ptr [ESP + 0x4]
//   Label: LAB_0052cdb6
//   XREF to: Stack[-0x34] (READ)
// 0052cdba: CMP EBP,0x2
// 0052cdbd: JG 0x0052d131
//   XREF to: 0052d131 (CONDITIONAL_JUMP)
// 0052cdc3: MOV EBX,EDI
//   Label: LAB_0052cdc3
// 0052cdc5: PUSH EBX
//   Label: LAB_0052cdc5
// 0052cdc6: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052cdcb: ADD ESP,0x4
// 0052cdce: TEST EAX,EAX
// 0052cdd0: JL 0x0052cdd7
//   XREF to: 0052cdd7 (CONDITIONAL_JUMP)
// 0052cdd2: CMP EAX,0xa
// 0052cdd5: JNZ 0x0052cdc5
//   XREF to: 0052cdc5 (CONDITIONAL_JUMP)
// 0052cdd7: MOV EBX,dword ptr [ESP + 0x3c]
//   Label: LAB_0052cdd7
//   XREF to: Stack[0x4] (READ)
// 0052cddb: PUSH EBX
// 0052cddc: PUSH 0x63a5ff
//   XREF to: 0063a5ff (DATA)
// 0052cde1: PUSH EDI
// 0052cde2: XOR ESI,ESI
// 0052cde4: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052cde9: MOV EBP,dword ptr [EBX]
// 0052cdeb: ADD ESP,0xc
// 0052cdee: TEST EBP,EBP
// 0052cdf0: JLE 0x0052ce20
//   XREF to: 0052ce20 (CONDITIONAL_JUMP)
// 0052cdf2: ADD EBX,0x4
// 0052cdf5: PUSH EBX
//   Label: LAB_0052cdf5
// 0052cdf6: PUSH 0x63a603
//   XREF to: 0063a603 (DATA)
// 0052cdfb: PUSH EDI
// 0052cdfc: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052ce01: ADD ESP,0xc
// 0052ce04: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 0052ce08: INC ESI
// 0052ce09: MOV EDX,dword ptr [EAX]
// 0052ce0b: ADD EBX,0x1e
// 0052ce0e: CMP ESI,EDX
// 0052ce10: JL 0x0052cdf5
//   XREF to: 0052cdf5 (CONDITIONAL_JUMP)
// 0052ce12: LEA EAX,[EAX]
// 0052ce18: LEA EDX,[EDX]
// 0052ce1e: MOV EAX,EAX
// 0052ce20: MOV EBX,EDI
//   Label: LAB_0052ce20
// 0052ce22: PUSH EBX
//   Label: LAB_0052ce22
// 0052ce23: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052ce28: ADD ESP,0x4
// 0052ce2b: TEST EAX,EAX
// 0052ce2d: JL 0x0052ce34
//   XREF to: 0052ce34 (CONDITIONAL_JUMP)
// 0052ce2f: CMP EAX,0xa
// 0052ce32: JNZ 0x0052ce22
//   XREF to: 0052ce22 (CONDITIONAL_JUMP)
// 0052ce34: MOV EAX,dword ptr [ESP + 0x3c]
//   Label: LAB_0052ce34
//   XREF to: Stack[0x4] (READ)
// 0052ce38: ADD EAX,0x964
// 0052ce3d: PUSH EAX
// 0052ce3e: PUSH 0x63a607
//   XREF to: 0063a607 (DATA)
// 0052ce43: PUSH EDI
// 0052ce44: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052ce49: ADD ESP,0xc
// 0052ce4c: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 0052ce50: XOR ECX,ECX
// 0052ce52: MOV EBX,dword ptr [EAX + 0x964]
// 0052ce58: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0052ce5c: TEST EBX,EBX
// 0052ce5e: JLE 0x0052d101
//   XREF to: 0052d101 (CONDITIONAL_JUMP)
// 0052ce64: ADD EAX,0x968
// 0052ce69: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0052ce6d: MOV EBX,dword ptr [ESP + 0xc]
//   Label: LAB_0052ce6d
//   XREF to: Stack[-0x2c] (READ)
// 0052ce71: MOV ESI,EDI
// 0052ce73: PUSH ESI
//   Label: LAB_0052ce73
// 0052ce74: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052ce79: ADD ESP,0x4
// 0052ce7c: TEST EAX,EAX
// 0052ce7e: JL 0x0052ce85
//   XREF to: 0052ce85 (CONDITIONAL_JUMP)
// 0052ce80: CMP EAX,0xa
// 0052ce83: JNZ 0x0052ce73
//   XREF to: 0052ce73 (CONDITIONAL_JUMP)
// 0052ce85: LEA EAX,[EBX + 0x64]
//   Label: LAB_0052ce85
// 0052ce88: PUSH EAX
// 0052ce89: LEA EAX,[EBX + 0x60]
// 0052ce8c: PUSH EAX
// 0052ce8d: LEA EAX,[EBX + 0x24]
// 0052ce90: PUSH EAX
// 0052ce91: LEA EAX,[EBX + 0x20]
// 0052ce94: PUSH EAX
// 0052ce95: PUSH EBX
// 0052ce96: PUSH 0x63a60b
//   XREF to: 0063a60b (DATA)
// 0052ce9b: PUSH EDI
// 0052ce9c: MOV ESI,EDI
// 0052ce9e: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052cea3: ADD ESP,0x1c
// 0052cea6: PUSH ESI
//   Label: LAB_0052cea6
// 0052cea7: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052ceac: ADD ESP,0x4
// 0052ceaf: TEST EAX,EAX
// 0052ceb1: JL 0x0052ceb8
//   XREF to: 0052ceb8 (CONDITIONAL_JUMP)
// 0052ceb3: CMP EAX,0xa
// 0052ceb6: JNZ 0x0052cea6
//   XREF to: 0052cea6 (CONDITIONAL_JUMP)
// 0052ceb8: LEA EAX,[EBX + 0x38]
//   Label: LAB_0052ceb8
// 0052cebb: PUSH EAX
// 0052cebc: LEA EAX,[EBX + 0x34]
// 0052cebf: PUSH EAX
// 0052cec0: LEA EAX,[EBX + 0x28]
// 0052cec3: PUSH EAX
// 0052cec4: PUSH 0x63a620
//   XREF to: 0063a620 (DATA)
// 0052cec9: PUSH EDI
// 0052ceca: MOV ESI,EDI
// 0052cecc: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052ced1: ADD ESP,0x14
// 0052ced4: PUSH ESI
//   Label: LAB_0052ced4
// 0052ced5: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052ceda: ADD ESP,0x4
// 0052cedd: TEST EAX,EAX
// 0052cedf: JL 0x0052cee6
//   XREF to: 0052cee6 (CONDITIONAL_JUMP)
// 0052cee1: CMP EAX,0xa
// 0052cee4: JNZ 0x0052ced4
//   XREF to: 0052ced4 (CONDITIONAL_JUMP)
// 0052cee6: LEA EAX,[EBX + 0x40]
//   Label: LAB_0052cee6
// 0052cee9: PUSH EAX
// 0052ceea: LEA EAX,[EBX + 0x3c]
// 0052ceed: PUSH EAX
// 0052ceee: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x38] (DATA)
// 0052cef2: PUSH EAX
// 0052cef3: PUSH 0x63a62a
//   XREF to: 0063a62a (DATA)
// 0052cef8: PUSH EDI
// 0052cef9: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052cefe: ADD ESP,0x14
// 0052cf01: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0052cf04: MOV ESI,EDI
// 0052cf06: MOV dword ptr [EBX + 0x30],EAX
// 0052cf09: PUSH ESI
//   Label: LAB_0052cf09
// 0052cf0a: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052cf0f: ADD ESP,0x4
// 0052cf12: TEST EAX,EAX
// 0052cf14: JL 0x0052cf1b
//   XREF to: 0052cf1b (CONDITIONAL_JUMP)
// 0052cf16: CMP EAX,0xa
// 0052cf19: JNZ 0x0052cf09
//   XREF to: 0052cf09 (CONDITIONAL_JUMP)
// 0052cf1b: LEA EAX,[EBX + 0x54]
//   Label: LAB_0052cf1b
// 0052cf1e: PUSH EAX
// 0052cf1f: LEA EAX,[EBX + 0x50]
// 0052cf22: PUSH EAX
// 0052cf23: PUSH 0x63a634
//   XREF to: 0063a634 (DATA)
// 0052cf28: PUSH EDI
// 0052cf29: MOV ESI,EDI
// 0052cf2b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052cf30: ADD ESP,0x10
// 0052cf33: PUSH ESI
//   Label: LAB_0052cf33
// 0052cf34: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052cf39: ADD ESP,0x4
// 0052cf3c: TEST EAX,EAX
// 0052cf3e: JL 0x0052cf45
//   XREF to: 0052cf45 (CONDITIONAL_JUMP)
// 0052cf40: CMP EAX,0xa
// 0052cf43: JNZ 0x0052cf33
//   XREF to: 0052cf33 (CONDITIONAL_JUMP)
// 0052cf45: LEA EAX,[EBX + 0x68]
//   Label: LAB_0052cf45
// 0052cf48: PUSH EAX
// 0052cf49: PUSH 0x63a63b
//   XREF to: 0063a63b (DATA)
// 0052cf4e: PUSH EDI
// 0052cf4f: XOR ESI,ESI
// 0052cf51: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052cf56: MOV EBP,dword ptr [EBX + 0x68]
// 0052cf59: ADD ESP,0xc
// 0052cf5c: TEST EBP,EBP
// 0052cf5e: JLE 0x0052cff1
//   XREF to: 0052cff1 (CONDITIONAL_JUMP)
// 0052cf64: LEA EAX,[EBX + 0x6c]
// 0052cf67: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0052cf6b: LEA EAX,[EBX + 0x74]
// 0052cf6e: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052cf72: LEA EAX,[EBX + 0x78]
// 0052cf75: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052cf79: LEA EAX,[EBX + 0x7c]
// 0052cf7c: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052cf80: LEA EBP,[EBX + 0x80]
// 0052cf86: IMUL EAX,ESI,0x18
//   Label: LAB_0052cf86
// 0052cf89: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 0052cf8d: PUSH EBP
// 0052cf8e: ADD EDX,EAX
// 0052cf90: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 0052cf94: PUSH EAX
// 0052cf95: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0052cf99: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 0052cf9d: PUSH EDX
// 0052cf9e: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x1c] (READ)
// 0052cfa2: PUSH ECX
// 0052cfa3: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x38] (DATA)
// 0052cfa7: PUSH EAX
// 0052cfa8: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x30] (READ)
// 0052cfac: PUSH EAX
// 0052cfad: PUSH 0x63a63f
//   XREF to: 0063a63f (DATA)
// 0052cfb2: PUSH EDI
// 0052cfb3: ADD EBP,0x18
// 0052cfb6: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052cfbb: ADD ESP,0x20
// 0052cfbe: INC ESI
// 0052cfbf: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (READ)
// 0052cfc3: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 0052cfc7: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0052cfca: ADD ECX,0x18
// 0052cfcd: MOV dword ptr [EDX + 0x4],EAX
// 0052cfd0: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 0052cfd4: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 0052cfd8: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0052cfdc: ADD EDX,0x18
// 0052cfdf: ADD EAX,0x18
// 0052cfe2: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052cfe6: MOV EDX,dword ptr [EBX + 0x68]
// 0052cfe9: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052cfed: CMP ESI,EDX
// 0052cfef: JL 0x0052cf86
//   XREF to: 0052cf86 (CONDITIONAL_JUMP)
// 0052cff1: MOV EBP,EDI
//   Label: LAB_0052cff1
// 0052cff3: PUSH EBP
//   Label: LAB_0052cff3
// 0052cff4: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052cff9: ADD ESP,0x4
// 0052cffc: TEST EAX,EAX
// 0052cffe: JL 0x0052d005
//   XREF to: 0052d005 (CONDITIONAL_JUMP)
// 0052d000: CMP EAX,0xa
// 0052d003: JNZ 0x0052cff3
//   XREF to: 0052cff3 (CONDITIONAL_JUMP)
// 0052d005: LEA EAX,[EBX + 0x4a4]
//   Label: LAB_0052d005
// 0052d00b: PUSH EAX
// 0052d00c: PUSH 0x63a652
//   XREF to: 0063a652 (DATA)
// 0052d011: PUSH EDI
// 0052d012: XOR ESI,ESI
// 0052d014: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052d019: MOV ECX,dword ptr [EBX + 0x4a4]
// 0052d01f: ADD ESP,0xc
// 0052d022: TEST ECX,ECX
// 0052d024: JLE 0x0052d061
//   XREF to: 0052d061 (CONDITIONAL_JUMP)
// 0052d026: LEA EAX,[EBX + 0x4a8]
// 0052d02c: LEA EBP,[EBX + 0x4ac]
// 0052d032: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0052d036: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_0052d036
//   XREF to: Stack[-0x20] (READ)
// 0052d03a: LEA EAX,[ESI*0x8 + 0x0]
// 0052d041: PUSH EBP
// 0052d042: ADD EAX,EDX
// 0052d044: PUSH EAX
// 0052d045: PUSH 0x63a656
//   XREF to: 0063a656 (DATA)
// 0052d04a: PUSH EDI
// 0052d04b: ADD EBP,0x8
// 0052d04e: INC ESI
// 0052d04f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052d054: MOV ECX,dword ptr [EBX + 0x4a4]
// 0052d05a: ADD ESP,0x10
// 0052d05d: CMP ESI,ECX
// 0052d05f: JL 0x0052d036
//   XREF to: 0052d036 (CONDITIONAL_JUMP)
// 0052d061: CMP dword ptr [ESP + 0x4],0x2
//   Label: LAB_0052d061
//   XREF to: Stack[-0x34] (READ)
// 0052d066: JL 0x0052d15b
//   XREF to: 0052d15b (CONDITIONAL_JUMP)
// 0052d06c: MOV EBP,EDI
// 0052d06e: PUSH EBP
//   Label: LAB_0052d06e
// 0052d06f: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052d074: ADD ESP,0x4
// 0052d077: TEST EAX,EAX
// 0052d079: JL 0x0052d080
//   XREF to: 0052d080 (CONDITIONAL_JUMP)
// 0052d07b: CMP EAX,0xa
// 0052d07e: JNZ 0x0052d06e
//   XREF to: 0052d06e (CONDITIONAL_JUMP)
// 0052d080: LEA EAX,[EBX + 0x520]
//   Label: LAB_0052d080
// 0052d086: PUSH EAX
// 0052d087: PUSH 0x63a65d
//   XREF to: 0063a65d (DATA)
// 0052d08c: PUSH EDI
// 0052d08d: XOR ESI,ESI
// 0052d08f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052d094: MOV EBP,dword ptr [EBX + 0x520]
// 0052d09a: ADD ESP,0xc
// 0052d09d: TEST EBP,EBP
// 0052d09f: JLE 0x0052d0c4
//   XREF to: 0052d0c4 (CONDITIONAL_JUMP)
// 0052d0a1: LEA EBP,[EBX + 0x524]
// 0052d0a7: PUSH EBP
//   Label: LAB_0052d0a7
// 0052d0a8: PUSH 0x63a660
//   XREF to: 0063a660 (DATA)
// 0052d0ad: PUSH EDI
// 0052d0ae: INC ESI
// 0052d0af: ADD EBP,0x4
// 0052d0b2: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0052d0b7: MOV EAX,dword ptr [EBX + 0x520]
// 0052d0bd: ADD ESP,0xc
// 0052d0c0: CMP ESI,EAX
// 0052d0c2: JL 0x0052d0a7
//   XREF to: 0052d0a7 (CONDITIONAL_JUMP)
// 0052d0c4: MOV EBP,EDI
//   Label: LAB_0052d0c4
// 0052d0c6: PUSH EBP
//   Label: LAB_0052d0c6
// 0052d0c7: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0052d0cc: ADD ESP,0x4
// 0052d0cf: TEST EAX,EAX
// 0052d0d1: JL 0x0052d0d8
//   XREF to: 0052d0d8 (CONDITIONAL_JUMP)
// 0052d0d3: CMP EAX,0xa
// 0052d0d6: JNZ 0x0052d0c6
//   XREF to: 0052d0c6 (CONDITIONAL_JUMP)
// 0052d0d8: MOV ESI,dword ptr [ESP + 0xc]
//   Label: LAB_0052d0d8
//   XREF to: Stack[-0x2c] (READ)
// 0052d0dc: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 0052d0e0: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 0052d0e4: ADD ESI,0x54c
// 0052d0ea: INC EBP
// 0052d0eb: MOV ECX,dword ptr [EDX + 0x964]
// 0052d0f1: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 0052d0f5: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 0052d0f9: CMP EBP,ECX
// 0052d0fb: JL 0x0052ce6d
//   XREF to: 0052ce6d (CONDITIONAL_JUMP)
// 0052d101: ADD ESP,0x28
//   Label: LAB_0052d101
// 0052d104: POP EBP
// 0052d105: POP EDI
// 0052d106: POP ESI
// 0052d107: POP EBX
// 0052d108: RET
// 0052d109: MOV EBX,0x63a54b
//   Label: LAB_0052d109
//   XREF to: 0063a54b (PARAM)
// 0052d10e: MOV ESI,0x5b
// 0052d113: PUSH 0x63a55e
//   XREF to: 0063a55e (DATA)
// 0052d118: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0052d11e: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0052d124: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052d129: ADD ESP,0x4
// 0052d12c: JMP 0x0052cdb6
//   XREF to: 0052cdb6 (UNCONDITIONAL_JUMP)
// 0052d131: PUSH 0x2
//   Label: LAB_0052d131
// 0052d133: PUSH EBP
// 0052d134: MOV EAX,0x63a579
//   XREF to: 0063a579 (PARAM)
// 0052d139: MOV EDX,0x5d
// 0052d13e: PUSH 0x63a58c
//   XREF to: 0063a58c (DATA)
// 0052d143: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0052d148: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0052d14e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052d153: ADD ESP,0xc
// 0052d156: JMP 0x0052cdc3
//   XREF to: 0052cdc3 (UNCONDITIONAL_JUMP)
// 0052d15b: MOV dword ptr [EBX + 0x520],0x0
//   Label: LAB_0052d15b
// 0052d165: JMP 0x0052d0d8
//   XREF to: 0052d0d8 (UNCONDITIONAL_JUMP)
