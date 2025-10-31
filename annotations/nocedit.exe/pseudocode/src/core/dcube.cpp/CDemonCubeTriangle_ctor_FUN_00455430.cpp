// Name: core_dcube.cpp_CDemonCubeTriangle_ctor_FUN_00455430
// Address: 00455430
// Address Range: [[00455430, 00455451]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCubeTriangle_ctor_FUN_00455430(CDemonCubeTriangle * this_ptr, CVector3f * vertex0, CVector3f * vertex1, CVector3f * vertex2)
// Cross-references:
//   core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData (00456ed0) at 00457031 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0 (004570a0) at 0045737a [UNCONDITIONAL_CALL]
// Function calls:
//   core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCubeTriangle_ctor_FUN_00455430
          (CDemonCubeTriangle *this_ptr,CVector3f *vertex0,CVector3f *vertex1,CVector3f *vertex2)

{
  this_ptr->vertices[0] = vertex0;
  this_ptr->vertices[1] = vertex1;
  this_ptr->vertices[2] = vertex2;
  core_dcube_cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0(this_ptr);
  return;
}


// Assembly code:
// 00455430: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dcube.cpp_CDemonCubeTriangle_ctor_FUN_00455430
//   XREF to: Stack[0x4] (READ)
// 00455434: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00455438: MOV dword ptr [EAX],EDX
// 0045543a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0045543e: MOV dword ptr [EAX + 0x4],EDX
// 00455441: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 00455445: PUSH EAX
// 00455446: MOV dword ptr [EAX + 0x8],EDX
// 00455449: CALL core_dcube.cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_004552c0
//   XREF to: 004552c0 (UNCONDITIONAL_CALL)
// 0045544e: ADD ESP,0x4
// 00455451: RET
