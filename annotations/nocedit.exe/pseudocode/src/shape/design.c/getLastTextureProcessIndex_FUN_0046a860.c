// Name: shape_design.c_getLastTextureProcessIndex_FUN_0046a860
// Address: 0046a860
// Address Range: [[0046a860, 0046a87d]]
// Convention: __cdecl
// Signature: int shape_design.c_getLastTextureProcessIndex_FUN_0046a860(void)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 (0047a3e0) at 0047a784 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c51a [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 (0051bac0) at 0051bb22 [UNCONDITIONAL_CALL]
// Globals:
//   int g_LastTextureProcessIndex

#include "nocturne.h"

int __cdecl shape_design_c_getLastTextureProcessIndex_FUN_0046a860(void)

{
  return g_LastTextureProcessIndex;
}


// Assembly code:
// 0046a860: PUSH EBX
//   Label: shape_design.c_getLastTextureProcessIndex_FUN_0046a860
// 0046a861: PUSH ESI
// 0046a862: PUSH EDI
// 0046a863: PUSH EBP
// 0046a864: MOV EBP,ESP
// 0046a866: SUB ESP,0x4
// 0046a86c: MOV EAX,[0x01eb17b8]
//   XREF to: 01eb17b8 (READ)
// 0046a871: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046a874: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046a877: MOV ESP,EBP
// 0046a879: POP EBP
// 0046a87a: POP EDI
// 0046a87b: POP ESI
// 0046a87c: POP EBX
// 0046a87d: RET
