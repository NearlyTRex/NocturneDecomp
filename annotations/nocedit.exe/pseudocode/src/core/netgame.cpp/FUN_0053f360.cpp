// Name: core_netgame.cpp_FUN_0053f360
// Address: 0053f360
// Address Range: [[0053f360, 0053f380]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_0053f360()
// Globals:
//   int g_LastPingTime
//   uint g_CurrentGameTime
// Function calls:
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void core_netgame_cpp_FUN_0053f360(void)

{
  int iVar1;
  
  g_CurrentGameTime = 1;
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  g_LastPingTime = iVar1 / 0x12;
  return;
}


// Assembly code:
// 0053f360: MOV dword ptr [0x02f7c8b8],0x1
//   Label: core_netgame.cpp_FUN_0053f360
//   XREF to: 02f7c8b8 (WRITE)
// 0053f36a: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0053f36f: MOV EDX,EAX
// 0053f371: MOV ECX,0x12
// 0053f376: SAR EDX,0x1f
// 0053f379: IDIV ECX
// 0053f37b: MOV [0x02f7c8b4],EAX
//   XREF to: 02f7c8b4 (WRITE)
// 0053f380: RET
