// Name: shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340
// Address: 004a4340
// Address Range: [[004a4340, 004a45c6]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340(CPickList * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db3e5 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 (004a3e20) at 004a3ea6 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00623a76 = 294912
//   int g_LastClickTimestamp
//   int g_LastClickItemIndex
//   CEdButton* g_ActiveButton
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
// Function calls:
//   shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_004a53a0
//   shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0
//   shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_handleDialogInput_FUN_004a4340(CPickList *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004a5240(this_ptr);
  if (this_ptr->confirmed_flag != 0) {
    iVar1 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_004a54e0
                      (this_ptr,this_ptr->current_index);
    if (iVar1 != 0) {
      return this_ptr->current_index;
    }
    this_ptr->confirmed_flag = 0;
  }
  iVar1 = (*((this_ptr->base_strlist).vtable)->handleInput)(&this_ptr->base_strlist);
  if (iVar1 < 0) {
    return -1;
  }
  shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004a5240(this_ptr);
  if (this_ptr->state_flag != 0) {
    return -2;
  }
  if (this_ptr->dialog_result == 1) {
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top;
    (this_ptr->scrollbar).current_value = (this_ptr->base_strlist).item_count;
    (this_ptr->scrollbar).max_value = this_ptr->vertical_page_size;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&this_ptr->scrollbar);
    iVar1 = (this_ptr->scrollbar).scroll_position;
  }
  else {
    if (this_ptr->dialog_result != 2) goto LAB_004a43f0;
    (this_ptr->scrollbar).scroll_position = this_ptr->scroll_top / this_ptr->vertical_page_size;
    (this_ptr->scrollbar).current_value =
         ((this_ptr->base_strlist).item_count + this_ptr->vertical_page_size + -1) /
         this_ptr->vertical_page_size;
    (this_ptr->scrollbar).max_value = this_ptr->column_count;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&this_ptr->scrollbar);
    iVar1 = (this_ptr->scrollbar).scroll_position * this_ptr->vertical_page_size;
  }
  this_ptr->scroll_top = iVar1;
LAB_004a43f0:
  iVar1 = this_ptr->vertical_page_size * this_ptr->column_count + this_ptr->scroll_top;
  if (iVar1 <= this_ptr->current_index) {
    this_ptr->current_index = iVar1 + -1;
  }
  if (this_ptr->current_index < this_ptr->scroll_top) {
    this_ptr->current_index = this_ptr->scroll_top;
  }
  if (this_ptr->ok_button_text[0] != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&this_ptr->ok_button);
    if (iVar1 != 0) {
      this_ptr->confirmed_flag = 1;
    }
    if (&this_ptr->ok_button == g_ActiveButton) {
      this_ptr->selection_state = 0;
    }
  }
  if (this_ptr->cancel_button_text[0] != '\0') {
    iVar1 = shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(&this_ptr->cancel_button);
    if (iVar1 != 0) {
      return -1;
    }
    if (&this_ptr->cancel_button == g_ActiveButton) {
      this_ptr->selection_state = 1;
    }
  }
  iVar1 = g_LastClickItemIndex;
  if (((((byte)g_MouseButtonFlags & 1) != 0) && (g_ActiveButton == (CEdButton *)0x0)) &&
     (iVar1 = shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_004a53a0
                        (this_ptr,g_MouseX,g_MouseY), -1 < iVar1)) {
    this_ptr->selection_state = -1;
    g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfe;
    this_ptr->current_index = iVar1;
    iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar3 = iVar2 - g_LastClickTimestamp;
    g_LastClickTimestamp = iVar2;
    if (((0 < iVar3) && ((double)iVar3 < DOUBLE_00623a76)) &&
       (g_LastClickItemIndex == this_ptr->current_index)) {
      this_ptr->confirmed_flag = 1;
    }
  }
  g_LastClickItemIndex = iVar1;
  return -2;
}


