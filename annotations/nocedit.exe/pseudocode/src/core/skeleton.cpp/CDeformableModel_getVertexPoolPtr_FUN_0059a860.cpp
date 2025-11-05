// Name: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860
// Address: 0059a860
// Address Range: [[0059a860, 0059a87f]]
// Convention: __cdecl
// Signature: CVector3f * core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860(CDeformableModel * this_ptr, int index)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480 (005a0480) at 005a052e [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860
          (CDeformableModel *this_ptr,int index)

{
  return this_ptr->vertex_pool + index;
}


// Assembly code:
// 0059a860: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860
//   XREF to: Stack[0x8] (READ)
// 0059a864: LEA EAX,[EDX*0x4 + 0x0]
// 0059a86b: SUB EAX,EDX
// 0059a86d: LEA EDX,[EAX*0x4 + 0x0]
// 0059a874: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0059a878: ADD EAX,0x7c90
// 0059a87d: ADD EAX,EDX
// 0059a87f: RET
