// Name: core_dmodel.cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470
// Address: 0047c470
// Address Range: [[0047c470, 0047c49e]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470(CKeyFramedModel * this_ptr, float desired_height)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470
          (CKeyFramedModel *this_ptr,float desired_height)

{
  float in_stack_0000000c;
  
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  core_dmodel_cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0
            (this_ptr,in_stack_0000000c / (this_ptr->frame_bounds[1].y - this_ptr->frame_bounds->y))
  ;
  return;
}


// Assembly code:
// 0047c470: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470
// 0047c471: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0047c475: PUSH EBX
// 0047c476: CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   XREF to: 00478010 (UNCONDITIONAL_CALL)
// 0047c47b: MOV EAX,dword ptr [EBX + 0x5690]
// 0047c481: FLD float ptr [EAX + 0x10]
// 0047c484: FSUB float ptr [EAX + 0x4]
// 0047c487: ADD ESP,0x4
// 0047c48a: FDIVR float ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0047c48e: SUB ESP,0x4
// 0047c491: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0047c494: PUSH EBX
// 0047c495: CALL core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0
//   XREF to: 0047c4a0 (UNCONDITIONAL_CALL)
// 0047c49a: ADD ESP,0x8
// 0047c49d: POP EBX
// 0047c49e: RET
