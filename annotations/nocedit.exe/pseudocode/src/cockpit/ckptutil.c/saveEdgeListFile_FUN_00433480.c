// Name: cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480
// Address: 00433480
// Address Range: [[00433480, 004335e8]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480(char * filename, SEdgeList * edge_lists, int edge_list_count)
// Globals:
//   TerminatedCString s_cockpit_ckptutil_c_00617d1a
//   TerminatedCString s_Edge_list_array_is_empty_00617d30
//   TerminatedCString s_wt_00617d4a
//   TerminatedCString s_art_00617d4d
//   TerminatedCString s_Could_not_create_output__00617d51
//   TerminatedCString s_cockpit_ckptutil_c_00617d74
//   TerminatedCString s_d_00617d8a
//   TerminatedCString s_d_00617d8e
//   TerminatedCString s_s_3d_3d_3d_3d_d_00617d92
//   TerminatedCString s_cockpit_ckptutil_c_00617da6
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_saveEdgeListFile_FUN_00433480
          (char *filename,SEdgeList *edge_lists,int edge_list_count)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  FILE *file;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int iVar6;
  int in_stack_0000001c;
  
  if (edge_lists == (SEdgeList *)0x0) {
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x500;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Edge list array is empty!");
  }
  file = engine_dosio_c_getFile_FUN_00481a50("art",filename,"wt");
  if (file == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff9c,"Could not create output file (%s).",filename);
    g_CurrentLineNumber = 0x507;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffa0);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  if (0 < edge_list_count) {
    iVar6 = 0;
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
      iVar5 = 0;
      for (iVar4 = 0; iVar4 < ((int *)(in_stack_0000001c + iVar6))[1]; iVar4 = iVar4 + 1) {
        iVar3 = *(int *)(in_stack_0000001c + iVar6);
        iVar2 = iVar5 + 2;
        psVar1 = (short *)(iVar5 + iVar3);
        iVar5 = iVar5 + 8;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (file,"%3d %3d %3d %3d %d\n",(int)*psVar1,(int)*(short *)(iVar2 + iVar3));
      }
      iVar6 = iVar6 + 8;
    } while (iVar6 < edge_list_count << 3);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0x522);
  return;
}


