// Name: engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
// Address: 004105d0
// Address Range: [[004105d0, 00410942]]
// Convention: __cdecl
// Signature: void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
// Cross-references:
//   core_game.cpp_CGame_displayActStats_FUN_004e3800 (004e3800) at 004e3831 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3cbc [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e406b [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 (004daed0) at 004daf32 [UNCONDITIONAL_CALL]
//   core_inv.cpp_loadInventory_FUN_004fd220 (004fd220) at 004fd280 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_show_FUN_00503dc0 (00503dc0) at 00503eb0 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005085fa [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 005080cd [UNCONDITIONAL_CALL]
//   core_main.c_showPromoScreen_FUN_00508340 (00508340) at 00508399 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showCalibrationTest_FUN_00510ba0 (00510ba0) at 00510bb4 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 00512fa8 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_init_FUN_00529ae0 (00529ae0) at 00529c55 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_CMouse_load_FUN_00544420 (00544420) at 00544482 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_alphabit_cpp_00614747
//   TerminatedCString s_engine_alphabit_cpp_0061475e
//   TerminatedCString s_CAlphaBitmap_load_Out_of_00614775
//   TerminatedCString s_engine_alphabit_cpp_00614798
//   TerminatedCString s_engine_alphabit_cpp_006147af
//   TerminatedCString s_CAlphaBitmap_load_Out_of_006147c6
//   TerminatedCString s_engine_alphabit_cpp_006147e9
//   TerminatedCString s_engine_alphabit_cpp_00614800
//   TerminatedCString s_CAlphaBitmap_load_Out_of_00614817
//   TerminatedCString s_s_raw_0061483a
//   TerminatedCString s_rb_00614841
//   TerminatedCString s_art_00614844
//   TerminatedCString s_engine_alphabit_cpp_00614848
//   TerminatedCString s_CAlphaBitmap_load_Can_t__0061485f
//   TerminatedCString s_engine_alphabit_cpp_00614882
//   TerminatedCString s_s_act_00614899
//   TerminatedCString s_rb_006148a0
//   TerminatedCString s_art_006148a3
//   TerminatedCString s_engine_alphabit_cpp_006148a7
//   TerminatedCString s_CAlphaBitmap_load_Can_t__006148be
//   TerminatedCString s_engine_alphabit_cpp_006148e1
//   TerminatedCString s_s_opa_006148f8
//   TerminatedCString s_rb_006148ff
//   TerminatedCString s_art_00614902
//   TerminatedCString s_engine_alphabit_cpp_00614906
//   int g_BitsPerPixel = 0x8
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl
engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
          (CAlphaBitmap *this_ptr,char *filename,int width,int height)

