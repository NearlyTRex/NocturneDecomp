// Name: core_cloth.cpp_FUN_0043e380
// Address: 0043e380
// Address Range: [[0043e380, 0043e3ce]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043e380()
// Globals:
//   int g_LightAttenuationMax

#include "nocturne.h"

void core_cloth_cpp_FUN_0043e380(void)

{
  float fVar1;
  float *in_stack_00000004;
  
  fVar1 = (float)(g_LightAttenuationMax -
                 ((int)(in_stack_00000004[2] * in_stack_00000004[2] +
                       *in_stack_00000004 * *in_stack_00000004 +
                       in_stack_00000004[1] * in_stack_00000004[1]) >> 1));
  *in_stack_00000004 = *in_stack_00000004 * fVar1;
  in_stack_00000004[1] = in_stack_00000004[1] * fVar1;
  in_stack_00000004[2] = in_stack_00000004[2] * fVar1;
  return;
}


// Assembly code:
// 0043e380: SUB ESP,0x8
//   Label: core_cloth.cpp_FUN_0043e380
// 0043e383: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0043e387: FLD float ptr [EAX + 0x4]
// 0043e38a: FMUL ST0
// 0043e38c: FLD float ptr [EAX]
// 0043e38e: FMUL ST0
// 0043e390: FADDP
// 0043e392: FLD float ptr [EAX + 0x8]
// 0043e395: FMUL ST0
// 0043e397: FADDP
// 0043e399: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0043e39c: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0043e39f: MOV ECX,dword ptr [0x02d7a7bc]
//   XREF to: 02d7a7bc (READ)
// 0043e3a5: SAR EDX,0x1
// 0043e3a7: SUB ECX,EDX
// 0043e3a9: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x4] (WRITE)
// 0043e3ad: FLD float ptr [EAX]
// 0043e3af: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 0043e3b3: FLD float ptr [EAX + 0x4]
// 0043e3b6: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 0043e3ba: FLD float ptr [EAX + 0x8]
// 0043e3bd: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 0043e3c1: FXCH ST2
// 0043e3c3: FSTP float ptr [EAX]
// 0043e3c5: FSTP float ptr [EAX + 0x4]
// 0043e3c8: FSTP float ptr [EAX + 0x8]
// 0043e3cb: ADD ESP,0x8
// 0043e3ce: RET
