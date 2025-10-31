// Name: core_game.cpp_CGame_setGameRes_FUN_004dade0
// Address: 004dade0
// Address Range: [[004dade0, 004daec5]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_setGameRes_FUN_004dade0(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db181 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e250 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539141 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 00580651 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581320 (00581320) at 0058135b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057c5f4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_game_cpp_0062b5ed
//   TerminatedCString s_CGame_setGameRes_Unable__0062b5fe
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   CBitFont* g_SmallEditorFont
//   CBitFont* g_EditorFont
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_GraphicsCardHandle
//   CDemonCamera g_CDemonCameraInstance
// Function calls:
//   core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_2d.c_resetGraphicsSystem_FUN_005ed2a0
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   wincore_windll.cpp_selectCard_FUN_005b7d90

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setGameRes_FUN_004dade0(CGame *this_ptr)

{
  int iVar1;
  
  if (g_GraphicsCardHandle != 0) {
    wincore_windll_cpp_selectCard_FUN_005b7d90(g_GraphicsCardHandle);
  }
  if (((g_WindowHeight != this_ptr->game_pixy) || (g_BitsPerPixel != this_ptr->game_bpp)) &&
     (iVar1 = wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0
                        (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp), iVar1 == 0)) {
    this_ptr->game_pixy = GAME_WINDOW_RESOLUTION_480;
    this_ptr->game_pixx = GAME_WINDOW_RESOLUTION_640;
    iVar1 = wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0
                      (this_ptr->game_pixx,this_ptr->game_pixy,this_ptr->game_bpp);
    if (iVar1 == 0) {
      g_CurrentFilename = "..\\core\\game.cpp";
      g_CurrentLineNumber = 0x4a3;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("CGame::setGameRes - Unable to set the video mode to %dx%dx%d",this_ptr->game_pixx,this_ptr->game_pixy,
                 this_ptr->game_bpp);
    }
  }
  engine_2d_c_resetGraphicsSystem_FUN_005ed2a0();
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,g_WindowHeight);
  if (g_WindowHeight < 0x180) {
    g_EditorFont = g_SmallEditorFont;
    return;
  }
  return;
}


// Assembly code:
// 004dade0: PUSH EBX
//   Label: core_game.cpp_CGame_setGameRes_FUN_004dade0
// 004dade1: PUSH ESI
// 004dade2: PUSH EDI
// 004dade3: PUSH EBP
// 004dade4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dade8: MOV EDX,dword ptr [0x02f275f4]
//   XREF to: 02f275f4 (READ)
// 004dadee: TEST EDX,EDX
// 004dadf0: JNZ 0x004dae98
//   XREF to: 004dae98 (CONDITIONAL_JUMP)
// 004dadf6: MOV EAX,[0x00679398]
//   Label: LAB_004dadf6
//   XREF to: 00679398 (READ)
// 004dadfb: CMP EAX,dword ptr [EBX + 0x4]
// 004dadfe: JZ 0x004daea6
//   XREF to: 004daea6 (CONDITIONAL_JUMP)
// 004dae04: MOV EBP,dword ptr [EBX + 0x8]
//   Label: LAB_004dae04
// 004dae07: PUSH EBP
// 004dae08: MOV EAX,dword ptr [EBX + 0x4]
// 004dae0b: PUSH EAX
// 004dae0c: MOV EDX,dword ptr [EBX]
// 004dae0e: PUSH EDX
// 004dae0f: CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   XREF to: 005ecef0 (UNCONDITIONAL_CALL)
// 004dae14: ADD ESP,0xc
// 004dae17: TEST EAX,EAX
// 004dae19: JNZ 0x004dae6c
//   XREF to: 004dae6c (CONDITIONAL_JUMP)
// 004dae1b: MOV ECX,dword ptr [EBX + 0x8]
// 004dae1e: MOV dword ptr [EBX + 0x4],0x1e0
// 004dae25: PUSH ECX
// 004dae26: MOV ESI,dword ptr [EBX + 0x4]
// 004dae29: MOV dword ptr [EBX],0x280
// 004dae2f: PUSH ESI
// 004dae30: MOV EDI,dword ptr [EBX]
// 004dae32: PUSH EDI
// 004dae33: CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   XREF to: 005ecef0 (UNCONDITIONAL_CALL)
// 004dae38: ADD ESP,0xc
// 004dae3b: TEST EAX,EAX
// 004dae3d: JNZ 0x004dae6c
//   XREF to: 004dae6c (CONDITIONAL_JUMP)
// 004dae3f: MOV EDX,dword ptr [EBX + 0x8]
// 004dae42: PUSH EDX
// 004dae43: MOV ECX,dword ptr [EBX + 0x4]
// 004dae46: PUSH ECX
// 004dae47: MOV ESI,dword ptr [EBX]
// 004dae49: PUSH ESI
// 004dae4a: MOV EBP,0x62b5ed
//   XREF to: 0062b5ed (DATA)
// 004dae4f: MOV EAX,0x4a3
// 004dae54: PUSH 0x62b5fe
//   XREF to: 0062b5fe (DATA)
// 004dae59: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004dae5f: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004dae64: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004dae69: ADD ESP,0x10
// 004dae6c: CALL engine_2d.c_resetGraphicsSystem_FUN_005ed2a0
//   Label: LAB_004dae6c
//   XREF to: 00402a70 (UNCONDITIONAL_CALL)
// 004dae71: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004dae77: PUSH EDI
// 004dae78: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 004dae7d: CALL core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
//   XREF to: 0044c190 (UNCONDITIONAL_CALL)
// 004dae82: MOV EBP,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004dae88: ADD ESP,0x8
// 004dae8b: CMP EBP,0x180
// 004dae91: JL 0x004daeb7
//   XREF to: 004daeb7 (CONDITIONAL_JUMP)
// 004dae93: POP EBP
// 004dae94: POP EDI
// 004dae95: POP ESI
// 004dae96: POP EBX
// 004dae97: RET
// 004dae98: PUSH EDX
//   Label: LAB_004dae98
// 004dae99: CALL wincore_windll.cpp_selectCard_FUN_005b7d90
//   XREF to: 005b7d90 (UNCONDITIONAL_CALL)
// 004dae9e: ADD ESP,0x4
// 004daea1: JMP 0x004dadf6
//   XREF to: 004dadf6 (UNCONDITIONAL_JUMP)
// 004daea6: MOV EDI,dword ptr [0x0067939c]
//   Label: LAB_004daea6
//   XREF to: 0067939c (READ)
// 004daeac: CMP EDI,dword ptr [EBX + 0x8]
// 004daeaf: JNZ 0x004dae04
//   XREF to: 004dae04 (CONDITIONAL_JUMP)
// 004daeb5: JMP 0x004dae6c
//   XREF to: 004dae6c (UNCONDITIONAL_JUMP)
// 004daeb7: MOV EAX,[0x020a5724]
//   Label: LAB_004daeb7
//   XREF to: 020a5724 (READ)
// 004daebc: MOV [0x02cf1cd0],EAX
//   XREF to: 02cf1cd0 (WRITE)
// 004daec1: POP EBP
// 004daec2: POP EDI
// 004daec3: POP ESI
// 004daec4: POP EBX
// 004daec5: RET
