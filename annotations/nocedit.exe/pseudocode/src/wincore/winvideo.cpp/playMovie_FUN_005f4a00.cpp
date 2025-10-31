// Name: wincore_winvideo.cpp_playMovie_FUN_005f4a00
// Address: 005f4a00
// Address Range: [[005f4a00, 005f4dbf]]
// Convention: __cdecl
// Signature: int wincore_winvideo.cpp_playMovie_FUN_005f4a00(char * directory_path, char * movie_filename)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00508041 [UNCONDITIONAL_CALL]
// Globals:
//   mciGetErrorStringA* mciGetErrorStringA = 0021183a
//   mciSendStringA* mciSendStringA = 00211850
//   GetClientRect* GetClientRect = 00211ac0
//   MessageBoxA* MessageBoxA = 00211b44
//   MoveWindow* MoveWindow = 00211b52
//   SetRectEmpty* SetRectEmpty = 00211bf6
//   GetCurrentProcess* GetCurrentProcess = 00211e5a
//   SetThreadPriority* SetThreadPriority = 002121f6
//   Sleep* Sleep = 00212228
//   TerminatedCString s_where_mov_source_006581dd
//   TerminatedCString s_open_s_alias_mov_style_c_006581f8
//   TerminatedCString s_status_mov_window_handle_00658222
//   TerminatedCString s_Unable_to_open_AVI_0065823b
//   TerminatedCString s_play_mov_fullscreen_noti_00658250
//   TerminatedCString s_play_mov_window_notify_0065826b
//   TerminatedCString s_pause_mov_00658282
//   TerminatedCString s_s_s_0065828c
//   TerminatedCString s_wincore_winvideo_cpp_00658292
//   TerminatedCString s_rb_006582aa
//   TerminatedCString s_wincore_winvideo_cpp_006582ad
//   HWND g_MainWindowHandle
//   HWND g_MovieWindowHandle
//   DWORD g_MovieHandle
//   int g_MoviePlaying
//   int g_FullscreenMovie
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_atoi_FUN_005ffef0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   GetClientRect
//   GetCurrentProcess
//   mciGetErrorStringA
//   mciSendStringA
//   MessageBoxA
//   MoveWindow
//   SetRectEmpty
//   SetThreadPriority
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   Sleep
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   wincore_winvideo.cpp_closeMovie_FUN_005f46b0

#include "nocturne.h"

int __cdecl wincore_winvideo_cpp_playMovie_FUN_005f4a00(char *directory_path,char *movie_filename)

