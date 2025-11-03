// Name: core_skeleton.cpp_CDeformableModel_lightVertices_FUN_0059ab50
// Address: 0059ab50
// Address Range: [[0059ab50, 0059ab89]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_lightVertices_FUN_0059ab50(CDeformableModel * this_ptr, int lod_index, int render_flags)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a02a0 (005a02a0) at 005a02ca [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_lightVertices_FUN_0059ab50
          (CDeformableModel *this_ptr,int lod_index,int render_flags)

{
  core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
            (g_CDemonSetPtr,this_ptr->vertex_count[lod_index],this_ptr->tri_count[lod_index],
             this_ptr->tri_data_ptr[lod_index],render_flags,-3,0);
  return;
}


// Assembly code:
// 0059ab50: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_lightVertices_FUN_0059ab50
// 0059ab51: PUSH ESI
// 0059ab52: PUSH EDI
// 0059ab53: PUSH EBP
// 0059ab54: PUSH 0x0
// 0059ab56: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0059ab5a: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0059ab5e: PUSH -0x3
// 0059ab60: SHL EAX,0x2
// 0059ab63: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0059ab67: ADD EAX,ECX
// 0059ab69: PUSH EDX
// 0059ab6a: MOV EBX,dword ptr [EAX + 0x7c]
// 0059ab6d: PUSH EBX
// 0059ab6e: MOV ESI,dword ptr [EAX + 0x54]
// 0059ab71: PUSH ESI
// 0059ab72: MOV EDI,dword ptr [EAX + 0x2c]
// 0059ab75: PUSH EDI
// 0059ab76: MOV EBP,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0059ab7c: PUSH EBP
//   XREF to: 03114278 (DATA)
// 0059ab7d: CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
//   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
// 0059ab82: ADD ESP,0x1c
// 0059ab85: POP EBP
// 0059ab86: POP EDI
// 0059ab87: POP ESI
// 0059ab88: POP EBX
// 0059ab89: RET
