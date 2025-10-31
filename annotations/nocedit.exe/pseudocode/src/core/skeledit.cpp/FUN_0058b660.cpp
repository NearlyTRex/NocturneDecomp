// Name: core_skeledit.cpp_FUN_0058b660
// Address: 0058b660
// Address Range: [[0058b660, 0058b8d7]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058b660()
// Globals:
//   TerminatedCString s_Importing_deformable_mod_0064a78e
//   TerminatedCString s_core_skeledit_cpp_0064a7b4
//   TerminatedCString s_rt_0064a7c9
//   TerminatedCString s_core_skeledit_cpp_0064a7cc
//   TerminatedCString s_Can_t_open_s_0064a7e1
//   TerminatedCString s_d_0064a7ef
//   TerminatedCString s_core_skeledit_cpp_0064a7f3
//   TerminatedCString s_s_has_incorrect_S3D_vers_0064a808
//   TerminatedCString s_d_d_d_d_d_d_d_0064a84f
//   TerminatedCString s_core_skeledit_cpp_0064a865
//   TerminatedCString s_s_is_corrupt_0064a87a
//   TerminatedCString s_core_skeledit_cpp_0064a889
//   TerminatedCString s_Imported_deformable_mode_0064a89e
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_FUN_0058b8e0
//   core_skeledit.cpp_FUN_0058b9b0
//   core_skeledit.cpp_FUN_0058bc40
//   core_skeledit.cpp_FUN_0058e240
//   core_skeledit.cpp_FUN_0058f790
//   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
//   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0
//   core_skeleton.cpp_CDeformableModel_FUN_0059a2b0
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058b660(void)

{
  FILE *file;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int unaff_ESI;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  int in_stack_00000020;
  char *local_2c;
  char *local_28;
  int in_stack_ffffffdc;
  char *local_18;
  FILE *file_00;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x6c);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing deformable model from %s...");
  core_skeleton_cpp_CDeformableModel_FUN_0059a2b0();
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (in_stack_00000010,(char *)0x0,"rt","..\\core\\skeledit.cpp",0x4ba);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x4bb;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",in_stack_00000010);
  }
  iVar2 = 1;
  file_00 = file;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_00);
    local_2c = (char *)&local_2c;
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n");
  if ((in_stack_ffffffdc < 0x65) || (0x67 < in_stack_ffffffdc)) {
    local_2c = in_stack_00000010;
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x4c2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("%s has incorrect S3D version %d in CDeformableModel::importGeometryS3D");
  }
  iVar2 = 1;
  do {
    local_28 = (char *)0x58b736;
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  local_28 = &stack0xfffffff8;
  local_2c = &stack0xfffffff4;
  iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                    (file,"%d,%d,%d,%d,%d,%d,%d\n",&local_18,&stack0xffffffec,&stack0xfffffff0);
  if (iVar2 == 7) goto LAB_0058b7a0;
  do {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x4ca;
    local_28 = (char *)0x58b79d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("%s is corrupt!");
LAB_0058b7a0:
    local_28 = (char *)0x1;
    local_2c = in_stack_0000000c;
    core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0();
    local_18 = (char *)0x0;
    local_28 = in_stack_0000000c;
    local_2c = (char *)0x58b7c8;
    core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510();
    iVar2 = 1;
    do {
      local_18 = (char *)0x58b7de;
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
LAB_0058b7f5:
    if (in_stack_00000020 < unaff_ESI) {
      iVar2 = 1;
      do {
        local_18 = (char *)0x58b812;
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
        if (iVar1 < 0) break;
      } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
      goto LAB_0058b7f5;
    }
    local_18 = in_stack_0000000c;
    iVar2 = core_skeledit_cpp_FUN_0058b8e0();
    if (iVar2 != 0) {
      local_18 = (char *)0x58b879;
      iVar2 = core_skeledit_cpp_FUN_0058b9b0();
      if ((iVar2 != 0) && (iVar2 = core_skeledit_cpp_FUN_0058bc40(), iVar2 != 0)) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x4e7);
        core_skeledit_cpp_FUN_0058f790();
        core_skeledit_cpp_FUN_0058e240();
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Imported deformable model from %s OK");
        return;
      }
    }
  } while( true );
}