{
  char *pcVar1;
  uint *puVar2;
  FILE *pFVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  uint uVar8;
  FILE *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000024;
  FILE *in_stack_00000028;
  FILE *in_stack_0000002c;
  FILE *in_stack_00000030;
  FILE *in_stack_00000034;
  SIZE_T in_stack_00000038;
  SIZE_T in_stack_00000060;
  SIZE_T in_stack_00000064;
  undefined1 *puStack_e0;
  
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(this_ptr);
  this_ptr->width = height;
  this_ptr->height = (int)in_stack_00000014;
  pcVar1 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (height * (int)in_stack_00000014,"..\\engine\\alphabit.cpp",0x52);
  this_ptr->ptrRaw = pcVar1;
  if (pcVar1 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\alphabit.cpp";
    g_CurrentLineNumber = 0x53;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CAlphaBitmap::load - Out of memory");
  }
  pcVar1 = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (in_stack_00000018 * in_stack_0000001c,"..\\engine\\alphabit.cpp",
                              0x55);
  this_ptr->ptrOpa = pcVar1;
  if (pcVar1 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\alphabit.cpp";
    g_CurrentLineNumber = 0x56;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CAlphaBitmap::load - Out of memory");
  }
  puVar2 = (uint *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (0x400,"..\\engine\\alphabit.cpp",0x58);
  this_ptr->ptrAct = puVar2;
  if (puVar2 == (uint *)0x0) {
    g_CurrentFilename = "..\\engine\\alphabit.cpp";
    g_CurrentLineNumber = 0x59;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CAlphaBitmap::load - Out of memory");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff08,"%s.raw",in_stack_00000024);
  pFVar3 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xffffff0c,"rb");
  if (pFVar3 == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\alphabit.cpp";
    g_CurrentLineNumber = 0x5f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CAlphaBitmap::load - Can't open %s");
  }
  crt_stdio_c_fread_FUN_005fd990
            (this_ptr->ptrRaw,(SIZE_T)in_stack_00000034,in_stack_00000038,in_stack_00000014);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000014,"..\\engine\\alphabit.cpp",0x61);
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff1c,"%s.act");
  pFVar3 = engine_dosio_c_getFile_FUN_00481a50("art",(char *)&puStack_e0,"rb");
  puStack_e0 = &stack0xffffff24;
  if (pFVar3 == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\alphabit.cpp";
    g_CurrentLineNumber = 0x65;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CAlphaBitmap::load - Can't open %s");
  }
  iVar7 = 0;
  do {
    puStack_e0 = (undefined1 *)0x410794;
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000028);
    iVar5 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000002c);
    uVar6 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000030);
    if (g_BitsPerPixel == 0x20) {
      uVar8 = iVar5 << ((byte)g_GreenBitPosition & 0x1f) | iVar4 << ((byte)g_RedBitPosition & 0x1f);
      uVar6 = uVar6 << ((byte)g_BlueBitPosition & 0x1f);
    }
    else {
      uVar8 = iVar4 << 0x10 | iVar5 << 8;
    }
    iVar4 = iVar7 + 4;
    *(uint *)(iVar7 + (int)this_ptr->ptrAct) = uVar8 | uVar6;
    iVar7 = iVar4;
  } while (iVar4 != 0x400);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000034,"..\\engine\\alphabit.cpp",0x6d);
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff38,"%s.opa");
  pFVar3 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xffffff3c,"rb");
  if (pFVar3 == (FILE *)0x0) {
    iVar4 = in_stack_00000060 * in_stack_00000064;
    iVar7 = 0;
    if (0 < iVar4) {
      do {
        while (this_ptr->ptrAct[(byte)this_ptr->ptrRaw[iVar7]] != 0) {
          this_ptr->ptrOpa[iVar7] = -1;
          iVar7 = iVar7 + 1;
          if (iVar4 <= iVar7) {
            return;
          }
        }
        this_ptr->ptrOpa[iVar7] = '\0';
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar4);
    }
    return;
  }
  crt_stdio_c_fread_FUN_005fd990(this_ptr->ptrOpa,in_stack_00000060,in_stack_00000064,pFVar3);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\engine\\alphabit.cpp",0x73);
  return;
}


