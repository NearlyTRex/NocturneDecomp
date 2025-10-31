// Name: shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240
// Address: 004a5240
// Address Range: [[004a5240, 004a539b]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240(CPickList * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 (004a4340) at 004a4350 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0 (004a3ef0) at 004a3f13 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004a5240(CPickList *this_ptr)

{
  int iVar1;
  
  iVar1 = (this_ptr->base_strlist).item_count;
  if (iVar1 <= this_ptr->current_index) {
    this_ptr->current_index = iVar1 + -1;
  }
  if (this_ptr->current_index < 0) {
    this_ptr->current_index = 0;
  }
  while (this_ptr->scroll_top < 0) {
    this_ptr->scroll_top = this_ptr->scroll_top + this_ptr->vertical_page_size;
  }
  while ((this_ptr->base_strlist).item_count <= this_ptr->scroll_top) {
    this_ptr->scroll_top = this_ptr->scroll_top - this_ptr->vertical_page_size;
  }
  if (this_ptr->scroll_top < 0) {
    this_ptr->scroll_top = 0;
  }
  if (this_ptr->current_index < (this_ptr->base_strlist).item_count) {
    while (iVar1 = this_ptr->scroll_top, this_ptr->current_index < iVar1) {
      if (this_ptr->column_count == 1) {
        this_ptr->scroll_top = iVar1 + -1;
      }
      else {
        this_ptr->scroll_top = iVar1 - this_ptr->vertical_page_size;
      }
      if (this_ptr->scroll_top < 0) {
        this_ptr->scroll_top = 0;
      }
    }
    while (this_ptr->scroll_top + this_ptr->page_size <= this_ptr->current_index) {
      if (this_ptr->column_count == 1) {
        this_ptr->scroll_top = this_ptr->scroll_top + 1;
      }
      else {
        this_ptr->scroll_top = this_ptr->scroll_top + this_ptr->vertical_page_size;
      }
    }
  }
  if ((this_ptr->column_count == 1) &&
     (iVar1 = (this_ptr->base_strlist).item_count - this_ptr->vertical_page_size,
     iVar1 < this_ptr->scroll_top)) {
    this_ptr->scroll_top = iVar1;
  }
  if (this_ptr->scroll_top < 0) {
    this_ptr->scroll_top = 0;
    return;
  }
  return;
}


