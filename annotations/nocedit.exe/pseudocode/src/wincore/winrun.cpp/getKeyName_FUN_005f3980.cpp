// Name: wincore_winrun.cpp_getKeyName_FUN_005f3980
// Address: 005f3980
// Address Range: [[005f3980, 005f3fd9]]
// Convention: __cdecl
// Signature: char * wincore_winrun.cpp_getKeyName_FUN_005f3980(int keycode)
// Cross-references:
//   core_menu.cpp_getKeyDisplayName_FUN_005134e0 (005134e0) at 0051370d [UNCONDITIONAL_CALL]
// Globals:
//   GetKeyNameTextA* GetKeyNameTextA = 00211ae4
//   TerminatedCString s_Esc_00657f9a
//   TerminatedCString s_s_1_00657f9e
//   TerminatedCString s_s_2_00657fa0
//   TerminatedCString s_s_3_00657fa2
//   TerminatedCString s_s_4_00657fa4
//   TerminatedCString s_s_5_00657fa6
//   TerminatedCString s_s_6_00657fa8
//   TerminatedCString s_s_7_00657faa
//   TerminatedCString s_s_8_00657fac
//   TerminatedCString s_s_9_00657fae
//   TerminatedCString s_s_0_00657fb0
//   TerminatedCString s_anon_00657fb2
//   TerminatedCString s_anon_00657fb4
//   TerminatedCString s_BackSpace_00657fb6
//   TerminatedCString s_Tab_00657fc0
//   TerminatedCString s_Q_00657fc4
//   TerminatedCString s_W_00657fc6
//   TerminatedCString s_E_00657fc8
//   TerminatedCString s_R_00657fca
//   TerminatedCString s_T_00657fcc
//   TerminatedCString s_Y_00657fce
//   TerminatedCString s_U_00657fd0
//   TerminatedCString s_I_00657fd2
//   TerminatedCString s_O_00657fd4
//   TerminatedCString s_P_00657fd6
//   TerminatedCString s_anon_00657fd8
//   TerminatedCString s_anon_00657fda
//   TerminatedCString s_Enter_00657fdc
//   TerminatedCString s_LeftCtrl_00657fe2
//   TerminatedCString s_A_00657feb
//   TerminatedCString s_S_00657fed
//   TerminatedCString s_D_00657fef
//   TerminatedCString s_F_00657ff1
//   TerminatedCString s_G_00657ff3
//   TerminatedCString s_H_00657ff5
//   TerminatedCString s_J_00657ff7
//   TerminatedCString s_K_00657ff9
//   TerminatedCString s_L_00657ffb
//   TerminatedCString s_anon_00657ffd
//   TerminatedCString s_anon_00657fff
//   TerminatedCString s_anon_00658001
//   TerminatedCString s_LeftShift_00658003
//   TerminatedCString s_Z_0065800d
//   TerminatedCString s_X_0065800f
//   TerminatedCString s_C_00658011
//   TerminatedCString s_V_00658013
//   TerminatedCString s_B_00658015
//   TerminatedCString s_N_00658017
//   TerminatedCString s_M_00658019
//   TerminatedCString s_anon_0065801b
//   TerminatedCString s_anon_0065801d
//   TerminatedCString s_anon_0065801f
//   TerminatedCString s_RightShift_00658021
//   TerminatedCString s_NumPad_0065802c
//   TerminatedCString s_LeftAlt_00658034
//   TerminatedCString s_Space_0065803c
//   TerminatedCString s_CapsLock_00658042
//   TerminatedCString s_F1_0065804b
//   TerminatedCString s_F2_0065804e
//   TerminatedCString s_F3_00658051
//   TerminatedCString s_F4_00658054
//   TerminatedCString s_F5_00658057
//   TerminatedCString s_F6_0065805a
//   TerminatedCString s_F7_0065805d
//   TerminatedCString s_F8_00658060
//   TerminatedCString s_F9_00658063
//   TerminatedCString s_F10_00658066
//   TerminatedCString s_Pause_0065806a
//   TerminatedCString s_ScrollLock_00658070
//   TerminatedCString s_NumPad7_0065807b
//   TerminatedCString s_NumPad8_00658083
//   TerminatedCString s_NumPad9_0065808b
//   TerminatedCString s_NumPad_00658093
//   TerminatedCString s_NumPad4_0065809b
//   TerminatedCString s_NumPad5_006580a3
//   TerminatedCString s_NumPad6_006580ab
//   TerminatedCString s_NumPad_006580b3
//   TerminatedCString s_NumPad1_006580bb
//   TerminatedCString s_NumPad2_006580c3
//   TerminatedCString s_NumPad3_006580cb
//   TerminatedCString s_NumPad0_006580d3
//   TerminatedCString s_NumPad_006580db
//   TerminatedCString s_F11_006580e3
//   TerminatedCString s_F12_006580e7
//   TerminatedCString s_NumPadEnter_006580eb
//   TerminatedCString s_RightCtrl_006580f7
//   TerminatedCString s_NumPad_00658101
//   TerminatedCString s_RightAlt_00658109
//   TerminatedCString s_NumLock_00658112
//   TerminatedCString s_Home_0065811a
//   TerminatedCString s_Up_0065811f
//   TerminatedCString s_PgUp_00658122
//   TerminatedCString s_Left_00658127
//   TerminatedCString s_Right_0065812c
//   TerminatedCString s_End_00658132
//   TerminatedCString s_Down_00658136
//   TerminatedCString s_PgDn_0065813b
//   TerminatedCString s_Ins_00658140
//   TerminatedCString s_Del_00658144
//   TerminatedCString s_Left_Mouse_Button_00658148
//   TerminatedCString s_Right_Mouse_Button_0065815a
//   TerminatedCString s_invalid_key_0065816d
//   char[200] g_KeyNameBuffer
// Function calls:
//   GetKeyNameTextA

#include "nocturne.h"

char * __cdecl wincore_winrun_cpp_getKeyName_FUN_005f3980(int keycode)

