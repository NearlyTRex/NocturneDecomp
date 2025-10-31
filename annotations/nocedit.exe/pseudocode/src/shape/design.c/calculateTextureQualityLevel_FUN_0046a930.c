// Name: shape_design.c_calculateTextureQualityLevel_FUN_0046a930
// Address: 0046a930
// Address Range: [[0046a930, 0046a96a]]
// Convention: __cdecl
// Signature: int shape_design.c_calculateTextureQualityLevel_FUN_0046a930(int texture_parameter)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047dbd8 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058cb9e [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046cff8 [UNCONDITIONAL_CALL]
// Globals:
//   int g_TextureQualityLevel

#include "nocturne.h"

int __cdecl shape_design_c_calculateTextureQualityLevel_FUN_0046a930(int texture_parameter)

{
  undefined4 local_14;
  
  local_14 = g_TextureQualityLevel + -5;
  if (9 < texture_parameter) {
    local_14 = g_TextureQualityLevel + -6;
  }
  if (1 < texture_parameter) {
    local_14 = local_14 + -1;
  }
  return local_14;
}


// Assembly code:
// 0046a930: PUSH EBX
//   Label: shape_design.c_calculateTextureQualityLevel_FUN_0046a930
// 0046a931: PUSH ESI
// 0046a932: PUSH EDI
// 0046a933: PUSH EBP
// 0046a934: MOV EBP,ESP
// 0046a936: SUB ESP,0x8
// 0046a93c: MOV EAX,[0x01eb1488]
//   XREF to: 01eb1488 (READ)
// 0046a941: SUB EAX,0x5
// 0046a944: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046a947: CMP dword ptr [EBP + 0x14],0x9
//   XREF to: Stack[0x4] (READ)
// 0046a94b: JLE 0x0046a951
//   XREF to: 0046a951 (CONDITIONAL_JUMP)
// 0046a94d: ADD dword ptr [EBP + -0x4],-0x1
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046a951: CMP dword ptr [EBP + 0x14],0x1
//   Label: LAB_0046a951
//   XREF to: Stack[0x4] (READ)
// 0046a955: JLE 0x0046a95b
//   XREF to: 0046a95b (CONDITIONAL_JUMP)
// 0046a957: ADD dword ptr [EBP + -0x4],-0x1
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046a95b: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046a95b
//   XREF to: Stack[-0x14] (READ)
// 0046a95e: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0046a961: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046a964: MOV ESP,EBP
// 0046a966: POP EBP
// 0046a967: POP EDI
// 0046a968: POP ESI
// 0046a969: POP EBX
// 0046a96a: RET
