// Name: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
// Address: 004a5fc0
// Address Range: [[004a5fc0, 004a637b]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar * this_ptr)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005075e5 [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 005071fa [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c5f1 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 (00535e70) at 00536b85 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565181 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00577af0 (00577af0) at 00577bd1 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450 (004a6450) at 004a6471 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340 (004a4340) at 004a4582 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004a5fa8 = 004a61cc
//   CEdButton* g_ActiveButton
//   int g_ScrollAction
//   int g_ScrollTimer
//   int g_ScrollDelay
//   int g_DragStartMouseX
//   int g_DragStartMouseY
//   int g_DragStartScrollPos
//   int g_DragStartThumbPos
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
// Function calls:
//   shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380
//   shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0
//   wincore_winrun.cpp_getTime_FUN_005f2dc0
//   wincore_winrun.cpp_setCursorPosition_FUN_005f30d0

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(this_ptr);
  if ((CEdButton *)this_ptr != g_ActiveButton) {
    if (g_ActiveButton != (CEdButton *)0x0) {
      return;
    }
    if (((byte)g_MouseButtonFlags & 1) == 0) {
      return;
    }
    if (g_MouseX < this_ptr->bounds_left) {
      return;
    }
    if (g_MouseY < this_ptr->bounds_top) {
      return;
    }
    if (this_ptr->bounds_right <= g_MouseX) {
      return;
    }
    if (this_ptr->bounds_bottom <= g_MouseY) {
      return;
    }
    g_DragStartMouseX = g_MouseX;
    g_DragStartMouseY = g_MouseY;
    g_DragStartScrollPos = this_ptr->scroll_position;
    g_ActiveButton = (CEdButton *)this_ptr;
    g_DragStartThumbPos = this_ptr->thumb_start;
    iVar1 = g_MouseY;
    if (this_ptr->orientation != 0) {
      iVar1 = g_MouseX;
    }
    if (iVar1 < this_ptr->track_start) {
      g_ScrollAction = 1;
      this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->scroll_increment;
    }
    else if (iVar1 < this_ptr->track_end) {
      if (iVar1 < this_ptr->thumb_start) {
        g_ScrollAction = 3;
        this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->max_value;
      }
      else if (iVar1 < this_ptr->thumb_end) {
        g_ScrollAction = 0;
      }
      else {
        g_ScrollAction = 4;
        this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->max_value;
      }
    }
    else {
      g_ScrollAction = 2;
      this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->scroll_increment;
    }
    g_ScrollTimer = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    g_ScrollDelay = 0x48000;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(this_ptr);
    return;
  }
  if (((byte)g_MouseButtonFlags & 1) == 0) {
    g_ActiveButton = (CEdButton *)0x0;
    return;
  }
  if (g_ScrollAction != 0) {
    iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar3 = iVar1 - g_ScrollTimer;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    g_ScrollDelay = g_ScrollDelay - iVar3;
    g_ScrollTimer = iVar1;
    if (g_ScrollDelay < 1) {
      g_ScrollDelay = 0x9999;
      iVar1 = g_MouseY;
      if (this_ptr->orientation != 0) {
        iVar1 = g_MouseX;
      }
      switch(g_ScrollAction) {
      case 1:
        this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->scroll_increment;
        break;
      case 2:
        this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->scroll_increment;
        break;
      case 3:
        if (iVar1 < this_ptr->thumb_start) {
          this_ptr->scroll_position = this_ptr->scroll_position - this_ptr->max_value;
        }
        else {
          g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfe;
          g_ActiveButton = (CEdButton *)0x0;
        }
        break;
      case 4:
        if (this_ptr->thumb_end < iVar1) {
          this_ptr->scroll_position = this_ptr->scroll_position + this_ptr->max_value;
        }
        else {
          g_MouseButtonFlags._0_1_ = (byte)g_MouseButtonFlags & 0xfe;
          g_ActiveButton = (CEdButton *)0x0;
        }
      }
    }
    wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(g_DragStartMouseX,g_DragStartMouseY);
    goto LAB_004a6083;
  }
  if (this_ptr->orientation == 0) {
    iVar3 = (this_ptr->track_start + g_DragStartMouseY) - g_DragStartThumbPos;
    iVar1 = g_MouseY;
    if (g_MouseY < iVar3) {
      iVar1 = iVar3;
    }
    iVar3 = (this_ptr->track_end + g_DragStartMouseY) -
            ((g_DragStartThumbPos + this_ptr->thumb_end) - this_ptr->thumb_start);
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    iVar2 = iVar1 - g_DragStartMouseY;
    iVar3 = g_DragStartMouseX;
  }
  else {
    iVar1 = (this_ptr->track_start + g_DragStartMouseX) - g_DragStartThumbPos;
    iVar3 = g_MouseX;
    if (g_MouseX < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = (this_ptr->track_end + g_DragStartMouseX) -
            ((this_ptr->thumb_end + g_DragStartThumbPos) - this_ptr->thumb_start);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar2 = iVar3 - g_DragStartMouseX;
    iVar1 = g_DragStartMouseY;
  }
  iVar2 = iVar2 + g_DragStartThumbPos;
  wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(iVar3,iVar1);
  if ((this_ptr->max_value < this_ptr->current_value) && (0 < this_ptr->current_value)) {
    if (iVar2 == g_DragStartThumbPos) {
      this_ptr->scroll_position = g_DragStartScrollPos;
      goto LAB_004a6083;
    }
    if (this_ptr->track_start < iVar2) {
      iVar1 = this_ptr->thumb_end - this_ptr->thumb_start;
      if (iVar2 + iVar1 < this_ptr->track_end) {
        this_ptr->scroll_position =
             ((iVar2 - this_ptr->track_start) * (this_ptr->current_value - this_ptr->max_value)) /
             ((this_ptr->track_end - this_ptr->track_start) - iVar1);
      }
      else {
        this_ptr->scroll_position = this_ptr->current_value - this_ptr->max_value;
      }
      goto LAB_004a6083;
    }
  }
  this_ptr->scroll_position = 0;
LAB_004a6083:
  shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(this_ptr);
  shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(this_ptr);
  return;
}


