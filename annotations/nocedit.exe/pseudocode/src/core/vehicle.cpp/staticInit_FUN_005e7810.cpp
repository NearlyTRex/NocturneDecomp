// Name: core_vehicle.cpp_staticInit_FUN_005e7810
// Address: 005e7810
// Address Range: [[005e7810, 005e7824]]
// Convention: unknown
// Signature: undefined core_vehicle.cpp_staticInit_FUN_005e7810()
// Globals:
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z

#include "nocturne.h"

void core_vehicle_cpp_staticInit_FUN_005e7810(void)

{
  g_ZeroVector.y = 0.0;
  g_ZeroVector.z = 0.0;
  g_ZeroVector.x = 0.0;
  return;
}


// Assembly code:
// 005e7810: XOR EDX,EDX
//   Label: core_vehicle.cpp_staticInit_FUN_005e7810
// 005e7812: MOV dword ptr [0x03f8755c],EDX
//   XREF to: 03f8755c (WRITE)
// 005e7818: MOV dword ptr [0x03f87560],EDX
//   XREF to: 03f87560 (WRITE)
// 005e781e: MOV dword ptr [0x03f87558],EDX
//   XREF to: 03f87558 (WRITE)
// 005e7824: RET