// Assembly code:
// 0058b660: PUSH 0x6c
//   Label: core_skeledit.cpp_FUN_0058b660
// 0058b665: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058b66a: PUSH EBX
// 0058b66b: PUSH ESI
// 0058b66c: PUSH EDI
// 0058b66d: PUSH EBP
// 0058b66e: SUB ESP,0x34
// 0058b671: MOV ESI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0058b675: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0058b679: PUSH EDI
// 0058b67a: PUSH 0x64a78e
//   XREF to: 0064a78e (DATA)
// 0058b67f: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058b685: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0058b686: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0058b68b: ADD ESP,0xc
// 0058b68e: PUSH ESI
// 0058b68f: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a2b0
//   XREF to: 0059a2b0 (UNCONDITIONAL_CALL)
// 0058b694: ADD ESP,0x4
// 0058b697: PUSH 0x4ba
// 0058b69c: PUSH 0x64a7b4
//   XREF to: 0064a7b4 (DATA)
// 0058b6a1: PUSH 0x64a7c9
//   XREF to: 0064a7c9 (DATA)
// 0058b6a6: PUSH 0x0
// 0058b6a8: PUSH EDI
// 0058b6a9: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0058b6ae: ADD ESP,0x14
// 0058b6b1: MOV EBX,EAX
// 0058b6b3: TEST EAX,EAX
// 0058b6b5: JZ 0x0058b829
//   XREF to: 0058b829 (CONDITIONAL_JUMP)
// 0058b6bb: MOV EBP,0x1
//   Label: LAB_0058b6bb
// 0058b6c0: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058b6c4: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0058b6c4
//   XREF to: Stack[-0x1c] (READ)
// 0058b6c8: PUSH EAX
// 0058b6c9: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058b6ce: ADD ESP,0x4
// 0058b6d1: TEST EAX,EAX
// 0058b6d3: JL 0x0058b6df
//   XREF to: 0058b6df (CONDITIONAL_JUMP)
// 0058b6d5: CMP EAX,0xa
// 0058b6d8: JNZ 0x0058b6c4
//   XREF to: 0058b6c4 (CONDITIONAL_JUMP)
// 0058b6da: DEC EBP
// 0058b6db: TEST EBP,EBP
// 0058b6dd: JG 0x0058b6c4
//   XREF to: 0058b6c4 (CONDITIONAL_JUMP)
// 0058b6df: MOV EAX,ESP
//   Label: LAB_0058b6df
// 0058b6e1: PUSH EAX
// 0058b6e2: PUSH 0x64a7ef
//   XREF to: 0064a7ef (DATA)
// 0058b6e7: PUSH EBX
// 0058b6e8: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058b6ed: ADD ESP,0xc
// 0058b6f0: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x44] (DATA)
// 0058b6f3: CMP EDX,0x65
// 0058b6f6: JGE 0x0058b852
//   XREF to: 0058b852 (CONDITIONAL_JUMP)
// 0058b6fc: MOV EDX,dword ptr [ESP]
//   Label: LAB_0058b6fc
//   XREF to: Stack[-0x44] (DATA)
// 0058b6ff: PUSH EDX
// 0058b700: PUSH EDI
// 0058b701: MOV EBP,0x64a7f3
//   XREF to: 0064a7f3 (DATA)
// 0058b706: MOV EAX,0x4c2
// 0058b70b: PUSH 0x64a808
//   XREF to: 0064a808 (DATA)
// 0058b710: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0058b716: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0058b71b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058b720: ADD ESP,0xc
// 0058b723: MOV EBP,0x1
//   Label: LAB_0058b723
// 0058b728: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0058b72c: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_0058b72c
//   XREF to: Stack[-0x20] (READ)
// 0058b730: PUSH ECX
// 0058b731: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058b736: ADD ESP,0x4
// 0058b739: TEST EAX,EAX
// 0058b73b: JL 0x0058b747
//   XREF to: 0058b747 (CONDITIONAL_JUMP)
// 0058b73d: CMP EAX,0xa
// 0058b740: JNZ 0x0058b72c
//   XREF to: 0058b72c (CONDITIONAL_JUMP)
// 0058b742: DEC EBP
// 0058b743: TEST EBP,EBP
// 0058b745: JG 0x0058b72c
//   XREF to: 0058b72c (CONDITIONAL_JUMP)
// 0058b747: LEA EAX,[ESP + 0x1c]
//   Label: LAB_0058b747
//   XREF to: Stack[-0x28] (DATA)
// 0058b74b: PUSH EAX
// 0058b74c: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0058b750: PUSH EAX
// 0058b751: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x30] (DATA)
// 0058b755: PUSH EAX
// 0058b756: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x34] (DATA)
// 0058b75a: PUSH EAX
// 0058b75b: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x38] (DATA)
// 0058b75f: PUSH EAX
// 0058b760: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x3c] (DATA)
// 0058b764: PUSH EAX
// 0058b765: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x40] (DATA)
// 0058b769: PUSH EAX
// 0058b76a: PUSH 0x64a84f
//   XREF to: 0064a84f (DATA)
// 0058b76f: PUSH EBX
// 0058b770: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058b775: ADD ESP,0x24
// 0058b778: CMP EAX,0x7
// 0058b77b: JZ 0x0058b7a0
//   XREF to: 0058b7a0 (CONDITIONAL_JUMP)
// 0058b77d: PUSH EDI
//   Label: LAB_0058b77d
// 0058b77e: MOV EBP,0x64a865
//   XREF to: 0064a865 (DATA)
// 0058b783: MOV EAX,0x4ca
// 0058b788: PUSH 0x64a87a
//   XREF to: 0064a87a (DATA)
// 0058b78d: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0058b793: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0058b798: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058b79d: ADD ESP,0x8
// 0058b7a0: PUSH 0x1
//   Label: LAB_0058b7a0
// 0058b7a2: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 0058b7a6: PUSH EDX
// 0058b7a7: PUSH 0x1
// 0058b7a9: PUSH 0x1
// 0058b7ab: PUSH ESI
// 0058b7ac: CALL core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0
//   XREF to: 0059a3f0 (UNCONDITIONAL_CALL)
// 0058b7b1: ADD ESP,0x14
// 0058b7b4: PUSH 0x0
// 0058b7b6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x3c] (READ)
// 0058b7ba: PUSH ECX
// 0058b7bb: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x38] (READ)
// 0058b7bf: PUSH EBP
// 0058b7c0: PUSH 0x0
// 0058b7c2: PUSH ESI
// 0058b7c3: CALL core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
//   XREF to: 0059a510 (UNCONDITIONAL_CALL)
// 0058b7c8: ADD ESP,0x14
// 0058b7cb: MOV EBP,0x1
// 0058b7d0: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0058b7d4: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_0058b7d4
//   XREF to: Stack[-0x18] (READ)
// 0058b7d8: PUSH EAX
// 0058b7d9: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058b7de: ADD ESP,0x4
// 0058b7e1: TEST EAX,EAX
// 0058b7e3: JL 0x0058b7ef
//   XREF to: 0058b7ef (CONDITIONAL_JUMP)
// 0058b7e5: CMP EAX,0xa
// 0058b7e8: JNZ 0x0058b7d4
//   XREF to: 0058b7d4 (CONDITIONAL_JUMP)
// 0058b7ea: DEC EBP
// 0058b7eb: TEST EBP,EBP
// 0058b7ed: JG 0x0058b7d4
//   XREF to: 0058b7d4 (CONDITIONAL_JUMP)
// 0058b7ef: XOR EDX,EDX
//   Label: LAB_0058b7ef
// 0058b7f1: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0058b7f5: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0058b7f5
//   XREF to: Stack[-0x14] (READ)
// 0058b7f9: CMP EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x34] (READ)
// 0058b7fd: JGE 0x0058b860
//   XREF to: 0058b860 (CONDITIONAL_JUMP)
// 0058b7ff: MOV EBP,0x1
// 0058b804: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0058b808: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0058b808
//   XREF to: Stack[-0x24] (READ)
// 0058b80c: PUSH EAX
// 0058b80d: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058b812: ADD ESP,0x4
// 0058b815: TEST EAX,EAX
// 0058b817: JL 0x0058b823
//   XREF to: 0058b823 (CONDITIONAL_JUMP)
// 0058b819: CMP EAX,0xa
// 0058b81c: JNZ 0x0058b808
//   XREF to: 0058b808 (CONDITIONAL_JUMP)
// 0058b81e: DEC EBP
// 0058b81f: TEST EBP,EBP
// 0058b821: JG 0x0058b808
//   XREF to: 0058b808 (CONDITIONAL_JUMP)
// 0058b823: INC dword ptr [ESP + 0x30]
//   Label: LAB_0058b823
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0058b827: JMP 0x0058b7f5
//   XREF to: 0058b7f5 (UNCONDITIONAL_JUMP)
// 0058b829: PUSH EDI
//   Label: LAB_0058b829
// 0058b82a: MOV ECX,0x64a7cc
//   XREF to: 0064a7cc (DATA)
// 0058b82f: MOV EBP,0x4bb
// 0058b834: PUSH 0x64a7e1
//   XREF to: 0064a7e1 (DATA)
// 0058b839: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0058b83f: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0058b845: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058b84a: ADD ESP,0x8
// 0058b84d: JMP 0x0058b6bb
//   XREF to: 0058b6bb (UNCONDITIONAL_JUMP)
// 0058b852: CMP EDX,0x67
//   Label: LAB_0058b852
// 0058b855: JG 0x0058b6fc
//   XREF to: 0058b6fc (CONDITIONAL_JUMP)
// 0058b85b: JMP 0x0058b723
//   XREF to: 0058b723 (UNCONDITIONAL_JUMP)
// 0058b860: PUSH EBX
//   Label: LAB_0058b860
// 0058b861: PUSH ESI
// 0058b862: CALL core_skeledit.cpp_FUN_0058b8e0
//   XREF to: 0058b8e0 (UNCONDITIONAL_CALL)
// 0058b867: ADD ESP,0x8
// 0058b86a: TEST EAX,EAX
// 0058b86c: JZ 0x0058b77d
//   XREF to: 0058b77d (CONDITIONAL_JUMP)
// 0058b872: PUSH EBX
// 0058b873: PUSH ESI
// 0058b874: CALL core_skeledit.cpp_FUN_0058b9b0
//   XREF to: 0058b9b0 (UNCONDITIONAL_CALL)
// 0058b879: ADD ESP,0x8
// 0058b87c: TEST EAX,EAX
// 0058b87e: JZ 0x0058b77d
//   XREF to: 0058b77d (CONDITIONAL_JUMP)
// 0058b884: PUSH EBX
// 0058b885: PUSH ESI
// 0058b886: CALL core_skeledit.cpp_FUN_0058bc40
//   XREF to: 0058bc40 (UNCONDITIONAL_CALL)
// 0058b88b: ADD ESP,0x8
// 0058b88e: TEST EAX,EAX
// 0058b890: JZ 0x0058b77d
//   XREF to: 0058b77d (CONDITIONAL_JUMP)
// 0058b896: PUSH 0x4e7
// 0058b89b: PUSH 0x64a889
//   XREF to: 0064a889 (DATA)
// 0058b8a0: PUSH EBX
// 0058b8a1: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0058b8a6: ADD ESP,0xc
// 0058b8a9: PUSH ESI
// 0058b8aa: CALL core_skeledit.cpp_FUN_0058f790
//   XREF to: 0058f790 (UNCONDITIONAL_CALL)
// 0058b8af: ADD ESP,0x4
// 0058b8b2: PUSH ESI
// 0058b8b3: CALL core_skeledit.cpp_FUN_0058e240
//   XREF to: 0058e240 (UNCONDITIONAL_CALL)
// 0058b8b8: ADD ESP,0x4
// 0058b8bb: PUSH EDI
// 0058b8bc: PUSH 0x64a89e
//   XREF to: 0064a89e (DATA)
// 0058b8c1: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058b8c7: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0058b8c8: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0058b8cd: ADD ESP,0xc
// 0058b8d0: ADD ESP,0x34
// 0058b8d3: POP EBP
// 0058b8d4: POP EDI
// 0058b8d5: POP ESI
// 0058b8d6: POP EBX
// 0058b8d7: RET