{
  int iVar1;
  
  if ((keycode < 0x200) &&
     (iVar1 = (*GetKeyNameTextA)((keycode & 0x1ffU) << 0x10,g_KeyNameBuffer,200), 0 < iVar1)) {
    return g_KeyNameBuffer;
  }
  if ((uint)keycode < 0x34) {
    if (0x18 < (uint)keycode) {
      if ((uint)keycode < 0x1a) {
        return "P";
      }
      if ((uint)keycode < 0x26) {
        if ((uint)keycode < 0x1f) {
          if ((uint)keycode < 0x1c) {
            if ((uint)keycode < 0x1b) {
              return "[";
            }
            return "]";
          }
          if (0x1c < (uint)keycode) {
            if ((uint)keycode < 0x1e) {
              return "LeftCtrl";
            }
            return "A";
          }
          return "Enter";
        }
        if ((uint)keycode < 0x20) {
          return "S";
        }
        if (0x21 < (uint)keycode) {
          if ((uint)keycode < 0x23) {
            return "G";
          }
          if ((uint)keycode < 0x24) {
            return "H";
          }
          if ((uint)keycode < 0x25) {
            return "J";
          }
          return "K";
        }
        if ((uint)keycode < 0x21) {
          return "D";
        }
        return "F";
      }
      if ((uint)keycode < 0x27) {
        return "L";
      }
      if ((uint)keycode < 0x2d) {
        if ((uint)keycode < 0x29) {
          if ((uint)keycode < 0x28) {
            return ";";
          }
          return "'";
        }
        if ((uint)keycode < 0x2a) {
          return "`";
        }
        if ((uint)keycode < 0x2b) {
          return "LeftShift";
        }
        if (keycode == 0x2c) {
          return "Z";
        }
        return "(invalid key)";
      }
      if ((uint)keycode < 0x2e) {
        return "X";
      }
      if ((uint)keycode < 0x30) {
        if ((uint)keycode < 0x2f) {
          return "C";
        }
        return "V";
      }
      if ((uint)keycode < 0x31) {
        return "B";
      }
      if ((uint)keycode < 0x32) {
        return "N";
      }
      if ((uint)keycode < 0x33) {
        return "M";
      }
      return ",";
    }
    if (0xb < (uint)keycode) {
      if ((uint)keycode < 0xd) {
        return "-";
      }
      if ((uint)keycode < 0x12) {
        if ((uint)keycode < 0xf) {
          if ((uint)keycode < 0xe) {
            return "=";
          }
          return "BackSpace";
        }
        if (0xf < (uint)keycode) {
          if ((uint)keycode < 0x11) {
            return "Q";
          }
          return "W";
        }
        return "Tab";
      }
      if ((uint)keycode < 0x13) {
        return "E";
      }
      if (0x14 < (uint)keycode) {
        if ((uint)keycode < 0x16) {
          return "Y";
        }
        if ((uint)keycode < 0x17) {
          return "U";
        }
        if ((uint)keycode < 0x18) {
          return "I";
        }
        return "O";
      }
      if ((uint)keycode < 0x14) {
        return "R";
      }
      return "T";
    }
    if (5 < (uint)keycode) {
      if ((uint)keycode < 7) {
        return "5";
      }
      if ((uint)keycode < 9) {
        if ((uint)keycode < 8) {
          return "6";
        }
        return "7";
      }
      if ((uint)keycode < 10) {
        return "8";
      }
      if ((uint)keycode < 0xb) {
        return "9";
      }
      return "0";
    }
    if (2 < (uint)keycode) {
      if ((uint)keycode < 4) {
        return "2";
      }
      if ((uint)keycode < 5) {
        return "3";
      }
      return "4";
    }
    if (keycode != 0) {
      if (1 < (uint)keycode) {
        return "1";
      }
      return "Esc";
    }
  }
  else {
    if ((uint)keycode < 0x35) {
      return ".";
    }
    if ((uint)keycode < 0x4d) {
      if (0x3f < (uint)keycode) {
        if ((uint)keycode < 0x41) {
          return "F6";
        }
        if ((uint)keycode < 0x46) {
          if ((uint)keycode < 0x43) {
            if ((uint)keycode < 0x42) {
              return "F7";
            }
            return "F8";
          }
          if (0x43 < (uint)keycode) {
            if ((uint)keycode < 0x45) {
              return "F10";
            }
            return "Pause";
          }
          return "F9";
        }
        if ((uint)keycode < 0x47) {
          return "ScrollLock";
        }
        if (0x48 < (uint)keycode) {
          if ((uint)keycode < 0x4a) {
            return "NumPad9";
          }
          if ((uint)keycode < 0x4b) {
            return "NumPad-";
          }
          if ((uint)keycode < 0x4c) {
            return "NumPad4";
          }
          return "NumPad5";
        }
        if ((uint)keycode < 0x48) {
          return "NumPad7";
        }
        return "NumPad8";
      }
      if ((uint)keycode < 0x3a) {
        if ((uint)keycode < 0x37) {
          if ((uint)keycode < 0x36) {
            return "/";
          }
          return "RightShift";
        }
        if (0x37 < (uint)keycode) {
          if ((uint)keycode < 0x39) {
            return "LeftAlt";
          }
          return "Space";
        }
        return "NumPad*";
      }
      if ((uint)keycode < 0x3b) {
        return "CapsLock";
      }
      if (0x3c < (uint)keycode) {
        if ((uint)keycode < 0x3e) {
          return "F3";
        }
        if ((uint)keycode < 0x3f) {
          return "F4";
        }
        return "F5";
      }
      if ((uint)keycode < 0x3c) {
        return "F1";
      }
      return "F2";
    }
    if ((uint)keycode < 0x4e) {
      return "NumPad6";
    }
    if ((uint)keycode < 0x145) {
      if ((uint)keycode < 0x53) {
        if ((uint)keycode < 0x50) {
          if ((uint)keycode < 0x4f) {
            return "NumPad+";
          }
          return "NumPad1";
        }
        if (0x50 < (uint)keycode) {
          if ((uint)keycode < 0x52) {
            return "NumPad3";
          }
          return "NumPad0";
        }
        return "NumPad2";
      }
      if ((uint)keycode < 0x54) {
        return "NumPad.";
      }
      if (0x11b < (uint)keycode) {
        if ((uint)keycode < 0x11d) {
          return "NumPadEnter";
        }
        if ((uint)keycode < 0x135) {
          if (keycode == 0x11d) {
            return "RightCtrl";
          }
          return "(invalid key)";
        }
        if ((uint)keycode < 0x136) {
          return "NumPad/";
        }
        if (keycode == 0x138) {
          return "RightAlt";
        }
        return "(invalid key)";
      }
      if (0x56 < (uint)keycode) {
        if ((uint)keycode < 0x58) {
          return "F11";
        }
        if (keycode == 0x58) {
          return "F12";
        }
        return "(invalid key)";
      }
    }
    else {
      if ((uint)keycode < 0x146) {
        return "NumLock";
      }
      if ((uint)keycode < 0x14f) {
        if ((uint)keycode < 0x149) {
          if (0x146 < (uint)keycode) {
            if ((uint)keycode < 0x148) {
              return "Home";
            }
            return "Up";
          }
        }
        else {
          if ((uint)keycode < 0x14a) {
            return "PgUp";
          }
          if (0x14a < (uint)keycode) {
            if ((uint)keycode < 0x14c) {
              return "Left";
            }
            if (keycode == 0x14d) {
              return "Right";
            }
            return "(invalid key)";
          }
        }
      }
      else {
        if ((uint)keycode < 0x150) {
          return "End";
        }
        if ((uint)keycode < 0x152) {
          if ((uint)keycode < 0x151) {
            return "Down";
          }
          return "PgDn";
        }
        if ((uint)keycode < 0x153) {
          return "Ins";
        }
        if ((uint)keycode < 0x200) {
          if (keycode == 0x153) {
            return "Del";
          }
        }
        else {
          if ((uint)keycode < 0x201) {
            return "Left Mouse Button";
          }
          if (keycode == 0x201) {
            return "Right Mouse Button";
          }
        }
      }
    }
  }
  return "(invalid key)";
}


