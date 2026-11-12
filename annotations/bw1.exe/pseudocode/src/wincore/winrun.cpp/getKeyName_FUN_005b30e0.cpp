// Name: wincore_winrun.cpp_getKeyName_FUN_005b30e0
// Address: 005b30e0
// Address Range: [[005b30e0, 005b3739]]
// Convention: __cdecl
// Signature: char * __cdecl wincore_winrun_cpp_getKeyName_FUN_005b30e0(EInputCodeType keycode)

#include "nocturne.h"

char * __cdecl wincore_winrun_cpp_getKeyName_FUN_005b30e0(EInputCodeType keycode)

{
  int iVar1;
  
  if (((int)keycode < 0x200) &&
     (iVar1 = GetKeyNameTextA((keycode & 0x1ff) << 0x10,(LPSTR)0x2c9bda0,200), 0 < iVar1)) {
    return (char *)0x2c9bda0;
  }
  if (keycode < DIK_PERIOD) {
    if (DIK_O < keycode) {
      if (keycode < DIK_LBRACKET) {
        return &DAT_005f9ccc;
      }
      if (keycode < DIK_L) {
        if (keycode < DIK_S) {
          if (keycode < DIK_RETURN) {
            if (keycode < DIK_RBRACKET) {
              return &DAT_005f9cce;
            }
            return &DAT_005f9cd0;
          }
          if (DIK_RETURN < keycode) {
            if (keycode < DIK_A) {
              return "LeftCtrl";
            }
            return &DAT_005f9ce1;
          }
          return "Enter";
        }
        if (keycode < DIK_D) {
          return &DAT_005f9ce3;
        }
        if (DIK_F < keycode) {
          if (keycode < DIK_H) {
            return &DAT_005f9ce9;
          }
          if (keycode < DIK_J) {
            return &DAT_005f9ceb;
          }
          if (keycode < DIK_K) {
            return &DAT_005f9ced;
          }
          return &DAT_005f9cef;
        }
        if (keycode < DIK_F) {
          return &DAT_005f9ce5;
        }
        return &DAT_005f9ce7;
      }
      if (keycode < DIK_SEMICOLON) {
        return &DAT_005f9cf1;
      }
      if (keycode < DIK_X) {
        if (keycode < DIK_GRAVE) {
          if (keycode < DIK_APOSTROPHE) {
            return &DAT_005f9cf3;
          }
          return &DAT_005f9cf5;
        }
        if (keycode < DIK_LSHIFT) {
          return &DAT_005f9cf7;
        }
        if (keycode < DIK_BACKSLASH) {
          return "LeftShift";
        }
        if (keycode == DIK_Z) {
          return &DAT_005f9d03;
        }
        return "(invalid key)";
      }
      if (keycode < DIK_C) {
        return &DAT_005f9d05;
      }
      if (keycode < DIK_B) {
        if (keycode < DIK_V) {
          return &DAT_005f9d07;
        }
        return &DAT_005f9d09;
      }
      if (keycode < DIK_N) {
        return &DAT_005f9d0b;
      }
      if (keycode < DIK_M) {
        return &DAT_005f9d0d;
      }
      if (keycode < DIK_COMMA) {
        return &DAT_005f9d0f;
      }
      return &DAT_005f9d11;
    }
    if (DIK_0 < keycode) {
      if (keycode < DIK_EQUALS) {
        return &DAT_005f9ca8;
      }
      if (keycode < DIK_E) {
        if (keycode < DIK_TAB) {
          if (keycode < DIK_BACK) {
            return &DAT_005f9caa;
          }
          return "BackSpace";
        }
        if (DIK_TAB < keycode) {
          if (keycode < DIK_W) {
            return &DAT_005f9cba;
          }
          return &DAT_005f9cbc;
        }
        return &DAT_005f9cb6;
      }
      if (keycode < DIK_R) {
        return &DAT_005f9cbe;
      }
      if (DIK_T < keycode) {
        if (keycode < DIK_U) {
          return &DAT_005f9cc4;
        }
        if (keycode < DIK_I) {
          return &DAT_005f9cc6;
        }
        if (keycode < DIK_O) {
          return &DAT_005f9cc8;
        }
        return &DAT_005f9cca;
      }
      if (keycode < DIK_T) {
        return &DAT_005f9cc0;
      }
      return &DAT_005f9cc2;
    }
    if (DIK_4 < keycode) {
      if (keycode < DIK_6) {
        return &DAT_005f9c9c;
      }
      if (keycode < DIK_8) {
        if (keycode < DIK_7) {
          return &DAT_005f9c9e;
        }
        return &DAT_005f9ca0;
      }
      if (keycode < DIK_9) {
        return &DAT_005f9ca2;
      }
      if (keycode < DIK_0) {
        return &DAT_005f9ca4;
      }
      return &DAT_005f9ca6;
    }
    if (DIK_1 < keycode) {
      if (keycode < DIK_3) {
        return &DAT_005f9c96;
      }
      if (keycode < DIK_4) {
        return &DAT_005f9c98;
      }
      return &DAT_005f9c9a;
    }
    if (keycode != 0) {
      if (DIK_ESCAPE < keycode) {
        return &DAT_005f9c94;
      }
      return "Esc";
    }
  }
  else {
    if (keycode < DIK_SLASH) {
      return &DAT_005f9d13;
    }
    if (keycode < DIK_NUMPAD6) {
      if (DIK_F5 < keycode) {
        if (keycode < DIK_F7) {
          return &DAT_005f9d50;
        }
        if (keycode < DIK_SCROLL) {
          if (keycode < DIK_F9) {
            if (keycode < DIK_F8) {
              return &DAT_005f9d53;
            }
            return &DAT_005f9d56;
          }
          if (DIK_F9 < keycode) {
            if (keycode < DIK_PAUSE) {
              return &DAT_005f9d5c;
            }
            return "Pause";
          }
          return &DAT_005f9d59;
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
            return &DAT_005f9d15;
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
          return &DAT_005f9d47;
        }
        if (keycode < DIK_F5) {
          return &DAT_005f9d4a;
        }
        return &DAT_005f9d4d;
      }
      if (keycode < DIK_F2) {
        return &DAT_005f9d41;
      }
      return &DAT_005f9d44;
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
              return &DAT_005f9e10;
            }
            return &DAT_005f9e15;
          }
        }
        else {
          if (keycode < (DIK_UP|DIK_1)) {
            return &DAT_005f9e18;
          }
          if ((DIK_UP|DIK_1) < keycode) {
            if (keycode < (DIK_UP|DIK_3)) {
              return &DAT_005f9e1d;
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
          return &DAT_005f9e28;
        }
        if (keycode < DIK_INSERT) {
          if (keycode < DIK_NEXT) {
            return &DAT_005f9e2c;
          }
          return &DAT_005f9e31;
        }
        if (keycode < DIK_DELETE) {
          return &DAT_005f9e36;
        }
        if (keycode < DIM_LBUTTON) {
          if (keycode == DIK_DELETE) {
            return &DAT_005f9e3a;
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
