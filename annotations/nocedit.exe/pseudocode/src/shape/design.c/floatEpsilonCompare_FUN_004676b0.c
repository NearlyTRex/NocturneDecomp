// Name: shape_design.c_floatEpsilonCompare_FUN_004676b0
// Address: 004676b0
// Address Range: [[004676b0, 004676eb]]
// Convention: __cdecl
// Signature: int shape_design.c_floatEpsilonCompare_FUN_004676b0(float value1, float value2, float epsilon)

#include "nocturne.h"

int __cdecl shape_design_c_floatEpsilonCompare_FUN_004676b0(float value1,float value2,float epsilon)

{
  uint local_18;
  
  local_18 = (uint)(ABS(value1 - value2) < epsilon);
  return local_18;
}


// Assembly code:
// 004676b0: PUSH EBX
//   Label: shape_design.c_floatEpsilonCompare_FUN_004676b0
// 004676b1: PUSH ESI
// 004676b2: PUSH EDI
// 004676b3: PUSH EBP
// 004676b4: MOV EBP,ESP
// 004676b6: SUB ESP,0x8
// 004676bc: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004676bf: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004676c2: FABS
// 004676c4: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 004676c7: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004676ca: FCOMP float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004676cd: FNSTSW AX
// 004676cf: SAHF
// 004676d0: JNC 0x004676db
//   XREF to: 004676db (CONDITIONAL_JUMP)
// 004676d2: MOV dword ptr [EBP + -0x8],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 004676d9: JMP 0x004676e2
//   XREF to: 004676e2 (UNCONDITIONAL_JUMP)
// 004676db: MOV dword ptr [EBP + -0x8],0x0
//   Label: LAB_004676db
//   XREF to: Stack[-0x18] (WRITE)
// 004676e2: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_004676e2
//   XREF to: Stack[-0x18] (READ)
// 004676e5: MOV ESP,EBP
// 004676e7: POP EBP
// 004676e8: POP EDI
// 004676e9: POP ESI
// 004676ea: POP EBX
// 004676eb: RET
