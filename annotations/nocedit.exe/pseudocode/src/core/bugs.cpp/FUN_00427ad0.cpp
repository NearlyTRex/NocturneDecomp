// Name: core_bugs.cpp_FUN_00427ad0
// Address: 00427ad0
// Address Range: [[00427ad0, 00427afc]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00427ad0()
// Globals:
//   undefined4 DAT_0065b5b8

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bugs_cpp_FUN_00427ad0(void)

{
  float *in_stack_00000004;
  int *in_stack_00000008;
  
  *in_stack_00000004 = (float)*in_stack_00000008 * _DAT_0065b5b8;
  in_stack_00000004[1] = (float)in_stack_00000008[1] * _DAT_0065b5b8;
  in_stack_00000004[2] = (float)in_stack_00000008[2] * _DAT_0065b5b8;
  return;
}


// Assembly code:
// 00427ad0: PUSH EBX
//   Label: core_bugs.cpp_FUN_00427ad0
// 00427ad1: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00427ad5: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00427ad9: FILD dword ptr [EAX]
// 00427adb: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00427ae1: FSTP float ptr [EBX]
// 00427ae3: FILD dword ptr [EAX + 0x4]
// 00427ae6: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00427aec: FSTP float ptr [EBX + 0x4]
// 00427aef: FILD dword ptr [EAX + 0x8]
// 00427af2: FMUL float ptr [0x0065b5b8]
//   XREF to: 0065b5b8 (READ)
// 00427af8: FSTP float ptr [EBX + 0x8]
// 00427afb: POP EBX
// 00427afc: RET
