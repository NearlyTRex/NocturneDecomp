// Name: engine_clipper.c_setNearPlaneDistance_FUN_004359d0
// Address: 004359d0
// Address Range: [[004359d0, 004359e2]]
// Convention: __cdecl
// Signature: void engine_clipper.c_setNearPlaneDistance_FUN_004359d0(int distance)
// Globals:
//   int g_NearPlaneDistance = 0x7fffffff

#include "nocturne.h"

void __cdecl engine_clipper_c_setNearPlaneDistance_FUN_004359d0(int distance)

{
  if (distance == 0) {
    distance = 0x7fffffff;
  }
  g_NearPlaneDistance = distance;
  return;
}


// Assembly code:
// 004359d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_clipper.c_setNearPlaneDistance_FUN_004359d0
//   XREF to: Stack[0x4] (READ)
// 004359d4: TEST EAX,EAX
// 004359d6: JNZ 0x004359dd
//   XREF to: 004359dd (CONDITIONAL_JUMP)
// 004359d8: MOV EAX,0x7fffffff
// 004359dd: MOV [0x0066e804],EAX
//   Label: LAB_004359dd
//   XREF to: 0066e804 (WRITE)
// 004359e2: RET