// Assembly code:
// 004a5fc0: PUSH EBX
//   Label: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
// 004a5fc1: PUSH ESI
// 004a5fc2: PUSH EDI
// 004a5fc3: PUSH EBP
// 004a5fc4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a5fc8: PUSH EBX
// 004a5fc9: CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380
//   XREF to: 004a6380 (UNCONDITIONAL_CALL)
// 004a5fce: ADD ESP,0x4
// 004a5fd1: PUSH EBX
// 004a5fd2: CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0
//   XREF to: 004a5ea0 (UNCONDITIONAL_CALL)
// 004a5fd7: MOV EDX,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 004a5fdd: ADD ESP,0x4
// 004a5fe0: CMP EBX,EDX
// 004a5fe2: JNZ 0x004a625a
//   XREF to: 004a625a (CONDITIONAL_JUMP)
// 004a5fe8: TEST byte ptr [0x02cf6a94],0x1
//   XREF to: 02cf6a94 (READ)
// 004a5fef: JZ 0x004a609a
//   XREF to: 004a609a (CONDITIONAL_JUMP)
// 004a5ff5: CMP dword ptr [0x02cf2b04],0x0
//   XREF to: 02cf2b04 (READ)
// 004a5ffc: JNZ 0x004a6178
//   XREF to: 004a6178 (CONDITIONAL_JUMP)
// 004a6002: CMP dword ptr [EBX + 0x10],0x0
// 004a6006: JZ 0x004a60a7
//   XREF to: 004a60a7 (CONDITIONAL_JUMP)
// 004a600c: MOV EDI,dword ptr [0x02cf2b10]
//   XREF to: 02cf2b10 (READ)
// 004a6012: MOV ESI,dword ptr [EBX + 0x24]
// 004a6015: MOV EBP,dword ptr [0x02cf2b1c]
//   XREF to: 02cf2b1c (READ)
// 004a601b: ADD ESI,EDI
// 004a601d: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a6022: SUB ESI,EBP
// 004a6024: MOV EDX,dword ptr [0x02cf2b14]
//   XREF to: 02cf2b14 (READ)
// 004a602a: CMP EAX,ESI
// 004a602c: JGE 0x004a6030
//   XREF to: 004a6030 (CONDITIONAL_JUMP)
// 004a602e: MOV EAX,ESI
// 004a6030: MOV ESI,dword ptr [0x02cf2b1c]
//   Label: LAB_004a6030
//   XREF to: 02cf2b1c (READ)
// 004a6036: MOV EBP,dword ptr [0x02cf2b10]
//   XREF to: 02cf2b10 (READ)
// 004a603c: MOV ECX,dword ptr [EBX + 0x30]
// 004a603f: MOV EDI,dword ptr [EBX + 0x2c]
// 004a6042: ADD ECX,ESI
// 004a6044: MOV ESI,dword ptr [EBX + 0x28]
// 004a6047: SUB ECX,EDI
// 004a6049: ADD ESI,EBP
// 004a604b: SUB ESI,ECX
// 004a604d: CMP EAX,ESI
// 004a604f: JLE 0x004a6053
//   XREF to: 004a6053 (CONDITIONAL_JUMP)
// 004a6051: MOV EAX,ESI
// 004a6053: MOV ECX,dword ptr [0x02cf2b10]
//   Label: LAB_004a6053
//   XREF to: 02cf2b10 (READ)
// 004a6059: MOV ESI,EAX
// 004a605b: MOV EDI,dword ptr [0x02cf2b1c]
//   XREF to: 02cf2b1c (READ)
// 004a6061: SUB ESI,ECX
// 004a6063: ADD ESI,EDI
// 004a6065: PUSH EDX
//   Label: LAB_004a6065
// 004a6066: PUSH EAX
// 004a6067: CALL wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
//   XREF to: 005f30d0 (UNCONDITIONAL_CALL)
// 004a606c: MOV EAX,dword ptr [EBX + 0x8]
// 004a606f: MOV EBP,dword ptr [EBX + 0x4]
// 004a6072: ADD ESP,0x8
// 004a6075: CMP EAX,EBP
// 004a6077: JL 0x004a6107
//   XREF to: 004a6107 (CONDITIONAL_JUMP)
// 004a607d: MOV dword ptr [EBX],0x0
//   Label: LAB_004a607d
// 004a6083: PUSH EBX
//   Label: LAB_004a6083
// 004a6084: CALL shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380
//   XREF to: 004a6380 (UNCONDITIONAL_CALL)
// 004a6089: ADD ESP,0x4
// 004a608c: PUSH EBX
// 004a608d: CALL shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0
//   XREF to: 004a5ea0 (UNCONDITIONAL_CALL)
// 004a6092: ADD ESP,0x4
// 004a6095: POP EBP
//   Label: LAB_004a6095
// 004a6096: POP EDI
// 004a6097: POP ESI
// 004a6098: POP EBX
// 004a6099: RET
// 004a609a: XOR EDX,EDX
//   Label: LAB_004a609a
// 004a609c: MOV dword ptr [0x02cf2b00],EDX
//   XREF to: 02cf2b00 (WRITE)
// 004a60a2: POP EBP
// 004a60a3: POP EDI
// 004a60a4: POP ESI
// 004a60a5: POP EBX
// 004a60a6: RET
// 004a60a7: MOV ECX,dword ptr [0x02cf2b14]
//   Label: LAB_004a60a7
//   XREF to: 02cf2b14 (READ)
// 004a60ad: MOV ESI,dword ptr [EBX + 0x24]
// 004a60b0: MOV EDI,dword ptr [0x02cf2b1c]
//   XREF to: 02cf2b1c (READ)
// 004a60b6: ADD ESI,ECX
// 004a60b8: MOV EDX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a60be: SUB ESI,EDI
// 004a60c0: MOV EAX,[0x02cf2b10]
//   XREF to: 02cf2b10 (READ)
// 004a60c5: CMP EDX,ESI
// 004a60c7: JGE 0x004a60cb
//   XREF to: 004a60cb (CONDITIONAL_JUMP)
// 004a60c9: MOV EDX,ESI
// 004a60cb: MOV ESI,dword ptr [0x02cf2b1c]
//   Label: LAB_004a60cb
//   XREF to: 02cf2b1c (READ)
// 004a60d1: MOV EBP,dword ptr [EBX + 0x30]
// 004a60d4: MOV ECX,dword ptr [EBX + 0x2c]
// 004a60d7: ADD ESI,EBP
// 004a60d9: SUB ESI,ECX
// 004a60db: MOV EDI,dword ptr [0x02cf2b14]
//   XREF to: 02cf2b14 (READ)
// 004a60e1: MOV ECX,ESI
// 004a60e3: MOV ESI,dword ptr [EBX + 0x28]
// 004a60e6: ADD ESI,EDI
// 004a60e8: SUB ESI,ECX
// 004a60ea: CMP EDX,ESI
// 004a60ec: JLE 0x004a60f0
//   XREF to: 004a60f0 (CONDITIONAL_JUMP)
// 004a60ee: MOV EDX,ESI
// 004a60f0: MOV EBP,dword ptr [0x02cf2b14]
//   Label: LAB_004a60f0
//   XREF to: 02cf2b14 (READ)
// 004a60f6: MOV ESI,EDX
// 004a60f8: MOV ECX,dword ptr [0x02cf2b1c]
//   XREF to: 02cf2b1c (READ)
// 004a60fe: SUB ESI,EBP
// 004a6100: ADD ESI,ECX
// 004a6102: JMP 0x004a6065
//   XREF to: 004a6065 (UNCONDITIONAL_JUMP)
// 004a6107: CMP EBP,0x1
//   Label: LAB_004a6107
// 004a610a: JL 0x004a607d
//   XREF to: 004a607d (CONDITIONAL_JUMP)
// 004a6110: CMP ESI,dword ptr [0x02cf2b1c]
//   XREF to: 02cf2b1c (READ)
// 004a6116: JNZ 0x004a6124
//   XREF to: 004a6124 (CONDITIONAL_JUMP)
// 004a6118: MOV EAX,[0x02cf2b18]
//   XREF to: 02cf2b18 (READ)
// 004a611d: MOV dword ptr [EBX],EAX
// 004a611f: JMP 0x004a6083
//   XREF to: 004a6083 (UNCONDITIONAL_JUMP)
// 004a6124: MOV ECX,dword ptr [EBX + 0x24]
//   Label: LAB_004a6124
// 004a6127: CMP ESI,ECX
// 004a6129: JLE 0x004a607d
//   XREF to: 004a607d (CONDITIONAL_JUMP)
// 004a612f: MOV EDI,dword ptr [EBX + 0x2c]
// 004a6132: MOV EDX,dword ptr [EBX + 0x30]
// 004a6135: SUB EDX,EDI
// 004a6137: MOV EBP,dword ptr [EBX + 0x28]
// 004a613a: LEA EAX,[ESI + EDX*0x1]
// 004a613d: CMP EAX,EBP
// 004a613f: JL 0x004a6150
//   XREF to: 004a6150 (CONDITIONAL_JUMP)
// 004a6141: MOV EDX,dword ptr [EBX + 0x8]
// 004a6144: MOV EAX,dword ptr [EBX + 0x4]
// 004a6147: SUB EAX,EDX
// 004a6149: MOV dword ptr [EBX],EAX
// 004a614b: JMP 0x004a6083
//   XREF to: 004a6083 (UNCONDITIONAL_JUMP)
// 004a6150: MOV EAX,EBP
//   Label: LAB_004a6150
// 004a6152: MOV EDI,dword ptr [EBX + 0x8]
// 004a6155: SUB EAX,ECX
// 004a6157: MOV EBP,dword ptr [EBX + 0x24]
// 004a615a: MOV ECX,EAX
// 004a615c: MOV EAX,dword ptr [EBX + 0x4]
// 004a615f: SUB ECX,EDX
// 004a6161: MOV EDX,ESI
// 004a6163: SUB EAX,EDI
// 004a6165: SUB EDX,EBP
// 004a6167: IMUL EDX,EAX
// 004a616a: MOV EAX,EDX
// 004a616c: SAR EDX,0x1f
// 004a616f: IDIV ECX
// 004a6171: MOV dword ptr [EBX],EAX
// 004a6173: JMP 0x004a6083
//   XREF to: 004a6083 (UNCONDITIONAL_JUMP)
// 004a6178: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_004a6178
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004a617d: MOV ESI,dword ptr [0x02cf2b08]
//   XREF to: 02cf2b08 (READ)
// 004a6183: MOV EDX,EAX
// 004a6185: SUB EAX,ESI
// 004a6187: TEST EAX,EAX
// 004a6189: JL 0x004a61f0
//   XREF to: 004a61f0 (CONDITIONAL_JUMP)
// 004a618b: MOV EDI,dword ptr [0x02cf2b0c]
//   Label: LAB_004a618b
//   XREF to: 02cf2b0c (READ)
// 004a6191: SUB EDI,EAX
// 004a6193: MOV dword ptr [0x02cf2b08],EDX
//   XREF to: 02cf2b08 (WRITE)
// 004a6199: MOV dword ptr [0x02cf2b0c],EDI
//   XREF to: 02cf2b0c (WRITE)
// 004a619f: TEST EDI,EDI
// 004a61a1: JG 0x004a61d5
//   XREF to: 004a61d5 (CONDITIONAL_JUMP)
// 004a61a3: MOV EAX,0x9999
// 004a61a8: MOV EDX,dword ptr [EBX + 0x10]
// 004a61ab: MOV [0x02cf2b0c],EAX
//   XREF to: 02cf2b0c (WRITE)
// 004a61b0: TEST EDX,EDX
// 004a61b2: JZ 0x004a61f4
//   XREF to: 004a61f4 (CONDITIONAL_JUMP)
// 004a61b4: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a61b9: MOV EDX,dword ptr [0x02cf2b04]
//   Label: LAB_004a61b9
//   XREF to: 02cf2b04 (READ)
// 004a61bf: DEC EDX
// 004a61c0: CMP EDX,0x3
// 004a61c3: JA 0x004a61d5
//   XREF to: 004a61d5 (CONDITIONAL_JUMP)
// 004a61c5: JMP dword ptr [EDX*0x4 + 0x4a5fa8]
//   Label: switchD
//   XREF to: 004a61cc (COMPUTED_JUMP)
//   XREF to: 004a61fb (COMPUTED_JUMP)
//   XREF to: 004a6206 (COMPUTED_JUMP)
//   XREF to: 004a622e (COMPUTED_JUMP)
//   XREF to: 004a5fa8 (DATA)
// 004a61cc: MOV ESI,dword ptr [EBX]
//   Label: caseD_1
// 004a61ce: MOV EAX,dword ptr [EBX + 0xc]
// 004a61d1: SUB ESI,EAX
// 004a61d3: MOV dword ptr [EBX],ESI
// 004a61d5: MOV EDI,dword ptr [0x02cf2b14]
//   Label: default
//   XREF to: 02cf2b14 (READ)
// 004a61db: PUSH EDI
// 004a61dc: MOV EBP,dword ptr [0x02cf2b10]
//   XREF to: 02cf2b10 (READ)
// 004a61e2: PUSH EBP
// 004a61e3: CALL wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
//   XREF to: 005f30d0 (UNCONDITIONAL_CALL)
// 004a61e8: ADD ESP,0x8
// 004a61eb: JMP 0x004a6083
//   XREF to: 004a6083 (UNCONDITIONAL_JUMP)
// 004a61f0: XOR EAX,EAX
//   Label: LAB_004a61f0
// 004a61f2: JMP 0x004a618b
//   XREF to: 004a618b (UNCONDITIONAL_JUMP)
// 004a61f4: MOV EAX,[0x02cf6a90]
//   Label: LAB_004a61f4
//   XREF to: 02cf6a90 (READ)
// 004a61f9: JMP 0x004a61b9
//   XREF to: 004a61b9 (UNCONDITIONAL_JUMP)
// 004a61fb: MOV ECX,dword ptr [EBX]
//   Label: caseD_2
// 004a61fd: MOV EAX,dword ptr [EBX + 0xc]
// 004a6200: ADD ECX,EAX
// 004a6202: MOV dword ptr [EBX],ECX
// 004a6204: JMP 0x004a61d5
//   XREF to: 004a61d5 (UNCONDITIONAL_JUMP)
// 004a6206: CMP EAX,dword ptr [EBX + 0x2c]
//   Label: caseD_3
// 004a6209: JGE 0x004a6216
//   XREF to: 004a6216 (CONDITIONAL_JUMP)
// 004a620b: MOV EDX,dword ptr [EBX]
// 004a620d: MOV EAX,dword ptr [EBX + 0x8]
// 004a6210: SUB EDX,EAX
// 004a6212: MOV dword ptr [EBX],EDX
// 004a6214: JMP 0x004a61d5
//   XREF to: 004a61d5 (UNCONDITIONAL_JUMP)
// 004a6216: MOV CL,byte ptr [0x02cf6a94]
//   Label: LAB_004a6216
//   XREF to: 02cf6a94 (READ)
// 004a621c: XOR EAX,EAX
// 004a621e: AND CL,0xfe
// 004a6221: MOV [0x02cf2b00],EAX
//   XREF to: 02cf2b00 (WRITE)
// 004a6226: MOV byte ptr [0x02cf6a94],CL
//   XREF to: 02cf6a94 (WRITE)
// 004a622c: JMP 0x004a61d5
//   XREF to: 004a61d5 (UNCONDITIONAL_JUMP)
// 004a622e: CMP EAX,dword ptr [EBX + 0x30]
//   Label: caseD_4
// 004a6231: JLE 0x004a623e
//   XREF to: 004a623e (CONDITIONAL_JUMP)
// 004a6233: MOV EDI,dword ptr [EBX]
// 004a6235: MOV EAX,dword ptr [EBX + 0x8]
// 004a6238: ADD EDI,EAX
// 004a623a: MOV dword ptr [EBX],EDI
// 004a623c: JMP 0x004a61d5
//   XREF to: 004a61d5 (UNCONDITIONAL_JUMP)
// 004a623e: MOV DH,byte ptr [0x02cf6a94]
//   Label: LAB_004a623e
//   XREF to: 02cf6a94 (READ)
// 004a6244: XOR ESI,ESI
// 004a6246: AND DH,0xfe
// 004a6249: MOV dword ptr [0x02cf2b00],ESI
//   XREF to: 02cf2b00 (WRITE)
// 004a624f: MOV byte ptr [0x02cf6a94],DH
//   XREF to: 02cf6a94 (WRITE)
// 004a6255: JMP 0x004a61d5
//   XREF to: 004a61d5 (UNCONDITIONAL_JUMP)
// 004a625a: TEST EDX,EDX
//   Label: LAB_004a625a
// 004a625c: JNZ 0x004a6095
//   XREF to: 004a6095 (CONDITIONAL_JUMP)
// 004a6262: TEST byte ptr [0x02cf6a94],0x1
//   XREF to: 02cf6a94 (READ)
// 004a6269: JZ 0x004a6095
//   XREF to: 004a6095 (CONDITIONAL_JUMP)
// 004a626f: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a6274: CMP EAX,dword ptr [EBX + 0x14]
// 004a6277: JL 0x004a6095
//   XREF to: 004a6095 (CONDITIONAL_JUMP)
// 004a627d: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a6282: CMP EAX,dword ptr [EBX + 0x18]
// 004a6285: JL 0x004a6095
//   XREF to: 004a6095 (CONDITIONAL_JUMP)
// 004a628b: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a6290: CMP EAX,dword ptr [EBX + 0x1c]
// 004a6293: JGE 0x004a6095
//   XREF to: 004a6095 (CONDITIONAL_JUMP)
// 004a6299: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a629e: CMP EAX,dword ptr [EBX + 0x20]
// 004a62a1: JGE 0x004a6095
//   XREF to: 004a6095 (CONDITIONAL_JUMP)
// 004a62a7: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a62ac: MOV [0x02cf2b10],EAX
//   XREF to: 02cf2b10 (WRITE)
// 004a62b1: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004a62b6: MOV [0x02cf2b14],EAX
//   XREF to: 02cf2b14 (WRITE)
// 004a62bb: MOV EAX,dword ptr [EBX]
// 004a62bd: MOV dword ptr [0x02cf2b00],EBX
//   XREF to: 02cf2b00 (WRITE)
// 004a62c3: MOV [0x02cf2b18],EAX
//   XREF to: 02cf2b18 (WRITE)
// 004a62c8: MOV EAX,dword ptr [EBX + 0x2c]
// 004a62cb: MOV ECX,dword ptr [EBX + 0x10]
// 004a62ce: MOV [0x02cf2b1c],EAX
//   XREF to: 02cf2b1c (WRITE)
// 004a62d3: TEST ECX,ECX
// 004a62d5: JZ 0x004a6317
//   XREF to: 004a6317 (CONDITIONAL_JUMP)
// 004a62d7: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004a62dc: CMP EAX,dword ptr [EBX + 0x24]
//   Label: LAB_004a62dc
// 004a62df: JGE 0x004a631e
//   XREF to: 004a631e (CONDITIONAL_JUMP)
// 004a62e1: MOV EAX,dword ptr [EBX + 0xc]
// 004a62e4: MOV EBP,dword ptr [EBX]
// 004a62e6: MOV EDI,0x1
// 004a62eb: SUB EBP,EAX
// 004a62ed: MOV dword ptr [0x02cf2b04],EDI
//   XREF to: 02cf2b04 (WRITE)
// 004a62f3: MOV dword ptr [EBX],EBP
// 004a62f5: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   Label: LAB_004a62f5
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004a62fa: MOV [0x02cf2b08],EAX
//   XREF to: 02cf2b08 (WRITE)
// 004a62ff: MOV EAX,0x48000
// 004a6304: PUSH EBX
// 004a6305: MOV [0x02cf2b0c],EAX
//   XREF to: 02cf2b0c (WRITE)
// 004a630a: CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)
// 004a630f: ADD ESP,0x4
// 004a6312: POP EBP
// 004a6313: POP EDI
// 004a6314: POP ESI
// 004a6315: POP EBX
// 004a6316: RET
// 004a6317: MOV EAX,[0x02cf6a90]
//   Label: LAB_004a6317
//   XREF to: 02cf6a90 (READ)
// 004a631c: JMP 0x004a62dc
//   XREF to: 004a62dc (UNCONDITIONAL_JUMP)
// 004a631e: CMP EAX,dword ptr [EBX + 0x28]
//   Label: LAB_004a631e
// 004a6321: JL 0x004a6339
//   XREF to: 004a6339 (CONDITIONAL_JUMP)
// 004a6323: MOV EAX,dword ptr [EBX + 0xc]
// 004a6326: MOV ESI,dword ptr [EBX]
// 004a6328: MOV ECX,0x2
// 004a632d: ADD ESI,EAX
// 004a632f: MOV dword ptr [0x02cf2b04],ECX
//   XREF to: 02cf2b04 (WRITE)
// 004a6335: MOV dword ptr [EBX],ESI
// 004a6337: JMP 0x004a62f5
//   XREF to: 004a62f5 (UNCONDITIONAL_JUMP)
// 004a6339: CMP EAX,dword ptr [EBX + 0x2c]
//   Label: LAB_004a6339
// 004a633c: JGE 0x004a6354
//   XREF to: 004a6354 (CONDITIONAL_JUMP)
// 004a633e: MOV EAX,dword ptr [EBX + 0x8]
// 004a6341: MOV EDX,dword ptr [EBX]
// 004a6343: MOV EBP,0x3
// 004a6348: SUB EDX,EAX
// 004a634a: MOV dword ptr [0x02cf2b04],EBP
//   XREF to: 02cf2b04 (WRITE)
// 004a6350: MOV dword ptr [EBX],EDX
// 004a6352: JMP 0x004a62f5
//   XREF to: 004a62f5 (UNCONDITIONAL_JUMP)
// 004a6354: CMP EAX,dword ptr [EBX + 0x30]
//   Label: LAB_004a6354
// 004a6357: JL 0x004a636f
//   XREF to: 004a636f (CONDITIONAL_JUMP)
// 004a6359: MOV EAX,dword ptr [EBX + 0x8]
// 004a635c: MOV EDI,dword ptr [EBX]
// 004a635e: MOV ESI,0x4
// 004a6363: ADD EDI,EAX
// 004a6365: MOV dword ptr [0x02cf2b04],ESI
//   XREF to: 02cf2b04 (WRITE)
// 004a636b: MOV dword ptr [EBX],EDI
// 004a636d: JMP 0x004a62f5
//   XREF to: 004a62f5 (UNCONDITIONAL_JUMP)
// 004a636f: XOR ECX,ECX
//   Label: LAB_004a636f
// 004a6371: MOV dword ptr [0x02cf2b04],ECX
//   XREF to: 02cf2b04 (WRITE)
// 004a6377: JMP 0x004a62f5
//   XREF to: 004a62f5 (UNCONDITIONAL_JUMP)
