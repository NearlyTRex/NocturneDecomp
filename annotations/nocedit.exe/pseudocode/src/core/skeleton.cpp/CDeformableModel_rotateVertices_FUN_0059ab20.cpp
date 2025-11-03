// Name: core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_0059ab20
// Address: 0059ab20
// Address Range: [[0059ab20, 0059ab49]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_0059ab20(CDeformableModel * this_ptr, int lod_index, int * input_vertices)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0250 (005a0250) at 005a027a [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_0059ab20
          (CDeformableModel *this_ptr,int lod_index,int *input_vertices)

{
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,this_ptr->vertex_count[lod_index],input_vertices);
  return;
}


// Assembly code:
// 0059ab20: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_0059ab20
// 0059ab21: PUSH ESI
// 0059ab22: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0059ab26: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0059ab2a: SHL EAX,0x2
// 0059ab2d: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0059ab31: ADD EAX,ECX
// 0059ab33: PUSH EDX
// 0059ab34: MOV EBX,dword ptr [EAX + 0x2c]
// 0059ab37: PUSH EBX
// 0059ab38: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0059ab3e: PUSH ESI
//   XREF to: 03114278 (DATA)
// 0059ab3f: CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
//   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
// 0059ab44: ADD ESP,0xc
// 0059ab47: POP ESI
// 0059ab48: POP EBX
// 0059ab49: RET
