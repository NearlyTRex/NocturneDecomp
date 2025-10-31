// Name: shape_edittool.cpp_CEdCheck_handleInput_FUN_004a6d20
// Address: 004a6d20
// Address Range: [[004a6d20, 004a6e13]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEdCheck_handleInput_FUN_004a6d20(CEdCheck * this_ptr)
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053990a [UNCONDITIONAL_CALL]
// Globals:
//   CEdButton* g_ActiveButton
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEdCheck_handleInput_FUN_004a6d20(CEdCheck *this_ptr)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = (byte)g_MouseButtonFlags;
  if ((((this_ptr->interactive_flag == 0) && (this_ptr->x_position <= g_MouseX)) &&
      (this_ptr->y_position <= g_MouseY)) &&
     ((g_MouseX < this_ptr->total_width && (g_MouseY < this_ptr->right_boundary)))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if ((CEdCheck *)g_ActiveButton == this_ptr) {
    this_ptr->border_style_flag = iVar2;
    if (((bVar1 & 1) == 0) &&
       (g_ActiveButton = (CEdButton *)((uint)g_ActiveButton ^ (uint)this_ptr), iVar2 != 0)) {
      this_ptr->border_style_flag = 0;
      if (this_ptr->vtable == (void **)0x1) {
        iVar2 = this_ptr->checked_state + 1;
        this_ptr->checked_state = iVar2;
        if (2 < iVar2) {
          this_ptr->checked_state = 0;
          return 1;
        }
      }
      else {
        this_ptr->checked_state = (uint)(this_ptr->checked_state == 0);
      }
      return 1;
    }
    return 0;
  }
  if (((g_ActiveButton == (CEdButton *)0x0) && (((byte)g_MouseButtonFlags & 1) != 0)) &&
     (iVar2 != 0)) {
    this_ptr->border_style_flag = 1;
    g_ActiveButton = (CEdButton *)this_ptr;
    return 0;
  }
  return 0;
}


