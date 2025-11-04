// Name: core_mobster.cpp_FUN_005250a0
// Address: 005250a0
// Address Range: [[005250a0, 0052510d]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_005250a0()
// Globals:
//   float FLOAT_00639696 = 0.5
//   double DOUBLE_0063969e = 0.400000000000000

#include "nocturne.h"

float * core_mobster_cpp_FUN_005250a0(void)

{
  float fVar1;
  float *in_stack_00000004;
  int in_stack_00000008;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))();
  fVar1 = FLOAT_00639696;
  *in_stack_00000004 = (fStack_30 + fStack_24) * FLOAT_00639696;
  in_stack_00000004[1] = fVar1 * (fStack_2c + fStack_20);
  in_stack_00000004[2] = fStack_28 + (float)DOUBLE_0063969e;
  return in_stack_00000004;
}


// Assembly code:
// 005250a0: PUSH EBX
//   Label: core_mobster.cpp_FUN_005250a0
// 005250a1: PUSH EBP
// 005250a2: MOV EBP,ESP
// 005250a4: SUB ESP,0x24
// 005250a7: AND ESP,0xfffffff8
// 005250aa: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005250ad: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005250b0: MOV EAX,ESP
// 005250b2: PUSH EAX
// 005250b3: MOV EDX,dword ptr [ECX + 0x154]
// 005250b9: PUSH ECX
// 005250ba: CALL dword ptr [EDX + 0x14]
// 005250bd: ADD ESP,0x8
// 005250c0: FLD float ptr [ESP]
// 005250c3: FADD float ptr [ESP + 0xc]
// 005250c7: FST float ptr [ESP + 0x18]
// 005250cb: FLD float ptr [0x00639696]
//   XREF to: 00639696 (READ)
// 005250d1: FXCH
// 005250d3: FMUL ST1
// 005250d5: FLD float ptr [ESP + 0x8]
// 005250d9: FLD float ptr [ESP + 0x4]
// 005250dd: FADD float ptr [ESP + 0x10]
// 005250e1: FXCH
// 005250e3: FADD float ptr [ESP + 0x14]
// 005250e7: FXCH
// 005250e9: FSTP float ptr [ESP + 0x1c]
// 005250ed: FSTP float ptr [ESP + 0x20]
// 005250f1: FSTP float ptr [EBX]
// 005250f3: FMUL float ptr [ESP + 0x1c]
// 005250f7: FSTP float ptr [EBX + 0x4]
// 005250fa: FLD float ptr [ESP + 0x8]
// 005250fe: FADD double ptr [0x0063969e]
//   XREF to: 0063969e (READ)
// 00525104: MOV EAX,EBX
// 00525106: FSTP float ptr [EBX + 0x8]
// 00525109: MOV ESP,EBP
// 0052510b: POP EBP
// 0052510c: POP EBX
// 0052510d: RET
