// Name: shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
// Address: 004a64b0
// Address Range: [[004a64b0, 004a64de]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_calculateGridHeight_FUN_004a64b0(void)
// Cross-references:
//   core_script.cpp_CScript_unk50_FUN_00566660 (00566660) at 005666fa [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 (004a45d0) at 004a4914 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a4e02 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
// Function calls:
//   shape_edittool.cpp_calculateGridWidth_FUN_004a6490

#include "nocturne.h"

int __cdecl shape_edittool_cpp_calculateGridHeight_FUN_004a64b0(void)

{
  int iVar1;
  
  iVar1 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
  return (((g_WindowHeight * iVar1) / g_WindowWidth) * 4) / 3;
}


// Assembly code:
// 004a64b0: CALL shape_edittool.cpp_calculateGridWidth_FUN_004a6490
//   Label: shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
//   XREF to: 004a6490 (UNCONDITIONAL_CALL)
// 004a64b5: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004a64bb: IMUL EDX,EAX
// 004a64be: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a64c4: MOV EAX,EDX
// 004a64c6: SAR EDX,0x1f
// 004a64c9: IDIV ECX
// 004a64cb: LEA EDX,[EAX*0x4 + 0x0]
// 004a64d2: MOV ECX,0x3
// 004a64d7: MOV EAX,EDX
// 004a64d9: SAR EDX,0x1f
// 004a64dc: IDIV ECX
// 004a64de: RET