// Assembly code:
// 004a4340: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340
// 004a4341: PUSH ESI
// 004a4342: PUSH EDI
// 004a4343: PUSH EBP
// 004a4344: MOV EBP,ESP
// 004a4346: SUB ESP,0x4
// 004a4349: AND ESP,0xfffffff8
// 004a434c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a434f: PUSH EBX
// 004a4350: CALL shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240
//   XREF to: 004a5240 (UNCONDITIONAL_CALL)
// 004a4355: MOV EDX,dword ptr [EBX + 0x170]
// 004a435b: ADD ESP,0x4
// 004a435e: TEST EDX,EDX
// 004a4360: JZ 0x004a4380
//   XREF to: 004a4380 (CONDITIONAL_JUMP)
// 004a4362: MOV ECX,dword ptr [EBX + 0x17c]
// 004a4368: PUSH ECX
// 004a4369: PUSH EBX
// 004a436a: CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0
//   XREF to: 004a54e0 (UNCONDITIONAL_CALL)
// 004a436f: ADD ESP,0x8
// 004a4372: TEST EAX,EAX
// 004a4374: JNZ 0x004a4520
//   XREF to: 004a4520 (CONDITIONAL_JUMP)
// 004a437a: MOV dword ptr [EBX + 0x170],EAX
// 004a4380: PUSH EBX
//   Label: LAB_004a4380
// 004a4381: MOV EAX,dword ptr [EBX + 0xc]
// 004a4384: CALL dword ptr [EAX + 0x18]
// 004a4387: ADD ESP,0x4
// 004a438a: TEST EAX,EAX
// 004a438c: JL 0x004a452d
//   XREF to: 004a452d (CONDITIONAL_JUMP)
// 004a4392: PUSH EBX
// 004a4393: CALL shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240
//   XREF to: 004a5240 (UNCONDITIONAL_CALL)
// 004a4398: MOV ESI,dword ptr [EBX + 0x40]
// 004a439b: ADD ESP,0x4
// 004a439e: TEST ESI,ESI
// 004a43a0: JNZ 0x004a4514
//   XREF to: 004a4514 (CONDITIONAL_JUMP)
// 004a43a6: MOV EDI,dword ptr [EBX + 0x1d8]
// 004a43ac: LEA ECX,[EBX + 0x1a4]
// 004a43b2: CMP EDI,0x1
// 004a43b5: JNZ 0x004a4539
//   XREF to: 004a4539 (CONDITIONAL_JUMP)
// 004a43bb: MOV EAX,dword ptr [EBX + 0x180]
// 004a43c1: MOV dword ptr [EBX + 0x1a4],EAX
// 004a43c7: MOV EAX,dword ptr [EBX]
// 004a43c9: MOV dword ptr [EBX + 0x1a8],EAX
// 004a43cf: MOV EAX,dword ptr [EBX + 0x188]
// 004a43d5: PUSH ECX
// 004a43d6: MOV dword ptr [EBX + 0x1ac],EAX
// 004a43dc: CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)
// 004a43e1: MOV EAX,dword ptr [EBX + 0x1a4]
// 004a43e7: ADD ESP,0x4
//   Label: LAB_004a43e7
// 004a43ea: MOV dword ptr [EBX + 0x180],EAX
// 004a43f0: MOV ECX,dword ptr [EBX + 0x190]
//   Label: LAB_004a43f0
// 004a43f6: MOV EAX,dword ptr [EBX + 0x188]
// 004a43fc: IMUL EAX,ECX
// 004a43ff: MOV ESI,dword ptr [EBX + 0x180]
// 004a4405: MOV EDI,dword ptr [EBX + 0x17c]
// 004a440b: ADD EAX,ESI
// 004a440d: CMP EAX,EDI
// 004a440f: JG 0x004a4418
//   XREF to: 004a4418 (CONDITIONAL_JUMP)
// 004a4411: DEC EAX
// 004a4412: MOV dword ptr [EBX + 0x17c],EAX
// 004a4418: MOV EDX,dword ptr [EBX + 0x180]
//   Label: LAB_004a4418
// 004a441e: CMP EDX,dword ptr [EBX + 0x17c]
// 004a4424: JLE 0x004a442c
//   XREF to: 004a442c (CONDITIONAL_JUMP)
// 004a4426: MOV dword ptr [EBX + 0x17c],EDX
// 004a442c: CMP byte ptr [EBX + 0x44],0x0
//   Label: LAB_004a442c
// 004a4430: JZ 0x004a4469
//   XREF to: 004a4469 (CONDITIONAL_JUMP)
// 004a4432: LEA EAX,[EBX + 0x1dc]
// 004a4438: PUSH EAX
// 004a4439: CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   XREF to: 004a6830 (UNCONDITIONAL_CALL)
// 004a443e: ADD ESP,0x4
// 004a4441: TEST EAX,EAX
// 004a4443: JZ 0x004a444f
//   XREF to: 004a444f (CONDITIONAL_JUMP)
// 004a4445: MOV dword ptr [EBX + 0x170],0x1
// 004a444f: MOV ECX,dword ptr [0x02cf2b00]
//   Label: LAB_004a444f
//   XREF to: 02cf2b00 (READ)
// 004a4455: LEA EAX,[EBX + 0x1dc]
// 004a445b: CMP EAX,ECX
// 004a445d: JNZ 0x004a4469
//   XREF to: 004a4469 (CONDITIONAL_JUMP)
// 004a445f: MOV dword ptr [EBX + 0x3a4],0x0
// 004a4469: CMP byte ptr [EBX + 0xa8],0x0
//   Label: LAB_004a4469
// 004a4470: JNZ 0x004a4599
//   XREF to: 004a4599 (CONDITIONAL_JUMP)
// 004a4476: TEST byte ptr [0x02cf6a94],0x1
//   Label: LAB_004a4476
//   XREF to: 02cf6a94 (READ)
// 004a447d: JZ 0x004a4514
//   XREF to: 004a4514 (CONDITIONAL_JUMP)
// 004a4483: CMP dword ptr [0x02cf2b00],0x0
//   XREF to: 02cf2b00 (READ)
// 004a448a: JNZ 0x004a4514
//   XREF to: 004a4514 (CONDITIONAL_JUMP)
// 004a4490: MOV EDX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a4496: PUSH EDX
// 004a4497: MOV ECX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a449d: PUSH ECX
// 004a449e: PUSH EBX
// 004a449f: CALL shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_004a53a0
//   XREF to: 004a53a0 (UNCONDITIONAL_CALL)
// 004a44a4: ADD ESP,0xc
// 004a44a7: MOV ESI,EAX
// 004a44a9: TEST EAX,EAX
// 004a44ab: JL 0x004a450e
//   XREF to: 004a450e (CONDITIONAL_JUMP)
// 004a44ad: MOV CL,byte ptr [0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 004a44b3: MOV dword ptr [EBX + 0x3a4],0xffffffff
// 004a44bd: AND CL,0xfe
// 004a44c0: MOV dword ptr [EBX + 0x17c],EAX
// 004a44c6: MOV byte ptr [0x02cf6a94],CL
//   XREF to: 02cf6a94 (WRITE)
// 004a44cc: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004a44d1: MOV EDI,dword ptr [0x02cf2af8]
//   XREF to: 02cf2af8 (READ)
// 004a44d7: MOV EDX,EAX
// 004a44d9: SUB EAX,EDI
// 004a44db: TEST EAX,EAX
// 004a44dd: JLE 0x004a4508
//   XREF to: 004a4508 (CONDITIONAL_JUMP)
// 004a44df: MOV dword ptr [ESP],EAX
// 004a44e2: FILD dword ptr [ESP]
// 004a44e5: FCOMP double ptr [0x00623a76]
//   XREF to: 00623a76 (READ)
// 004a44eb: FNSTSW AX
// 004a44ed: SAHF
// 004a44ee: JNC 0x004a4508
//   XREF to: 004a4508 (CONDITIONAL_JUMP)
// 004a44f0: MOV ECX,dword ptr [0x02cf2afc]
//   XREF to: 02cf2afc (READ)
// 004a44f6: CMP ECX,dword ptr [EBX + 0x17c]
// 004a44fc: JNZ 0x004a4508
//   XREF to: 004a4508 (CONDITIONAL_JUMP)
// 004a44fe: MOV dword ptr [EBX + 0x170],0x1
// 004a4508: MOV dword ptr [0x02cf2af8],EDX
//   Label: LAB_004a4508
//   XREF to: 02cf2af8 (WRITE)
// 004a450e: MOV dword ptr [0x02cf2afc],ESI
//   Label: LAB_004a450e
//   XREF to: 02cf2afc (WRITE)
// 004a4514: MOV EAX,0xfffffffe
//   Label: LAB_004a4514
// 004a4519: MOV ESP,EBP
// 004a451b: POP EBP
// 004a451c: POP EDI
// 004a451d: POP ESI
// 004a451e: POP EBX
// 004a451f: RET
// 004a4520: MOV EAX,dword ptr [EBX + 0x17c]
//   Label: LAB_004a4520
// 004a4526: MOV ESP,EBP
// 004a4528: POP EBP
// 004a4529: POP EDI
// 004a452a: POP ESI
// 004a452b: POP EBX
// 004a452c: RET
// 004a452d: MOV EAX,0xffffffff
//   Label: LAB_004a452d
// 004a4532: MOV ESP,EBP
// 004a4534: POP EBP
// 004a4535: POP EDI
// 004a4536: POP ESI
// 004a4537: POP EBX
// 004a4538: RET
// 004a4539: CMP EDI,0x2
//   Label: LAB_004a4539
// 004a453c: JNZ 0x004a43f0
//   XREF to: 004a43f0 (CONDITIONAL_JUMP)
// 004a4542: MOV EDX,dword ptr [EBX + 0x180]
// 004a4548: MOV ESI,dword ptr [EBX + 0x188]
// 004a454e: MOV EAX,EDX
// 004a4550: SAR EDX,0x1f
// 004a4553: IDIV ESI
// 004a4555: MOV dword ptr [EBX + 0x1a4],EAX
// 004a455b: MOV EDI,dword ptr [EBX + 0x188]
// 004a4561: MOV EAX,dword ptr [EBX]
// 004a4563: ADD EAX,EDI
// 004a4565: LEA EDX,[EAX + -0x1]
// 004a4568: MOV EAX,EDX
// 004a456a: SAR EDX,0x1f
// 004a456d: IDIV EDI
// 004a456f: MOV dword ptr [EBX + 0x1a8],EAX
// 004a4575: MOV EAX,dword ptr [EBX + 0x190]
// 004a457b: PUSH ECX
// 004a457c: MOV dword ptr [EBX + 0x1ac],EAX
// 004a4582: CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)
// 004a4587: MOV EAX,dword ptr [EBX + 0x1a4]
// 004a458d: IMUL EAX,dword ptr [EBX + 0x188]
// 004a4594: JMP 0x004a43e7
//   XREF to: 004a43e7 (UNCONDITIONAL_JUMP)
// 004a4599: LEA ESI,[EBX + 0x2c0]
//   Label: LAB_004a4599
// 004a459f: PUSH ESI
// 004a45a0: CALL shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
//   XREF to: 004a6830 (UNCONDITIONAL_CALL)
// 004a45a5: ADD ESP,0x4
// 004a45a8: TEST EAX,EAX
// 004a45aa: JNZ 0x004a452d
//   XREF to: 004a452d (CONDITIONAL_JUMP)
// 004a45ac: CMP ESI,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 004a45b2: JNZ 0x004a4476
//   XREF to: 004a4476 (CONDITIONAL_JUMP)
// 004a45b8: MOV dword ptr [EBX + 0x3a4],0x1
// 004a45c2: JMP 0x004a4476
//   XREF to: 004a4476 (UNCONDITIONAL_JUMP)
