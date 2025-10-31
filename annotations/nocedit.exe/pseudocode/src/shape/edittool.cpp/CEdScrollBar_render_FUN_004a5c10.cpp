// Name: shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
// Address: 004a5c10
// Address Range: [[004a5c10, 004a5e9b]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar * this_ptr)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005075f5 [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 0050720a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c674 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 (00535e70) at 00536a77 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005645d0 (005645d0) at 00564660 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00577af0 (00577af0) at 00577bde [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a4f11 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ShadowColor
//   int g_ShadowHighlightColor
//   CEdButton* g_ActiveButton
//   int g_ScrollAction
// Function calls:
//   engine_2d.c_fillRectWithBorder_FUN_00403200
//   shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0
//   shape_edittool.cpp_draw3DBorder_FUN_004a58f0
//   shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar *this_ptr)

{
  int iVar1;
  int width;
  int width_00;
  int top;
  int left;
  int top_00;
  
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(this_ptr);
  engine_2d_c_fillRectWithBorder_FUN_00403200
            (this_ptr->bounds_left + 1,this_ptr->bounds_top + 1,this_ptr->bounds_right + -2,
             this_ptr->bounds_bottom + -2,g_ShadowColor,g_ShadowHighlightColor);
  iVar1 = this_ptr->bounds_left + 1;
  width = this_ptr->bounds_right + -1;
  top_00 = this_ptr->bounds_top + 1;
  left = this_ptr->bounds_bottom + -1;
  if (this_ptr->orientation == 0) {
    top = this_ptr->thumb_start;
  }
  else {
    iVar1 = this_ptr->thumb_start;
    top = top_00;
  }
  if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 0)) {
    width_00 = 1;
  }
  else {
    width_00 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0(iVar1,top,width_00,width_00,width_00);
  if (this_ptr->orientation != 0) {
    if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 1)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_004a58f0(iVar1,top_00,this_ptr->track_start,left,iVar1);
    if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 1)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0
              (iVar1,top_00,this_ptr->track_start,left,iVar1,2);
    if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 2)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    shape_edittool_cpp_draw3DBorder_FUN_004a58f0(this_ptr->track_end,top_00,left,left,iVar1);
    if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 2)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0(this_ptr->track_end,top_00,left,left,iVar1,3);
    return;
  }
  if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 1)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0(iVar1,top_00,width,this_ptr->track_start,iVar1);
  if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 1)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0(iVar1,top_00,0,this_ptr->track_start,iVar1,0);
  if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 2)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  shape_edittool_cpp_draw3DBorder_FUN_004a58f0(left,this_ptr->track_end,left,left,iVar1);
  if (((CEdButton *)this_ptr == g_ActiveButton) && (g_ScrollAction == 2)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0(left,this_ptr->track_end,left,left,iVar1,1);
  return;
}


