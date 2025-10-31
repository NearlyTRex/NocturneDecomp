// Name: shape_design.c_setTextureQualityParameter_FUN_0046a8e0
// Address: 0046a8e0
// Address Range: [[0046a8e0, 0046a925]]
// Convention: __cdecl
// Signature: void shape_design.c_setTextureQualityParameter_FUN_0046a8e0(int texture_quality_param)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 (0047a3e0) at 0047a3fb [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047dbcc [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058cb8e [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058de70 (0058de70) at 0058de90 [UNCONDITIONAL_CALL]
//   shape_design.c_initializeTextureManager_FUN_0046a880 (0046a880) at 0046a8c8 [UNCONDITIONAL_CALL]
// Globals:
//   int g_TextureQualityLevel
// Function calls:
//   shape_design.c_initializeCramConfig_FUN_0046b6e0

#include "nocturne.h"

void __cdecl shape_design_c_setTextureQualityParameter_FUN_0046a8e0(int texture_quality_param)

{
  BADSPACEBASE *in_ESP;
  SCramConfig local_8c;
  SCramConfig *local_18;
  
  g_TextureQualityLevel = texture_quality_param;
  local_18 = &local_8c;
  shape_design_c_initializeCramConfig_FUN_0046b6e0(&local_8c);
  if (0x50 < (uint)g_TextureQualityLevel) {
    g_TextureQualityLevel = 0x50;
  }
  return;
}


// Assembly code:
// 0046a8e0: PUSH EBX
//   Label: shape_design.c_setTextureQualityParameter_FUN_0046a8e0
// 0046a8e1: PUSH ESI
// 0046a8e2: PUSH EDI
// 0046a8e3: PUSH EBP
// 0046a8e4: MOV EBP,ESP
// 0046a8e6: SUB ESP,0x7c
// 0046a8ec: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046a8ef: MOV [0x01eb1488],EAX
//   XREF to: 01eb1488 (WRITE)
// 0046a8f4: LEA EAX,[EBP + -0x7c]
//   XREF to: Stack[-0x8c] (DATA)
// 0046a8f7: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0046a8fa: LEA EAX,[EBP + -0x7c]
//   XREF to: Stack[-0x8c] (DATA)
// 0046a8fd: PUSH EAX
// 0046a8fe: CALL shape_design.c_initializeCramConfig_FUN_0046b6e0
//   XREF to: 0046b6e0 (UNCONDITIONAL_CALL)
// 0046a903: ADD ESP,0x4
// 0046a906: LEA EAX,[EBP + -0x7c]
//   XREF to: Stack[-0x8c] (DATA)
// 0046a909: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046a90c: CMP dword ptr [0x01eb1488],0x50
//   XREF to: 01eb1488 (READ)
// 0046a913: JBE 0x0046a91f
//   XREF to: 0046a91f (CONDITIONAL_JUMP)
// 0046a915: MOV dword ptr [0x01eb1488],0x50
//   XREF to: 01eb1488 (WRITE)
// 0046a91f: MOV ESP,EBP
//   Label: LAB_0046a91f
// 0046a921: POP EBP
// 0046a922: POP EDI
// 0046a923: POP ESI
// 0046a924: POP EBX
// 0046a925: RET
