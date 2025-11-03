// Name: core_vampboss.cpp_FUN_005e58d0
// Address: 005e58d0
// Address Range: [[005e58d0, 005e5931]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_FUN_005e58d0()
// Function calls:
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70

#include "nocturne.h"

float core_vampboss_cpp_FUN_005e58d0(void)

{
  float fVar1;
  float fVar2;
  float in_stack_00000004;
  float in_stack_0000000c;
  
  fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(in_stack_00000004);
  fVar2 = -in_stack_0000000c;
  if ((-in_stack_0000000c <= fVar1) && (fVar2 = in_stack_0000000c, fVar1 <= in_stack_0000000c)) {
    return fVar1;
  }
  return fVar2;
}


// Assembly code:
// 005e58d0: SUB ESP,0xc
//   Label: core_vampboss.cpp_FUN_005e58d0
// 005e58d3: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005e58d7: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005e58dc: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 005e58e0: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4] (READ)
// 005e58e4: ADD ESP,0x4
// 005e58e7: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005e58eb: FXCH
// 005e58ed: FST float ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (WRITE)
// 005e58f1: FXCH
// 005e58f3: FCHS
// 005e58f5: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005e58f8: FCOMP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005e58fb: FNSTSW AX
// 005e58fd: SAHF
// 005e58fe: JC 0x005e591d
//   XREF to: 005e591d (CONDITIONAL_JUMP)
// 005e5900: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005e5904: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005e5908: FNSTSW AX
// 005e590a: SAHF
// 005e590b: JBE 0x005e5922
//   XREF to: 005e5922 (CONDITIONAL_JUMP)
// 005e590d: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005e5911: MOV dword ptr [ESP + 0x4],EAX
//   Label: LAB_005e5911
//   XREF to: Stack[-0x8] (WRITE)
// 005e5915: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 005e5919: ADD ESP,0xc
// 005e591c: RET
// 005e591d: MOV EAX,dword ptr [ESP]
//   Label: LAB_005e591d
//   XREF to: Stack[-0xc] (DATA)
// 005e5920: JMP 0x005e5911
//   XREF to: 005e5911 (UNCONDITIONAL_JUMP)
// 005e5922: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005e5922
//   XREF to: Stack[0x4] (READ)
// 005e5926: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 005e592a: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 005e592e: ADD ESP,0xc
// 005e5931: RET
