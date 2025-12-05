// Name: shape_superopt.cpp_distancePointToSegmentXY_FUN_005d64a0
// Address: 005d64a0
// Address Range: [[005d64a0, 005d64f7]]
// Convention: __cdecl
// Signature: double shape_superopt.cpp_distancePointToSegmentXY_FUN_005d64a0(CVector3d * segStart, CVector3d * segEnd, CVector3d * point)
// Function calls:
//   shape_superopt.cpp_closestPointOnSegment3D_FUN_005d6020

#include "nocturne.h"

double __cdecl
shape_superopt_cpp_distancePointToSegmentXY_FUN_005d64a0
          (CVector3d *segStart,CVector3d *segEnd,CVector3d *point)

{
  BADSPACEBASE *in_ESP;
  undefined4 *puVar1;
  byte bVar2;
  CVector3d *in_stack_00000004;
  undefined4 auStackY_1820 [1523];
  undefined4 uStack_44;
  undefined4 local_38;
  undefined8 uStack_34;
  double dStack_2c;
  
  bVar2 = 0;
  shape_superopt_cpp_closestPointOnSegment3D_FUN_005d6020(in_stack_00000004,segStart,segEnd);
  local_38 = uStack_44;
  puVar1 = (undefined4 *)((int)&uStack_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 4);
  *(undefined4 *)(&uStack_34 + -(uint)bVar2) = *(undefined4 *)(&stack0xffffffc0 + (uint)bVar2 * -8);
  *puVar1 = *(undefined4 *)(&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  uStack_34 = segEnd->x - uStack_34;
  dStack_2c = segEnd->y - dStack_2c;
  return SQRT(dStack_2c * dStack_2c + uStack_34 * uStack_34);
}


// Assembly code:
// 005d64a0: PUSH EBX
//   Label: shape_superopt.cpp_distancePointToSegmentXY_FUN_005d64a0
// 005d64a1: PUSH ESI
// 005d64a2: PUSH EDI
// 005d64a3: PUSH EBP
// 005d64a4: MOV EBP,ESP
// 005d64a6: SUB ESP,0x38
// 005d64a9: AND ESP,0xfffffff8
// 005d64ac: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d64af: PUSH EBX
// 005d64b0: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d64b3: PUSH EDX
// 005d64b4: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d64b7: PUSH ECX
// 005d64b8: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x48] (DATA)
// 005d64bc: LEA EDI,[ESP + 0x1c]
//   XREF to: Stack[-0x38] (DATA)
// 005d64c0: CALL shape_superopt.cpp_closestPointOnSegment3D_FUN_005d6020
//   XREF to: 005d6020 (UNCONDITIONAL_CALL)
// 005d64c5: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x48] (DATA)
// 005d64c9: ADD ESP,0xc
// 005d64cc: MOVSD ES:EDI,ESI
// 005d64cd: MOVSD ES:EDI,ESI
// 005d64ce: MOVSD ES:EDI,ESI
// 005d64cf: MOVSD ES:EDI,ESI
// 005d64d0: FLD double ptr [EBX]
// 005d64d2: FSUB double ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (READ)
// 005d64d6: FMUL ST0
// 005d64d8: FLD double ptr [EBX + 0x8]
// 005d64db: FSUB double ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 005d64df: FMUL ST0
// 005d64e1: FADDP
// 005d64e3: FSQRT
// 005d64e5: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (WRITE)
// 005d64e9: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 005d64ed: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 005d64f1: MOV ESP,EBP
// 005d64f3: POP EBP
// 005d64f4: POP EDI
// 005d64f5: POP ESI
// 005d64f6: POP EBX
// 005d64f7: RET
