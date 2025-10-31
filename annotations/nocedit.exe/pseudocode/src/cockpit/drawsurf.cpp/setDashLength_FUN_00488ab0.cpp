// Name: cockpit_drawsurf.cpp_setDashLength_FUN_00488ab0
// Address: 00488ab0
// Address Range: [[00488ab0, 00488ab9]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_setDashLength_FUN_00488ab0(int length)
// Globals:
//   int g_DashLength = 0x1

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_setDashLength_FUN_00488ab0(int length)

{
  g_DashLength = length;
  return;
}


// Assembly code:
// 00488ab0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: cockpit_drawsurf.cpp_setDashLength_FUN_00488ab0
//   XREF to: Stack[0x4] (READ)
// 00488ab4: MOV [0x006703dc],EAX
//   XREF to: 006703dc (WRITE)
// 00488ab9: RET
