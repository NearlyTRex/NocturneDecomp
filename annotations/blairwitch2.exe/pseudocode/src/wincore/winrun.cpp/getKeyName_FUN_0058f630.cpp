// Name: wincore_winrun.cpp_getKeyName_FUN_0058f630
// Address: 0058f630
// Address Range: [[0058f630, 0058fc89]]
// Convention: __cdecl
// Signature: char * __cdecl wincore_winrun_cpp_getKeyName_FUN_0058f630(EInputCodeType keycode)

#include "nocturne.h"

char * __cdecl wincore_winrun_cpp_getKeyName_FUN_0058f630(EInputCodeType keycode)

{
  int iVar1;
  
  if (((int)keycode < 0x200) &&
     (iVar1 = GetKeyNameTextA((keycode & 0x1ff) << 0x10,(LPSTR)0x2664560,200), 0 < iVar1)) {
    return (char *)0x2664560;
  }
  if (keycode < DIK_PERIOD) {
    if (DIK_O < keycode) {
      if (keycode < DIK_LBRACKET) {
        return &DAT_005ee8f4;
      }
      if (keycode < DIK_L) {
        if (keycode < DIK_S) {
          if (keycode < DIK_RETURN) {
            if (keycode < DIK_RBRACKET) {
              return &DAT_005ee8f6;
            }
            return &DAT_005ee8f8;
          }
          if (DIK_RETURN < keycode) {
            if (keycode < DIK_A) {
              return "LeftCtrl";
            }
            return &DAT_005ee909;
          }
          return "Enter";
        }
        if (keycode < DIK_D) {
          return &DAT_005ee90b;
        }
        if (DIK_F < keycode) {
          if (keycode < DIK_H) {
            return &DAT_005ee911;
          }
          if (keycode < DIK_J) {
            return &DAT_005ee913;
          }
          if (keycode < DIK_K) {
            return &DAT_005ee915;
          }
          return &DAT_005ee917;
        }
        if (keycode < DIK_F) {
          return &DAT_005ee90d;
        }
        return &DAT_005ee90f;
      }
      if (keycode < DIK_SEMICOLON) {
        return &DAT_005ee919;
      }
      if (keycode < DIK_X) {
        if (keycode < DIK_GRAVE) {
          if (keycode < DIK_APOSTROPHE) {
            return &DAT_005ee91b;
          }
          return &DAT_005ee91d;
        }
        if (keycode < DIK_LSHIFT) {
          return &DAT_005ee91f;
        }
        if (keycode < DIK_BACKSLASH) {
          return "LeftShift";
        }
        if (keycode == DIK_Z) {
          return &DAT_005ee92b;
        }
        return "(invalid key)";
      }
      if (keycode < DIK_C) {
        return &DAT_005ee92d;
      }
      if (keycode < DIK_B) {
        if (keycode < DIK_V) {
          return &DAT_005ee92f;
        }
        return &DAT_005ee931;
      }
      if (keycode < DIK_N) {
        return &DAT_005ee933;
      }
      if (keycode < DIK_M) {
        return &DAT_005ee935;
      }
      if (keycode < DIK_COMMA) {
        return &DAT_005ee937;
      }
      return &DAT_005ee939;
    }
    if (DIK_0 < keycode) {
      if (keycode < DIK_EQUALS) {
        return &DAT_005ee8d0;
      }
      if (keycode < DIK_E) {
        if (keycode < DIK_TAB) {
          if (keycode < DIK_BACK) {
            return &DAT_005ee8d2;
          }
          return "BackSpace";
        }
        if (DIK_TAB < keycode) {
          if (keycode < DIK_W) {
            return &DAT_005ee8e2;
          }
          return &DAT_005ee8e4;
        }
        return &DAT_005ee8de;
      }
      if (keycode < DIK_R) {
        return &DAT_005ee8e6;
      }
      if (DIK_T < keycode) {
        if (keycode < DIK_U) {
          return &DAT_005ee8ec;
        }
        if (keycode < DIK_I) {
          return &DAT_005ee8ee;
        }
        if (keycode < DIK_O) {
          return &DAT_005ee8f0;
        }
        return &DAT_005ee8f2;
      }
      if (keycode < DIK_T) {
        return &DAT_005ee8e8;
      }
      return &DAT_005ee8ea;
    }
    if (DIK_4 < keycode) {
      if (keycode < DIK_6) {
        return &DAT_005ee8c4;
      }
      if (keycode < DIK_8) {
        if (keycode < DIK_7) {
          return &DAT_005ee8c6;
        }
        return &DAT_005ee8c8;
      }
      if (keycode < DIK_9) {
        return &DAT_005ee8ca;
      }
      if (keycode < DIK_0) {
        return &DAT_005ee8cc;
      }
      return &DAT_005ee8ce;
    }
    if (DIK_1 < keycode) {
      if (keycode < DIK_3) {
        return &DAT_005ee8be;
      }
      if (keycode < DIK_4) {
        return &DAT_005ee8c0;
      }
      return &DAT_005ee8c2;
    }
    if (keycode != 0) {
      if (DIK_ESCAPE < keycode) {
        return &DAT_005ee8bc;
      }
      return &DAT_005ee8b8;
    }
  }
  else {
    if (keycode < DIK_SLASH) {
      return &DAT_005ee93b;
    }
    if (keycode < DIK_NUMPAD6) {
      if (DIK_F5 < keycode) {
        if (keycode < DIK_F7) {
          return &DAT_005ee978;
        }
        if (keycode < DIK_SCROLL) {
          if (keycode < DIK_F9) {
            if (keycode < DIK_F8) {
              return &DAT_005ee97b;
            }
            return &DAT_005ee97e;
          }
          if (DIK_F9 < keycode) {
            if (keycode < DIK_PAUSE) {
              return &DAT_005ee984;
            }
            return "Pause";
          }
          return &DAT_005ee981;
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
            return &DAT_005ee93d;
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
          return &DAT_005ee96f;
        }
        if (keycode < DIK_F5) {
          return &DAT_005ee972;
        }
        return &DAT_005ee975;
      }
      if (keycode < DIK_F2) {
        return &DAT_005ee969;
      }
      return &DAT_005ee96c;
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
          return &DAT_005eea01;
        }
        if (keycode == DIK_F12) {
          return &DAT_005eea05;
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
              return &DAT_005eea38;
            }
            return &DAT_005eea3d;
          }
        }
        else {
          if (keycode < (DIK_UP|DIK_1)) {
            return &DAT_005eea40;
          }
          if ((DIK_UP|DIK_1) < keycode) {
            if (keycode < (DIK_UP|DIK_3)) {
              return &DAT_005eea45;
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
          return &DAT_005eea50;
        }
        if (keycode < DIK_INSERT) {
          if (keycode < DIK_NEXT) {
            return &DAT_005eea54;
          }
          return &DAT_005eea59;
        }
        if (keycode < DIK_DELETE) {
          return &DAT_005eea5e;
        }
        if (keycode < DIM_LBUTTON) {
          if (keycode == DIK_DELETE) {
            return &DAT_005eea62;
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
