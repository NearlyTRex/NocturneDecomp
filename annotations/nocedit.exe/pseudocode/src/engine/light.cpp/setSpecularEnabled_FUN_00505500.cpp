// Name: engine_light.cpp_setSpecularEnabled_FUN_00505500
// Address: 00505500
// Address Range: [[00505500, 00505509]]
// Convention: __cdecl
// Signature: void engine_light.cpp_setSpecularEnabled_FUN_00505500(int enabled)
// Globals:
//   int g_SpecularEnabled = 0x1

#include "nocturne.h"

void __cdecl engine_light_cpp_setSpecularEnabled_FUN_00505500(int enabled)

{
  g_SpecularEnabled = enabled;
  return;
}


// Assembly code:
// 00505500: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_light.cpp_setSpecularEnabled_FUN_00505500
//   XREF to: Stack[0x4] (READ)
// 00505504: MOV [0x0067cfcc],EAX
//   XREF to: 0067cfcc (WRITE)
// 00505509: RET
