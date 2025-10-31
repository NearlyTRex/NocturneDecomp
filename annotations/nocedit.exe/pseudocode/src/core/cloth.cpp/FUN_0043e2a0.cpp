// Name: core_cloth.cpp_FUN_0043e2a0
// Address: 0043e2a0
// Address Range: [[0043e2a0, 0043e2b0]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e2a0()
// Globals:
//   int g_LightAttenuationMax

#include "nocturne.h"

int core_cloth_cpp_FUN_0043e2a0(void)

{
  int in_stack_00000004;
  
  return g_LightAttenuationMax - (in_stack_00000004 >> 1);
}


// Assembly code:
// 0043e2a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_cloth.cpp_FUN_0043e2a0
//   XREF to: Stack[0x4] (READ)
// 0043e2a4: MOV EDX,dword ptr [0x02d7a7bc]
//   XREF to: 02d7a7bc (READ)
// 0043e2aa: SAR EAX,0x1
// 0043e2ac: SUB EDX,EAX
// 0043e2ae: MOV EAX,EDX
// 0043e2b0: RET
