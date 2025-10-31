// Name: cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0
// Address: 004331f0
// Address Range: [[004331f0, 0043343d]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0(char * filename, SEdgeList * edge_lists, int expected_count)
// Cross-references:
//   cockpit_ckptutil.c_loadSingleEdgeList_FUN_00433440 (00433440) at 00433455 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rb_00617b65
//   TerminatedCString s_art_00617b68
//   TerminatedCString s_Unable_to_open_edge_list_00617b6c
//   TerminatedCString s_cockpit_ckptutil_c_00617b90
//   TerminatedCString s_Unable_to_read_number_of_00617ba6
//   TerminatedCString s_cockpit_ckptutil_c_00617bd0
//   TerminatedCString s_Invalid_number_of_edge_l_00617be6
//   TerminatedCString s_cockpit_ckptutil_c_00617c11
//   TerminatedCString s_Unable_to_read_number_of_00617c27
//   TerminatedCString s_cockpit_ckptutil_c_00617c4c
//   TerminatedCString s_cockpit_ckptutil_c_00617c62
//   TerminatedCString s_cockpit_ckptutil_c_00617c78
//   TerminatedCString s_Unable_to_allocate_memor_00617c8e
//   TerminatedCString s_cockpit_ckptutil_c_00617cb9
//   TerminatedCString s_Unable_to_read_edge_list_00617ccf
//   TerminatedCString s_cockpit_ckptutil_c_00617cee
//   TerminatedCString s_cockpit_ckptutil_c_00617d04
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_unknown.c_FUN_005ff0d0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_loadEdgeListFile_FUN_004331f0
          (char *filename,SEdgeList *edge_lists,int expected_count)

{
  FILE *pFVar1;
  SIZE_T SVar2;
  void *pvVar3;
  BADSPACEBASE *in_ESP;
  FILE *unaff_ESI;
  int *buffer;
  int iVar4;
  int unaff_retaddr;
  int in_stack_00000024;
  char acStack_50 [64];
  
  pFVar1 = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb");
  if (pFVar1 == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffff9c,"Unable to open edge list file (%s).",edge_lists);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x4a7;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffa0);
  }
  SVar2 = crt_stdio_c_fread_FUN_005fd990(&stack0xfffffff4,4,1,unaff_ESI);
  if (SVar2 != 1) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa8,"Unable to read number of edge lists (%s).");
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x4b0;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffac);
  }
  if (unaff_retaddr != in_stack_00000024) {
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_50,"Invalid number of edge lists in file (%s).");
    g_CurrentLineNumber = 0x4b7;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffac);
  }
  iVar4 = 0;
  if (0 < in_stack_00000024) {
    buffer = &edge_lists->edge_count;
    do {
      SVar2 = crt_stdio_c_fread_FUN_005fd990(buffer,4,1,(FILE *)filename);
      if (SVar2 != 1) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa8,"Unable to read number of edges (%s).");
        g_CurrentFilename = "..\\cockpit\\ckptutil.c";
        g_CurrentLineNumber = 0x4c2;
        core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffac);
      }
      if (edge_lists->edge_data != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (edge_lists->edge_data,"..\\cockpit\\ckptutil.c",0x4c8);
      }
      if (0 < edge_lists->edge_count) {
        SVar2 = edge_lists->edge_count * 8;
        pvVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (SVar2,"..\\cockpit\\ckptutil.c",0x4d2);
        edge_lists->edge_data = pvVar3;
        if (pvVar3 == (void *)0x0) {
          crt_unknown_c_FUN_005ff0d0();
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x4d6;
          core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffa0);
        }
        SVar2 = crt_stdio_c_fread_FUN_005fd990(edge_lists->edge_data,SVar2,1,unaff_ESI);
        if (SVar2 != 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa8,"Unable to read edge list (%s).");
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x4dd;
          core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffac);
        }
      }
      buffer = buffer + 2;
      iVar4 = iVar4 + 1;
      edge_lists = edge_lists + 1;
    } while (iVar4 < in_stack_00000024);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)filename,"..\\cockpit\\ckptutil.c",0x4e2);
  return;
}


