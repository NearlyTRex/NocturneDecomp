// Name: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70
// Address: 004a6b70
// Address Range: [[004a6b70, 004a6ba9]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(CEdCheck * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0 (004a6be0) at 004a6be5 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 (004a6c00) at 004a6c2f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60 (004a6a60) at 004a6ae8 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
// Function calls:
//   shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(CEdCheck *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(this_ptr);
  iVar1 = iVar1 * g_WindowWidth * 3;
  iVar2 = iVar1 >> 0x1f;
  return ((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) / g_WindowHeight;
}


// Assembly code:
// 004a6b70: PUSH EBX
//   Label: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70
// 004a6b71: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a6b75: PUSH EDX
// 004a6b76: CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0
//   XREF to: 004a6bb0 (UNCONDITIONAL_CALL)
// 004a6b7b: IMUL EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a6b82: LEA EDX,[EAX*0x4 + 0x0]
// 004a6b89: SUB EDX,EAX
// 004a6b8b: MOV EAX,EDX
// 004a6b8d: SAR EDX,0x1f
// 004a6b90: SHL EDX,0x2
// 004a6b93: SBB EAX,EDX
// 004a6b95: SAR EAX,0x2
// 004a6b98: MOV EDX,EAX
// 004a6b9a: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004a6ba0: SAR EDX,0x1f
// 004a6ba3: ADD ESP,0x4
// 004a6ba6: IDIV EBX
// 004a6ba8: POP EBX
// 004a6ba9: RET
