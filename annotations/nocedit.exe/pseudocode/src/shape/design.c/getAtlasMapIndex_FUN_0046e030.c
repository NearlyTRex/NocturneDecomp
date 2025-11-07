// Name: shape_design.c_getAtlasMapIndex_FUN_0046e030
// Address: 0046e030
// Address Range: [[0046e030, 0046e055]]
// Convention: __cdecl
// Signature: int shape_design.c_getAtlasMapIndex_FUN_0046e030(int texture_entry_index)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 (0047a3e0) at 0047a72d [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a5c4 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 (0051bac0) at 0051bc5d [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ead0 (0051ead0) at 0051ec0d [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_01e8d474

#include "nocturne.h"

int __cdecl shape_design_c_getAtlasMapIndex_FUN_0046e030(int texture_entry_index)

{
  return g_TextureAtlasEntries[texture_entry_index].atlas_map_index;
}


// Assembly code:
// 0046e030: PUSH EBX
//   Label: shape_design.c_getAtlasMapIndex_FUN_0046e030
// 0046e031: PUSH ESI
// 0046e032: PUSH EDI
// 0046e033: PUSH EBP
// 0046e034: MOV EBP,ESP
// 0046e036: SUB ESP,0x4
// 0046e03c: IMUL EAX,dword ptr [EBP + 0x14],0x250
//   XREF to: Stack[0x4] (READ)
// 0046e043: MOV EAX,dword ptr [EAX + 0x1e8d474]
//   XREF to: 01e8d474 (DATA)
// 0046e049: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046e04c: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e04f: MOV ESP,EBP
// 0046e051: POP EBP
// 0046e052: POP EDI
// 0046e053: POP ESI
// 0046e054: POP EBX
// 0046e055: RET
