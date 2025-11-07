// Name: shape_design.c_getTextureName_FUN_0046e060
// Address: 0046e060
// Address Range: [[0046e060, 0046e083]]
// Convention: __cdecl
// Signature: char * shape_design.c_getTextureName_FUN_0046e060(int texture_index)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 (0047a3e0) at 0047a7a6 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d53a [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a5cd [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 (0051bac0) at 0051bca8 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ead0 (0051ead0) at 0051ec16 [UNCONDITIONAL_CALL]
// Globals:
//   char[9][80] g_TextureNameArray

#include "nocturne.h"

char * __cdecl shape_design_c_getTextureName_FUN_0046e060(int texture_index)

{
  return g_TextureNameArray[texture_index];
}


// Assembly code:
// 0046e060: PUSH EBX
//   Label: shape_design.c_getTextureName_FUN_0046e060
// 0046e061: PUSH ESI
// 0046e062: PUSH EDI
// 0046e063: PUSH EBP
// 0046e064: MOV EBP,ESP
// 0046e066: SUB ESP,0x4
// 0046e06c: IMUL EAX,dword ptr [EBP + 0x14],0x50
//   XREF to: Stack[0x4] (READ)
// 0046e070: MOV EDX,0x1eb1490
//   XREF to: 01eb1490 (DATA)
// 0046e075: ADD EDX,EAX
// 0046e077: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0046e07a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e07d: MOV ESP,EBP
// 0046e07f: POP EBP
// 0046e080: POP EDI
// 0046e081: POP ESI
// 0046e082: POP EBX
// 0046e083: RET
