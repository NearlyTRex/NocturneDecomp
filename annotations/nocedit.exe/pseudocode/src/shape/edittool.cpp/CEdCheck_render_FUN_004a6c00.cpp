// Name: shape_edittool.cpp_CEdCheck_render_FUN_004a6c00
// Address: 004a6c00
// Address Range: [[004a6c00, 004a6d16]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdCheck_render_FUN_004a6c00(CEdCheck * this_ptr)
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539917 [UNCONDITIONAL_CALL]
// Globals:
//   CBitFont* g_EditorFont
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_clipLineGlobal_FUN_00402c50
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0
//   shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70
//   shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0
//   shape_edittool.cpp_draw3DBorder_FUN_004a58f0

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdCheck_render_FUN_004a6c00(CEdCheck *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *unaff_EBX;
  int left;
  int in_stack_00000008;
  int color_mode;
  
  iVar2 = this_ptr->y_position;
  iVar5 = this_ptr->right_boundary;
  left = this_ptr->x_position;
  iVar1 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(this_ptr);
  iVar1 = ((iVar2 + iVar5) - iVar1) / 2;
  iVar2 = shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(this_ptr);
  iVar2 = iVar2 + left;
  iVar3 = shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(this_ptr);
  iVar3 = iVar1 + iVar3;
  engine_font_cpp_CBitFont_getCharWidth_FUN_004cff40(g_EditorFont,this_ptr->checkbox_text);
  color_mode = -1;
  iVar5 = this_ptr->coord_unk;
  iVar4 = shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004a6be0(this_ptr);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_EditorFont,unaff_EBX,iVar4 + iVar2,iVar5,color_mode,iVar3);
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0
            (left,iVar1,iVar2,(int)this_ptr,this_ptr->border_style_flag);
  if (this_ptr->border_style_flag == 0) {
    in_stack_00000008 = in_stack_00000008 + -1;
    iVar2 = iVar2 + -1;
    iVar5 = this_ptr->checked_state;
    if (iVar5 != 1) {
      return;
    }
  }
  else {
    iVar1 = iVar1 + 1;
    left = left + 1;
    iVar5 = this_ptr->checked_state;
    if (iVar5 != 1) {
      return;
    }
  }
  g_ActiveRenderColor = 0;
  engine_2d_c_clipLineGlobal_FUN_00402c50
            ((int *)(left + iVar5),(int *)(iVar1 + iVar5),(int *)(iVar2 + -2),
             (int *)(in_stack_00000008 + -2));
  engine_2d_c_clipLineGlobal_FUN_00402c50
            ((int *)(iVar2 + -2),(int *)(iVar1 + iVar5),(int *)(left + iVar5),
             (int *)(in_stack_00000008 + -2));
  return;
}


