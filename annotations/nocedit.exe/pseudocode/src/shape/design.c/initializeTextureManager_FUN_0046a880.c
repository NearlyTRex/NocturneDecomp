// Name: shape_design.c_initializeTextureManager_FUN_0046a880
// Address: 0046a880
// Address Range: [[0046a880, 0046a8d6]]
// Convention: __cdecl
// Signature: void shape_design.c_initializeTextureManager_FUN_0046a880(int initialization_mode)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 (0047a3e0) at 0047a3f1 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047dbc2 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058cb84 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058de70 (0058de70) at 0058de86 [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a22a [UNCONDITIONAL_CALL]
// Globals:
//   int g_TextureProcessedCount
//   STextureAtlasEntry[250] g_TextureAtlasEntries
//   int g_TextureManagerMode
// Function calls:
//   shape_design.c_setTextureQualityParameter_FUN_0046a8e0

#include "nocturne.h"

void __cdecl shape_design_c_initializeTextureManager_FUN_0046a880(int initialization_mode)

{
  int local_14;
  
  g_TextureManagerMode = initialization_mode;
  g_TextureProcessedCount = 0;
  for (local_14 = 0; local_14 < 0xfa; local_14 = local_14 + 1) {
    g_TextureAtlasEntries[local_14].tga_filename[0] = '\0';
  }
  shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x10);
  return;
}


// Assembly code:
// 0046a880: PUSH EBX
//   Label: shape_design.c_initializeTextureManager_FUN_0046a880
// 0046a881: PUSH ESI
// 0046a882: PUSH EDI
// 0046a883: PUSH EBP
// 0046a884: MOV EBP,ESP
// 0046a886: SUB ESP,0x1c
// 0046a88c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046a88f: MOV [0x01eb1484],EAX
//   XREF to: 01eb1484 (WRITE)
// 0046a894: MOV dword ptr [0x01e8d260],0x0
//   XREF to: 01e8d260 (WRITE)
// 0046a89e: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0046a8a5: JMP 0x0046a8ad
//   XREF to: 0046a8ad (UNCONDITIONAL_JUMP)
// 0046a8a7: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046a8a7
//   XREF to: Stack[-0x14] (READ)
// 0046a8aa: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046a8ad: CMP dword ptr [EBP + -0x4],0xfa
//   Label: LAB_0046a8ad
//   XREF to: Stack[-0x14] (READ)
// 0046a8b4: JGE 0x0046a8c6
//   XREF to: 0046a8c6 (CONDITIONAL_JUMP)
// 0046a8b6: IMUL EAX,dword ptr [EBP + -0x4],0x250
//   XREF to: Stack[-0x14] (READ)
// 0046a8bd: MOV byte ptr [EAX + 0x1e8d264],0x0
//   XREF to: 01e8d264 (DATA)
// 0046a8c4: JMP 0x0046a8a7
//   XREF to: 0046a8a7 (UNCONDITIONAL_JUMP)
// 0046a8c6: PUSH 0x10
//   Label: LAB_0046a8c6
// 0046a8c8: CALL shape_design.c_setTextureQualityParameter_FUN_0046a8e0
//   XREF to: 0046a8e0 (UNCONDITIONAL_CALL)
// 0046a8cd: ADD ESP,0x4
// 0046a8d0: MOV ESP,EBP
// 0046a8d2: POP EBP
// 0046a8d3: POP EDI
// 0046a8d4: POP ESI
// 0046a8d5: POP EBX
// 0046a8d6: RET