// Assembly code:
// 004a5c10: PUSH EBX
//   Label: shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
// 004a5c11: PUSH ESI
// 004a5c12: PUSH EDI
// 004a5c13: PUSH EBP
// 004a5c14: MOV EBP,ESP
// 004a5c16: SUB ESP,0x10
// 004a5c19: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a5c1c: PUSH EBX
// 004a5c1d: CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0
//   XREF to: 004a5ea0 (UNCONDITIONAL_CALL)
// 004a5c22: ADD ESP,0x4
// 004a5c25: MOV EDX,dword ptr [0x02cf2ae0]
//   XREF to: 02cf2ae0 (READ)
// 004a5c2b: PUSH EDX
// 004a5c2c: MOV ECX,dword ptr [0x02cf2adc]
//   XREF to: 02cf2adc (READ)
// 004a5c32: MOV EAX,dword ptr [EBX + 0x20]
// 004a5c35: PUSH ECX
// 004a5c36: SUB EAX,0x2
// 004a5c39: PUSH EAX
// 004a5c3a: MOV EAX,dword ptr [EBX + 0x1c]
// 004a5c3d: SUB EAX,0x2
// 004a5c40: PUSH EAX
// 004a5c41: MOV EAX,dword ptr [EBX + 0x18]
// 004a5c44: INC EAX
// 004a5c45: PUSH EAX
// 004a5c46: MOV EAX,dword ptr [EBX + 0x14]
// 004a5c49: INC EAX
// 004a5c4a: PUSH EAX
// 004a5c4b: CALL engine_2d.c_fillRectWithBorder_FUN_00403200
//   XREF to: 00403200 (UNCONDITIONAL_CALL)
// 004a5c50: MOV EAX,dword ptr [EBX + 0x14]
// 004a5c53: ADD ESP,0x18
// 004a5c56: INC EAX
// 004a5c57: MOV EDI,dword ptr [EBX + 0x18]
// 004a5c5a: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004a5c5d: MOV EAX,dword ptr [EBX + 0x1c]
// 004a5c60: MOV ESI,dword ptr [EBX + 0x20]
// 004a5c63: DEC EAX
// 004a5c64: INC EDI
// 004a5c65: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004a5c68: MOV EAX,dword ptr [EBX + 0x10]
// 004a5c6b: DEC ESI
// 004a5c6c: TEST EAX,EAX
// 004a5c6e: JNZ 0x004a5d88
//   XREF to: 004a5d88 (CONDITIONAL_JUMP)
// 004a5c74: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004a5c77: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004a5c7a: MOV ECX,dword ptr [EBX + 0x30]
// 004a5c7d: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004a5c80: MOV dword ptr [EBP + -0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004a5c83: MOV EDX,dword ptr [EBX + 0x2c]
// 004a5c86: CMP EBX,dword ptr [0x02cf2b00]
//   Label: LAB_004a5c86
//   XREF to: 02cf2b00 (READ)
// 004a5c8c: JNZ 0x004a5d9b
//   XREF to: 004a5d9b (CONDITIONAL_JUMP)
// 004a5c92: CMP dword ptr [0x02cf2b04],0x0
//   XREF to: 02cf2b04 (READ)
// 004a5c99: JNZ 0x004a5d9b
//   XREF to: 004a5d9b (CONDITIONAL_JUMP)
// 004a5c9f: MOV ECX,0x1
// 004a5ca4: PUSH ECX
//   Label: LAB_004a5ca4
// 004a5ca5: MOV ECX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004a5ca8: PUSH ECX
// 004a5ca9: MOV ECX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 004a5cac: PUSH ECX
// 004a5cad: PUSH EDX
// 004a5cae: PUSH EAX
// 004a5caf: CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0
//   XREF to: 004a58f0 (UNCONDITIONAL_CALL)
// 004a5cb4: MOV EAX,dword ptr [EBX + 0x10]
// 004a5cb7: ADD ESP,0x14
// 004a5cba: TEST EAX,EAX
// 004a5cbc: JZ 0x004a5db8
//   XREF to: 004a5db8 (CONDITIONAL_JUMP)
// 004a5cc2: CMP EBX,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 004a5cc8: JNZ 0x004a5da2
//   XREF to: 004a5da2 (CONDITIONAL_JUMP)
// 004a5cce: MOV EDX,dword ptr [0x02cf2b04]
//   XREF to: 02cf2b04 (READ)
// 004a5cd4: CMP EDX,0x1
// 004a5cd7: JNZ 0x004a5da2
//   XREF to: 004a5da2 (CONDITIONAL_JUMP)
// 004a5cdd: MOV EAX,EDX
// 004a5cdf: PUSH EAX
//   Label: LAB_004a5cdf
// 004a5ce0: PUSH ESI
// 004a5ce1: MOV ECX,dword ptr [EBX + 0x24]
// 004a5ce4: PUSH ECX
// 004a5ce5: PUSH EDI
// 004a5ce6: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004a5ce9: PUSH EAX
// 004a5cea: CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0
//   XREF to: 004a58f0 (UNCONDITIONAL_CALL)
// 004a5cef: ADD ESP,0x14
// 004a5cf2: MOV EDX,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 004a5cf8: PUSH 0x2
// 004a5cfa: CMP EBX,EDX
// 004a5cfc: JNZ 0x004a5da9
//   XREF to: 004a5da9 (CONDITIONAL_JUMP)
// 004a5d02: MOV ECX,dword ptr [0x02cf2b04]
//   XREF to: 02cf2b04 (READ)
// 004a5d08: CMP ECX,0x1
// 004a5d0b: JNZ 0x004a5da9
//   XREF to: 004a5da9 (CONDITIONAL_JUMP)
// 004a5d11: MOV EAX,ECX
// 004a5d13: PUSH EAX
//   Label: LAB_004a5d13
// 004a5d14: PUSH ESI
// 004a5d15: MOV EAX,dword ptr [EBX + 0x24]
// 004a5d18: PUSH EAX
// 004a5d19: PUSH EDI
// 004a5d1a: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004a5d1d: PUSH EDX
// 004a5d1e: CALL shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0
//   XREF to: 004a59a0 (UNCONDITIONAL_CALL)
// 004a5d23: MOV ECX,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 004a5d29: ADD ESP,0x18
// 004a5d2c: CMP EBX,ECX
// 004a5d2e: JNZ 0x004a5db0
//   XREF to: 004a5db0 (CONDITIONAL_JUMP)
// 004a5d34: CMP dword ptr [0x02cf2b04],0x2
//   XREF to: 02cf2b04 (READ)
// 004a5d3b: JNZ 0x004a5db0
//   XREF to: 004a5db0 (CONDITIONAL_JUMP)
// 004a5d3d: MOV EAX,0x1
// 004a5d42: PUSH EAX
//   Label: LAB_004a5d42
// 004a5d43: PUSH ESI
// 004a5d44: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004a5d47: PUSH EDX
// 004a5d48: PUSH EDI
// 004a5d49: MOV ECX,dword ptr [EBX + 0x28]
// 004a5d4c: PUSH ECX
// 004a5d4d: CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0
//   XREF to: 004a58f0 (UNCONDITIONAL_CALL)
// 004a5d52: ADD ESP,0x14
// 004a5d55: MOV EAX,[0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 004a5d5a: PUSH 0x3
// 004a5d5c: CMP EBX,EAX
// 004a5d5e: JNZ 0x004a5db4
//   XREF to: 004a5db4 (CONDITIONAL_JUMP)
// 004a5d60: CMP dword ptr [0x02cf2b04],0x2
//   XREF to: 02cf2b04 (READ)
// 004a5d67: JNZ 0x004a5db4
//   XREF to: 004a5db4 (CONDITIONAL_JUMP)
// 004a5d69: MOV EAX,0x1
// 004a5d6e: PUSH EAX
//   Label: LAB_004a5d6e
// 004a5d6f: PUSH ESI
// 004a5d70: MOV ECX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004a5d73: PUSH ECX
// 004a5d74: PUSH EDI
// 004a5d75: MOV ESI,dword ptr [EBX + 0x28]
// 004a5d78: PUSH ESI
// 004a5d79: CALL shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0
//   XREF to: 004a59a0 (UNCONDITIONAL_CALL)
// 004a5d7e: ADD ESP,0x18
// 004a5d81: MOV ESP,EBP
// 004a5d83: POP EBP
// 004a5d84: POP EDI
// 004a5d85: POP ESI
// 004a5d86: POP EBX
// 004a5d87: RET
// 004a5d88: MOV dword ptr [EBP + -0xc],ESI
//   Label: LAB_004a5d88
//   XREF to: Stack[-0x1c] (WRITE)
// 004a5d8b: MOV EDX,dword ptr [EBX + 0x30]
// 004a5d8e: MOV EAX,dword ptr [EBX + 0x2c]
// 004a5d91: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 004a5d94: MOV EDX,EDI
// 004a5d96: JMP 0x004a5c86
//   XREF to: 004a5c86 (UNCONDITIONAL_JUMP)
// 004a5d9b: XOR ECX,ECX
//   Label: LAB_004a5d9b
// 004a5d9d: JMP 0x004a5ca4
//   XREF to: 004a5ca4 (UNCONDITIONAL_JUMP)
// 004a5da2: XOR EAX,EAX
//   Label: LAB_004a5da2
// 004a5da4: JMP 0x004a5cdf
//   XREF to: 004a5cdf (UNCONDITIONAL_JUMP)
// 004a5da9: XOR EAX,EAX
//   Label: LAB_004a5da9
// 004a5dab: JMP 0x004a5d13
//   XREF to: 004a5d13 (UNCONDITIONAL_JUMP)
// 004a5db0: XOR EAX,EAX
//   Label: LAB_004a5db0
// 004a5db2: JMP 0x004a5d42
//   XREF to: 004a5d42 (UNCONDITIONAL_JUMP)
// 004a5db4: XOR EAX,EAX
//   Label: LAB_004a5db4
// 004a5db6: JMP 0x004a5d6e
//   XREF to: 004a5d6e (UNCONDITIONAL_JUMP)
// 004a5db8: CMP EBX,dword ptr [0x02cf2b00]
//   Label: LAB_004a5db8
//   XREF to: 02cf2b00 (READ)
// 004a5dbe: JNZ 0x004a5e86
//   XREF to: 004a5e86 (CONDITIONAL_JUMP)
// 004a5dc4: MOV ECX,dword ptr [0x02cf2b04]
//   XREF to: 02cf2b04 (READ)
// 004a5dca: CMP ECX,0x1
// 004a5dcd: JNZ 0x004a5e86
//   XREF to: 004a5e86 (CONDITIONAL_JUMP)
// 004a5dd3: MOV EAX,ECX
// 004a5dd5: PUSH EAX
//   Label: LAB_004a5dd5
// 004a5dd6: MOV EAX,dword ptr [EBX + 0x24]
// 004a5dd9: PUSH EAX
// 004a5dda: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004a5ddd: PUSH EDX
// 004a5dde: PUSH EDI
// 004a5ddf: MOV ECX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004a5de2: PUSH ECX
// 004a5de3: CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0
//   XREF to: 004a58f0 (UNCONDITIONAL_CALL)
// 004a5de8: ADD ESP,0x14
// 004a5deb: MOV EAX,[0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 004a5df0: PUSH 0x0
// 004a5df2: CMP EBX,EAX
// 004a5df4: JNZ 0x004a5e8d
//   XREF to: 004a5e8d (CONDITIONAL_JUMP)
// 004a5dfa: MOV EDX,dword ptr [0x02cf2b04]
//   XREF to: 02cf2b04 (READ)
// 004a5e00: CMP EDX,0x1
// 004a5e03: JNZ 0x004a5e8d
//   XREF to: 004a5e8d (CONDITIONAL_JUMP)
// 004a5e09: MOV EAX,EDX
// 004a5e0b: PUSH EAX
//   Label: LAB_004a5e0b
// 004a5e0c: MOV ECX,dword ptr [EBX + 0x24]
// 004a5e0f: PUSH ECX
// 004a5e10: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004a5e13: PUSH EAX
// 004a5e14: PUSH EDI
// 004a5e15: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004a5e18: PUSH EDX
// 004a5e19: CALL shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0
//   XREF to: 004a59a0 (UNCONDITIONAL_CALL)
// 004a5e1e: MOV ECX,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 004a5e24: ADD ESP,0x18
// 004a5e27: CMP EBX,ECX
// 004a5e29: JNZ 0x004a5e94
//   XREF to: 004a5e94 (CONDITIONAL_JUMP)
// 004a5e2b: CMP dword ptr [0x02cf2b04],0x2
//   XREF to: 02cf2b04 (READ)
// 004a5e32: JNZ 0x004a5e94
//   XREF to: 004a5e94 (CONDITIONAL_JUMP)
// 004a5e34: MOV EAX,0x1
// 004a5e39: PUSH EAX
//   Label: LAB_004a5e39
// 004a5e3a: PUSH ESI
// 004a5e3b: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004a5e3e: PUSH EAX
// 004a5e3f: MOV EDX,dword ptr [EBX + 0x28]
// 004a5e42: PUSH EDX
// 004a5e43: MOV ECX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004a5e46: PUSH ECX
// 004a5e47: CALL shape_edittool.cpp_draw3DBorder_FUN_004a58f0
//   XREF to: 004a58f0 (UNCONDITIONAL_CALL)
// 004a5e4c: ADD ESP,0x14
// 004a5e4f: MOV EDI,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 004a5e55: PUSH 0x1
// 004a5e57: CMP EBX,EDI
// 004a5e59: JNZ 0x004a5e98
//   XREF to: 004a5e98 (CONDITIONAL_JUMP)
// 004a5e5b: CMP dword ptr [0x02cf2b04],0x2
//   XREF to: 02cf2b04 (READ)
// 004a5e62: JNZ 0x004a5e98
//   XREF to: 004a5e98 (CONDITIONAL_JUMP)
// 004a5e64: MOV EAX,0x1
// 004a5e69: PUSH EAX
//   Label: LAB_004a5e69
// 004a5e6a: PUSH ESI
// 004a5e6b: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004a5e6e: PUSH EDX
// 004a5e6f: MOV ECX,dword ptr [EBX + 0x28]
// 004a5e72: PUSH ECX
// 004a5e73: MOV EBX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004a5e76: PUSH EBX
// 004a5e77: CALL shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0
//   XREF to: 004a59a0 (UNCONDITIONAL_CALL)
// 004a5e7c: ADD ESP,0x18
// 004a5e7f: MOV ESP,EBP
// 004a5e81: POP EBP
// 004a5e82: POP EDI
// 004a5e83: POP ESI
// 004a5e84: POP EBX
// 004a5e85: RET
// 004a5e86: XOR EAX,EAX
//   Label: LAB_004a5e86
// 004a5e88: JMP 0x004a5dd5
//   XREF to: 004a5dd5 (UNCONDITIONAL_JUMP)
// 004a5e8d: XOR EAX,EAX
//   Label: LAB_004a5e8d
// 004a5e8f: JMP 0x004a5e0b
//   XREF to: 004a5e0b (UNCONDITIONAL_JUMP)
// 004a5e94: XOR EAX,EAX
//   Label: LAB_004a5e94
// 004a5e96: JMP 0x004a5e39
//   XREF to: 004a5e39 (UNCONDITIONAL_JUMP)
// 004a5e98: XOR EAX,EAX
//   Label: LAB_004a5e98
// 004a5e9a: JMP 0x004a5e69
//   XREF to: 004a5e69 (UNCONDITIONAL_JUMP)