{
  byte *pbVar1;
  byte bVar2;
  FILE *file_ptr;
  MCIERROR MVar3;
  byte *pbVar4;
  HANDLE hThread;
  undefined3 extraout_var;
  BADSPACEBASE *in_ESP;
  bool bVar5;
  char *lpstrCommand;
  HWND pHVar6;
  char local_1f8 [260];
  byte bStack_f4;
  byte abStack_f3 [127];
  char local_74 [80];
  tagRECT tStack_24;
  tagRECT tStack_14;
  
  crt_stdio_c_sprintf_FUN_005fdbd0(local_74,"%s\\%s",directory_path,movie_filename);
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_74,(char *)0x0,"rb","..\\wincore\\winvideo.cpp",0x12e);
  if (file_ptr == (FILE *)0x0) {
    return 0;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\wincore\\winvideo.cpp",0x132);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  pHVar6 = g_MainWindowHandle;
  if (g_MoviePlaying != 0) {
    wincore_winvideo_cpp_closeMovie_FUN_005f46b0(g_MainWindowHandle);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(local_1f8,"open \"%s\" alias mov style child parent %d",local_74,pHVar6);
  MVar3 = (*mciSendStringA)(local_1f8,(LPSTR)0x0,0,(HWND)0x0);
  if (MVar3 == 0) {
    g_MoviePlaying = 1;
    MVar3 = (*mciSendStringA)("status mov window handle",local_1f8,0x104,(HWND)0x0);
    if (MVar3 == 0) {
      g_MovieWindowHandle = (HWND)crt_stdlib_c_atoi_FUN_005ffef0(local_1f8);
    }
    else {
      (*mciGetErrorStringA)(MVar3,local_1f8,0x104);
      (*MessageBoxA)(pHVar6,local_1f8,(LPCSTR)0x0,0x30);
    }
    if ((g_FullscreenMovie == 0) && (g_MoviePlaying != 0)) {
      (*GetClientRect)(pHVar6,&tStack_14);
      (*mciSendStringA)("where mov source",(LPSTR)&bStack_f4,0x80,(HWND)0x0);
      (*SetRectEmpty)(&tStack_24);
      pbVar4 = &bStack_f4;
      while (bStack_f4 == 0x20) {
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bStack_f4 = *pbVar1;
      }
      for (; *pbVar4 != 0x20; pbVar4 = pbVar4 + 1) {
      }
      for (; *pbVar4 == 0x20; pbVar4 = pbVar4 + 1) {
      }
      for (; *pbVar4 != 0x20; pbVar4 = pbVar4 + 1) {
      }
      for (; *pbVar4 == 0x20; pbVar4 = pbVar4 + 1) {
      }
      for (; (0x2f < *pbVar4 && (*pbVar4 < 0x3a)); pbVar4 = pbVar4 + 1) {
        tStack_24.right = tStack_24.right * 10 + (*pbVar4 - 0x30);
      }
      for (; *pbVar4 == 0x20; pbVar4 = pbVar4 + 1) {
      }
      for (; (bVar2 = *pbVar4, 0x2f < bVar2 && (bVar2 < 0x3a)); pbVar4 = pbVar4 + 1) {
        tStack_24.bottom = tStack_24.bottom * 10 + (bVar2 - 0x30);
      }
      if ((400 < tStack_14.right) || (300 < tStack_14.bottom)) {
        tStack_24.right = tStack_24.right * 2;
        tStack_24.bottom = tStack_24.bottom * 2;
      }
      (*MoveWindow)(g_MovieWindowHandle,tStack_14.right / 2 - tStack_24.right / 2,
                    tStack_14.bottom / 2 - tStack_24.bottom / 2,tStack_24.right,tStack_24.bottom,1);
    }
  }
  else {
    (*MessageBoxA)(pHVar6,"Unable to open .AVI!",(LPCSTR)0x0,0x30);
    g_MoviePlaying = 0;
  }
  bVar5 = g_MovieHandle == 0;
  g_MovieHandle = (DWORD)bVar5;
  if (bVar5) {
    pHVar6 = g_MainWindowHandle;
    if (g_FullscreenMovie == 0) {
      lpstrCommand = "play mov window notify";
    }
    else {
      lpstrCommand = "play mov fullscreen notify";
    }
  }
  else {
    pHVar6 = (HWND)0x0;
    lpstrCommand = "pause mov";
  }
  (*mciSendStringA)(lpstrCommand,(LPSTR)0x0,0,pHVar6);
  hThread = (*GetCurrentProcess)();
  (*SetThreadPriority)(hThread,-0xf);
  while (((wincore_winrun_cpp_processWindowMessages_FUN_005f35e0(), g_MovieHandle != 0 &&
          (bVar5 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(),
          CONCAT31(extraout_var,bVar5) == 0)) && (g_MoviePlaying != 0))) {
    (*Sleep)(0x14);
  }
  (*SetThreadPriority)(hThread,1);
  wincore_winvideo_cpp_closeMovie_FUN_005f46b0(g_MainWindowHandle);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return 1;
}


// Assembly code:
// 005f4a00: PUSH EBP
//   Label: wincore_winvideo.cpp_playMovie_FUN_005f4a00
// 005f4a01: SUB ESP,0x1f4
// 005f4a07: MOV EDX,dword ptr [ESP + 0x200]
//   XREF to: Stack[0x8] (READ)
// 005f4a0e: PUSH EDX
// 005f4a0f: MOV ECX,dword ptr [ESP + 0x200]
//   XREF to: Stack[0x4] (READ)
// 005f4a16: PUSH ECX
// 005f4a17: PUSH 0x65828c
//   XREF to: 0065828c (DATA)
// 005f4a1c: LEA EAX,[ESP + 0x190]
//   XREF to: Stack[-0x74] (DATA)
// 005f4a23: PUSH EAX
// 005f4a24: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005f4a29: ADD ESP,0x10
// 005f4a2c: PUSH 0x12e
// 005f4a31: PUSH 0x658292
//   XREF to: 00658292 (DATA)
// 005f4a36: PUSH 0x6582aa
//   XREF to: 006582aa (DATA)
// 005f4a3b: PUSH 0x0
// 005f4a3d: LEA EAX,[ESP + 0x194]
//   XREF to: Stack[-0x74] (DATA)
// 005f4a44: PUSH EAX
// 005f4a45: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005f4a4a: ADD ESP,0x14
// 005f4a4d: TEST EAX,EAX
// 005f4a4f: JNZ 0x005f4a59
//   XREF to: 005f4a59 (CONDITIONAL_JUMP)
// 005f4a51: ADD ESP,0x1f4
// 005f4a57: POP EBP
// 005f4a58: RET
// 005f4a59: PUSH EDI
//   Label: LAB_005f4a59
// 005f4a5a: PUSH ESI
// 005f4a5b: PUSH EBX
// 005f4a5c: PUSH 0x132
// 005f4a61: PUSH 0x6582ad
//   XREF to: 006582ad (DATA)
// 005f4a66: PUSH EAX
// 005f4a67: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005f4a6c: ADD ESP,0xc
// 005f4a6f: LEA ESI,[ESP + 0x190]
//   XREF to: Stack[-0x74] (DATA)
// 005f4a76: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005f4a7b: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005f4a80: MOV EDI,dword ptr [0x03f99504]
//   XREF to: 03f99504 (READ)
// 005f4a86: MOV EBX,dword ptr [0x03f98468]
//   XREF to: 03f98468 (READ)
// 005f4a8c: TEST EDI,EDI
// 005f4a8e: JZ 0x005f4a99
//   XREF to: 005f4a99 (CONDITIONAL_JUMP)
// 005f4a90: PUSH EBX
// 005f4a91: CALL wincore_winvideo.cpp_closeMovie_FUN_005f46b0
//   XREF to: 005f46b0 (UNCONDITIONAL_CALL)
// 005f4a96: ADD ESP,0x4
// 005f4a99: PUSH EBX
//   Label: LAB_005f4a99
// 005f4a9a: PUSH ESI
// 005f4a9b: PUSH 0x6581f8
//   XREF to: 006581f8 (DATA)
// 005f4aa0: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x1f8] (DATA)
// 005f4aa4: PUSH EAX
// 005f4aa5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005f4aaa: ADD ESP,0x10
// 005f4aad: PUSH 0x0
// 005f4aaf: PUSH 0x0
// 005f4ab1: PUSH 0x0
// 005f4ab3: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x1f8] (DATA)
// 005f4ab7: PUSH EAX
// 005f4ab8: CALL dword ptr CS:[0x611410]
//   XREF to: EXTERNAL:00000012 (COMPUTED_CALL)
//   XREF to: 00611410 (READ)
// 005f4abf: TEST EAX,EAX
// 005f4ac1: JNZ 0x005f4d4e
//   XREF to: 005f4d4e (CONDITIONAL_JUMP)
// 005f4ac7: PUSH 0x0
// 005f4ac9: MOV EAX,0x1
// 005f4ace: PUSH 0x104
// 005f4ad3: MOV [0x03f99504],EAX
//   XREF to: 03f99504 (WRITE)
// 005f4ad8: LEA EAX,[ESP + 0x14]
// 005f4adc: PUSH EAX
// 005f4add: PUSH 0x658222
//   XREF to: 00658222 (DATA)
// 005f4ae2: CALL dword ptr CS:[0x611410]
//   XREF to: EXTERNAL:00000012 (COMPUTED_CALL)
//   XREF to: 00611410 (READ)
// 005f4ae9: TEST EAX,EAX
// 005f4aeb: JNZ 0x005f4b88
//   XREF to: 005f4b88 (CONDITIONAL_JUMP)
// 005f4af1: LEA EAX,[ESP + 0xc]
// 005f4af5: PUSH EAX
// 005f4af6: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 005f4afb: ADD ESP,0x4
// 005f4afe: MOV [0x03f994fc],EAX
//   XREF to: 03f994fc (WRITE)
// 005f4b03: CMP dword ptr [0x03f9950c],0x0
//   Label: LAB_005f4b03
//   XREF to: 03f9950c (READ)
// 005f4b0a: JNZ 0x005f4cb7
//   XREF to: 005f4cb7 (CONDITIONAL_JUMP)
// 005f4b10: CMP dword ptr [0x03f99504],0x0
//   XREF to: 03f99504 (READ)
// 005f4b17: JZ 0x005f4cb7
//   XREF to: 005f4cb7 (CONDITIONAL_JUMP)
// 005f4b1d: LEA EAX,[ESP + 0x1f0]
// 005f4b24: PUSH EAX
// 005f4b25: PUSH EBX
// 005f4b26: CALL dword ptr CS:[0x6114a4]
//   XREF to: EXTERNAL:00000035 (COMPUTED_CALL)
//   XREF to: 006114a4 (READ)
// 005f4b2d: PUSH 0x0
// 005f4b2f: PUSH 0x80
// 005f4b34: LEA EAX,[ESP + 0x118]
// 005f4b3b: PUSH EAX
// 005f4b3c: PUSH 0x6581dd
//   XREF to: 006581dd (DATA)
// 005f4b41: CALL dword ptr CS:[0x611410]
//   XREF to: EXTERNAL:00000012 (COMPUTED_CALL)
//   XREF to: 00611410 (READ)
// 005f4b48: LEA EAX,[ESP + 0x1e0]
// 005f4b4f: PUSH EAX
// 005f4b50: CALL dword ptr CS:[0x6114f0]
//   XREF to: EXTERNAL:00000048 (COMPUTED_CALL)
//   XREF to: 006114f0 (READ)
// 005f4b57: MOV DL,byte ptr [ESP + 0x110]
// 005f4b5e: LEA EAX,[ESP + 0x110]
// 005f4b65: CMP DL,0x20
// 005f4b68: JNZ 0x005f4b80
//   XREF to: 005f4b80 (CONDITIONAL_JUMP)
// 005f4b6a: MOV DH,byte ptr [EAX + 0x1]
//   Label: LAB_005f4b6a
// 005f4b6d: INC EAX
// 005f4b6e: CMP DH,0x20
// 005f4b71: JZ 0x005f4b6a
//   XREF to: 005f4b6a (CONDITIONAL_JUMP)
// 005f4b73: LEA EAX,[EAX]
// 005f4b79: LEA EDX,[EDX]
// 005f4b7f: NOP
// 005f4b80: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4b80
// 005f4b83: JZ 0x005f4bb0
//   XREF to: 005f4bb0 (CONDITIONAL_JUMP)
// 005f4b85: INC EAX
// 005f4b86: JMP 0x005f4b80
//   XREF to: 005f4b80 (UNCONDITIONAL_JUMP)
// 005f4b88: PUSH 0x104
//   Label: LAB_005f4b88
// 005f4b8d: LEA EDX,[ESP + 0x10]
// 005f4b91: PUSH EDX
// 005f4b92: PUSH EAX
// 005f4b93: CALL dword ptr CS:[0x61140c]
//   XREF to: EXTERNAL:00000011 (COMPUTED_CALL)
//   XREF to: 0061140c (READ)
// 005f4b9a: PUSH 0x30
// 005f4b9c: PUSH 0x0
// 005f4b9e: LEA EAX,[ESP + 0x14]
// 005f4ba2: PUSH EAX
// 005f4ba3: PUSH EBX
// 005f4ba4: CALL dword ptr CS:[0x6114c4]
//   XREF to: EXTERNAL:0000003d (COMPUTED_CALL)
//   XREF to: 006114c4 (READ)
// 005f4bab: JMP 0x005f4b03
//   XREF to: 005f4b03 (UNCONDITIONAL_JUMP)
// 005f4bb0: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4bb0
// 005f4bb3: JNZ 0x005f4bb8
//   XREF to: 005f4bb8 (CONDITIONAL_JUMP)
// 005f4bb5: INC EAX
// 005f4bb6: JMP 0x005f4bb0
//   XREF to: 005f4bb0 (UNCONDITIONAL_JUMP)
// 005f4bb8: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4bb8
// 005f4bbb: JZ 0x005f4bc0
//   XREF to: 005f4bc0 (CONDITIONAL_JUMP)
// 005f4bbd: INC EAX
// 005f4bbe: JMP 0x005f4bb8
//   XREF to: 005f4bb8 (UNCONDITIONAL_JUMP)
// 005f4bc0: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4bc0
// 005f4bc3: JNZ 0x005f4be1
//   XREF to: 005f4be1 (CONDITIONAL_JUMP)
// 005f4bc5: INC EAX
// 005f4bc6: JMP 0x005f4bc0
//   XREF to: 005f4bc0 (UNCONDITIONAL_JUMP)
// 005f4bc8: IMUL ECX,dword ptr [ESP + 0x1e8],0xa
//   Label: LAB_005f4bc8
// 005f4bd0: XOR EDX,EDX
// 005f4bd2: MOV DL,byte ptr [EAX]
// 005f4bd4: SUB EDX,0x30
// 005f4bd7: ADD ECX,EDX
// 005f4bd9: INC EAX
// 005f4bda: MOV dword ptr [ESP + 0x1e8],ECX
// 005f4be1: MOV DL,byte ptr [EAX]
//   Label: LAB_005f4be1
// 005f4be3: CMP DL,0x30
// 005f4be6: JNC 0x005f4bf0
//   XREF to: 005f4bf0 (CONDITIONAL_JUMP)
// 005f4be8: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4be8
// 005f4beb: JNZ 0x005f4c10
//   XREF to: 005f4c10 (CONDITIONAL_JUMP)
// 005f4bed: INC EAX
// 005f4bee: JMP 0x005f4be8
//   XREF to: 005f4be8 (UNCONDITIONAL_JUMP)
// 005f4bf0: CMP DL,0x39
//   Label: LAB_005f4bf0
// 005f4bf3: JBE 0x005f4bc8
//   XREF to: 005f4bc8 (CONDITIONAL_JUMP)
// 005f4bf5: JMP 0x005f4be8
//   XREF to: 005f4be8 (UNCONDITIONAL_JUMP)
// 005f4bf7: IMUL ECX,dword ptr [ESP + 0x1ec],0xa
//   Label: LAB_005f4bf7
// 005f4bff: XOR EDX,EDX
// 005f4c01: MOV DL,BH
// 005f4c03: SUB EDX,0x30
// 005f4c06: ADD ECX,EDX
// 005f4c08: INC EAX
// 005f4c09: MOV dword ptr [ESP + 0x1ec],ECX
// 005f4c10: MOV BH,byte ptr [EAX]
//   Label: LAB_005f4c10
// 005f4c12: CMP BH,0x30
// 005f4c15: JC 0x005f4c1c
//   XREF to: 005f4c1c (CONDITIONAL_JUMP)
// 005f4c17: CMP BH,0x39
// 005f4c1a: JBE 0x005f4bf7
//   XREF to: 005f4bf7 (CONDITIONAL_JUMP)
// 005f4c1c: CMP dword ptr [ESP + 0x1f8],0x190
//   Label: LAB_005f4c1c
// 005f4c27: JLE 0x005f4d38
//   XREF to: 005f4d38 (CONDITIONAL_JUMP)
// 005f4c2d: MOV EAX,dword ptr [ESP + 0x1e8]
//   Label: LAB_005f4c2d
// 005f4c34: MOV EBP,dword ptr [ESP + 0x1ec]
// 005f4c3b: ADD EAX,EAX
// 005f4c3d: ADD EBP,EBP
// 005f4c3f: MOV dword ptr [ESP + 0x1e8],EAX
// 005f4c46: MOV dword ptr [ESP + 0x1ec],EBP
// 005f4c4d: MOV EAX,dword ptr [ESP + 0x1f8]
//   Label: LAB_005f4c4d
// 005f4c54: MOV EDX,EAX
// 005f4c56: SAR EDX,0x1f
// 005f4c59: SUB EAX,EDX
// 005f4c5b: SAR EAX,0x1
// 005f4c5d: MOV EBX,EAX
// 005f4c5f: MOV EAX,dword ptr [ESP + 0x1e8]
// 005f4c66: MOV EDX,EAX
// 005f4c68: SAR EDX,0x1f
// 005f4c6b: SUB EAX,EDX
// 005f4c6d: SAR EAX,0x1
// 005f4c6f: SUB EBX,EAX
// 005f4c71: MOV EAX,dword ptr [ESP + 0x1fc]
// 005f4c78: MOV EDX,EAX
// 005f4c7a: SAR EDX,0x1f
// 005f4c7d: SUB EAX,EDX
// 005f4c7f: SAR EAX,0x1
// 005f4c81: MOV ECX,EAX
// 005f4c83: MOV EAX,dword ptr [ESP + 0x1ec]
// 005f4c8a: MOV EDX,EAX
// 005f4c8c: SAR EDX,0x1f
// 005f4c8f: SUB EAX,EDX
// 005f4c91: SAR EAX,0x1
// 005f4c93: PUSH 0x1
// 005f4c95: MOV EDX,dword ptr [ESP + 0x1f0]
// 005f4c9c: PUSH EDX
// 005f4c9d: MOV ESI,dword ptr [ESP + 0x1f0]
// 005f4ca4: PUSH ESI
// 005f4ca5: SUB ECX,EAX
// 005f4ca7: PUSH ECX
// 005f4ca8: PUSH EBX
// 005f4ca9: MOV EDI,dword ptr [0x03f994fc]
//   XREF to: 03f994fc (READ)
// 005f4caf: PUSH EDI
// 005f4cb0: CALL dword ptr CS:[0x6114c8]
//   XREF to: EXTERNAL:0000003e (COMPUTED_CALL)
//   XREF to: 006114c8 (READ)
// 005f4cb7: MOV ECX,dword ptr [0x03f99500]
//   Label: LAB_005f4cb7
//   XREF to: 03f99500 (READ)
// 005f4cbd: MOV EAX,[0x03f98468]
//   XREF to: 03f98468 (READ)
// 005f4cc2: TEST ECX,ECX
// 005f4cc4: SETZ DL
// 005f4cc7: AND EDX,0xff
// 005f4ccd: MOV dword ptr [0x03f99500],EDX
//   XREF to: 03f99500 (WRITE)
// 005f4cd3: TEST EDX,EDX
// 005f4cd5: JZ 0x005f4d6c
//   XREF to: 005f4d6c (CONDITIONAL_JUMP)
// 005f4cdb: MOV ESI,dword ptr [0x03f9950c]
//   XREF to: 03f9950c (READ)
// 005f4ce1: TEST ESI,ESI
// 005f4ce3: JZ 0x005f4d7c
//   XREF to: 005f4d7c (CONDITIONAL_JUMP)
// 005f4ce9: PUSH EAX
// 005f4cea: PUSH 0x0
// 005f4cec: PUSH 0x0
// 005f4cee: PUSH 0x658250
//   XREF to: 00658250 (DATA)
// 005f4cf3: CALL dword ptr CS:[0x611410]
//   Label: LAB_005f4cf3
//   XREF to: EXTERNAL:00000012 (COMPUTED_CALL)
//   XREF to: 00611410 (READ)
// 005f4cfa: CALL dword ptr CS:[0x61157c]
//   XREF to: EXTERNAL:0000006a (COMPUTED_CALL)
//   XREF to: 0061157c (READ)
// 005f4d01: PUSH -0xf
// 005f4d03: PUSH EAX
// 005f4d04: MOV EBX,EAX
// 005f4d06: CALL dword ptr CS:[0x61163c]
//   XREF to: EXTERNAL:0000009a (COMPUTED_CALL)
//   XREF to: 0061163c (READ)
// 005f4d0d: XOR ESI,ESI
// 005f4d0f: CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
//   Label: LAB_005f4d0f
//   XREF to: 005f35e0 (UNCONDITIONAL_CALL)
// 005f4d14: CMP ESI,dword ptr [0x03f99500]
//   XREF to: 03f99500 (READ)
// 005f4d1a: JZ 0x005f4d89
//   XREF to: 005f4d89 (CONDITIONAL_JUMP)
// 005f4d1c: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 005f4d21: TEST EAX,EAX
// 005f4d23: JNZ 0x005f4d89
//   XREF to: 005f4d89 (CONDITIONAL_JUMP)
// 005f4d25: CMP ESI,dword ptr [0x03f99504]
//   XREF to: 03f99504 (READ)
// 005f4d2b: JZ 0x005f4d89
//   XREF to: 005f4d89 (CONDITIONAL_JUMP)
// 005f4d2d: PUSH 0x14
// 005f4d2f: CALL dword ptr CS:[0x611644]
//   XREF to: EXTERNAL:0000009c (COMPUTED_CALL)
//   XREF to: 00611644 (READ)
// 005f4d36: JMP 0x005f4d0f
//   XREF to: 005f4d0f (UNCONDITIONAL_JUMP)
// 005f4d38: CMP dword ptr [ESP + 0x1fc],0x12c
//   Label: LAB_005f4d38
// 005f4d43: JG 0x005f4c2d
//   XREF to: 005f4c2d (CONDITIONAL_JUMP)
// 005f4d49: JMP 0x005f4c4d
//   XREF to: 005f4c4d (UNCONDITIONAL_JUMP)
// 005f4d4e: PUSH 0x30
//   Label: LAB_005f4d4e
// 005f4d50: PUSH 0x0
// 005f4d52: PUSH 0x65823b
//   XREF to: 0065823b (DATA)
// 005f4d57: PUSH EBX
// 005f4d58: XOR EBP,EBP
// 005f4d5a: CALL dword ptr CS:[0x6114c4]
//   XREF to: EXTERNAL:0000003d (COMPUTED_CALL)
//   XREF to: 006114c4 (READ)
// 005f4d61: MOV dword ptr [0x03f99504],EBP
//   XREF to: 03f99504 (WRITE)
// 005f4d67: JMP 0x005f4cb7
//   XREF to: 005f4cb7 (UNCONDITIONAL_JUMP)
// 005f4d6c: PUSH 0x0
//   Label: LAB_005f4d6c
// 005f4d6e: PUSH 0x0
// 005f4d70: PUSH 0x0
// 005f4d72: PUSH 0x658282
//   XREF to: 00658282 (DATA)
// 005f4d77: JMP 0x005f4cf3
//   XREF to: 005f4cf3 (UNCONDITIONAL_JUMP)
// 005f4d7c: PUSH EAX
//   Label: LAB_005f4d7c
// 005f4d7d: PUSH ESI
// 005f4d7e: PUSH ESI
// 005f4d7f: PUSH 0x65826b
//   XREF to: 0065826b (DATA)
// 005f4d84: JMP 0x005f4cf3
//   XREF to: 005f4cf3 (UNCONDITIONAL_JUMP)
// 005f4d89: PUSH 0x1
//   Label: LAB_005f4d89
// 005f4d8b: PUSH EBX
// 005f4d8c: CALL dword ptr CS:[0x61163c]
//   XREF to: EXTERNAL:0000009a (COMPUTED_CALL)
//   XREF to: 0061163c (READ)
// 005f4d93: MOV EAX,[0x03f98468]
//   XREF to: 03f98468 (READ)
// 005f4d98: PUSH EAX
// 005f4d99: CALL wincore_winvideo.cpp_closeMovie_FUN_005f46b0
//   XREF to: 005f46b0 (UNCONDITIONAL_CALL)
// 005f4d9e: ADD ESP,0x4
// 005f4da1: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005f4da6: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005f4dab: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005f4db0: MOV EAX,0x1
// 005f4db5: POP EBX
// 005f4db6: POP ESI
// 005f4db7: POP EDI
// 005f4db8: ADD ESP,0x1f4
// 005f4dbe: POP EBP
// 005f4dbf: RET
