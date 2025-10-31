// Name: core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00
// Address: 0047aa00
// Address Range: [[0047aa00, 0047aa22]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00(CKeyFramedModel * this_ptr, float weld_tolerance, float angle_threshold_radians)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047dd5d [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
//   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00
          (CKeyFramedModel *this_ptr,float weld_tolerance,float angle_threshold_radians)

{
  float in_stack_00000010;
  
  core_dmodel_cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0(this_ptr,weld_tolerance);
  core_dmodel_cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
            ((CKeyFramedModel *)weld_tolerance,in_stack_00000010);
  return;
}


// Assembly code:
// 0047aa00: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00
//   XREF to: Stack[0x4] (READ)
// 0047aa04: PUSH dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0047aa08: PUSH EDX
// 0047aa09: CALL core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0
//   XREF to: 0047ada0 (UNCONDITIONAL_CALL)
// 0047aa0e: ADD ESP,0x8
// 0047aa11: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0047aa15: PUSH dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0047aa19: PUSH ECX
// 0047aa1a: CALL core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
//   XREF to: 0047b1e0 (UNCONDITIONAL_CALL)
// 0047aa1f: ADD ESP,0x8
// 0047aa22: RET
