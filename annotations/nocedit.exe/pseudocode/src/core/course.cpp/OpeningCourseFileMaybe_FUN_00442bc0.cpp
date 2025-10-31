// Name: core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0
// Address: 00442bc0
// Address Range: [[00442bc0, 00442d64]]
// Convention: unknown
// Signature: undefined core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0()
// Cross-references:
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 0044366c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_course_cpp_00619049
//   TerminatedCString s_rt_0061905c
//   TerminatedCString s_Can_t_open_s_0061905f
//   TerminatedCString s_d_0061906d
//   TerminatedCString s_d_d_00619071
//   TerminatedCString s_s_contains_d_nodes_must__00619078
//   TerminatedCString s_core_course_cpp_006190a4
//   TerminatedCString s_Importing_s_006190b7
//   TerminatedCString s_core_course_cpp_006190c4
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_course.cpp_CCourse_importMatrices_FUN_00442ea0
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

/* Signature: undefined1 core_course.cpp_OpeningCourseFileMaybe(undefined4 param_1, undefined4
   param_2) */

undefined4
core_course_cpp_OpeningCourseFileMaybe_FUN_00442bc0
          (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,undefined4 param_5
          ,char *param_6)

{
  FILE *file;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CCourse *in_stack_00000024;
  undefined1 local_14 [4];
  
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (param_6,(char *)0x0,"rt","..\\core\\course.cpp",0x14b);
  if (file == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",param_6);
    return 0;
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",local_14);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d,%d\n",&stack0xfffffff8,&stack0xfffffffc);
  if (unaff_EBX != 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s contains %d nodes - must only contain 1!",param_6,unaff_EBX);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x161);
    return 0;
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe94,"Importing %s",param_6);
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,&stack0xfffffe98);
  core_course_cpp_CCourse_importMatrices_FUN_00442ea0(in_stack_00000024);
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x178);
  return 1;
}