// Assembly code:
// 005f3980: PUSH EBX
//   Label: wincore_winrun.cpp_getKeyName_FUN_005f3980
// 005f3981: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f3985: CMP EBX,0x200
// 005f398b: JL 0x005f39ce
//   XREF to: 005f39ce (CONDITIONAL_JUMP)
// 005f398d: MOV EAX,EBX
//   Label: LAB_005f398d
// 005f398f: CMP EBX,0x34
// 005f3992: JNC 0x005f3bfb
//   XREF to: 005f3bfb (CONDITIONAL_JUMP)
// 005f3998: CMP EBX,0x19
// 005f399b: JNC 0x005f3e36
//   XREF to: 005f3e36 (CONDITIONAL_JUMP)
// 005f39a1: CMP EBX,0xc
// 005f39a4: JNC 0x005f3f26
//   XREF to: 005f3f26 (CONDITIONAL_JUMP)
// 005f39aa: CMP EBX,0x6
// 005f39ad: JNC 0x005f3f93
//   XREF to: 005f3f93 (CONDITIONAL_JUMP)
// 005f39b3: CMP EBX,0x3
// 005f39b6: JNC 0x005f3fc4
//   XREF to: 005f3fc4 (CONDITIONAL_JUMP)
// 005f39bc: CMP EBX,0x1
// 005f39bf: JC 0x005f3cc7
//   XREF to: 005f3cc7 (CONDITIONAL_JUMP)
// 005f39c5: JA 0x005f39f5
//   XREF to: 005f39f5 (CONDITIONAL_JUMP)
// 005f39c7: MOV EAX,0x657f9a
//   XREF to: 00657f9a (DATA)
// 005f39cc: POP EBX
// 005f39cd: RET
// 005f39ce: MOV EAX,EBX
//   Label: LAB_005f39ce
// 005f39d0: PUSH 0xc8
// 005f39d5: AND EAX,0x1ff
// 005f39da: PUSH 0x3f983a0
//   XREF to: 03f983a0 (DATA)
// 005f39df: SHL EAX,0x10
// 005f39e2: PUSH EAX
// 005f39e3: CALL dword ptr CS:[0x6114ac]
//   XREF to: EXTERNAL:00000037 (COMPUTED_CALL)
//   XREF to: 006114ac (READ)
// 005f39ea: TEST EAX,EAX
// 005f39ec: JLE 0x005f398d
//   XREF to: 005f398d (CONDITIONAL_JUMP)
// 005f39ee: MOV EAX,0x3f983a0
//   XREF to: 03f983a0 (DATA)
// 005f39f3: POP EBX
// 005f39f4: RET
// 005f39f5: MOV EAX,0x657f9e
//   Label: LAB_005f39f5
//   XREF to: 00657f9e (DATA)
// 005f39fa: POP EBX
// 005f39fb: RET
// 005f39fc: MOV EAX,0x657fa0
//   Label: LAB_005f39fc
//   XREF to: 00657fa0 (DATA)
// 005f3a01: POP EBX
// 005f3a02: RET
// 005f3a03: MOV EAX,0x657fa2
//   Label: LAB_005f3a03
//   XREF to: 00657fa2 (DATA)
// 005f3a08: POP EBX
// 005f3a09: RET
// 005f3a0a: MOV EAX,0x657fa6
//   Label: LAB_005f3a0a
//   XREF to: 00657fa6 (DATA)
// 005f3a0f: POP EBX
// 005f3a10: RET
// 005f3a11: MOV EAX,0x657fa8
//   Label: LAB_005f3a11
//   XREF to: 00657fa8 (DATA)
// 005f3a16: POP EBX
// 005f3a17: RET
// 005f3a18: MOV EAX,0x657fac
//   Label: LAB_005f3a18
//   XREF to: 00657fac (DATA)
// 005f3a1d: POP EBX
// 005f3a1e: RET
// 005f3a1f: MOV EAX,0x657fae
//   Label: LAB_005f3a1f
//   XREF to: 00657fae (DATA)
// 005f3a24: POP EBX
// 005f3a25: RET
// 005f3a26: MOV EAX,0x657fb2
//   Label: LAB_005f3a26
//   XREF to: 00657fb2 (DATA)
// 005f3a2b: POP EBX
// 005f3a2c: RET
// 005f3a2d: MOV EAX,0x657fb4
//   Label: LAB_005f3a2d
//   XREF to: 00657fb4 (DATA)
// 005f3a32: POP EBX
// 005f3a33: RET
// 005f3a34: MOV EAX,0x657fc0
//   Label: LAB_005f3a34
//   XREF to: 00657fc0 (DATA)
// 005f3a39: POP EBX
// 005f3a3a: RET
// 005f3a3b: MOV EAX,0x657fc4
//   Label: LAB_005f3a3b
//   XREF to: 00657fc4 (DATA)
// 005f3a40: POP EBX
// 005f3a41: RET
// 005f3a42: MOV EAX,0x657fc8
//   Label: LAB_005f3a42
//   XREF to: 00657fc8 (DATA)
// 005f3a47: POP EBX
// 005f3a48: RET
// 005f3a49: MOV EAX,0x657fca
//   Label: LAB_005f3a49
//   XREF to: 00657fca (DATA)
// 005f3a4e: POP EBX
// 005f3a4f: RET
// 005f3a50: MOV EAX,0x657fce
//   Label: LAB_005f3a50
//   XREF to: 00657fce (DATA)
// 005f3a55: POP EBX
// 005f3a56: RET
// 005f3a57: MOV EAX,0x657fd0
//   Label: LAB_005f3a57
//   XREF to: 00657fd0 (DATA)
// 005f3a5c: POP EBX
// 005f3a5d: RET
// 005f3a5e: MOV EAX,0x657fd2
//   Label: LAB_005f3a5e
//   XREF to: 00657fd2 (DATA)
// 005f3a63: POP EBX
// 005f3a64: RET
// 005f3a65: MOV EAX,0x657fd6
//   Label: LAB_005f3a65
//   XREF to: 00657fd6 (DATA)
// 005f3a6a: POP EBX
// 005f3a6b: RET
// 005f3a6c: MOV EAX,0x657fd8
//   Label: LAB_005f3a6c
//   XREF to: 00657fd8 (DATA)
// 005f3a71: POP EBX
// 005f3a72: RET
// 005f3a73: MOV EAX,0x657fdc
//   Label: LAB_005f3a73
//   XREF to: 00657fdc (DATA)
// 005f3a78: POP EBX
// 005f3a79: RET
// 005f3a7a: MOV EAX,0x657fe2
//   Label: LAB_005f3a7a
//   XREF to: 00657fe2 (DATA)
// 005f3a7f: POP EBX
// 005f3a80: RET
// 005f3a81: MOV EAX,0x657fed
//   Label: LAB_005f3a81
//   XREF to: 00657fed (DATA)
// 005f3a86: POP EBX
// 005f3a87: RET
// 005f3a88: MOV EAX,0x657fef
//   Label: LAB_005f3a88
//   XREF to: 00657fef (DATA)
// 005f3a8d: POP EBX
// 005f3a8e: RET
// 005f3a8f: MOV EAX,0x657ff3
//   Label: LAB_005f3a8f
//   XREF to: 00657ff3 (DATA)
// 005f3a94: POP EBX
// 005f3a95: RET
// 005f3a96: MOV EAX,0x657ff5
//   Label: LAB_005f3a96
//   XREF to: 00657ff5 (DATA)
// 005f3a9b: POP EBX
// 005f3a9c: RET
// 005f3a9d: MOV EAX,0x657ff7
//   Label: LAB_005f3a9d
//   XREF to: 00657ff7 (DATA)
// 005f3aa2: POP EBX
// 005f3aa3: RET
// 005f3aa4: MOV EAX,0x657ffb
//   Label: LAB_005f3aa4
//   XREF to: 00657ffb (DATA)
// 005f3aa9: POP EBX
// 005f3aaa: RET
// 005f3aab: MOV EAX,0x657ffd
//   Label: LAB_005f3aab
//   XREF to: 00657ffd (DATA)
// 005f3ab0: POP EBX
// 005f3ab1: RET
// 005f3ab2: MOV EAX,0x658001
//   Label: LAB_005f3ab2
//   XREF to: 00658001 (DATA)
// 005f3ab7: POP EBX
// 005f3ab8: RET
// 005f3ab9: MOV EAX,0x658003
//   Label: LAB_005f3ab9
//   XREF to: 00658003 (DATA)
// 005f3abe: POP EBX
// 005f3abf: RET
// 005f3ac0: MOV EAX,0x65800d
//   Label: LAB_005f3ac0
//   XREF to: 0065800d (DATA)
// 005f3ac5: POP EBX
// 005f3ac6: RET
// 005f3ac7: MOV EAX,0x65800f
//   Label: LAB_005f3ac7
//   XREF to: 0065800f (DATA)
// 005f3acc: POP EBX
// 005f3acd: RET
// 005f3ace: MOV EAX,0x658011
//   Label: LAB_005f3ace
//   XREF to: 00658011 (DATA)
// 005f3ad3: POP EBX
// 005f3ad4: RET
// 005f3ad5: MOV EAX,0x658015
//   Label: LAB_005f3ad5
//   XREF to: 00658015 (DATA)
// 005f3ada: POP EBX
// 005f3adb: RET
// 005f3adc: MOV EAX,0x658017
//   Label: LAB_005f3adc
//   XREF to: 00658017 (DATA)
// 005f3ae1: POP EBX
// 005f3ae2: RET
// 005f3ae3: MOV EAX,0x658019
//   Label: LAB_005f3ae3
//   XREF to: 00658019 (DATA)
// 005f3ae8: POP EBX
// 005f3ae9: RET
// 005f3aea: MOV EAX,0x65801d
//   Label: LAB_005f3aea
//   XREF to: 0065801d (DATA)
// 005f3aef: POP EBX
// 005f3af0: RET
// 005f3af1: MOV EAX,0x65801f
//   Label: LAB_005f3af1
//   XREF to: 0065801f (DATA)
// 005f3af6: POP EBX
// 005f3af7: RET
// 005f3af8: MOV EAX,0x65802c
//   Label: LAB_005f3af8
//   XREF to: 0065802c (DATA)
// 005f3afd: POP EBX
// 005f3afe: RET
// 005f3aff: MOV EAX,0x658034
//   Label: LAB_005f3aff
//   XREF to: 00658034 (DATA)
// 005f3b04: POP EBX
// 005f3b05: RET
// 005f3b06: MOV EAX,0x658042
//   Label: LAB_005f3b06
//   XREF to: 00658042 (DATA)
// 005f3b0b: POP EBX
// 005f3b0c: RET
// 005f3b0d: MOV EAX,0x65804b
//   Label: LAB_005f3b0d
//   XREF to: 0065804b (DATA)
// 005f3b12: POP EBX
// 005f3b13: RET
// 005f3b14: MOV EAX,0x658051
//   Label: LAB_005f3b14
//   XREF to: 00658051 (DATA)
// 005f3b19: POP EBX
// 005f3b1a: RET
// 005f3b1b: MOV EAX,0x658054
//   Label: LAB_005f3b1b
//   XREF to: 00658054 (DATA)
// 005f3b20: POP EBX
// 005f3b21: RET
// 005f3b22: MOV EAX,0x65805a
//   Label: LAB_005f3b22
//   XREF to: 0065805a (DATA)
// 005f3b27: POP EBX
// 005f3b28: RET
// 005f3b29: MOV EAX,0x65805d
//   Label: LAB_005f3b29
//   XREF to: 0065805d (DATA)
// 005f3b2e: POP EBX
// 005f3b2f: RET
// 005f3b30: MOV EAX,0x658063
//   Label: LAB_005f3b30
//   XREF to: 00658063 (DATA)
// 005f3b35: POP EBX
// 005f3b36: RET
// 005f3b37: MOV EAX,0x658066
//   Label: LAB_005f3b37
//   XREF to: 00658066 (DATA)
// 005f3b3c: POP EBX
// 005f3b3d: RET
// 005f3b3e: MOV EAX,0x658070
//   Label: LAB_005f3b3e
//   XREF to: 00658070 (DATA)
// 005f3b43: POP EBX
// 005f3b44: RET
// 005f3b45: MOV EAX,0x65807b
//   Label: LAB_005f3b45
//   XREF to: 0065807b (DATA)
// 005f3b4a: POP EBX
// 005f3b4b: RET
// 005f3b4c: MOV EAX,0x65808b
//   Label: LAB_005f3b4c
//   XREF to: 0065808b (DATA)
// 005f3b51: POP EBX
// 005f3b52: RET
// 005f3b53: MOV EAX,0x658093
//   Label: LAB_005f3b53
//   XREF to: 00658093 (DATA)
// 005f3b58: POP EBX
// 005f3b59: RET
// 005f3b5a: MOV EAX,0x65809b
//   Label: LAB_005f3b5a
//   XREF to: 0065809b (DATA)
// 005f3b5f: POP EBX
// 005f3b60: RET
// 005f3b61: MOV EAX,0x6580ab
//   Label: LAB_005f3b61
//   XREF to: 006580ab (DATA)
// 005f3b66: POP EBX
// 005f3b67: RET
// 005f3b68: MOV EAX,0x6580b3
//   Label: LAB_005f3b68
//   XREF to: 006580b3 (DATA)
// 005f3b6d: POP EBX
// 005f3b6e: RET
// 005f3b6f: MOV EAX,0x6580c3
//   Label: LAB_005f3b6f
//   XREF to: 006580c3 (DATA)
// 005f3b74: POP EBX
// 005f3b75: RET
// 005f3b76: MOV EAX,0x6580cb
//   Label: LAB_005f3b76
//   XREF to: 006580cb (DATA)
// 005f3b7b: POP EBX
// 005f3b7c: RET
// 005f3b7d: MOV EAX,0x6580db
//   Label: LAB_005f3b7d
//   XREF to: 006580db (DATA)
// 005f3b82: POP EBX
// 005f3b83: RET
// 005f3b84: MOV EAX,0x6580e3
//   Label: LAB_005f3b84
//   XREF to: 006580e3 (DATA)
// 005f3b89: POP EBX
// 005f3b8a: RET
// 005f3b8b: MOV EAX,0x6580e7
//   Label: LAB_005f3b8b
//   XREF to: 006580e7 (DATA)
// 005f3b90: POP EBX
// 005f3b91: RET
// 005f3b92: MOV EAX,0x6580eb
//   Label: LAB_005f3b92
//   XREF to: 006580eb (DATA)
// 005f3b97: POP EBX
// 005f3b98: RET
// 005f3b99: MOV EAX,0x6580f7
//   Label: LAB_005f3b99
//   XREF to: 006580f7 (DATA)
// 005f3b9e: POP EBX
// 005f3b9f: RET
// 005f3ba0: MOV EAX,0x658101
//   Label: LAB_005f3ba0
//   XREF to: 00658101 (DATA)
// 005f3ba5: POP EBX
// 005f3ba6: RET
// 005f3ba7: MOV EAX,0x658109
//   Label: LAB_005f3ba7
//   XREF to: 00658109 (DATA)
// 005f3bac: POP EBX
// 005f3bad: RET
// 005f3bae: MOV EAX,0x658112
//   Label: LAB_005f3bae
//   XREF to: 00658112 (DATA)
// 005f3bb3: POP EBX
// 005f3bb4: RET
// 005f3bb5: MOV EAX,0x65811a
//   Label: LAB_005f3bb5
//   XREF to: 0065811a (DATA)
// 005f3bba: POP EBX
// 005f3bbb: RET
// 005f3bbc: MOV EAX,0x658122
//   Label: LAB_005f3bbc
//   XREF to: 00658122 (DATA)
// 005f3bc1: POP EBX
// 005f3bc2: RET
// 005f3bc3: MOV EAX,0x658127
//   Label: LAB_005f3bc3
//   XREF to: 00658127 (DATA)
// 005f3bc8: POP EBX
// 005f3bc9: RET
// 005f3bca: MOV EAX,0x65812c
//   Label: LAB_005f3bca
//   XREF to: 0065812c (DATA)
// 005f3bcf: POP EBX
// 005f3bd0: RET
// 005f3bd1: MOV EAX,0x658132
//   Label: LAB_005f3bd1
//   XREF to: 00658132 (DATA)
// 005f3bd6: POP EBX
// 005f3bd7: RET
// 005f3bd8: MOV EAX,0x658136
//   Label: LAB_005f3bd8
//   XREF to: 00658136 (DATA)
// 005f3bdd: POP EBX
// 005f3bde: RET
// 005f3bdf: MOV EAX,0x658140
//   Label: LAB_005f3bdf
//   XREF to: 00658140 (DATA)
// 005f3be4: POP EBX
// 005f3be5: RET
// 005f3be6: MOV EAX,0x658144
//   Label: LAB_005f3be6
//   XREF to: 00658144 (DATA)
// 005f3beb: POP EBX
// 005f3bec: RET
// 005f3bed: MOV EAX,0x658148
//   Label: LAB_005f3bed
//   XREF to: 00658148 (DATA)
// 005f3bf2: POP EBX
// 005f3bf3: RET
// 005f3bf4: MOV EAX,0x65815a
//   Label: LAB_005f3bf4
//   XREF to: 0065815a (DATA)
// 005f3bf9: POP EBX
// 005f3bfa: RET
// 005f3bfb: JBE 0x005f3aea
//   Label: LAB_005f3bfb
//   XREF to: 005f3aea (CONDITIONAL_JUMP)
// 005f3c01: CMP EBX,0x4d
// 005f3c04: JNC 0x005f3c31
//   XREF to: 005f3c31 (CONDITIONAL_JUMP)
// 005f3c06: CMP EBX,0x40
// 005f3c09: JNC 0x005f3d82
//   XREF to: 005f3d82 (CONDITIONAL_JUMP)
// 005f3c0f: CMP EBX,0x3a
// 005f3c12: JNC 0x005f3def
//   XREF to: 005f3def (CONDITIONAL_JUMP)
// 005f3c18: CMP EBX,0x37
// 005f3c1b: JNC 0x005f3e20
//   XREF to: 005f3e20 (CONDITIONAL_JUMP)
// 005f3c21: CMP EBX,0x35
// 005f3c24: JBE 0x005f3af1
//   XREF to: 005f3af1 (CONDITIONAL_JUMP)
// 005f3c2a: MOV EAX,0x658021
//   XREF to: 00658021 (DATA)
// 005f3c2f: POP EBX
// 005f3c30: RET
// 005f3c31: JBE 0x005f3b61
//   Label: LAB_005f3c31
//   XREF to: 005f3b61 (CONDITIONAL_JUMP)
// 005f3c37: CMP EBX,0x145
// 005f3c3d: JNC 0x005f3c61
//   XREF to: 005f3c61 (CONDITIONAL_JUMP)
// 005f3c3f: CMP EBX,0x53
// 005f3c42: JNC 0x005f3d09
//   XREF to: 005f3d09 (CONDITIONAL_JUMP)
// 005f3c48: CMP EBX,0x50
// 005f3c4b: JNC 0x005f3d6c
//   XREF to: 005f3d6c (CONDITIONAL_JUMP)
// 005f3c51: CMP EBX,0x4e
// 005f3c54: JBE 0x005f3b68
//   XREF to: 005f3b68 (CONDITIONAL_JUMP)
// 005f3c5a: MOV EAX,0x6580bb
//   XREF to: 006580bb (DATA)
// 005f3c5f: POP EBX
// 005f3c60: RET
// 005f3c61: JBE 0x005f3bae
//   Label: LAB_005f3c61
//   XREF to: 005f3bae (CONDITIONAL_JUMP)
// 005f3c67: CMP EBX,0x14f
// 005f3c6d: JNC 0x005f3c8c
//   XREF to: 005f3c8c (CONDITIONAL_JUMP)
// 005f3c6f: CMP EBX,0x149
// 005f3c75: JNC 0x005f3ce2
//   XREF to: 005f3ce2 (CONDITIONAL_JUMP)
// 005f3c77: CMP EBX,0x147
// 005f3c7d: JC 0x005f3cc7
//   XREF to: 005f3cc7 (CONDITIONAL_JUMP)
// 005f3c7f: JBE 0x005f3bb5
//   XREF to: 005f3bb5 (CONDITIONAL_JUMP)
// 005f3c85: MOV EAX,0x65811f
//   XREF to: 0065811f (DATA)
// 005f3c8a: POP EBX
// 005f3c8b: RET
// 005f3c8c: JBE 0x005f3bd1
//   Label: LAB_005f3c8c
//   XREF to: 005f3bd1 (CONDITIONAL_JUMP)
// 005f3c92: CMP EBX,0x152
// 005f3c98: JNC 0x005f3cad
//   XREF to: 005f3cad (CONDITIONAL_JUMP)
// 005f3c9a: CMP EBX,0x150
// 005f3ca0: JBE 0x005f3bd8
//   XREF to: 005f3bd8 (CONDITIONAL_JUMP)
// 005f3ca6: MOV EAX,0x65813b
//   XREF to: 0065813b (DATA)
// 005f3cab: POP EBX
// 005f3cac: RET
// 005f3cad: JBE 0x005f3bdf
//   Label: LAB_005f3cad
//   XREF to: 005f3bdf (CONDITIONAL_JUMP)
// 005f3cb3: CMP EBX,0x200
// 005f3cb9: JNC 0x005f3cce
//   XREF to: 005f3cce (CONDITIONAL_JUMP)
// 005f3cbb: CMP EBX,0x153
// 005f3cc1: JZ 0x005f3be6
//   XREF to: 005f3be6 (CONDITIONAL_JUMP)
// 005f3cc7: MOV EAX,0x65816d
//   Label: LAB_005f3cc7
//   XREF to: 0065816d (DATA)
// 005f3ccc: POP EBX
// 005f3ccd: RET
// 005f3cce: JBE 0x005f3bed
//   Label: LAB_005f3cce
//   XREF to: 005f3bed (CONDITIONAL_JUMP)
// 005f3cd4: CMP EBX,0x201
// 005f3cda: JZ 0x005f3bf4
//   XREF to: 005f3bf4 (CONDITIONAL_JUMP)
// 005f3ce0: JMP 0x005f3cc7
//   XREF to: 005f3cc7 (UNCONDITIONAL_JUMP)
// 005f3ce2: JBE 0x005f3bbc
//   Label: LAB_005f3ce2
//   XREF to: 005f3bbc (CONDITIONAL_JUMP)
// 005f3ce8: CMP EBX,0x14b
// 005f3cee: JC 0x005f3cc7
//   XREF to: 005f3cc7 (CONDITIONAL_JUMP)
// 005f3cf0: JBE 0x005f3bc3
//   XREF to: 005f3bc3 (CONDITIONAL_JUMP)
// 005f3cf6: CMP EBX,0x14d
// 005f3cfc: JZ 0x005f3bca
//   XREF to: 005f3bca (CONDITIONAL_JUMP)
// 005f3d02: MOV EAX,0x65816d
//   XREF to: 0065816d (DATA)
// 005f3d07: POP EBX
// 005f3d08: RET
// 005f3d09: JBE 0x005f3b7d
//   Label: LAB_005f3d09
//   XREF to: 005f3b7d (CONDITIONAL_JUMP)
// 005f3d0f: CMP EBX,0x11c
// 005f3d15: JNC 0x005f3d32
//   XREF to: 005f3d32 (CONDITIONAL_JUMP)
// 005f3d17: CMP EBX,0x57
// 005f3d1a: JC 0x005f3cc7
//   XREF to: 005f3cc7 (CONDITIONAL_JUMP)
// 005f3d1c: JBE 0x005f3b84
//   XREF to: 005f3b84 (CONDITIONAL_JUMP)
// 005f3d22: CMP EBX,0x58
// 005f3d25: JZ 0x005f3b8b
//   XREF to: 005f3b8b (CONDITIONAL_JUMP)
// 005f3d2b: MOV EAX,0x65816d
//   XREF to: 0065816d (DATA)
// 005f3d30: POP EBX
// 005f3d31: RET
// 005f3d32: JBE 0x005f3b92
//   Label: LAB_005f3d32
//   XREF to: 005f3b92 (CONDITIONAL_JUMP)
// 005f3d38: CMP EBX,0x135
// 005f3d3e: JNC 0x005f3d53
//   XREF to: 005f3d53 (CONDITIONAL_JUMP)
// 005f3d40: CMP EBX,0x11d
// 005f3d46: JZ 0x005f3b99
//   XREF to: 005f3b99 (CONDITIONAL_JUMP)
// 005f3d4c: MOV EAX,0x65816d
//   XREF to: 0065816d (DATA)
// 005f3d51: POP EBX
// 005f3d52: RET
// 005f3d53: JBE 0x005f3ba0
//   Label: LAB_005f3d53
//   XREF to: 005f3ba0 (CONDITIONAL_JUMP)
// 005f3d59: CMP EBX,0x138
// 005f3d5f: JZ 0x005f3ba7
//   XREF to: 005f3ba7 (CONDITIONAL_JUMP)
// 005f3d65: MOV EAX,0x65816d
//   XREF to: 0065816d (DATA)
// 005f3d6a: POP EBX
// 005f3d6b: RET
// 005f3d6c: JBE 0x005f3b6f
//   Label: LAB_005f3d6c
//   XREF to: 005f3b6f (CONDITIONAL_JUMP)
// 005f3d72: CMP EBX,0x51
// 005f3d75: JBE 0x005f3b76
//   XREF to: 005f3b76 (CONDITIONAL_JUMP)
// 005f3d7b: MOV EAX,0x6580d3
//   XREF to: 006580d3 (DATA)
// 005f3d80: POP EBX
// 005f3d81: RET
// 005f3d82: JBE 0x005f3b22
//   Label: LAB_005f3d82
//   XREF to: 005f3b22 (CONDITIONAL_JUMP)
// 005f3d88: CMP EBX,0x46
// 005f3d8b: JNC 0x005f3da2
//   XREF to: 005f3da2 (CONDITIONAL_JUMP)
// 005f3d8d: CMP EBX,0x43
// 005f3d90: JNC 0x005f3dd9
//   XREF to: 005f3dd9 (CONDITIONAL_JUMP)
// 005f3d92: CMP EBX,0x41
// 005f3d95: JBE 0x005f3b29
//   XREF to: 005f3b29 (CONDITIONAL_JUMP)
// 005f3d9b: MOV EAX,0x658060
//   XREF to: 00658060 (DATA)
// 005f3da0: POP EBX
// 005f3da1: RET
// 005f3da2: JBE 0x005f3b3e
//   Label: LAB_005f3da2
//   XREF to: 005f3b3e (CONDITIONAL_JUMP)
// 005f3da8: CMP EBX,0x49
// 005f3dab: JNC 0x005f3dbd
//   XREF to: 005f3dbd (CONDITIONAL_JUMP)
// 005f3dad: CMP EBX,0x47
// 005f3db0: JBE 0x005f3b45
//   XREF to: 005f3b45 (CONDITIONAL_JUMP)
// 005f3db6: MOV EAX,0x658083
//   XREF to: 00658083 (DATA)
// 005f3dbb: POP EBX
// 005f3dbc: RET
// 005f3dbd: JBE 0x005f3b4c
//   Label: LAB_005f3dbd
//   XREF to: 005f3b4c (CONDITIONAL_JUMP)
// 005f3dc3: CMP EBX,0x4b
// 005f3dc6: JC 0x005f3b53
//   XREF to: 005f3b53 (CONDITIONAL_JUMP)
// 005f3dcc: JBE 0x005f3b5a
//   XREF to: 005f3b5a (CONDITIONAL_JUMP)
// 005f3dd2: MOV EAX,0x6580a3
//   XREF to: 006580a3 (DATA)
// 005f3dd7: POP EBX
// 005f3dd8: RET
// 005f3dd9: JBE 0x005f3b30
//   Label: LAB_005f3dd9
//   XREF to: 005f3b30 (CONDITIONAL_JUMP)
// 005f3ddf: CMP EBX,0x44
// 005f3de2: JBE 0x005f3b37
//   XREF to: 005f3b37 (CONDITIONAL_JUMP)
// 005f3de8: MOV EAX,0x65806a
//   XREF to: 0065806a (DATA)
// 005f3ded: POP EBX
// 005f3dee: RET
// 005f3def: JBE 0x005f3b06
//   Label: LAB_005f3def
//   XREF to: 005f3b06 (CONDITIONAL_JUMP)
// 005f3df5: CMP EBX,0x3d
// 005f3df8: JNC 0x005f3e0a
//   XREF to: 005f3e0a (CONDITIONAL_JUMP)
// 005f3dfa: CMP EBX,0x3b
// 005f3dfd: JBE 0x005f3b0d
//   XREF to: 005f3b0d (CONDITIONAL_JUMP)
// 005f3e03: MOV EAX,0x65804e
//   XREF to: 0065804e (DATA)
// 005f3e08: POP EBX
// 005f3e09: RET
// 005f3e0a: JBE 0x005f3b14
//   Label: LAB_005f3e0a
//   XREF to: 005f3b14 (CONDITIONAL_JUMP)
// 005f3e10: CMP EBX,0x3e
// 005f3e13: JBE 0x005f3b1b
//   XREF to: 005f3b1b (CONDITIONAL_JUMP)
// 005f3e19: MOV EAX,0x658057
//   XREF to: 00658057 (DATA)
// 005f3e1e: POP EBX
// 005f3e1f: RET
// 005f3e20: JBE 0x005f3af8
//   Label: LAB_005f3e20
//   XREF to: 005f3af8 (CONDITIONAL_JUMP)
// 005f3e26: CMP EBX,0x38
// 005f3e29: JBE 0x005f3aff
//   XREF to: 005f3aff (CONDITIONAL_JUMP)
// 005f3e2f: MOV EAX,0x65803c
//   XREF to: 0065803c (DATA)
// 005f3e34: POP EBX
// 005f3e35: RET
// 005f3e36: JBE 0x005f3a65
//   Label: LAB_005f3e36
//   XREF to: 005f3a65 (CONDITIONAL_JUMP)
// 005f3e3c: CMP EBX,0x26
// 005f3e3f: JNC 0x005f3e63
//   XREF to: 005f3e63 (CONDITIONAL_JUMP)
// 005f3e41: CMP EBX,0x1f
// 005f3e44: JNC 0x005f3ed9
//   XREF to: 005f3ed9 (CONDITIONAL_JUMP)
// 005f3e4a: CMP EBX,0x1c
// 005f3e4d: JNC 0x005f3f10
//   XREF to: 005f3f10 (CONDITIONAL_JUMP)
// 005f3e53: CMP EBX,0x1a
// 005f3e56: JBE 0x005f3a6c
//   XREF to: 005f3a6c (CONDITIONAL_JUMP)
// 005f3e5c: MOV EAX,0x657fda
//   XREF to: 00657fda (DATA)
// 005f3e61: POP EBX
// 005f3e62: RET
// 005f3e63: JBE 0x005f3aa4
//   Label: LAB_005f3e63
//   XREF to: 005f3aa4 (CONDITIONAL_JUMP)
// 005f3e69: CMP EBX,0x2d
// 005f3e6c: JNC 0x005f3e83
//   XREF to: 005f3e83 (CONDITIONAL_JUMP)
// 005f3e6e: CMP EBX,0x29
// 005f3e71: JNC 0x005f3eba
//   XREF to: 005f3eba (CONDITIONAL_JUMP)
// 005f3e73: CMP EBX,0x27
// 005f3e76: JBE 0x005f3aab
//   XREF to: 005f3aab (CONDITIONAL_JUMP)
// 005f3e7c: MOV EAX,0x657fff
//   XREF to: 00657fff (DATA)
// 005f3e81: POP EBX
// 005f3e82: RET
// 005f3e83: JBE 0x005f3ac7
//   Label: LAB_005f3e83
//   XREF to: 005f3ac7 (CONDITIONAL_JUMP)
// 005f3e89: CMP EBX,0x30
// 005f3e8c: JNC 0x005f3e9e
//   XREF to: 005f3e9e (CONDITIONAL_JUMP)
// 005f3e8e: CMP EBX,0x2e
// 005f3e91: JBE 0x005f3ace
//   XREF to: 005f3ace (CONDITIONAL_JUMP)
// 005f3e97: MOV EAX,0x658013
//   XREF to: 00658013 (DATA)
// 005f3e9c: POP EBX
// 005f3e9d: RET
// 005f3e9e: JBE 0x005f3ad5
//   Label: LAB_005f3e9e
//   XREF to: 005f3ad5 (CONDITIONAL_JUMP)
// 005f3ea4: CMP EBX,0x32
// 005f3ea7: JC 0x005f3adc
//   XREF to: 005f3adc (CONDITIONAL_JUMP)
// 005f3ead: JBE 0x005f3ae3
//   XREF to: 005f3ae3 (CONDITIONAL_JUMP)
// 005f3eb3: MOV EAX,0x65801b
//   XREF to: 0065801b (DATA)
// 005f3eb8: POP EBX
// 005f3eb9: RET
// 005f3eba: JBE 0x005f3ab2
//   Label: LAB_005f3eba
//   XREF to: 005f3ab2 (CONDITIONAL_JUMP)
// 005f3ec0: CMP EBX,0x2a
// 005f3ec3: JBE 0x005f3ab9
//   XREF to: 005f3ab9 (CONDITIONAL_JUMP)
// 005f3ec9: CMP EBX,0x2c
// 005f3ecc: JZ 0x005f3ac0
//   XREF to: 005f3ac0 (CONDITIONAL_JUMP)
// 005f3ed2: MOV EAX,0x65816d
//   XREF to: 0065816d (DATA)
// 005f3ed7: POP EBX
// 005f3ed8: RET
// 005f3ed9: JBE 0x005f3a81
//   Label: LAB_005f3ed9
//   XREF to: 005f3a81 (CONDITIONAL_JUMP)
// 005f3edf: CMP EBX,0x22
// 005f3ee2: JNC 0x005f3ef4
//   XREF to: 005f3ef4 (CONDITIONAL_JUMP)
// 005f3ee4: CMP EBX,0x20
// 005f3ee7: JBE 0x005f3a88
//   XREF to: 005f3a88 (CONDITIONAL_JUMP)
// 005f3eed: MOV EAX,0x657ff1
//   XREF to: 00657ff1 (DATA)
// 005f3ef2: POP EBX
// 005f3ef3: RET
// 005f3ef4: JBE 0x005f3a8f
//   Label: LAB_005f3ef4
//   XREF to: 005f3a8f (CONDITIONAL_JUMP)
// 005f3efa: CMP EBX,0x24
// 005f3efd: JC 0x005f3a96
//   XREF to: 005f3a96 (CONDITIONAL_JUMP)
// 005f3f03: JBE 0x005f3a9d
//   XREF to: 005f3a9d (CONDITIONAL_JUMP)
// 005f3f09: MOV EAX,0x657ff9
//   XREF to: 00657ff9 (DATA)
// 005f3f0e: POP EBX
// 005f3f0f: RET
// 005f3f10: JBE 0x005f3a73
//   Label: LAB_005f3f10
//   XREF to: 005f3a73 (CONDITIONAL_JUMP)
// 005f3f16: CMP EBX,0x1d
// 005f3f19: JBE 0x005f3a7a
//   XREF to: 005f3a7a (CONDITIONAL_JUMP)
// 005f3f1f: MOV EAX,0x657feb
//   XREF to: 00657feb (DATA)
// 005f3f24: POP EBX
// 005f3f25: RET
// 005f3f26: JBE 0x005f3a26
//   Label: LAB_005f3f26
//   XREF to: 005f3a26 (CONDITIONAL_JUMP)
// 005f3f2c: CMP EBX,0x12
// 005f3f2f: JNC 0x005f3f46
//   XREF to: 005f3f46 (CONDITIONAL_JUMP)
// 005f3f31: CMP EBX,0xf
// 005f3f34: JNC 0x005f3f7d
//   XREF to: 005f3f7d (CONDITIONAL_JUMP)
// 005f3f36: CMP EBX,0xd
// 005f3f39: JBE 0x005f3a2d
//   XREF to: 005f3a2d (CONDITIONAL_JUMP)
// 005f3f3f: MOV EAX,0x657fb6
//   XREF to: 00657fb6 (DATA)
// 005f3f44: POP EBX
// 005f3f45: RET
// 005f3f46: JBE 0x005f3a42
//   Label: LAB_005f3f46
//   XREF to: 005f3a42 (CONDITIONAL_JUMP)
// 005f3f4c: CMP EBX,0x15
// 005f3f4f: JNC 0x005f3f61
//   XREF to: 005f3f61 (CONDITIONAL_JUMP)
// 005f3f51: CMP EBX,0x13
// 005f3f54: JBE 0x005f3a49
//   XREF to: 005f3a49 (CONDITIONAL_JUMP)
// 005f3f5a: MOV EAX,0x657fcc
//   XREF to: 00657fcc (DATA)
// 005f3f5f: POP EBX
// 005f3f60: RET
// 005f3f61: JBE 0x005f3a50
//   Label: LAB_005f3f61
//   XREF to: 005f3a50 (CONDITIONAL_JUMP)
// 005f3f67: CMP EBX,0x17
// 005f3f6a: JC 0x005f3a57
//   XREF to: 005f3a57 (CONDITIONAL_JUMP)
// 005f3f70: JBE 0x005f3a5e
//   XREF to: 005f3a5e (CONDITIONAL_JUMP)
// 005f3f76: MOV EAX,0x657fd4
//   XREF to: 00657fd4 (DATA)
// 005f3f7b: POP EBX
// 005f3f7c: RET
// 005f3f7d: JBE 0x005f3a34
//   Label: LAB_005f3f7d
//   XREF to: 005f3a34 (CONDITIONAL_JUMP)
// 005f3f83: CMP EBX,0x10
// 005f3f86: JBE 0x005f3a3b
//   XREF to: 005f3a3b (CONDITIONAL_JUMP)
// 005f3f8c: MOV EAX,0x657fc6
//   XREF to: 00657fc6 (DATA)
// 005f3f91: POP EBX
// 005f3f92: RET
// 005f3f93: JBE 0x005f3a0a
//   Label: LAB_005f3f93
//   XREF to: 005f3a0a (CONDITIONAL_JUMP)
// 005f3f99: CMP EBX,0x9
// 005f3f9c: JNC 0x005f3fae
//   XREF to: 005f3fae (CONDITIONAL_JUMP)
// 005f3f9e: CMP EBX,0x7
// 005f3fa1: JBE 0x005f3a11
//   XREF to: 005f3a11 (CONDITIONAL_JUMP)
// 005f3fa7: MOV EAX,0x657faa
//   XREF to: 00657faa (DATA)
// 005f3fac: POP EBX
// 005f3fad: RET
// 005f3fae: JBE 0x005f3a18
//   Label: LAB_005f3fae
//   XREF to: 005f3a18 (CONDITIONAL_JUMP)
// 005f3fb4: CMP EBX,0xa
// 005f3fb7: JBE 0x005f3a1f
//   XREF to: 005f3a1f (CONDITIONAL_JUMP)
// 005f3fbd: MOV EAX,0x657fb0
//   XREF to: 00657fb0 (DATA)
// 005f3fc2: POP EBX
// 005f3fc3: RET
// 005f3fc4: JBE 0x005f39fc
//   Label: LAB_005f3fc4
//   XREF to: 005f39fc (CONDITIONAL_JUMP)
// 005f3fca: CMP EBX,0x4
// 005f3fcd: JBE 0x005f3a03
//   XREF to: 005f3a03 (CONDITIONAL_JUMP)
// 005f3fd3: MOV EAX,0x657fa4
//   XREF to: 00657fa4 (DATA)
// 005f3fd8: POP EBX
// 005f3fd9: RET