// Assembly code:
// 004105d0: PUSH EBX
//   Label: engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
// 004105d1: PUSH ESI
// 004105d2: PUSH EDI
// 004105d3: PUSH EBP
// 004105d4: SUB ESP,0x104
// 004105da: MOV EBX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 004105e1: PUSH EBX
// 004105e2: CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
//   XREF to: 00410560 (UNCONDITIONAL_CALL)
// 004105e7: ADD ESP,0x4
// 004105ea: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0xc] (READ)
// 004105f1: MOV dword ptr [EBX + 0xc],EAX
// 004105f4: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x10] (READ)
// 004105fb: MOV EDX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x10] (READ)
// 00410602: MOV dword ptr [EBX + 0x10],EAX
// 00410605: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0xc] (READ)
// 0041060c: IMUL EAX,EDX
// 0041060f: PUSH 0x52
// 00410611: PUSH 0x614747
//   XREF to: 00614747 (DATA)
// 00410616: PUSH EAX
// 00410617: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0041061c: ADD ESP,0xc
// 0041061f: MOV dword ptr [EBX],EAX
// 00410621: TEST EAX,EAX
// 00410623: JZ 0x0041088e
//   XREF to: 0041088e (CONDITIONAL_JUMP)
// 00410629: MOV EAX,dword ptr [ESP + 0x120]
//   Label: LAB_00410629
//   XREF to: Stack[0xc] (READ)
// 00410630: IMUL EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x10] (READ)
// 00410638: PUSH 0x55
// 0041063a: PUSH 0x614798
//   XREF to: 00614798 (DATA)
// 0041063f: PUSH EAX
// 00410640: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00410645: ADD ESP,0xc
// 00410648: MOV dword ptr [EBX + 0x4],EAX
// 0041064b: TEST EAX,EAX
// 0041064d: JNZ 0x00410672
//   XREF to: 00410672 (CONDITIONAL_JUMP)
// 0041064f: MOV EDX,0x6147af
//   XREF to: 006147af (PARAM)
// 00410654: MOV ECX,0x56
// 00410659: PUSH 0x6147c6
//   XREF to: 006147c6 (DATA)
// 0041065e: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00410664: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0041066a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0041066f: ADD ESP,0x4
// 00410672: PUSH 0x58
//   Label: LAB_00410672
// 00410674: PUSH 0x6147e9
//   XREF to: 006147e9 (DATA)
// 00410679: PUSH 0x400
// 0041067e: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00410683: ADD ESP,0xc
// 00410686: MOV dword ptr [EBX + 0x8],EAX
// 00410689: TEST EAX,EAX
// 0041068b: JNZ 0x004106b0
//   XREF to: 004106b0 (CONDITIONAL_JUMP)
// 0041068d: MOV EDI,0x614800
//   XREF to: 00614800 (DATA)
// 00410692: MOV EBP,0x59
// 00410697: PUSH 0x614817
//   XREF to: 00614817 (DATA)
// 0041069c: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004106a2: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004106a8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004106ad: ADD ESP,0x4
// 004106b0: MOV EAX,dword ptr [ESP + 0x11c]
//   Label: LAB_004106b0
//   XREF to: Stack[0x8] (READ)
// 004106b7: PUSH EAX
// 004106b8: PUSH 0x61483a
//   XREF to: 0061483a (DATA)
// 004106bd: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 004106c1: PUSH EAX
// 004106c2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004106c7: ADD ESP,0xc
// 004106ca: PUSH 0x614841
//   XREF to: 00614841 (DATA)
// 004106cf: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 004106d3: PUSH EAX
// 004106d4: PUSH 0x614844
//   XREF to: 00614844 (DATA)
// 004106d9: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004106de: ADD ESP,0xc
// 004106e1: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004106e8: TEST EAX,EAX
// 004106ea: JNZ 0x00410712
//   XREF to: 00410712 (CONDITIONAL_JUMP)
// 004106ec: MOV EAX,ESP
// 004106ee: PUSH EAX
// 004106ef: MOV EDX,0x614848
//   XREF to: 00614848 (PARAM)
// 004106f4: MOV ECX,0x5f
// 004106f9: PUSH 0x61485f
//   XREF to: 0061485f (DATA)
// 004106fe: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00410704: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0041070a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0041070f: ADD ESP,0x8
// 00410712: MOV ESI,dword ptr [ESP + 0x100]
//   Label: LAB_00410712
//   XREF to: Stack[-0x14] (READ)
// 00410719: PUSH ESI
// 0041071a: MOV EDI,dword ptr [ESP + 0x128]
//   XREF to: Stack[0x10] (READ)
// 00410721: PUSH EDI
// 00410722: MOV EBP,dword ptr [ESP + 0x128]
//   XREF to: Stack[0xc] (READ)
// 00410729: PUSH EBP
// 0041072a: MOV EAX,dword ptr [EBX]
// 0041072c: PUSH EAX
// 0041072d: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 00410732: ADD ESP,0x10
// 00410735: PUSH 0x61
// 00410737: PUSH 0x614882
//   XREF to: 00614882 (DATA)
// 0041073c: PUSH ESI
// 0041073d: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00410742: ADD ESP,0xc
// 00410745: MOV ECX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 0041074c: PUSH ECX
// 0041074d: PUSH 0x614899
//   XREF to: 00614899 (DATA)
// 00410752: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 00410756: PUSH EAX
// 00410757: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0041075c: ADD ESP,0xc
// 0041075f: PUSH 0x6148a0
//   XREF to: 006148a0 (DATA)
// 00410764: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 00410768: PUSH EAX
// 00410769: PUSH 0x6148a3
//   XREF to: 006148a3 (DATA)
// 0041076e: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00410773: ADD ESP,0xc
// 00410776: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041077d: TEST EAX,EAX
// 0041077f: JZ 0x004108b6
//   XREF to: 004108b6 (CONDITIONAL_JUMP)
// 00410785: XOR ESI,ESI
//   Label: LAB_00410785
// 00410787: MOV EBP,dword ptr [ESP + 0x100]
//   Label: LAB_00410787
//   XREF to: Stack[-0x14] (READ)
// 0041078e: PUSH EBP
// 0041078f: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00410794: ADD ESP,0x4
// 00410797: MOV EBP,EAX
// 00410799: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x14] (READ)
// 004107a0: PUSH EAX
// 004107a1: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004107a6: ADD ESP,0x4
// 004107a9: MOV EDX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x14] (READ)
// 004107b0: PUSH EDX
// 004107b1: MOV EDI,EAX
// 004107b3: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004107b8: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004107be: ADD ESP,0x4
// 004107c1: CMP ECX,0x20
// 004107c4: JNZ 0x004108e1
//   XREF to: 004108e1 (CONDITIONAL_JUMP)
// 004107ca: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004107d0: SHL EBP,CL
// 004107d2: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004107d8: SHL EDI,CL
// 004107da: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004107e0: OR EDI,EBP
// 004107e2: SHL EAX,CL
// 004107e4: MOV ECX,EDI
// 004107e6: OR ECX,EAX
//   Label: LAB_004107e6
// 004107e8: ADD ESI,0x4
// 004107eb: MOV EAX,dword ptr [EBX + 0x8]
// 004107ee: MOV dword ptr [ESI + EAX*0x1 + -0x4],ECX
// 004107f2: CMP ESI,0x400
// 004107f8: JNZ 0x00410787
//   XREF to: 00410787 (CONDITIONAL_JUMP)
// 004107fa: PUSH 0x6d
// 004107fc: PUSH 0x6148e1
//   XREF to: 006148e1 (DATA)
// 00410801: MOV ESI,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x14] (READ)
// 00410808: PUSH ESI
// 00410809: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0041080e: ADD ESP,0xc
// 00410811: MOV EDI,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 00410818: PUSH EDI
// 00410819: PUSH 0x6148f8
//   XREF to: 006148f8 (DATA)
// 0041081e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 00410822: PUSH EAX
// 00410823: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00410828: ADD ESP,0xc
// 0041082b: PUSH 0x6148ff
//   XREF to: 006148ff (DATA)
// 00410830: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 00410834: PUSH EAX
// 00410835: PUSH 0x614902
//   XREF to: 00614902 (DATA)
// 0041083a: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0041083f: MOV EDI,EAX
// 00410841: ADD ESP,0xc
// 00410844: TEST EAX,EAX
// 00410846: JNZ 0x004108f0
//   XREF to: 004108f0 (CONDITIONAL_JUMP)
// 0041084c: MOV EDI,dword ptr [ESP + 0x120]
//   XREF to: Stack[0xc] (READ)
// 00410853: IMUL EDI,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x10] (READ)
// 0041085b: TEST EDI,EDI
// 0041085d: JLE 0x00410883
//   XREF to: 00410883 (CONDITIONAL_JUMP)
// 0041085f: MOV ECX,dword ptr [EBX]
//   Label: LAB_0041085f
// 00410861: MOV CL,byte ptr [ECX + EAX*0x1]
// 00410864: AND ECX,0xff
// 0041086a: MOV ESI,dword ptr [EBX + 0x8]
// 0041086d: CMP dword ptr [ESI + ECX*0x4],0x0
// 00410871: JNZ 0x00410928
//   XREF to: 00410928 (CONDITIONAL_JUMP)
// 00410877: MOV ECX,dword ptr [EBX + 0x4]
// 0041087a: MOV byte ptr [ECX + EAX*0x1],0x0
// 0041087e: INC EAX
// 0041087f: CMP EAX,EDI
// 00410881: JL 0x0041085f
//   XREF to: 0041085f (CONDITIONAL_JUMP)
// 00410883: ADD ESP,0x104
//   Label: LAB_00410883
// 00410889: POP EBP
// 0041088a: POP EDI
// 0041088b: POP ESI
// 0041088c: POP EBX
// 0041088d: RET
// 0041088e: MOV ESI,0x61475e
//   Label: LAB_0041088e
//   XREF to: 0061475e (DATA)
// 00410893: MOV EDI,0x53
// 00410898: PUSH 0x614775
//   XREF to: 00614775 (DATA)
// 0041089d: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004108a3: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004108a9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004108ae: ADD ESP,0x4
// 004108b1: JMP 0x00410629
//   XREF to: 00410629 (UNCONDITIONAL_JUMP)
// 004108b6: MOV EAX,ESP
//   Label: LAB_004108b6
// 004108b8: PUSH EAX
// 004108b9: MOV ESI,0x6148a7
//   XREF to: 006148a7 (DATA)
// 004108be: MOV EDI,0x65
// 004108c3: PUSH 0x6148be
//   XREF to: 006148be (DATA)
// 004108c8: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004108ce: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004108d4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004108d9: ADD ESP,0x8
// 004108dc: JMP 0x00410785
//   XREF to: 00410785 (UNCONDITIONAL_JUMP)
// 004108e1: MOV ECX,EBP
//   Label: LAB_004108e1
// 004108e3: SHL EDI,0x8
// 004108e6: SHL ECX,0x10
// 004108e9: OR ECX,EDI
// 004108eb: JMP 0x004107e6
//   XREF to: 004107e6 (UNCONDITIONAL_JUMP)
// 004108f0: PUSH EAX
//   Label: LAB_004108f0
// 004108f1: MOV EAX,dword ptr [ESP + 0x128]
//   XREF to: Stack[0x10] (READ)
// 004108f8: PUSH EAX
// 004108f9: MOV EDX,dword ptr [ESP + 0x128]
//   XREF to: Stack[0xc] (READ)
// 00410900: PUSH EDX
// 00410901: MOV ECX,dword ptr [EBX + 0x4]
// 00410904: PUSH ECX
// 00410905: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0041090a: ADD ESP,0x10
// 0041090d: PUSH 0x73
// 0041090f: PUSH 0x614906
//   XREF to: 00614906 (DATA)
// 00410914: PUSH EDI
// 00410915: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0041091a: ADD ESP,0xc
// 0041091d: ADD ESP,0x104
// 00410923: POP EBP
// 00410924: POP EDI
// 00410925: POP ESI
// 00410926: POP EBX
// 00410927: RET
// 00410928: MOV ECX,dword ptr [EBX + 0x4]
//   Label: LAB_00410928
// 0041092b: MOV byte ptr [ECX + EAX*0x1],0xff
// 0041092f: INC EAX
// 00410930: CMP EAX,EDI
// 00410932: JL 0x0041085f
//   XREF to: 0041085f (CONDITIONAL_JUMP)
// 00410938: ADD ESP,0x104
// 0041093e: POP EBP
// 0041093f: POP EDI
// 00410940: POP ESI
// 00410941: POP EBX
// 00410942: RET