// Assembly code:
// 00433480: PUSH EBX
//   Label: cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480
// 00433481: PUSH ESI
// 00433482: PUSH EDI
// 00433483: PUSH EBP
// 00433484: SUB ESP,0x5c
// 00433487: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 0043348b: MOV EBX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0xc] (READ)
// 0043348f: CMP dword ptr [ESP + 0x74],0x0
//   XREF to: Stack[0x8] (READ)
// 00433494: JZ 0x00433584
//   XREF to: 00433584 (CONDITIONAL_JUMP)
// 0043349a: PUSH 0x617d4a
//   Label: LAB_0043349a
//   XREF to: 00617d4a (DATA)
// 0043349f: PUSH ESI
// 004334a0: PUSH 0x617d4d
//   XREF to: 00617d4d (DATA)
// 004334a5: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004334aa: ADD ESP,0xc
// 004334ad: MOV EDI,EAX
// 004334af: TEST EAX,EAX
// 004334b1: JNZ 0x004334e6
//   XREF to: 004334e6 (CONDITIONAL_JUMP)
// 004334b3: PUSH ESI
// 004334b4: PUSH 0x617d51
//   XREF to: 00617d51 (DATA)
// 004334b9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 004334bd: PUSH EAX
// 004334be: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004334c3: MOV EAX,0x507
// 004334c8: ADD ESP,0xc
// 004334cb: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004334d0: MOV EAX,ESP
// 004334d2: MOV EBP,0x617d74
//   XREF to: 00617d74 (DATA)
// 004334d7: PUSH EAX
// 004334d8: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004334de: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004334e3: ADD ESP,0x4
// 004334e6: PUSH EBX
//   Label: LAB_004334e6
// 004334e7: PUSH 0x617d8a
//   XREF to: 00617d8a (DATA)
// 004334ec: PUSH EDI
// 004334ed: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004334f2: ADD ESP,0xc
// 004334f5: TEST EBX,EBX
// 004334f7: JLE 0x004335ce
//   XREF to: 004335ce (CONDITIONAL_JUMP)
// 004334fd: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 00433501: SHL EBX,0x3
// 00433504: XOR ESI,ESI
// 00433506: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0043350a: MOV dword ptr [ESP + 0x50],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0043350e: MOV dword ptr [ESP + 0x58],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00433512: MOV EAX,dword ptr [ESP + 0x54]
//   Label: LAB_00433512
//   XREF to: Stack[-0x18] (READ)
// 00433516: MOV EBP,dword ptr [EAX + 0x4]
// 00433519: PUSH EBP
// 0043351a: PUSH 0x617d8e
//   XREF to: 00617d8e (DATA)
// 0043351f: PUSH EDI
// 00433520: XOR EBX,EBX
// 00433522: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00433527: ADD ESP,0xc
// 0043352a: XOR ESI,ESI
// 0043352c: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x14] (READ)
// 00433530: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_00433530
//   XREF to: Stack[0x8] (READ)
// 00433534: ADD EAX,EBP
// 00433536: CMP EBX,dword ptr [EAX + 0x4]
// 00433539: JGE 0x004335ac
//   XREF to: 004335ac (CONDITIONAL_JUMP)
// 0043353b: MOV EAX,dword ptr [EAX]
// 0043353d: MOV DX,word ptr [ESI + EAX*0x1 + 0x6]
// 00433542: MOV ECX,EDX
// 00433544: SHR CX,0xf
// 00433548: ADD EDX,EDX
// 0043354a: AND ECX,0xffff
// 00433550: SAR DX,0x1
// 00433553: PUSH ECX
// 00433554: MOVSX ECX,DX
// 00433557: MOV DX,word ptr [ESI + EAX*0x1 + 0x4]
// 0043355c: PUSH ECX
// 0043355d: MOVSX ECX,DX
// 00433560: MOV DX,word ptr [ESI + EAX*0x1 + 0x2]
// 00433565: PUSH ECX
// 00433566: MOVSX ECX,DX
// 00433569: MOV AX,word ptr [ESI + EAX*0x1]
// 0043356d: PUSH ECX
// 0043356e: CWDE
// 0043356f: PUSH EAX
// 00433570: PUSH 0x617d92
//   XREF to: 00617d92 (DATA)
// 00433575: PUSH EDI
// 00433576: ADD ESI,0x8
// 00433579: INC EBX
// 0043357a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0043357f: ADD ESP,0x1c
// 00433582: JMP 0x00433530
//   XREF to: 00433530 (UNCONDITIONAL_JUMP)
// 00433584: MOV ECX,0x617d1a
//   Label: LAB_00433584
//   XREF to: 00617d1a (DATA)
// 00433589: MOV EDI,0x500
// 0043358e: PUSH 0x617d30
//   XREF to: 00617d30 (DATA)
// 00433593: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00433599: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0043359f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004335a4: ADD ESP,0x4
// 004335a7: JMP 0x0043349a
//   XREF to: 0043349a (UNCONDITIONAL_JUMP)
// 004335ac: MOV EDX,dword ptr [ESP + 0x58]
//   Label: LAB_004335ac
//   XREF to: Stack[-0x14] (READ)
// 004335b0: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x18] (READ)
// 004335b4: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x1c] (READ)
// 004335b8: ADD EDX,0x8
// 004335bb: ADD ECX,0x8
// 004335be: MOV dword ptr [ESP + 0x58],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004335c2: MOV dword ptr [ESP + 0x54],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004335c6: CMP EDX,EBX
// 004335c8: JL 0x00433512
//   XREF to: 00433512 (CONDITIONAL_JUMP)
// 004335ce: PUSH 0x522
//   Label: LAB_004335ce
// 004335d3: PUSH 0x617da6
//   XREF to: 00617da6 (DATA)
// 004335d8: PUSH EDI
// 004335d9: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004335de: ADD ESP,0xc
// 004335e1: ADD ESP,0x5c
// 004335e4: POP EBP
// 004335e5: POP EDI
// 004335e6: POP ESI
// 004335e7: POP EBX
// 004335e8: RET
