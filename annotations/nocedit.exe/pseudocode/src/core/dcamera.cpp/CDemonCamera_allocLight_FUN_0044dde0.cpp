// Name: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0044dde0
// Address: 0044dde0
// Address Range: [[0044dde0, 0044de0c]]
// Convention: __cdecl
// Signature: char * core_dcamera.cpp_CDemonCamera_allocLight_FUN_0044dde0(CDemonCamera * this_ptr)
// Globals:
//   int g_LightBufferPoolIndex
//   char[25][307200] g_LightBufferPool

#include "nocturne.h"

char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0044dde0(CDemonCamera *this_ptr)

{
  char (*pacVar1) [307200];
  
  pacVar1 = g_LightBufferPool + g_LightBufferPoolIndex;
  if (0x18 < g_LightBufferPoolIndex + 1U) {
    pacVar1 = (char (*) [307200])0x0;
  }
  g_LightBufferPoolIndex = g_LightBufferPoolIndex + 1U;
  return *pacVar1;
}


// Assembly code:
// 0044dde0: MOV ECX,dword ptr [0x00c1a204]
//   Label: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0044dde0
//   XREF to: 00c1a204 (READ)
// 0044dde6: LEA EAX,[ECX*0x4 + 0x0]
// 0044dded: ADD EAX,ECX
// 0044ddef: SHL EAX,0xc
// 0044ddf2: MOV EDX,EAX
// 0044ddf4: SHL EAX,0x4
// 0044ddf7: SUB EAX,EDX
// 0044ddf9: INC ECX
// 0044ddfa: ADD EAX,0xc1a208
//   XREF to: 00c1a208 (DATA)
// 0044ddff: CMP ECX,0x18
// 0044de02: JBE 0x0044de06
//   XREF to: 0044de06 (CONDITIONAL_JUMP)
// 0044de04: XOR EAX,EAX
// 0044de06: MOV dword ptr [0x00c1a204],ECX
//   Label: LAB_0044de06
//   XREF to: 00c1a204 (WRITE)
// 0044de0c: RET
