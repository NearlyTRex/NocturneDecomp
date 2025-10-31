// Name: core_boneguy.cpp_FUN_0041b700
// Address: 0041b700
// Address Range: [[0041b700, 0041b76d]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041b700()
// Globals:
//   undefined4 DAT_00615f0d
//   undefined4 DAT_00615f15

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_boneguy_cpp_FUN_0041b700(void)

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
  fVar1 = _DAT_00615f0d;
  *in_stack_00000004 = (fStack_30 + fStack_24) * _DAT_00615f0d;
  in_stack_00000004[1] = fVar1 * (fStack_2c + fStack_20);
  in_stack_00000004[2] = fStack_28 + (float)_DAT_00615f15;
  return in_stack_00000004;
}


// Assembly code:
// 0041b700: PUSH EBX
//   Label: core_boneguy.cpp_FUN_0041b700
// 0041b701: PUSH EBP
// 0041b702: MOV EBP,ESP
// 0041b704: SUB ESP,0x24
// 0041b707: AND ESP,0xfffffff8
// 0041b70a: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0041b70d: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0041b710: MOV EAX,ESP
// 0041b712: PUSH EAX
// 0041b713: MOV EDX,dword ptr [ECX + 0x154]
// 0041b719: PUSH ECX
// 0041b71a: CALL dword ptr [EDX + 0x14]
// 0041b71d: ADD ESP,0x8
// 0041b720: FLD float ptr [ESP]
// 0041b723: FADD float ptr [ESP + 0xc]
// 0041b727: FST float ptr [ESP + 0x18]
// 0041b72b: FLD float ptr [0x00615f0d]
//   XREF to: 00615f0d (READ)
// 0041b731: FXCH
// 0041b733: FMUL ST1
// 0041b735: FLD float ptr [ESP + 0x8]
// 0041b739: FLD float ptr [ESP + 0x4]
// 0041b73d: FADD float ptr [ESP + 0x10]
// 0041b741: FXCH
// 0041b743: FADD float ptr [ESP + 0x14]
// 0041b747: FXCH
// 0041b749: FSTP float ptr [ESP + 0x1c]
// 0041b74d: FSTP float ptr [ESP + 0x20]
// 0041b751: FSTP float ptr [EBX]
// 0041b753: FMUL float ptr [ESP + 0x1c]
// 0041b757: FSTP float ptr [EBX + 0x4]
// 0041b75a: FLD float ptr [ESP + 0x8]
// 0041b75e: FADD double ptr [0x00615f15]
//   XREF to: 00615f15 (READ)
// 0041b764: MOV EAX,EBX
// 0041b766: FSTP float ptr [EBX + 0x8]
// 0041b769: MOV ESP,EBP
// 0041b76b: POP EBP
// 0041b76c: POP EBX
// 0041b76d: RET
