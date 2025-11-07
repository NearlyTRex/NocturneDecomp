// Name: core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0
// Address: 0058a3d0
// Address Range: [[0058a3d0, 0058a49f]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0(CBoneStructure * this_ptr, char * filename)
// Cross-references:
//   core_skeledit.cpp_FUN_00592690 (00592690) at 0059299f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeledit_cpp_0064a279
//   TerminatedCString s_rt_0064a28e
//   TerminatedCString s_core_skeledit_cpp_0064a291
//   TerminatedCString s_CBoneStructure_importBON_0064a2a6
//   TerminatedCString s_d_0064a2ce
//   TerminatedCString s_core_skeledit_cpp_0064a2d2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0
//   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10
//   core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0(CBoneStructure *this_ptr,char *filename)

{
  CBoneStructure *this_ptr_00;
  int iVar1;
  char *unaff_EBX;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int *unaff_ESI;
  char *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x30);
  this_ptr_00 = (CBoneStructure *)
                shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (in_stack_00000010,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                           0x27c);
  if (this_ptr_00 == (CBoneStructure *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x27d;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CBoneStructure::importBON can't open %s",in_stack_00000010);
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)this_ptr_00);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)this_ptr_00,"%d\n");
  core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
            (this_ptr_00,(FILE *)&stack0x00000004,unaff_ESI);
  core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10(this_ptr_00,(FILE *)0x0,(int)unaff_EBX)
  ;
  shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)this_ptr_00,"..\\core\\skeledit.cpp",0x290);
  core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0((CBoneStructure *)filename);
  return;
}


// Assembly code:
// 0058a3d0: PUSH 0x30
//   Label: core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0
// 0058a3d5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058a3da: PUSH EBX
// 0058a3db: PUSH ESI
// 0058a3dc: PUSH EDI
// 0058a3dd: PUSH EBP
// 0058a3de: SUB ESP,0x8
// 0058a3e1: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0058a3e5: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0058a3e9: PUSH 0x27c
// 0058a3ee: PUSH 0x64a279
//   XREF to: 0064a279 (DATA)
// 0058a3f3: PUSH 0x64a28e
//   XREF to: 0064a28e (DATA)
// 0058a3f8: PUSH 0x0
// 0058a3fa: PUSH EBX
// 0058a3fb: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0058a400: ADD ESP,0x14
// 0058a403: MOV EDI,EAX
// 0058a405: TEST EAX,EAX
// 0058a407: JZ 0x0058a477
//   XREF to: 0058a477 (CONDITIONAL_JUMP)
// 0058a409: MOV EBX,0x1
//   Label: LAB_0058a409
// 0058a40e: MOV ESI,EDI
// 0058a410: PUSH ESI
//   Label: LAB_0058a410
// 0058a411: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058a416: ADD ESP,0x4
// 0058a419: TEST EAX,EAX
// 0058a41b: JL 0x0058a427
//   XREF to: 0058a427 (CONDITIONAL_JUMP)
// 0058a41d: CMP EAX,0xa
// 0058a420: JNZ 0x0058a410
//   XREF to: 0058a410 (CONDITIONAL_JUMP)
// 0058a422: DEC EBX
// 0058a423: TEST EBX,EBX
// 0058a425: JG 0x0058a410
//   XREF to: 0058a410 (CONDITIONAL_JUMP)
// 0058a427: MOV EAX,ESP
//   Label: LAB_0058a427
// 0058a429: PUSH EAX
// 0058a42a: PUSH 0x64a2ce
//   XREF to: 0064a2ce (DATA)
// 0058a42f: PUSH EDI
// 0058a430: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058a435: ADD ESP,0xc
// 0058a438: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14] (DATA)
// 0058a43c: PUSH EAX
// 0058a43d: PUSH EDI
// 0058a43e: PUSH EBP
// 0058a43f: CALL core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0
//   XREF to: 0058a4a0 (UNCONDITIONAL_CALL)
// 0058a444: ADD ESP,0xc
// 0058a447: PUSH 0x0
// 0058a449: PUSH EDI
// 0058a44a: PUSH EBP
// 0058a44b: CALL core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10
//   XREF to: 0058aa10 (UNCONDITIONAL_CALL)
// 0058a450: ADD ESP,0xc
// 0058a453: PUSH 0x290
// 0058a458: PUSH 0x64a2d2
//   XREF to: 0064a2d2 (DATA)
// 0058a45d: PUSH EDI
// 0058a45e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0058a463: ADD ESP,0xc
// 0058a466: PUSH EBP
// 0058a467: CALL core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0
//   XREF to: 0058adb0 (UNCONDITIONAL_CALL)
// 0058a46c: ADD ESP,0x4
// 0058a46f: ADD ESP,0x8
// 0058a472: POP EBP
// 0058a473: POP EDI
// 0058a474: POP ESI
// 0058a475: POP EBX
// 0058a476: RET
// 0058a477: PUSH EBX
//   Label: LAB_0058a477
// 0058a478: MOV EDX,0x64a291
//   XREF to: 0064a291 (DATA)
// 0058a47d: MOV ECX,0x27d
// 0058a482: PUSH 0x64a2a6
//   XREF to: 0064a2a6 (DATA)
// 0058a487: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0058a48d: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0058a493: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058a498: ADD ESP,0x8
// 0058a49b: JMP 0x0058a409
//   XREF to: 0058a409 (UNCONDITIONAL_JUMP)
