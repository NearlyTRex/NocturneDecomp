// Name: core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
// Address: 004daed0
// Address Range: [[004daed0, 004daf74]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db886 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e99e [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539e1b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 00580701 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581320 (00581320) at 00581435 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057ca39 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_fangs_0062b63b
//   int g_WindowHeight = 0xc8
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CBitFont* g_ThemeFont
//   CBitFont* g_EditorFont
//   undefined4 DAT_02f33744
// Function calls:
//   engine_2d.c_reinitializeGraphicsSystem_FUN_005ed4b0
//   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0(CGame *this_ptr)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_00000008;
  
  engine_2d_c_reinitializeGraphicsSystem_FUN_005ed4b0();
  if ((g_WindowHeight != 0x1e0) || (*(int *)(in_stack_00000008 + 8) != 0x20)) {
    wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(0x280,0x1e0,0x20);
  }
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
    g_EditorFont = g_ThemeFont;
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)&stack0xfffffff4);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)&stack0xfffffff8,"fangs",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950((CAlphaBitmap *)&stack0xfffffffc,0,0,0x8000)
  ;
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)&this_ptr);
  return;
}


// Assembly code:
// 004daed0: PUSH EBX
//   Label: core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0
// 004daed1: SUB ESP,0x14
// 004daed4: CALL engine_2d.c_reinitializeGraphicsSystem_FUN_005ed4b0
//   XREF to: 00402a80 (UNCONDITIONAL_CALL)
// 004daed9: CMP dword ptr [0x00679398],0x1e0
//   XREF to: 00679398 (READ)
// 004daee3: JNZ 0x004daeef
//   XREF to: 004daeef (CONDITIONAL_JUMP)
// 004daee5: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004daee9: CMP dword ptr [EAX + 0x8],0x20
// 004daeed: JZ 0x004daf03
//   XREF to: 004daf03 (CONDITIONAL_JUMP)
// 004daeef: PUSH 0x20
//   Label: LAB_004daeef
// 004daef1: PUSH 0x1e0
// 004daef6: PUSH 0x280
// 004daefb: CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   XREF to: 005ecef0 (UNCONDITIONAL_CALL)
// 004daf00: ADD ESP,0xc
// 004daf03: MOV EAX,[0x0067d550]
//   Label: LAB_004daf03
//   XREF to: 0067d550 (READ)
// 004daf08: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 004daf0c: JZ 0x004daf69
//   XREF to: 004daf69 (CONDITIONAL_JUMP)
// 004daf0e: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_004daf0e
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004daf13: MOV EAX,ESP
// 004daf15: PUSH EAX
// 004daf16: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004daf1b: ADD ESP,0x4
// 004daf1e: PUSH 0x1e0
// 004daf23: PUSH 0x280
// 004daf28: PUSH 0x62b63b
//   XREF to: 0062b63b (DATA)
// 004daf2d: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x18] (DATA)
// 004daf31: PUSH EAX
// 004daf32: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 004daf37: ADD ESP,0x10
// 004daf3a: PUSH 0x8000
// 004daf3f: PUSH 0x0
// 004daf41: PUSH 0x0
// 004daf43: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x18] (DATA)
// 004daf47: PUSH EAX
// 004daf48: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 004daf4d: ADD ESP,0x10
// 004daf50: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004daf55: PUSH 0x0
// 004daf57: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 004daf5b: PUSH EAX
// 004daf5c: CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   XREF to: 00410540 (UNCONDITIONAL_CALL)
// 004daf61: ADD ESP,0x8
// 004daf64: ADD ESP,0x14
// 004daf67: POP EBX
// 004daf68: RET
// 004daf69: MOV EAX,[0x020a5720]
//   Label: LAB_004daf69
//   XREF to: 020a5720 (READ)
// 004daf6e: MOV [0x02cf1cd0],EAX
//   XREF to: 02cf1cd0 (WRITE)
// 004daf73: JMP 0x004daf0e
//   XREF to: 004daf0e (UNCONDITIONAL_JUMP)
