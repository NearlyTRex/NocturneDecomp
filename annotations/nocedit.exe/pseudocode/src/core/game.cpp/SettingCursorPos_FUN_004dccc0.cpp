// Name: core_game.cpp_SettingCursorPos_FUN_004dccc0
// Address: 004dccc0
// Address Range: [[004dccc0, 004dce6e]]
// Convention: __cdecl
// Signature: void core_game.cpp_SettingCursorPos_FUN_004dccc0(CGame * game, SPlayerControl * ctrl)
// Cross-references:
//   core_game.cpp_CGame_playerControls_FUN_004dbd80 (004dbd80) at 004dbe06 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062b8a5 = 0.0000152587890625
//   double DOUBLE_0062b8ad = 0.75
//   double DOUBLE_0062b8b5 = -1
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CDemonSet* g_CDemonSetPtr = 03114278
//   int g_MouseX
//   int g_MouseY
//   char[256] g_KeyboardState
//   int g_StoredCameraValue
//   undefined4 g_CDemonSetInstance.selected_camera_index
// Function calls:
//   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0
//   wincore_winrun.cpp_setCursorPosition_FUN_005f30d0

#include "nocturne.h"

void __cdecl core_game_cpp_SettingCursorPos_FUN_004dccc0(CGame *game,SPlayerControl *ctrl)