// Assembly code:
// 00442bc0: PUSH EBX
//   Label: core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0
// 00442bc1: PUSH ESI
// 00442bc2: PUSH EDI
// 00442bc3: PUSH EBP
// 00442bc4: SUB ESP,0x174
// 00442bca: MOV EDI,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x8] (READ)
// 00442bd1: PUSH 0x14b
// 00442bd6: PUSH 0x619049
//   XREF to: 00619049 (DATA)
// 00442bdb: PUSH 0x61905c
//   XREF to: 0061905c (DATA)
// 00442be0: PUSH 0x0
// 00442be2: PUSH EDI
// 00442be3: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00442be8: ADD ESP,0x14
// 00442beb: MOV ESI,EAX
// 00442bed: TEST EAX,EAX
// 00442bef: JZ 0x00442d0d
//   XREF to: 00442d0d (CONDITIONAL_JUMP)
// 00442bf5: MOV EBX,EAX
// 00442bf7: PUSH EBX
//   Label: LAB_00442bf7
// 00442bf8: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00442bfd: ADD ESP,0x4
// 00442c00: TEST EAX,EAX
// 00442c02: JL 0x00442c09
//   XREF to: 00442c09 (CONDITIONAL_JUMP)
// 00442c04: CMP EAX,0xa
// 00442c07: JNZ 0x00442bf7
//   XREF to: 00442bf7 (CONDITIONAL_JUMP)
// 00442c09: LEA EAX,[ESP + 0x168]
//   Label: LAB_00442c09
//   XREF to: Stack[-0x1c] (DATA)
// 00442c10: PUSH EAX
// 00442c11: PUSH 0x61906d
//   XREF to: 0061906d (DATA)
// 00442c16: PUSH ESI
// 00442c17: MOV EBX,ESI
// 00442c19: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00442c1e: ADD ESP,0xc
// 00442c21: PUSH EBX
//   Label: LAB_00442c21
// 00442c22: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00442c27: ADD ESP,0x4
// 00442c2a: TEST EAX,EAX
// 00442c2c: JL 0x00442c33
//   XREF to: 00442c33 (CONDITIONAL_JUMP)
// 00442c2e: CMP EAX,0xa
// 00442c31: JNZ 0x00442c21
//   XREF to: 00442c21 (CONDITIONAL_JUMP)
// 00442c33: LEA EAX,[ESP + 0x170]
//   Label: LAB_00442c33
//   XREF to: Stack[-0x14] (DATA)
// 00442c3a: PUSH EAX
// 00442c3b: LEA EAX,[ESP + 0x170]
//   XREF to: Stack[-0x18] (DATA)
// 00442c42: PUSH EAX
// 00442c43: PUSH 0x619071
//   XREF to: 00619071 (DATA)
// 00442c48: PUSH ESI
// 00442c49: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00442c4e: ADD ESP,0x10
// 00442c51: MOV ECX,dword ptr [ESP + 0x16c]
//   XREF to: Stack[-0x18] (READ)
// 00442c58: CMP ECX,0x1
// 00442c5b: JNZ 0x00442d2f
//   XREF to: 00442d2f (CONDITIONAL_JUMP)
// 00442c61: MOV EBX,ESI
// 00442c63: PUSH EBX
//   Label: LAB_00442c63
// 00442c64: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00442c69: ADD ESP,0x4
// 00442c6c: TEST EAX,EAX
// 00442c6e: JL 0x00442c75
//   XREF to: 00442c75 (CONDITIONAL_JUMP)
// 00442c70: CMP EAX,0xa
// 00442c73: JNZ 0x00442c63
//   XREF to: 00442c63 (CONDITIONAL_JUMP)
// 00442c75: MOV EBX,ESI
//   Label: LAB_00442c75
// 00442c77: PUSH EBX
//   Label: LAB_00442c77
// 00442c78: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00442c7d: ADD ESP,0x4
// 00442c80: TEST EAX,EAX
// 00442c82: JL 0x00442c89
//   XREF to: 00442c89 (CONDITIONAL_JUMP)
// 00442c84: CMP EAX,0xa
// 00442c87: JNZ 0x00442c77
//   XREF to: 00442c77 (CONDITIONAL_JUMP)
// 00442c89: MOV EBX,ESI
//   Label: LAB_00442c89
// 00442c8b: PUSH EBX
//   Label: LAB_00442c8b
// 00442c8c: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00442c91: ADD ESP,0x4
// 00442c94: TEST EAX,EAX
// 00442c96: JL 0x00442c9d
//   XREF to: 00442c9d (CONDITIONAL_JUMP)
// 00442c98: CMP EAX,0xa
// 00442c9b: JNZ 0x00442c8b
//   XREF to: 00442c8b (CONDITIONAL_JUMP)
// 00442c9d: PUSH EDI
//   Label: LAB_00442c9d
// 00442c9e: PUSH 0x6190b7
//   XREF to: 006190b7 (DATA)
// 00442ca3: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x184] (DATA)
// 00442ca7: PUSH EAX
// 00442ca8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00442cad: ADD ESP,0xc
// 00442cb0: MOV EAX,ESP
// 00442cb2: PUSH EAX
// 00442cb3: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00442cb9: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 00442cba: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 00442cbf: ADD ESP,0x8
// 00442cc2: MOV EAX,dword ptr [ESP + 0x170]
//   XREF to: Stack[-0x14] (READ)
// 00442cc9: PUSH EAX
// 00442cca: PUSH ESI
// 00442ccb: MOV EDX,dword ptr [ESP + 0x190]
//   XREF to: Stack[0x4] (READ)
// 00442cd2: PUSH EDX
// 00442cd3: CALL core_course.cpp_CCourse_importMatrices_FUN_00442ea0
//   XREF to: 00442ea0 (UNCONDITIONAL_CALL)
// 00442cd8: ADD ESP,0xc
// 00442cdb: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00442ce1: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00442ce2: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 00442ce7: ADD ESP,0x4
// 00442cea: PUSH 0x178
// 00442cef: PUSH 0x6190c4
//   XREF to: 006190c4 (DATA)
// 00442cf4: PUSH ESI
// 00442cf5: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00442cfa: MOV EAX,0x1
// 00442cff: ADD ESP,0xc
// 00442d02: ADD ESP,0x174
// 00442d08: POP EBP
// 00442d09: POP EDI
// 00442d0a: POP ESI
// 00442d0b: POP EBX
// 00442d0c: RET
// 00442d0d: PUSH EDI
//   Label: LAB_00442d0d
// 00442d0e: PUSH 0x61905f
//   XREF to: 0061905f (DATA)
// 00442d13: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00442d19: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00442d1a: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00442d1f: ADD ESP,0xc
// 00442d22: XOR EAX,EAX
// 00442d24: ADD ESP,0x174
// 00442d2a: POP EBP
// 00442d2b: POP EDI
// 00442d2c: POP ESI
// 00442d2d: POP EBX
// 00442d2e: RET
// 00442d2f: PUSH ECX
//   Label: LAB_00442d2f
// 00442d30: PUSH EDI
// 00442d31: PUSH 0x619078
//   XREF to: 00619078 (DATA)
// 00442d36: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00442d3c: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00442d3d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00442d42: ADD ESP,0x10
// 00442d45: PUSH 0x161
// 00442d4a: PUSH 0x6190a4
//   XREF to: 006190a4 (DATA)
// 00442d4f: PUSH ESI
// 00442d50: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00442d55: ADD ESP,0xc
// 00442d58: XOR EAX,EAX
// 00442d5a: ADD ESP,0x174
// 00442d60: POP EBP
// 00442d61: POP EDI
// 00442d62: POP ESI
// 00442d63: POP EBX
// 00442d64: RET