// Assembly code:
// 004331f0: PUSH EBX
//   Label: cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0
// 004331f1: PUSH ESI
// 004331f2: PUSH EDI
// 004331f3: PUSH EBP
// 004331f4: SUB ESP,0x58
// 004331f7: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 004331fb: PUSH 0x617b65
//   XREF to: 00617b65 (DATA)
// 00433200: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 00433204: PUSH EDX
// 00433205: PUSH 0x617b68
//   XREF to: 00617b68 (DATA)
// 0043320a: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0043320f: ADD ESP,0xc
// 00433212: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00433216: TEST EAX,EAX
// 00433218: JNZ 0x00433252
//   XREF to: 00433252 (CONDITIONAL_JUMP)
// 0043321a: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 0043321e: PUSH ECX
// 0043321f: PUSH 0x617b6c
//   XREF to: 00617b6c (DATA)
// 00433224: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x68] (DATA)
// 00433228: PUSH EAX
// 00433229: MOV ESI,0x617b90
//   XREF to: 00617b90 (DATA)
// 0043322e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00433233: ADD ESP,0xc
// 00433236: MOV EAX,ESP
// 00433238: MOV EDI,0x4a7
// 0043323d: PUSH EAX
// 0043323e: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00433244: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0043324a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043324f: ADD ESP,0x4
// 00433252: MOV EBP,dword ptr [ESP + 0x54]
//   Label: LAB_00433252
//   XREF to: Stack[-0x14] (READ)
// 00433256: PUSH EBP
// 00433257: PUSH 0x1
// 00433259: PUSH 0x4
// 0043325b: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x18] (DATA)
// 0043325f: PUSH EAX
// 00433260: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00433265: ADD ESP,0x10
// 00433268: CMP EAX,0x1
// 0043326b: JZ 0x004332a5
//   XREF to: 004332a5 (CONDITIONAL_JUMP)
// 0043326d: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00433271: PUSH EAX
// 00433272: PUSH 0x617ba6
//   XREF to: 00617ba6 (DATA)
// 00433277: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x68] (DATA)
// 0043327b: PUSH EAX
// 0043327c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00433281: MOV EDX,0x617bd0
//   XREF to: 00617bd0 (DATA)
// 00433286: ADD ESP,0xc
// 00433289: MOV EAX,ESP
// 0043328b: MOV ECX,0x4b0
// 00433290: PUSH EAX
// 00433291: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00433297: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0043329d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004332a2: ADD ESP,0x4
// 004332a5: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_004332a5
//   XREF to: Stack[-0x18] (READ)
// 004332a9: CMP EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 004332ad: JZ 0x004332e6
//   XREF to: 004332e6 (CONDITIONAL_JUMP)
// 004332af: MOV EDI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 004332b3: PUSH EDI
// 004332b4: PUSH 0x617be6
//   XREF to: 00617be6 (DATA)
// 004332b9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x68] (DATA)
// 004332bd: PUSH EAX
// 004332be: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004332c3: MOV EAX,0x4b7
// 004332c8: ADD ESP,0xc
// 004332cb: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004332d0: MOV EAX,ESP
// 004332d2: MOV EBP,0x617c11
//   XREF to: 00617c11 (DATA)
// 004332d7: PUSH EAX
// 004332d8: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004332de: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004332e3: ADD ESP,0x4
// 004332e6: MOV EDX,dword ptr [ESP + 0x74]
//   Label: LAB_004332e6
//   XREF to: Stack[0xc] (READ)
// 004332ea: XOR EDI,EDI
// 004332ec: TEST EDX,EDX
// 004332ee: JLE 0x004333ed
//   XREF to: 004333ed (CONDITIONAL_JUMP)
// 004332f4: LEA ESI,[EBX + 0x4]
// 004332f7: MOV EBP,dword ptr [ESP + 0x54]
//   Label: LAB_004332f7
//   XREF to: Stack[-0x14] (READ)
// 004332fb: PUSH EBP
// 004332fc: PUSH 0x1
// 004332fe: PUSH 0x4
// 00433300: PUSH ESI
// 00433301: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00433306: ADD ESP,0x10
// 00433309: CMP EAX,0x1
// 0043330c: JZ 0x00433346
//   XREF to: 00433346 (CONDITIONAL_JUMP)
// 0043330e: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00433312: PUSH EAX
// 00433313: PUSH 0x617c27
//   XREF to: 00617c27 (DATA)
// 00433318: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x68] (DATA)
// 0043331c: PUSH EAX
// 0043331d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00433322: MOV EDX,0x617c4c
//   XREF to: 00617c4c (DATA)
// 00433327: ADD ESP,0xc
// 0043332a: MOV EAX,ESP
// 0043332c: MOV ECX,0x4c2
// 00433331: PUSH EAX
// 00433332: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00433338: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0043333e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00433343: ADD ESP,0x4
// 00433346: MOV EBP,dword ptr [EBX]
//   Label: LAB_00433346
// 00433348: TEST EBP,EBP
// 0043334a: JZ 0x0043335f
//   XREF to: 0043335f (CONDITIONAL_JUMP)
// 0043334c: PUSH 0x4c8
// 00433351: PUSH 0x617c62
//   XREF to: 00617c62 (DATA)
// 00433356: PUSH EBP
// 00433357: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0043335c: ADD ESP,0xc
// 0043335f: MOV EDX,dword ptr [EBX + 0x4]
//   Label: LAB_0043335f
// 00433362: TEST EDX,EDX
// 00433364: JLE 0x004333da
//   XREF to: 004333da (CONDITIONAL_JUMP)
// 00433366: PUSH 0x4d2
// 0043336b: PUSH 0x617c78
//   XREF to: 00617c78 (DATA)
// 00433370: LEA EBP,[EDX*0x8 + 0x0]
// 00433377: PUSH EBP
// 00433378: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0043337d: ADD ESP,0xc
// 00433380: MOV dword ptr [EBX],EAX
// 00433382: TEST EAX,EAX
// 00433384: JZ 0x0043340c
//   XREF to: 0043340c (CONDITIONAL_JUMP)
// 0043338a: MOV ECX,dword ptr [ESP + 0x54]
//   Label: LAB_0043338a
//   XREF to: Stack[-0x14] (READ)
// 0043338e: PUSH ECX
// 0043338f: PUSH 0x1
// 00433391: PUSH EBP
// 00433392: MOV EBP,dword ptr [EBX]
// 00433394: PUSH EBP
// 00433395: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0043339a: ADD ESP,0x10
// 0043339d: CMP EAX,0x1
// 004333a0: JZ 0x004333da
//   XREF to: 004333da (CONDITIONAL_JUMP)
// 004333a2: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 004333a6: PUSH EAX
// 004333a7: PUSH 0x617ccf
//   XREF to: 00617ccf (DATA)
// 004333ac: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x68] (DATA)
// 004333b0: PUSH EAX
// 004333b1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004333b6: MOV EDX,0x617cee
//   XREF to: 00617cee (DATA)
// 004333bb: ADD ESP,0xc
// 004333be: MOV EAX,ESP
// 004333c0: MOV ECX,0x4dd
// 004333c5: PUSH EAX
// 004333c6: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004333cc: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004333d2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004333d7: ADD ESP,0x4
// 004333da: MOV ECX,dword ptr [ESP + 0x74]
//   Label: LAB_004333da
//   XREF to: Stack[0xc] (READ)
// 004333de: ADD ESI,0x8
// 004333e1: INC EDI
// 004333e2: ADD EBX,0x8
// 004333e5: CMP EDI,ECX
// 004333e7: JL 0x004332f7
//   XREF to: 004332f7 (CONDITIONAL_JUMP)
// 004333ed: PUSH 0x4e2
//   Label: LAB_004333ed
// 004333f2: PUSH 0x617d04
//   XREF to: 00617d04 (DATA)
// 004333f7: MOV EBX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 004333fb: PUSH EBX
// 004333fc: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00433401: ADD ESP,0xc
// 00433404: ADD ESP,0x58
// 00433407: POP EBP
// 00433408: POP EDI
// 00433409: POP ESI
// 0043340a: POP EBX
// 0043340b: RET
// 0043340c: PUSH 0x617c8e
//   Label: LAB_0043340c
//   XREF to: 00617c8e (DATA)
// 00433411: CALL crt_unknown.c_FUN_005ff0d0
//   XREF to: 005ff0d0 (UNCONDITIONAL_CALL)
// 00433416: MOV EAX,0x617cb9
//   XREF to: 00617cb9 (DATA)
// 0043341b: ADD ESP,0x4
// 0043341e: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00433423: MOV EAX,ESP
// 00433425: MOV EDX,0x4d6
// 0043342a: PUSH EAX
// 0043342b: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00433431: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00433436: ADD ESP,0x4
// 00433439: JMP 0x0043338a
//   XREF to: 0043338a (UNCONDITIONAL_JUMP)
