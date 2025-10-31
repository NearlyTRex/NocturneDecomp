// Name: core_barrier.cpp_CBarrier_FUN_004142e0
// Address: 004142e0
// Address Range: [[004142e0, 00414333]]
// Convention: __cdecl
// Signature: void core_barrier.cpp_CBarrier_FUN_004142e0(CBarrier * this_ptr)
// Globals:
//   undefined4 DAT_0061515f
//   undefined4 DAT_00615167

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_barrier_cpp_CBarrier_FUN_004142e0(CBarrier *this_ptr)

{
  float fVar1;
  float fVar2;
  float *in_stack_00000008;
  
  fVar1 = *(float *)this_ptr->field1_0x158;
  fVar2 = (float)_DAT_0061515f;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(this_ptr->field1_0x158 + 8) * fVar2;
  in_stack_00000008[3] = *(float *)this_ptr->field1_0x158 * fVar2;
  in_stack_00000008[4] = *(float *)(this_ptr->field1_0x158 + 4) + (float)_DAT_00615167;
  in_stack_00000008[5] = fVar2 * *(float *)(this_ptr->field1_0x158 + 8);
  return;
}


// Assembly code:
// 004142e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_barrier.cpp_CBarrier_FUN_004142e0
//   XREF to: Stack[0x4] (READ)
// 004142e4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004142e8: FLD float ptr [EDX + 0x158]
// 004142ee: FCHS
// 004142f0: FLD double ptr [0x0061515f]
//   XREF to: 0061515f (READ)
// 004142f6: FXCH
// 004142f8: FMUL ST1
// 004142fa: MOV dword ptr [EAX + 0x4],0xbdcccccd
// 00414301: FSTP float ptr [EAX]
// 00414303: FLD float ptr [EDX + 0x160]
// 00414309: FCHS
// 0041430b: FMUL ST1
// 0041430d: FSTP float ptr [EAX + 0x8]
// 00414310: FLD float ptr [EDX + 0x158]
// 00414316: FMUL ST1
// 00414318: FSTP float ptr [EAX + 0xc]
// 0041431b: FLD float ptr [EDX + 0x15c]
// 00414321: FADD double ptr [0x00615167]
//   XREF to: 00615167 (READ)
// 00414327: FSTP float ptr [EAX + 0x10]
// 0041432a: FMUL float ptr [EDX + 0x160]
// 00414330: FSTP float ptr [EAX + 0x14]
// 00414333: RET
