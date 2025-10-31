// Name: core_zombie.cpp_FUN_005f8d30
// Address: 005f8d30
// Address Range: [[005f8d30, 005f8d9d]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005f8d30()
// Globals:
//   undefined4 DAT_0065843d
//   undefined4 DAT_00658445

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_zombie_cpp_FUN_005f8d30(void)

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
  fVar1 = _DAT_0065843d;
  *in_stack_00000004 = (fStack_30 + fStack_24) * _DAT_0065843d;
  in_stack_00000004[1] = fVar1 * (fStack_2c + fStack_20);
  in_stack_00000004[2] = fStack_28 + (float)_DAT_00658445;
  return in_stack_00000004;
}


// Assembly code:
// 005f8d30: PUSH EBX
//   Label: core_zombie.cpp_FUN_005f8d30
// 005f8d31: PUSH EBP
// 005f8d32: MOV EBP,ESP
// 005f8d34: SUB ESP,0x24
// 005f8d37: AND ESP,0xfffffff8
// 005f8d3a: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005f8d3d: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005f8d40: MOV EAX,ESP
// 005f8d42: PUSH EAX
// 005f8d43: MOV EDX,dword ptr [ECX + 0x154]
// 005f8d49: PUSH ECX
// 005f8d4a: CALL dword ptr [EDX + 0x14]
// 005f8d4d: ADD ESP,0x8
// 005f8d50: FLD float ptr [ESP]
// 005f8d53: FADD float ptr [ESP + 0xc]
// 005f8d57: FST float ptr [ESP + 0x18]
// 005f8d5b: FLD float ptr [0x0065843d]
//   XREF to: 0065843d (READ)
// 005f8d61: FXCH
// 005f8d63: FMUL ST1
// 005f8d65: FLD float ptr [ESP + 0x8]
// 005f8d69: FLD float ptr [ESP + 0x4]
// 005f8d6d: FADD float ptr [ESP + 0x10]
// 005f8d71: FXCH
// 005f8d73: FADD float ptr [ESP + 0x14]
// 005f8d77: FXCH
// 005f8d79: FSTP float ptr [ESP + 0x1c]
// 005f8d7d: FSTP float ptr [ESP + 0x20]
// 005f8d81: FSTP float ptr [EBX]
// 005f8d83: FMUL float ptr [ESP + 0x1c]
// 005f8d87: FSTP float ptr [EBX + 0x4]
// 005f8d8a: FLD float ptr [ESP + 0x8]
// 005f8d8e: FADD double ptr [0x00658445]
//   XREF to: 00658445 (READ)
// 005f8d94: MOV EAX,EBX
// 005f8d96: FSTP float ptr [EBX + 0x8]
// 005f8d99: MOV ESP,EBP
// 005f8d9b: POP EBP
// 005f8d9c: POP EBX
// 005f8d9d: RET