{
  int x;
  int y;
  int iVar1;
  float fStack_38;
  float fStack_34;
  int local_18;
  
  core_game_cpp_KeypressesAndCGame_FUN_004dc3e0(game,ctrl);
  if (game->screen_clear_condition == 0) {
    x = g_WindowWidth / 2;
    y = g_WindowHeight / 2;
    iVar1 = g_MouseY - y;
    wincore_winrun_cpp_setCursorPosition_FUN_005f30d0(x,y);
    if (g_CDemonSetPtr->selected_camera_index == g_StoredCameraValue) {
      fStack_34 = (float)game->x_mouse_sensitivity * (float)DOUBLE_0062b8a5 * (float)DOUBLE_0062b8ad
                  * ((float)iVar1 / (float)local_18);
      fStack_38 = (float)game->y_mouse_sensitivity * (float)DOUBLE_0062b8a5 * ((float)x / (float)y);
      if (fStack_34 < (float)DOUBLE_0062b8b5) {
        fStack_34 = -1.0;
      }
      if (1.0 < fStack_34) {
        fStack_34 = 1.0;
      }
      if (fStack_38 < (float)DOUBLE_0062b8b5) {
        fStack_38 = -1.0;
      }
      if (1.0 < fStack_38) {
        fStack_38 = 1.0;
      }
      if (game->invert_mouse_y_axis != 0) {
        fStack_38 = -fStack_38;
      }
      if (g_KeyboardState[game->key_strafe] == '\0') {
        if (ABS(ctrl->turn_speed) < ABS(fStack_34)) {
          ctrl->turn_speed = fStack_34;
        }
      }
      else if (ABS(ctrl->strafe_speed) < ABS(fStack_34)) {
        ctrl->strafe_speed = fStack_34;
      }
      if (ABS(ctrl->look_up_down_speed) < ABS(fStack_38)) {
        ctrl->look_up_down_speed = fStack_38;
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 004dccc0: PUSH EBX
//   Label: core_game.cpp_SettingCursorPos_FUN_004dccc0
// 004dccc1: PUSH ESI
// 004dccc2: PUSH EDI
// 004dccc3: PUSH EBP
// 004dccc4: MOV EBP,ESP
// 004dccc6: SUB ESP,0x2c
// 004dccc9: AND ESP,0xfffffff8
// 004dcccc: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004dcccf: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004dccd2: PUSH EBX
// 004dccd3: PUSH EDI
// 004dccd4: CALL core_game.cpp_KeypressesAndCGame_FUN_004dc3e0
//   XREF to: 004dc3e0 (UNCONDITIONAL_CALL)
// 004dccd9: MOV EDX,dword ptr [EDI + 0x27c]
// 004dccdf: ADD ESP,0x8
// 004dcce2: TEST EDX,EDX
// 004dcce4: JZ 0x004dcced
//   XREF to: 004dcced (CONDITIONAL_JUMP)
// 004dcce6: MOV ESP,EBP
//   Label: LAB_004dcce6
// 004dcce8: POP EBP
// 004dcce9: POP EDI
// 004dccea: POP ESI
// 004dcceb: POP EBX
// 004dccec: RET
// 004dcced: MOV EAX,[0x00679394]
//   Label: LAB_004dcced
//   XREF to: 00679394 (READ)
// 004dccf2: MOV EDX,EAX
// 004dccf4: SAR EDX,0x1f
// 004dccf7: SUB EAX,EDX
// 004dccf9: SAR EAX,0x1
// 004dccfb: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004dccff: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 004dcd04: MOV EDX,EAX
// 004dcd06: SAR EDX,0x1f
// 004dcd09: SUB EAX,EDX
// 004dcd0b: SAR EAX,0x1
// 004dcd0d: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 004dcd11: MOV ESI,EAX
// 004dcd13: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 004dcd18: SUB EAX,ECX
// 004dcd1a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004dcd1e: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 004dcd23: PUSH ESI
// 004dcd24: SUB EAX,ESI
// 004dcd26: PUSH ECX
// 004dcd27: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004dcd2b: CALL wincore_winrun.cpp_setCursorPosition_FUN_005f30d0
//   XREF to: 005f30d0 (UNCONDITIONAL_CALL)
// 004dcd30: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004dcd35: MOV EDX,dword ptr [0x02d828cc]
//   XREF to: 02d828cc (READ)
// 004dcd3b: MOV EAX,dword ptr [EAX + 0x15aea4]
//   XREF to: 0326f11c (READ)
// 004dcd41: ADD ESP,0x8
// 004dcd44: CMP EAX,EDX
// 004dcd46: JNZ 0x004dcce6
//   XREF to: 004dcce6 (CONDITIONAL_JUMP)
// 004dcd48: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 004dcd4c: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004dcd50: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 004dcd54: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004dcd58: FILD dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 004dcd5c: FILD dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 004dcd60: FDIVP
// 004dcd62: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 004dcd66: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004dcd6a: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 004dcd6e: FILD dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 004dcd72: FILD dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 004dcd76: FDIVP
// 004dcd78: FLD double ptr [0x0062b8a5]
//   XREF to: 0062b8a5 (READ)
// 004dcd7e: FILD dword ptr [EDI + 0x9c]
// 004dcd84: FMUL ST1
// 004dcd86: FILD dword ptr [EDI + 0xa0]
// 004dcd8c: FMULP ST2
// 004dcd8e: FMUL double ptr [0x0062b8ad]
//   XREF to: 0062b8ad (READ)
// 004dcd94: FMUL ST3
// 004dcd96: FXCH ST2
// 004dcd98: FXCH
// 004dcd9a: FMUL ST1
// 004dcd9c: FXCH ST2
// 004dcd9e: FSTP ST3
// 004dcda0: FXCH ST2
// 004dcda2: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 004dcda6: FXCH
// 004dcda8: FSTP ST2
// 004dcdaa: FXCH
// 004dcdac: FSTP float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004dcdaf: FCOMP double ptr [0x0062b8b5]
//   XREF to: 0062b8b5 (READ)
// 004dcdb5: FNSTSW AX
// 004dcdb7: SAHF
// 004dcdb8: JNC 0x004dcdc2
//   XREF to: 004dcdc2 (CONDITIONAL_JUMP)
// 004dcdba: MOV dword ptr [ESP + 0x4],0xbf800000
//   XREF to: Stack[-0x3c] (WRITE)
// 004dcdc2: FLD float ptr [ESP + 0x4]
//   Label: LAB_004dcdc2
//   XREF to: Stack[-0x3c] (READ)
// 004dcdc6: FLD1
// 004dcdc8: FCOMPP
// 004dcdca: FNSTSW AX
// 004dcdcc: SAHF
// 004dcdcd: JNC 0x004dcdd7
//   XREF to: 004dcdd7 (CONDITIONAL_JUMP)
// 004dcdcf: MOV dword ptr [ESP + 0x4],0x3f800000
//   XREF to: Stack[-0x3c] (WRITE)
// 004dcdd7: FLD float ptr [ESP]
//   Label: LAB_004dcdd7
//   XREF to: Stack[-0x40] (DATA)
// 004dcdda: FCOMP double ptr [0x0062b8b5]
//   XREF to: 0062b8b5 (READ)
// 004dcde0: FNSTSW AX
// 004dcde2: SAHF
// 004dcde3: JNC 0x004dcdec
//   XREF to: 004dcdec (CONDITIONAL_JUMP)
// 004dcde5: MOV dword ptr [ESP],0xbf800000
//   XREF to: Stack[-0x40] (DATA)
// 004dcdec: FLD float ptr [ESP]
//   Label: LAB_004dcdec
//   XREF to: Stack[-0x40] (DATA)
// 004dcdef: FLD1
// 004dcdf1: FCOMPP
// 004dcdf3: FNSTSW AX
// 004dcdf5: SAHF
// 004dcdf6: JNC 0x004dcdff
//   XREF to: 004dcdff (CONDITIONAL_JUMP)
// 004dcdf8: MOV dword ptr [ESP],0x3f800000
//   XREF to: Stack[-0x40] (DATA)
// 004dcdff: CMP dword ptr [EDI + 0x94],0x0
//   Label: LAB_004dcdff
// 004dce06: JZ 0x004dce0d
//   XREF to: 004dce0d (CONDITIONAL_JUMP)
// 004dce08: XOR byte ptr [ESP + 0x3],0x80
//   XREF to: Stack[-0x3d] (READ_WRITE)
// 004dce0d: MOV EAX,dword ptr [EDI + 0x34]
//   Label: LAB_004dce0d
// 004dce10: CMP byte ptr [EAX + 0x2d03e98],0x0
//   XREF to: 02d03e98 (DATA)
// 004dce17: JZ 0x004dce54
//   XREF to: 004dce54 (CONDITIONAL_JUMP)
// 004dce19: FLD float ptr [EBX + 0x20]
// 004dce1c: FABS
// 004dce1e: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 004dce22: FABS
// 004dce24: FCOMPP
// 004dce26: FNSTSW AX
// 004dce28: SAHF
// 004dce29: JBE 0x004dce32
//   XREF to: 004dce32 (CONDITIONAL_JUMP)
// 004dce2b: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 004dce2f: MOV dword ptr [EBX + 0x20],EAX
// 004dce32: FLD float ptr [EBX + 0x28]
//   Label: LAB_004dce32
// 004dce35: FABS
// 004dce37: FLD float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004dce3a: FABS
// 004dce3c: FCOMPP
// 004dce3e: FNSTSW AX
// 004dce40: SAHF
// 004dce41: JBE 0x004dcce6
//   XREF to: 004dcce6 (CONDITIONAL_JUMP)
// 004dce47: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004dce4a: MOV dword ptr [EBX + 0x28],EAX
// 004dce4d: MOV ESP,EBP
// 004dce4f: POP EBP
// 004dce50: POP EDI
// 004dce51: POP ESI
// 004dce52: POP EBX
// 004dce53: RET
// 004dce54: FLD float ptr [EBX + 0x24]
//   Label: LAB_004dce54
// 004dce57: FABS
// 004dce59: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 004dce5d: FABS
// 004dce5f: FCOMPP
// 004dce61: FNSTSW AX
// 004dce63: SAHF
// 004dce64: JBE 0x004dce32
//   XREF to: 004dce32 (CONDITIONAL_JUMP)
// 004dce66: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 004dce6a: MOV dword ptr [EBX + 0x24],EAX
// 004dce6d: JMP 0x004dce32
//   XREF to: 004dce32 (UNCONDITIONAL_JUMP)