// Assembly code:
// 004a5240: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240
// 004a5241: PUSH ESI
// 004a5242: PUSH EDI
// 004a5243: PUSH EBP
// 004a5244: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a5248: MOV ECX,dword ptr [EAX]
// 004a524a: CMP ECX,dword ptr [EAX + 0x17c]
// 004a5250: JLE 0x004a5287
//   XREF to: 004a5287 (CONDITIONAL_JUMP)
// 004a5252: CMP dword ptr [EAX + 0x17c],0x0
//   Label: LAB_004a5252
// 004a5259: JL 0x004a5292
//   XREF to: 004a5292 (CONDITIONAL_JUMP)
// 004a525b: MOV ESI,dword ptr [EAX + 0x180]
//   Label: LAB_004a525b
// 004a5261: TEST ESI,ESI
// 004a5263: JL 0x004a529e
//   XREF to: 004a529e (CONDITIONAL_JUMP)
// 004a5265: MOV EBP,dword ptr [EAX]
//   Label: LAB_004a5265
// 004a5267: MOV EDX,dword ptr [EAX + 0x180]
// 004a526d: CMP EDX,EBP
// 004a526f: JL 0x004a52af
//   XREF to: 004a52af (CONDITIONAL_JUMP)
// 004a5271: MOV EBX,dword ptr [EAX + 0x180]
// 004a5277: MOV EDX,dword ptr [EAX + 0x188]
// 004a527d: SUB EBX,EDX
// 004a527f: MOV dword ptr [EAX + 0x180],EBX
// 004a5285: JMP 0x004a5265
//   XREF to: 004a5265 (UNCONDITIONAL_JUMP)
// 004a5287: LEA EDX,[ECX + -0x1]
//   Label: LAB_004a5287
// 004a528a: MOV dword ptr [EAX + 0x17c],EDX
// 004a5290: JMP 0x004a5252
//   XREF to: 004a5252 (UNCONDITIONAL_JUMP)
// 004a5292: MOV dword ptr [EAX + 0x17c],0x0
//   Label: LAB_004a5292
// 004a529c: JMP 0x004a525b
//   XREF to: 004a525b (UNCONDITIONAL_JUMP)
// 004a529e: MOV EDX,dword ptr [EAX + 0x188]
//   Label: LAB_004a529e
// 004a52a4: LEA EDI,[ESI + EDX*0x1]
// 004a52a7: MOV dword ptr [EAX + 0x180],EDI
// 004a52ad: JMP 0x004a525b
//   XREF to: 004a525b (UNCONDITIONAL_JUMP)
// 004a52af: TEST EDX,EDX
//   Label: LAB_004a52af
// 004a52b1: JL 0x004a5300
//   XREF to: 004a5300 (CONDITIONAL_JUMP)
// 004a52b3: MOV ECX,dword ptr [EAX]
//   Label: LAB_004a52b3
// 004a52b5: CMP ECX,dword ptr [EAX + 0x17c]
// 004a52bb: JLE 0x004a535c
//   XREF to: 004a535c (CONDITIONAL_JUMP)
// 004a52c1: XOR ECX,ECX
// 004a52c3: MOV ESI,dword ptr [EAX + 0x180]
//   Label: LAB_004a52c3
// 004a52c9: CMP ESI,dword ptr [EAX + 0x17c]
// 004a52cf: JG 0x004a530c
//   XREF to: 004a530c (CONDITIONAL_JUMP)
// 004a52d1: MOV ESI,dword ptr [EAX + 0x184]
//   Label: LAB_004a52d1
// 004a52d7: MOV EDX,dword ptr [EAX + 0x180]
// 004a52dd: MOV EDI,dword ptr [EAX + 0x17c]
// 004a52e3: ADD EDX,ESI
// 004a52e5: CMP EDX,EDI
// 004a52e7: JG 0x004a535c
//   XREF to: 004a535c (CONDITIONAL_JUMP)
// 004a52ed: MOV EBP,dword ptr [EAX + 0x190]
// 004a52f3: CMP EBP,0x1
// 004a52f6: JNZ 0x004a5343
//   XREF to: 004a5343 (CONDITIONAL_JUMP)
// 004a52f8: ADD dword ptr [EAX + 0x180],EBP
// 004a52fe: JMP 0x004a52d1
//   XREF to: 004a52d1 (UNCONDITIONAL_JUMP)
// 004a5300: MOV dword ptr [EAX + 0x180],0x0
//   Label: LAB_004a5300
// 004a530a: JMP 0x004a52b3
//   XREF to: 004a52b3 (UNCONDITIONAL_JUMP)
// 004a530c: MOV EDI,dword ptr [EAX + 0x190]
//   Label: LAB_004a530c
// 004a5312: CMP EDI,0x1
// 004a5315: JNZ 0x004a5331
//   XREF to: 004a5331 (CONDITIONAL_JUMP)
// 004a5317: MOV EDX,ESI
// 004a5319: SUB EDX,EDI
// 004a531b: MOV dword ptr [EAX + 0x180],EDX
// 004a5321: CMP ECX,dword ptr [EAX + 0x180]
//   Label: LAB_004a5321
// 004a5327: JLE 0x004a52c3
//   XREF to: 004a52c3 (CONDITIONAL_JUMP)
// 004a5329: MOV dword ptr [EAX + 0x180],ECX
// 004a532f: JMP 0x004a52c3
//   XREF to: 004a52c3 (UNCONDITIONAL_JUMP)
// 004a5331: MOV EBP,ESI
//   Label: LAB_004a5331
// 004a5333: MOV EDX,dword ptr [EAX + 0x188]
// 004a5339: SUB EBP,EDX
// 004a533b: MOV dword ptr [EAX + 0x180],EBP
// 004a5341: JMP 0x004a5321
//   XREF to: 004a5321 (UNCONDITIONAL_JUMP)
// 004a5343: MOV ECX,dword ptr [EAX + 0x180]
//   Label: LAB_004a5343
// 004a5349: MOV EDX,dword ptr [EAX + 0x188]
// 004a534f: ADD ECX,EDX
// 004a5351: MOV dword ptr [EAX + 0x180],ECX
// 004a5357: JMP 0x004a52d1
//   XREF to: 004a52d1 (UNCONDITIONAL_JUMP)
// 004a535c: CMP dword ptr [EAX + 0x190],0x1
//   Label: LAB_004a535c
// 004a5363: JNZ 0x004a537f
//   XREF to: 004a537f (CONDITIONAL_JUMP)
// 004a5365: MOV EDI,dword ptr [EAX + 0x188]
// 004a536b: MOV EDX,dword ptr [EAX]
// 004a536d: MOV EBP,dword ptr [EAX + 0x180]
// 004a5373: SUB EDX,EDI
// 004a5375: CMP EDX,EBP
// 004a5377: JGE 0x004a537f
//   XREF to: 004a537f (CONDITIONAL_JUMP)
// 004a5379: MOV dword ptr [EAX + 0x180],EDX
// 004a537f: CMP dword ptr [EAX + 0x180],0x0
//   Label: LAB_004a537f
// 004a5386: JL 0x004a538d
//   XREF to: 004a538d (CONDITIONAL_JUMP)
// 004a5388: POP EBP
// 004a5389: POP EDI
// 004a538a: POP ESI
// 004a538b: POP EBX
// 004a538c: RET
// 004a538d: MOV dword ptr [EAX + 0x180],0x0
//   Label: LAB_004a538d
// 004a5397: POP EBP
// 004a5398: POP EDI
// 004a5399: POP ESI
// 004a539a: POP EBX
// 004a539b: RET
