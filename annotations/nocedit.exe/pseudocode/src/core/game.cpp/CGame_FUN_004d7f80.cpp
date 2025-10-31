// Name: core_game.cpp_CGame_FUN_004d7f80
// Address: 004d7f80
// Address Range: [[004d7f80, 004d7f98]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_FUN_004d7f80(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db25d [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004d7f80(CGame *this_ptr)

{
  this_ptr->status_display_count = 0;
  this_ptr->message_timer = 0.0;
  return;
}


// Assembly code:
// 004d7f80: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_game.cpp_CGame_FUN_004d7f80
//   XREF to: Stack[0x4] (READ)
// 004d7f84: MOV dword ptr [EAX + 0x388],0x0
// 004d7f8e: MOV dword ptr [EAX + 0x384],0x0
// 004d7f98: RET
