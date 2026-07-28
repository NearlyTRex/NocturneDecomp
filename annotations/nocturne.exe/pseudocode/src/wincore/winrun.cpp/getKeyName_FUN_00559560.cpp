// Name: wincore_winrun.cpp_getKeyName_FUN_00559560
// Address: 00559560
// Address Range: [[00559560, 00559bb9]]
// Convention: __cdecl
// Signature: char * __cdecl wincore_winrun_cpp_getKeyName_FUN_00559560(EInputCodeType keycode)

#include "nocturne.h"

char * __cdecl wincore_winrun_cpp_getKeyName_FUN_00559560(EInputCodeType keycode)

{
  int iVar1;
  
  if (((int)keycode < 0x200) &&
     (iVar1 = GetKeyNameTextA((keycode & 0x1ff) << 0x10,(LPSTR)0x2de1fd0,200), 0 < iVar1)) {
    return (char *)0x2de1fd0;
  }
  if (keycode < DIK_PERIOD) {
    if (DIK_O < keycode) {
      if (keycode < DIK_LBRACKET) {
        return "P";
      }
      if (keycode < DIK_L) {
        if (keycode < DIK_S) {
          if (keycode < DIK_RETURN) {
            if (keycode < DIK_RBRACKET) {
              return "[";
            }
            return "]";
          }
          if (DIK_RETURN < keycode) {
            if (keycode < DIK_A) {
              return "LeftCtrl";
            }
            return "A";
          }
          return "Enter";
        }
        if (keycode < DIK_D) {
          return "S";
        }
        if (DIK_F < keycode) {
          if (keycode < DIK_H) {
            return "G";
          }
          if (keycode < DIK_J) {
            return "H";
          }
          if (keycode < DIK_K) {
            return "J";
          }
          return "K";
        }
        if (keycode < DIK_F) {
          return "D";
        }
        return "F";
      }
      if (keycode < DIK_SEMICOLON) {
        return "L";
      }
      if (keycode < DIK_X) {
        if (keycode < DIK_GRAVE) {
          if (keycode < DIK_APOSTROPHE) {
            return ";";
          }
          return "'";
        }
        if (keycode < DIK_LSHIFT) {
          return "`";
        }
        if (keycode < DIK_BACKSLASH) {
          return "LeftShift";
        }
        if (keycode == DIK_Z) {
          return "Z";
        }
        return "(invalid key)";
      }
      if (keycode < DIK_C) {
        return "X";
      }
      if (keycode < DIK_B) {
        if (keycode < DIK_V) {
          return "C";
        }
        return "V";
      }
      if (keycode < DIK_N) {
        return "B";
      }
      if (keycode < DIK_M) {
        return "N";
      }
      if (keycode < DIK_COMMA) {
        return "M";
      }
      return ",";
    }
    if (DIK_0 < keycode) {
      if (keycode < DIK_EQUALS) {
        return "-";
      }
      if (keycode < DIK_E) {
        if (keycode < DIK_TAB) {
          if (keycode < DIK_BACK) {
            return "=";
          }
          return "BackSpace";
        }
        if (DIK_TAB < keycode) {
          if (keycode < DIK_W) {
            return "Q";
          }
          return "W";
        }
        return "Tab";
      }
      if (keycode < DIK_R) {
        return "E";
      }
      if (DIK_T < keycode) {
        if (keycode < DIK_U) {
          return "Y";
        }
        if (keycode < DIK_I) {
          return "U";
        }
        if (keycode < DIK_O) {
          return "I";
        }
        return "O";
      }
      if (keycode < DIK_T) {
        return "R";
      }
      return "T";
    }
    if (DIK_4 < keycode) {
      if (keycode < DIK_6) {
        return "5";
      }
      if (keycode < DIK_8) {
        if (keycode < DIK_7) {
          return "6";
        }
        return "7";
      }
      if (keycode < DIK_9) {
        return "8";
      }
      if (keycode < DIK_0) {
        return "9";
      }
      return "0";
    }
    if (DIK_1 < keycode) {
      if (keycode < DIK_3) {
        return "2";
      }
      if (keycode < DIK_4) {
        return "3";
      }
      return "4";
    }
    if (keycode != 0) {
      if (DIK_ESCAPE < keycode) {
        return "1";
      }
      return "Esc";
    }
  }
  else {
    if (keycode < DIK_SLASH) {
      return ".";
    }
    if (keycode < DIK_NUMPAD6) {
      if (DIK_F5 < keycode) {
        if (keycode < DIK_F7) {
          return "F6";
        }
        if (keycode < DIK_SCROLL) {
          if (keycode < DIK_F9) {
            if (keycode < DIK_F8) {
              return "F7";
            }
            return "F8";
          }
          if (DIK_F9 < keycode) {
            if (keycode < DIK_PAUSE) {
              return "F10";
            }
            return "Pause";
          }
          return "F9";
        }
        if (keycode < DIK_NUMPAD7) {
          return "ScrollLock";
        }
        if (DIK_NUMPAD8 < keycode) {
          if (keycode < DIK_SUBTRACT) {
            return "NumPad9";
          }
          if (keycode < DIK_NUMPAD4) {
            return "NumPad-";
          }
          if (keycode < DIK_NUMPAD5) {
            return "NumPad4";
          }
          return "NumPad5";
        }
        if (keycode < DIK_NUMPAD8) {
          return "NumPad7";
        }
        return "NumPad8";
      }
      if (keycode < DIK_CAPITAL) {
        if (keycode < DIK_MULTIPLY) {
          if (keycode < DIK_RSHIFT) {
            return "/";
          }
          return "RightShift";
        }
        if (DIK_MULTIPLY < keycode) {
          if (keycode < DIK_SPACE) {
            return "LeftAlt";
          }
          return "Space";
        }
        return "NumPad*";
      }
      if (keycode < DIK_F1) {
        return "CapsLock";
      }
      if (DIK_F2 < keycode) {
        if (keycode < DIK_F4) {
          return "F3";
        }
        if (keycode < DIK_F5) {
          return "F4";
        }
        return "F5";
      }
      if (keycode < DIK_F2) {
        return "F1";
      }
      return "F2";
    }
    if (keycode < DIK_ADD) {
      return "NumPad6";
    }
    if (keycode < DIK_NUMLOCK) {
      if (keycode < DIK_DECIMAL) {
        if (keycode < DIK_NUMPAD2) {
          if (keycode < DIK_NUMPAD1) {
            return "NumPad+";
          }
          return "NumPad1";
        }
        if (DIK_NUMPAD2 < keycode) {
          if (keycode < DIK_NUMPAD0) {
            return "NumPad3";
          }
          return "NumPad0";
        }
        return "NumPad2";
      }
      if (keycode < (DIK_NUMPAD2|DIK_3)) {
        return "NumPad.";
      }
      if (0x11b < keycode) {
        if (keycode < DIK_RCONTROL) {
          return "NumPadEnter";
        }
        if (keycode < DIK_DIVIDE) {
          if (keycode == DIK_RCONTROL) {
            return "RightCtrl";
          }
          return "(invalid key)";
        }
        if (keycode < 0x136) {
          return "NumPad/";
        }
        if (keycode == DIK_RMENU) {
          return "RightAlt";
        }
        return "(invalid key)";
      }
      if ((DIK_NUMPAD2|DIK_5) < keycode) {
        if (keycode < DIK_F12) {
          return "F11";
        }
        if (keycode == DIK_F12) {
          return "F12";
        }
        return "(invalid key)";
      }
    }
    else {
      if (keycode < 0x146) {
        return "NumLock";
      }
      if (keycode < DIK_END) {
        if (keycode < DIK_PRIOR) {
          if (0x146 < keycode) {
            if (keycode < DIK_UP) {
              return "Home";
            }
            return "Up";
          }
        }
        else {
          if (keycode < (DIK_UP|DIK_1)) {
            return "PgUp";
          }
          if ((DIK_UP|DIK_1) < keycode) {
            if (keycode < (DIK_UP|DIK_3)) {
              return "Left";
            }
            if (keycode == DIK_RIGHT) {
              return "Right";
            }
            return "(invalid key)";
          }
        }
      }
      else {
        if (keycode < DIK_DOWN) {
          return "End";
        }
        if (keycode < DIK_INSERT) {
          if (keycode < DIK_NEXT) {
            return "Down";
          }
          return "PgDn";
        }
        if (keycode < DIK_DELETE) {
          return "Ins";
        }
        if (keycode < DIM_LBUTTON) {
          if (keycode == DIK_DELETE) {
            return "Del";
          }
        }
        else {
          if (keycode < DIM_RBUTTON) {
            return "Left Mouse Button";
          }
          if (keycode == DIM_RBUTTON) {
            return "Right Mouse Button";
          }
        }
      }
    }
  }
  return "(invalid key)";
}
