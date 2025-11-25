// Name: core_teleport.cpp_CTeleport_FUN_005daad0
// Address: 005daad0
// Address Range: [[005daad0, 005dab23]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleport_FUN_005daad0(CTeleport * this_ptr)
// Globals:
//   double DOUBLE_00654cdb = 0.5
//   double DOUBLE_00654ce3 = 0.100000000000000

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_FUN_005daad0(CTeleport *this_ptr)

{
  float fVar1;
  float fVar2;
  float *in_stack_00000008;
  
  fVar1 = *(float *)this_ptr->field1_0x158;
  fVar2 = (float)DOUBLE_00654cdb;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(this_ptr->field1_0x158 + 8) * fVar2;
  in_stack_00000008[3] = *(float *)this_ptr->field1_0x158 * fVar2;
  in_stack_00000008[4] = *(float *)(this_ptr->field1_0x158 + 4) + (float)DOUBLE_00654ce3;
  in_stack_00000008[5] = fVar2 * *(float *)(this_ptr->field1_0x158 + 8);
  return;
}


// Assembly code:
// 005daad0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_teleport.cpp_CTeleport_FUN_005daad0
//   XREF to: Stack[0x4] (READ)
// 005daad4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005daad8: FLD float ptr [EDX + 0x158]
// 005daade: FCHS
// 005daae0: FLD double ptr [0x00654cdb]
//   XREF to: 00654cdb (READ)
// 005daae6: FXCH
// 005daae8: FMUL ST1
// 005daaea: MOV dword ptr [EAX + 0x4],0xbdcccccd
// 005daaf1: FSTP float ptr [EAX]
// 005daaf3: FLD float ptr [EDX + 0x160]
// 005daaf9: FCHS
// 005daafb: FMUL ST1
// 005daafd: FSTP float ptr [EAX + 0x8]
// 005dab00: FLD float ptr [EDX + 0x158]
// 005dab06: FMUL ST1
// 005dab08: FSTP float ptr [EAX + 0xc]
// 005dab0b: FLD float ptr [EDX + 0x15c]
// 005dab11: FADD double ptr [0x00654ce3]
//   XREF to: 00654ce3 (READ)
// 005dab17: FSTP float ptr [EAX + 0x10]
// 005dab1a: FMUL float ptr [EDX + 0x160]
// 005dab20: FSTP float ptr [EAX + 0x14]
// 005dab23: RET
