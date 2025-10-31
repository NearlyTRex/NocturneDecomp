// Name: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
// Address: 004dce70
// Address Range: [[004dce70, 004dcede]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2eb5 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_playerControls_FUN_004dbd80 (004dbd80) at 004dbda9 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db2f7 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_checkInitSection_FUN_0055a6c0 (0055a6c0) at 0055a75d [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_process_FUN_00559960 (00559960) at 005599e3 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055e054 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CNetGame* g_CNetGameInstance = 02f7c740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   char[600] g_PrevKeyboardState
//   int g_InputResetFlag
//   int g_StoredCameraValue
//   undefined4 DAT_02f7c740
//   undefined4 g_CDemonSetInstance.selected_camera_index
// Function calls:
//   core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0
//   crt_memory.c_memset_FUN_005fde40
//   wincore_winrun.cpp_setCursorPosition_FUN_005f30d0

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame *this_ptr)

{
  void **dest;
  ulong unaff_retaddr;
  int value;
  
  value = 0x2c;
  dest = core_netgame_cpp_CNetGame_getMyControls_FUN_005438c0(g_CNetGameInstance);
  crt_memory_c_memset_FUN_005fde40(dest,value,unaff_retaddr);
  crt_memory_c_memset_FUN_005fde40(g_PrevKeyboardState,0,600);
  g_InputResetFlag = 0;
  wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(g_WindowWidth / 2,g_WindowHeight / 2);
  g_StoredCameraValue = g_CDemonSetPtr->selected_camera_index;
  return;
}


// Assembly code:
// 004dce70: PUSH 0x2c
//   Label: core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
// 004dce72: PUSH 0x0
// 004dce74: MOV EDX,dword ptr [0x00680a00]
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 004dce7a: PUSH EDX
//   XREF to: 02f7c740 (DATA)
// 004dce7b: CALL core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0
//   XREF to: 005438c0 (UNCONDITIONAL_CALL)
// 004dce80: ADD ESP,0x4
// 004dce83: PUSH EAX
// 004dce84: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004dce89: ADD ESP,0xc
// 004dce8c: PUSH 0x258
// 004dce91: PUSH 0x0
// 004dce93: PUSH 0x2d82670
//   XREF to: 02d82670 (DATA)
// 004dce98: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004dce9d: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004dcea2: MOV EDX,EAX
// 004dcea4: SAR EDX,0x1f
// 004dcea7: SUB EAX,EDX
// 004dcea9: SAR EAX,0x1
// 004dceab: ADD ESP,0xc
// 004dceae: PUSH EAX
// 004dceaf: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004dceb4: MOV EDX,EAX
// 004dceb6: SAR EDX,0x1f
// 004dceb9: SUB EAX,EDX
// 004dcebb: SAR EAX,0x1
// 004dcebd: XOR ECX,ECX
// 004dcebf: PUSH EAX
// 004dcec0: MOV dword ptr [0x02d828c8],ECX
//   XREF to: 02d828c8 (WRITE)
// 004dcec6: CALL wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
//   XREF to: 005f30d0 (UNCONDITIONAL_CALL)
// 004dcecb: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004dced0: MOV EAX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 004dced6: ADD ESP,0x8
// 004dced9: MOV [0x02d828cc],EAX
//   XREF to: 02d828cc (WRITE)
// 004dcede: RET
