// Name: cockpit_drawsurf.cpp_setDashAnimationThreshold_FUN_00488ac0
// Address: 00488ac0
// Address Range: [[00488ac0, 00488ac9]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_setDashAnimationThreshold_FUN_00488ac0(float threshold)
// Globals:
//   float g_DashAnimationThreshold = 0.1000000

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_setDashAnimationThreshold_FUN_00488ac0(float threshold)

{
  g_DashAnimationThreshold = threshold;
  return;
}


// Assembly code:
// 00488ac0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: cockpit_drawsurf.cpp_setDashAnimationThreshold_FUN_00488ac0
//   XREF to: Stack[0x4] (READ)
// 00488ac4: MOV [0x006703e0],EAX
//   XREF to: 006703e0 (WRITE)
// 00488ac9: RET
