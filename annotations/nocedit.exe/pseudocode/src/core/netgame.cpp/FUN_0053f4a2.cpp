// Name: core_netgame.cpp_FUN_0053f4a2
// Address: 0053f4a2
// Address Range: [[0053f4a2, 0053f4ae]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_0053f4a2()
// Globals:
//   int g_ChatHistoryCount
//   undefined4 DAT_02f98ad0

#include "nocturne.h"

void core_netgame_cpp_FUN_0053f4a2(undefined4 param_1,int param_2)

{
  DAT_02f98ad0 = param_2;
  g_ChatHistoryCount = param_2;
  return;
}


// Assembly code:
// 0053f4a2: MOV dword ptr [0x02f98ad0],EDX
//   Label: core_netgame.cpp_FUN_0053f4a2
//   XREF to: 02f98ad0 (WRITE)
// 0053f4a8: MOV dword ptr [0x02f7c8cc],EDX
//   XREF to: 02f7c8cc (WRITE)
// 0053f4ae: RET
