// Name: core_course.cpp_OpeningCourseFile2_FUN_00442d70
// Address: 00442d70
// Address Range: [[00442d70, 00442e9f]]
// Convention: unknown
// Signature: undefined core_course.cpp_OpeningCourseFile2_FUN_00442d70()
// Cross-references:
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443278 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_course_cpp_006190d7
//   TerminatedCString s_rt_006190ea
//   TerminatedCString s_Can_t_open_s_006190ed
//   TerminatedCString s_d_006190fb
//   TerminatedCString s_d_006190ff
//   TerminatedCString s_Importing_s_00619103
//   TerminatedCString s_core_course_cpp_00619110
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

/* Signature: undefined1 core_course.cpp_OpeningCourseFile2(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_course_cpp_OpeningCourseFile2_FUN_00442d70(void)

{
  FILE *file;
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000008;
  CCourse *in_stack_00000024;
  
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (in_stack_00000008,(char *)0x0,"rt","..\\core\\course.cpp",0x184);
  if (file == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s",in_stack_00000008);
    return 0;
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&stack0xfffffff4);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&stack0x00000000);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe9c,"Importing %s",in_stack_00000008);
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,&stack0xfffffea0);
  core_course_cpp_CCourse_importMatrices_FUN_00442ea0(in_stack_00000024);
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x1a7);
  return 1;
}


// Assembly code:
// 00442d70: PUSH ESI
//   Label: core_course.cpp_OpeningCourseFile2_FUN_00442d70
// 00442d71: PUSH EDI
// 00442d72: PUSH EBP
// 00442d73: SUB ESP,0x170
// 00442d79: MOV EDI,dword ptr [ESP + 0x184]
//   XREF to: Stack[0x8] (READ)
// 00442d80: PUSH 0x184
// 00442d85: PUSH 0x6190d7
//   XREF to: 006190d7 (DATA)
// 00442d8a: PUSH 0x6190ea
//   XREF to: 006190ea (DATA)
// 00442d8f: PUSH 0x0
// 00442d91: PUSH EDI
// 00442d92: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00442d97: ADD ESP,0x14
// 00442d9a: MOV ESI,EAX
// 00442d9c: TEST EAX,EAX
// 00442d9e: JZ 0x00442e7f
//   XREF to: 00442e7f (CONDITIONAL_JUMP)
// 00442da4: PUSH EBX
// 00442da5: MOV EBX,EAX
// 00442da7: PUSH EBX
//   Label: LAB_00442da7
// 00442da8: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00442dad: ADD ESP,0x4
// 00442db0: TEST EAX,EAX
// 00442db2: JL 0x00442db9
//   XREF to: 00442db9 (CONDITIONAL_JUMP)
// 00442db4: CMP EAX,0xa
// 00442db7: JNZ 0x00442da7
//   XREF to: 00442da7 (CONDITIONAL_JUMP)
// 00442db9: LEA EAX,[ESP + 0x16c]
//   Label: LAB_00442db9
//   XREF to: Stack[-0x14] (DATA)
// 00442dc0: PUSH EAX
// 00442dc1: PUSH 0x6190fb
//   XREF to: 006190fb (DATA)
// 00442dc6: PUSH ESI
// 00442dc7: MOV EBX,ESI
// 00442dc9: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00442dce: ADD ESP,0xc
// 00442dd1: PUSH EBX
//   Label: LAB_00442dd1
// 00442dd2: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00442dd7: ADD ESP,0x4
// 00442dda: TEST EAX,EAX
// 00442ddc: JL 0x00442de3
//   XREF to: 00442de3 (CONDITIONAL_JUMP)
// 00442dde: CMP EAX,0xa
// 00442de1: JNZ 0x00442dd1
//   XREF to: 00442dd1 (CONDITIONAL_JUMP)
// 00442de3: LEA EAX,[ESP + 0x170]
//   Label: LAB_00442de3
//   XREF to: Stack[-0x10] (DATA)
// 00442dea: PUSH EAX
// 00442deb: PUSH 0x6190ff
//   XREF to: 006190ff (DATA)
// 00442df0: PUSH ESI
// 00442df1: MOV EBX,ESI
// 00442df3: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00442df8: ADD ESP,0xc
// 00442dfb: PUSH EBX
//   Label: LAB_00442dfb
// 00442dfc: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00442e01: ADD ESP,0x4
// 00442e04: TEST EAX,EAX
// 00442e06: JL 0x00442e0d
//   XREF to: 00442e0d (CONDITIONAL_JUMP)
// 00442e08: CMP EAX,0xa
// 00442e0b: JNZ 0x00442dfb
//   XREF to: 00442dfb (CONDITIONAL_JUMP)
// 00442e0d: PUSH EDI
//   Label: LAB_00442e0d
// 00442e0e: PUSH 0x619103
//   XREF to: 00619103 (DATA)
// 00442e13: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x17c] (DATA)
// 00442e17: PUSH EAX
// 00442e18: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00442e1d: ADD ESP,0xc
// 00442e20: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x17c] (DATA)
// 00442e24: PUSH EAX
// 00442e25: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00442e2b: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00442e2c: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 00442e31: ADD ESP,0x8
// 00442e34: MOV EBX,dword ptr [ESP + 0x170]
//   XREF to: Stack[-0x10] (READ)
// 00442e3b: PUSH EBX
// 00442e3c: PUSH ESI
// 00442e3d: MOV EDI,dword ptr [ESP + 0x18c]
//   XREF to: Stack[0x4] (READ)
// 00442e44: PUSH EDI
// 00442e45: CALL core_course.cpp_CCourse_importMatrices_FUN_00442ea0
//   XREF to: 00442ea0 (UNCONDITIONAL_CALL)
// 00442e4a: ADD ESP,0xc
// 00442e4d: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00442e53: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 00442e54: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 00442e59: ADD ESP,0x4
// 00442e5c: PUSH 0x1a7
// 00442e61: PUSH 0x619110
//   XREF to: 00619110 (DATA)
// 00442e66: PUSH ESI
// 00442e67: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00442e6c: MOV EAX,0x1
// 00442e71: ADD ESP,0xc
// 00442e74: POP EBX
// 00442e75: ADD ESP,0x170
// 00442e7b: POP EBP
// 00442e7c: POP EDI
// 00442e7d: POP ESI
// 00442e7e: RET
// 00442e7f: PUSH EDI
//   Label: LAB_00442e7f
// 00442e80: PUSH 0x6190ed
//   XREF to: 006190ed (DATA)
// 00442e85: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00442e8b: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00442e8c: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00442e91: ADD ESP,0xc
// 00442e94: XOR EAX,EAX
// 00442e96: ADD ESP,0x170
// 00442e9c: POP EBP
// 00442e9d: POP EDI
// 00442e9e: POP ESI
// 00442e9f: RET
