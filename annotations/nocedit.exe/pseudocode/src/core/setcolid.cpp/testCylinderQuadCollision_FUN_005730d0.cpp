// Name: core_setcolid.cpp_testCylinderQuadCollision_FUN_005730d0
// Address: 005730d0
// Address Range: [[005730d0, 00573132]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_testCylinderQuadCollision_FUN_005730d0(SIntersectXZCylinder * cylinder, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, CVector3f * vertex4)
// Function calls:
//   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80

#include "nocturne.h"

void __cdecl
core_setcolid_cpp_testCylinderQuadCollision_FUN_005730d0
          (SIntersectXZCylinder *cylinder,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,
          CVector3f *vertex4)

{
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000018;
  CVector3f *in_stack_0000001c;
  
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)&stack0xffffffb8,vertex1,vertex2,vertex3);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)&stack0xffffffbc,(SIntersectXZCylinder *)vertex1);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)&stack0xffffffc0,vertex1,in_stack_00000018,in_stack_0000001c);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)&stack0xffffffc4,(SIntersectXZCylinder *)vertex1);
  return;
}


// Assembly code:
// 005730d0: PUSH EBX
//   Label: core_setcolid.cpp_testCylinderQuadCollision_FUN_005730d0
// 005730d1: PUSH ESI
// 005730d2: PUSH EDI
// 005730d3: PUSH EBP
// 005730d4: SUB ESP,0x38
// 005730d7: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x10] (READ)
// 005730db: PUSH EDX
// 005730dc: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0xc] (READ)
// 005730e0: PUSH ECX
// 005730e1: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 005730e5: PUSH EBX
// 005730e6: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x48] (DATA)
// 005730ea: PUSH EAX
// 005730eb: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 005730f0: ADD ESP,0x10
// 005730f3: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 005730f7: PUSH ESI
// 005730f8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x48] (DATA)
// 005730fc: PUSH EAX
// 005730fd: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 00573102: ADD ESP,0x8
// 00573105: MOV EDI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x14] (READ)
// 00573109: PUSH EDI
// 0057310a: MOV EBP,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x10] (READ)
// 0057310e: PUSH EBP
// 0057310f: PUSH EBX
// 00573110: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x48] (DATA)
// 00573114: PUSH EAX
// 00573115: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 0057311a: ADD ESP,0x10
// 0057311d: PUSH ESI
// 0057311e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x48] (DATA)
// 00573122: PUSH EAX
// 00573123: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 00573128: ADD ESP,0x8
// 0057312b: ADD ESP,0x38
// 0057312e: POP EBP
// 0057312f: POP EDI
// 00573130: POP ESI
// 00573131: POP EBX
// 00573132: RET
