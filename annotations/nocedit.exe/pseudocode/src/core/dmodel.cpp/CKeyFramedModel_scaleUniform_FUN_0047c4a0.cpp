// Name: core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0
// Address: 0047c4a0
// Address Range: [[0047c4a0, 0047c4c5]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0(CKeyFramedModel * this_ptr, float uniform_scale)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470 (0047c470) at 0047c495 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e1a8 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0
          (CKeyFramedModel *this_ptr,float uniform_scale)

{
  BADSPACEBASE *in_ESP;
  CVector3f local_c;
  
  local_c.z = uniform_scale;
  local_c.y = uniform_scale;
  local_c.x = uniform_scale;
  core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(this_ptr,&local_c);
  return;
}


// Assembly code:
// 0047c4a0: SUB ESP,0xc
//   Label: core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0
// 0047c4a3: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0047c4a7: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 0047c4ab: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0047c4af: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xc] (DATA)
// 0047c4b2: MOV EAX,ESP
// 0047c4b4: PUSH EAX
// 0047c4b5: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047c4b9: PUSH EDX
// 0047c4ba: CALL core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
//   XREF to: 0047c4d0 (UNCONDITIONAL_CALL)
// 0047c4bf: ADD ESP,0x8
// 0047c4c2: ADD ESP,0xc
// 0047c4c5: RET
