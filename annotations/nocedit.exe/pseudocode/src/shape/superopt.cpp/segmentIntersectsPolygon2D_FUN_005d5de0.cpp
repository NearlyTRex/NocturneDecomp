// Name: shape_superopt.cpp_segmentIntersectsPolygon2D_FUN_005d5de0
// Address: 005d5de0
// Address Range: [[005d5de0, 005d5e50]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_segmentIntersectsPolygon2D_FUN_005d5de0(CVector2d * polyVerts, uint vertCount, CVector2d * segStart, CVector2d * segEnd, CVector2d * segStart2)
// Function calls:
//   shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60
//   shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0

#include "nocturne.h"

int __cdecl
shape_superopt_cpp_segmentIntersectsPolygon2D_FUN_005d5de0
          (CVector2d *polyVerts,uint vertCount,CVector2d *segStart,CVector2d *segEnd,
          CVector2d *segStart2)

{
  int iVar1;
  CVector2d *point_a;
  uint uVar2;
  
  iVar1 = shape_superopt_cpp_pointInPolygon2D_FUN_005d5e60(polyVerts,vertCount,segStart);
  if ((iVar1 == 0) &&
     (iVar1 = shape_superopt_cpp_pointInPolygon2D_FUN_005d5e60(polyVerts,vertCount,segEnd),
     iVar1 == 0)) {
    uVar2 = 0;
    point_a = polyVerts + (vertCount - 1);
    if (vertCount != 0) {
      do {
        iVar1 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                          (point_a,polyVerts,segStart2,segEnd);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        point_a = polyVerts;
        polyVerts = polyVerts + 1;
      } while (uVar2 < vertCount);
    }
    return 0;
  }
  return 1;
}


// Assembly code:
// 005d5de0: PUSH EBX
//   Label: shape_superopt.cpp_segmentIntersectsPolygon2D_FUN_005d5de0
// 005d5de1: PUSH ESI
// 005d5de2: PUSH EDI
// 005d5de3: PUSH EBP
// 005d5de4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5de8: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d5dec: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005d5df0: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d5df4: PUSH EDX
// 005d5df5: PUSH EDI
// 005d5df6: PUSH EBX
// 005d5df7: CALL shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60
//   XREF to: 005d5e60 (UNCONDITIONAL_CALL)
// 005d5dfc: ADD ESP,0xc
// 005d5dff: TEST EAX,EAX
// 005d5e01: JZ 0x005d5e0d
//   XREF to: 005d5e0d (CONDITIONAL_JUMP)
// 005d5e03: MOV EAX,0x1
//   Label: LAB_005d5e03
// 005d5e08: POP EBP
// 005d5e09: POP EDI
// 005d5e0a: POP ESI
// 005d5e0b: POP EBX
// 005d5e0c: RET
// 005d5e0d: PUSH EBP
//   Label: LAB_005d5e0d
// 005d5e0e: PUSH EDI
// 005d5e0f: PUSH EBX
// 005d5e10: CALL shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60
//   XREF to: 005d5e60 (UNCONDITIONAL_CALL)
// 005d5e15: ADD ESP,0xc
// 005d5e18: TEST EAX,EAX
// 005d5e1a: JNZ 0x005d5e03
//   XREF to: 005d5e03 (CONDITIONAL_JUMP)
// 005d5e1c: MOV EAX,EDI
// 005d5e1e: SHL EAX,0x4
// 005d5e21: SUB EAX,0x10
// 005d5e24: XOR ESI,ESI
// 005d5e26: ADD EAX,EBX
// 005d5e28: TEST EDI,EDI
// 005d5e2a: JBE 0x005d5e4a
//   XREF to: 005d5e4a (CONDITIONAL_JUMP)
// 005d5e2c: PUSH EBP
//   Label: LAB_005d5e2c
// 005d5e2d: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005d5e31: PUSH ECX
// 005d5e32: PUSH EBX
// 005d5e33: PUSH EAX
// 005d5e34: CALL shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0
//   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)
// 005d5e39: ADD ESP,0x10
// 005d5e3c: TEST EAX,EAX
// 005d5e3e: JNZ 0x005d5e03
//   XREF to: 005d5e03 (CONDITIONAL_JUMP)
// 005d5e40: MOV EAX,EBX
// 005d5e42: INC ESI
// 005d5e43: ADD EBX,0x10
// 005d5e46: CMP ESI,EDI
// 005d5e48: JC 0x005d5e2c
//   XREF to: 005d5e2c (CONDITIONAL_JUMP)
// 005d5e4a: XOR EAX,EAX
//   Label: LAB_005d5e4a
// 005d5e4c: POP EBP
// 005d5e4d: POP EDI
// 005d5e4e: POP ESI
// 005d5e4f: POP EBX
// 005d5e50: RET