// Assembly code:
// 004a6c00: PUSH EBX
//   Label: shape_edittool.cpp_CEdCheck_render_FUN_004a6c00
// 004a6c01: PUSH ESI
// 004a6c02: PUSH EDI
// 004a6c03: PUSH EBP
// 004a6c04: SUB ESP,0x8
// 004a6c07: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004a6c0b: PUSH EBX
// 004a6c0c: MOV ESI,dword ptr [EBX + 0x14]
// 004a6c0f: MOV ECX,dword ptr [EBX + 0x1c]
// 004a6c12: MOV EBP,dword ptr [EBX + 0x10]
// 004a6c15: ADD ESI,ECX
// 004a6c17: CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0
//   XREF to: 004a6bb0 (UNCONDITIONAL_CALL)
// 004a6c1c: MOV EDX,ESI
// 004a6c1e: SUB EDX,EAX
// 004a6c20: MOV EAX,EDX
// 004a6c22: SAR EDX,0x1f
// 004a6c25: SUB EAX,EDX
// 004a6c27: SAR EAX,0x1
// 004a6c29: ADD ESP,0x4
// 004a6c2c: PUSH EBX
// 004a6c2d: MOV ESI,EAX
// 004a6c2f: CALL shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70
//   XREF to: 004a6b70 (UNCONDITIONAL_CALL)
// 004a6c34: ADD ESP,0x4
// 004a6c37: PUSH EBX
// 004a6c38: LEA EDI,[EAX + EBP*0x1]
// 004a6c3b: CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0
//   XREF to: 004a6bb0 (UNCONDITIONAL_CALL)
// 004a6c40: MOV EDX,ESI
// 004a6c42: ADD ESP,0x4
// 004a6c45: ADD EDX,EAX
// 004a6c47: LEA EAX,[EBX + 0x24]
// 004a6c4a: PUSH EAX
// 004a6c4b: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004a6c4f: MOV EDX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a6c55: PUSH EDX
// 004a6c56: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004a6c5a: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
//   XREF to: 004cff40 (UNCONDITIONAL_CALL)
// 004a6c5f: ADD ESP,0x8
// 004a6c62: PUSH -0x1
// 004a6c64: MOV ECX,dword ptr [EBX + 0xc]
// 004a6c67: MOV EDX,dword ptr [EBX + 0x14]
// 004a6c6a: PUSH ECX
// 004a6c6b: ADD EDX,dword ptr [EBX + 0x1c]
// 004a6c6e: SUB EDX,EAX
// 004a6c70: MOV EAX,EDX
// 004a6c72: SAR EDX,0x1f
// 004a6c75: SUB EAX,EDX
// 004a6c77: SAR EAX,0x1
// 004a6c79: PUSH EAX
// 004a6c7a: PUSH EBX
// 004a6c7b: CALL shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0
//   XREF to: 004a6be0 (UNCONDITIONAL_CALL)
// 004a6c80: ADD ESP,0x4
// 004a6c83: ADD EAX,EDI
// 004a6c85: PUSH EAX
// 004a6c86: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 004a6c8a: PUSH EAX
// 004a6c8b: MOV EDX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a6c91: PUSH EDX
// 004a6c92: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004a6c97: ADD ESP,0x18
// 004a6c9a: MOV ECX,dword ptr [EBX + 0x20]
// 004a6c9d: PUSH ECX
// 004a6c9e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004a6ca2: PUSH EAX
// 004a6ca3: PUSH EDI
// 004a6ca4: PUSH ESI
// 004a6ca5: PUSH EBP
// 004a6ca6: CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0
//   XREF to: 004a58f0 (UNCONDITIONAL_CALL)
// 004a6cab: MOV EDX,dword ptr [EBX + 0x20]
// 004a6cae: ADD ESP,0x14
// 004a6cb1: TEST EDX,EDX
// 004a6cb3: JZ 0x004a6cc7
//   XREF to: 004a6cc7 (CONDITIONAL_JUMP)
// 004a6cb5: INC ESI
// 004a6cb6: INC EBP
// 004a6cb7: MOV EAX,dword ptr [EBX + 0x4]
// 004a6cba: CMP EAX,0x1
// 004a6cbd: JZ 0x004a6ce1
//   XREF to: 004a6ce1 (CONDITIONAL_JUMP)
// 004a6cbf: ADD ESP,0x8
// 004a6cc2: POP EBP
// 004a6cc3: POP EDI
// 004a6cc4: POP ESI
// 004a6cc5: POP EBX
// 004a6cc6: RET
// 004a6cc7: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_004a6cc7
//   XREF to: Stack[-0x14] (READ)
// 004a6ccb: DEC ECX
// 004a6ccc: DEC EDI
// 004a6ccd: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004a6cd1: MOV EAX,dword ptr [EBX + 0x4]
// 004a6cd4: CMP EAX,0x1
// 004a6cd7: JZ 0x004a6ce1
//   XREF to: 004a6ce1 (CONDITIONAL_JUMP)
// 004a6cd9: ADD ESP,0x8
// 004a6cdc: POP EBP
// 004a6cdd: POP EDI
// 004a6cde: POP ESI
// 004a6cdf: POP EBX
// 004a6ce0: RET
// 004a6ce1: MOV EBX,dword ptr [ESP + 0x4]
//   Label: LAB_004a6ce1
//   XREF to: Stack[-0x14] (READ)
// 004a6ce5: SUB EBX,0x2
// 004a6ce8: PUSH EBX
// 004a6ce9: SUB EDI,0x2
// 004a6cec: PUSH EDI
// 004a6ced: ADD ESI,EAX
// 004a6cef: PUSH ESI
// 004a6cf0: ADD EBP,EAX
// 004a6cf2: XOR EDX,EDX
// 004a6cf4: PUSH EBP
// 004a6cf5: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 004a6cfb: CALL engine_2d.c_clipLineGlobal_FUN_00402c50
//   XREF to: 00402c50 (UNCONDITIONAL_CALL)
// 004a6d00: ADD ESP,0x10
// 004a6d03: PUSH EBX
// 004a6d04: PUSH EBP
// 004a6d05: PUSH ESI
// 004a6d06: PUSH EDI
// 004a6d07: CALL engine_2d.c_clipLineGlobal_FUN_00402c50
//   XREF to: 00402c50 (UNCONDITIONAL_CALL)
// 004a6d0c: ADD ESP,0x10
// 004a6d0f: ADD ESP,0x8
// 004a6d12: POP EBP
// 004a6d13: POP EDI
// 004a6d14: POP ESI
// 004a6d15: POP EBX
// 004a6d16: RET