// Assembly code:
// 004a6d20: PUSH EBX
//   Label: shape_edittool.cpp_CEdCheck_handleInput_FUN_004a6d20
// 004a6d21: MOV ECX,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 004a6d27: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a6d2b: CMP dword ptr [EAX + 0x8],0x0
// 004a6d2f: JZ 0x004a6d84
//   XREF to: 004a6d84 (CONDITIONAL_JUMP)
// 004a6d31: XOR EDX,EDX
//   Label: LAB_004a6d31
// 004a6d33: CMP ECX,EAX
//   Label: LAB_004a6d33
// 004a6d35: JNZ 0x004a6de6
//   XREF to: 004a6de6 (CONDITIONAL_JUMP)
// 004a6d3b: MOV BH,byte ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 004a6d41: MOV dword ptr [EAX + 0x20],EDX
// 004a6d44: TEST BH,0x1
// 004a6d47: JNZ 0x004a6ddc
//   XREF to: 004a6ddc (CONDITIONAL_JUMP)
// 004a6d4d: XOR ECX,EAX
// 004a6d4f: TEST EDX,EDX
// 004a6d51: JZ 0x004a6ddc
//   XREF to: 004a6ddc (CONDITIONAL_JUMP)
// 004a6d57: PUSH EDI
// 004a6d58: MOV EBX,dword ptr [EAX]
// 004a6d5a: MOV dword ptr [EAX + 0x20],0x0
// 004a6d61: CMP EBX,0x1
// 004a6d64: JZ 0x004a6dba
//   XREF to: 004a6dba (CONDITIONAL_JUMP)
// 004a6d66: CMP dword ptr [EAX + 0x4],0x0
// 004a6d6a: SETZ DL
// 004a6d6d: AND EDX,0xff
// 004a6d73: MOV dword ptr [EAX + 0x4],EDX
// 004a6d76: MOV EAX,0x1
//   Label: LAB_004a6d76
// 004a6d7b: POP EDI
// 004a6d7c: MOV dword ptr [0x02cf2b00],ECX
//   XREF to: 02cf2b00 (WRITE)
// 004a6d82: POP EBX
// 004a6d83: RET
// 004a6d84: MOV EDX,dword ptr [0x02cf6a8c]
//   Label: LAB_004a6d84
//   XREF to: 02cf6a8c (READ)
// 004a6d8a: CMP EDX,dword ptr [EAX + 0x10]
// 004a6d8d: JL 0x004a6d31
//   XREF to: 004a6d31 (CONDITIONAL_JUMP)
// 004a6d8f: MOV EDX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a6d95: CMP EDX,dword ptr [EAX + 0x14]
// 004a6d98: JL 0x004a6d31
//   XREF to: 004a6d31 (CONDITIONAL_JUMP)
// 004a6d9a: MOV EDX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a6da0: CMP EDX,dword ptr [EAX + 0x18]
// 004a6da3: JGE 0x004a6d31
//   XREF to: 004a6d31 (CONDITIONAL_JUMP)
// 004a6da5: MOV EDX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a6dab: CMP EDX,dword ptr [EAX + 0x1c]
// 004a6dae: JGE 0x004a6d31
//   XREF to: 004a6d31 (CONDITIONAL_JUMP)
// 004a6db0: MOV EDX,0x1
// 004a6db5: JMP 0x004a6d33
//   XREF to: 004a6d33 (UNCONDITIONAL_JUMP)
// 004a6dba: MOV EDI,dword ptr [EAX + 0x4]
//   Label: LAB_004a6dba
// 004a6dbd: ADD EDI,EBX
// 004a6dbf: MOV dword ptr [EAX + 0x4],EDI
// 004a6dc2: CMP EDI,0x2
// 004a6dc5: JLE 0x004a6d76
//   XREF to: 004a6d76 (CONDITIONAL_JUMP)
// 004a6dc7: MOV dword ptr [EAX + 0x4],0x0
// 004a6dce: MOV EAX,0x1
// 004a6dd3: POP EDI
// 004a6dd4: MOV dword ptr [0x02cf2b00],ECX
//   XREF to: 02cf2b00 (WRITE)
// 004a6dda: POP EBX
// 004a6ddb: RET
// 004a6ddc: XOR EAX,EAX
//   Label: LAB_004a6ddc
// 004a6dde: MOV dword ptr [0x02cf2b00],ECX
//   XREF to: 02cf2b00 (WRITE)
// 004a6de4: POP EBX
// 004a6de5: RET
// 004a6de6: TEST ECX,ECX
//   Label: LAB_004a6de6
// 004a6de8: JNZ 0x004a6df7
//   XREF to: 004a6df7 (CONDITIONAL_JUMP)
// 004a6dea: TEST byte ptr [0x02cf6a94],0x1
//   XREF to: 02cf6a94 (READ)
// 004a6df1: JZ 0x004a6df7
//   XREF to: 004a6df7 (CONDITIONAL_JUMP)
// 004a6df3: TEST EDX,EDX
// 004a6df5: JNZ 0x004a6e01
//   XREF to: 004a6e01 (CONDITIONAL_JUMP)
// 004a6df7: XOR EAX,EAX
//   Label: LAB_004a6df7
// 004a6df9: MOV dword ptr [0x02cf2b00],ECX
//   XREF to: 02cf2b00 (WRITE)
// 004a6dff: POP EBX
// 004a6e00: RET
// 004a6e01: MOV ECX,EAX
//   Label: LAB_004a6e01
// 004a6e03: MOV dword ptr [EAX + 0x20],0x1
// 004a6e0a: XOR EAX,EAX
// 004a6e0c: MOV dword ptr [0x02cf2b00],ECX
//   XREF to: 02cf2b00 (WRITE)
// 004a6e12: POP EBX
// 004a6e13: RET
