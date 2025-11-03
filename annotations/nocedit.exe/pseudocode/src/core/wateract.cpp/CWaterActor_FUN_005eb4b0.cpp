// Name: core_wateract.cpp_CWaterActor_FUN_005eb4b0
// Address: 005eb4b0
// Address Range: [[005eb4b0, 005eb503]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_FUN_005eb4b0(CWaterActor * this_ptr)
// Globals:
//   double DOUBLE_006572ff = 0.5
//   double DOUBLE_00657307 = 0.100000000000000

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005eb4b0(CWaterActor *this_ptr)

{
  float fVar1;
  float fVar2;
  float *in_stack_00000008;
  
  fVar1 = (this_ptr->size).x;
  fVar2 = (float)DOUBLE_006572ff;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -(this_ptr->size).z * fVar2;
  in_stack_00000008[3] = (this_ptr->size).x * fVar2;
  in_stack_00000008[4] = (this_ptr->size).y + (float)DOUBLE_00657307;
  in_stack_00000008[5] = fVar2 * (this_ptr->size).z;
  return;
}


// Assembly code:
// 005eb4b0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_wateract.cpp_CWaterActor_FUN_005eb4b0
//   XREF to: Stack[0x4] (READ)
// 005eb4b4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005eb4b8: FLD float ptr [EDX + 0x158]
// 005eb4be: FCHS
// 005eb4c0: FLD double ptr [0x006572ff]
//   XREF to: 006572ff (READ)
// 005eb4c6: FXCH
// 005eb4c8: FMUL ST1
// 005eb4ca: MOV dword ptr [EAX + 0x4],0xbdcccccd
// 005eb4d1: FSTP float ptr [EAX]
// 005eb4d3: FLD float ptr [EDX + 0x160]
// 005eb4d9: FCHS
// 005eb4db: FMUL ST1
// 005eb4dd: FSTP float ptr [EAX + 0x8]
// 005eb4e0: FLD float ptr [EDX + 0x158]
// 005eb4e6: FMUL ST1
// 005eb4e8: FSTP float ptr [EAX + 0xc]
// 005eb4eb: FLD float ptr [EDX + 0x15c]
// 005eb4f1: FADD double ptr [0x00657307]
//   XREF to: 00657307 (READ)
// 005eb4f7: FSTP float ptr [EAX + 0x10]
// 005eb4fa: FMUL float ptr [EDX + 0x160]
// 005eb500: FSTP float ptr [EAX + 0x14]
// 005eb503: RET
