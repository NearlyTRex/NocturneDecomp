// Name: core_netgame.cpp_FUN_0053f390
// Address: 0053f390
// Address Range: [[0053f390, 0053f3d0]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_0053f390()
// Globals:
//   int g_LastPingTime
//   uint g_CurrentGameTime
// Function calls:
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void core_netgame_cpp_FUN_0053f390(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = iVar1 / 0x12 - g_LastPingTime;
  g_LastPingTime = iVar1 / 0x12;
  if (-1 < iVar2) {
    if (0x20000 < iVar2) {
      iVar2 = 0x20000;
    }
    g_CurrentGameTime = g_CurrentGameTime + iVar2;
    return;
  }
  return;
}


// Assembly code:
// 0053f390: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: core_netgame.cpp_FUN_0053f390
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0053f395: MOV EDX,EAX
// 0053f397: MOV ECX,0x12
// 0053f39c: SAR EDX,0x1f
// 0053f39f: IDIV ECX
// 0053f3a1: MOV ECX,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 0053f3a7: MOV EDX,EAX
// 0053f3a9: SUB EAX,ECX
// 0053f3ab: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 0053f3b1: TEST EAX,EAX
// 0053f3b3: JL 0x0053f3c8
//   XREF to: 0053f3c8 (CONDITIONAL_JUMP)
// 0053f3b5: CMP EAX,0x20000
// 0053f3ba: JLE 0x0053f3c1
//   XREF to: 0053f3c1 (CONDITIONAL_JUMP)
// 0053f3bc: MOV EAX,0x20000
// 0053f3c1: ADD dword ptr [0x02f7c8b8],EAX
//   Label: LAB_0053f3c1
//   XREF to: 02f7c8b8 (READ_WRITE)
// 0053f3c7: RET
// 0053f3c8: XOR EAX,EAX
//   Label: LAB_0053f3c8
// 0053f3ca: ADD dword ptr [0x02f7c8b8],EAX
//   XREF to: 02f7c8b8 (READ_WRITE)
// 0053f3d0: RET
