// Name: wincore_winrun.cpp_FUN_00581360
// Address: 00581360
// Address Range: [[00581360, 0058191e]]
// Convention: __cdecl
// Signature: char * __cdecl wincore_winrun_cpp_FUN_00581360(EInputCodeType keycode)

#include "nocturne.h"

char * __cdecl wincore_winrun_cpp_FUN_00581360(EInputCodeType keycode)

{
  if (keycode < DIK_PERIOD) {
    if (DIK_O < keycode) {
      if (keycode < DIK_LBRACKET) {
        return &DAT_005d7ced;
      }
      if (keycode < DIK_L) {
        if (keycode < DIK_S) {
          if (keycode < DIK_RETURN) {
            if (keycode < DIK_RBRACKET) {
              return &DAT_005d7cef;
            }
            return &DAT_005d7cf1;
          }
          if (DIK_RETURN < keycode) {
            if (keycode < DIK_A) {
              return "LeftCtrl";
            }
            return &DAT_005d7d02;
          }
          return "Enter";
        }
        if (keycode < DIK_D) {
          return &DAT_005d7d04;
        }
        if (DIK_F < keycode) {
          if (keycode < DIK_H) {
            return &DAT_005d7d0a;
          }
          if (keycode < DIK_J) {
            return &DAT_005d7d0c;
          }
          if (keycode < DIK_K) {
            return &DAT_005d7d0e;
          }
          return &DAT_005d7d10;
        }
        if (keycode < DIK_F) {
          return &DAT_005d7d06;
        }
        return &DAT_005d7d08;
      }
      if (keycode < DIK_SEMICOLON) {
        return &DAT_005d7d12;
      }
      if (keycode < DIK_X) {
        if (keycode < DIK_GRAVE) {
          if (keycode < DIK_APOSTROPHE) {
            return &DAT_005d7d14;
          }
          return &DAT_005d7d16;
        }
        if (keycode < DIK_LSHIFT) {
          return &DAT_005d7d18;
        }
        if (keycode < DIK_BACKSLASH) {
          return "LeftShift";
        }
        if (keycode == DIK_Z) {
          return &DAT_005d7d24;
        }
        return "(invalid key)";
      }
      if (keycode < DIK_C) {
        return &DAT_005d7d26;
      }
      if (keycode < DIK_B) {
        if (keycode < DIK_V) {
          return &DAT_005d7d28;
        }
        return &DAT_005d7d2a;
      }
      if (keycode < DIK_N) {
        return &DAT_005d7d2c;
      }
      if (keycode < DIK_M) {
        return &DAT_005d7d2e;
      }
      if (keycode < DIK_COMMA) {
        return &DAT_005d7d30;
      }
      return &DAT_005d7d32;
    }
    if (DIK_0 < keycode) {
      if (keycode < DIK_EQUALS) {
        return &DAT_005d7cc9;
      }
      if (keycode < DIK_E) {
        if (keycode < DIK_TAB) {
          if (keycode < DIK_BACK) {
            return &DAT_005d7ccb;
          }
          return "BackSpace";
        }
        if (DIK_TAB < keycode) {
          if (keycode < DIK_W) {
            return &DAT_005d7cdb;
          }
          return &DAT_005d7cdd;
        }
        return &DAT_005d7cd7;
      }
      if (keycode < DIK_R) {
        return &DAT_005d7cdf;
      }
      if (DIK_T < keycode) {
        if (keycode < DIK_U) {
          return &DAT_005d7ce5;
        }
        if (keycode < DIK_I) {
          return &DAT_005d7ce7;
        }
        if (keycode < DIK_O) {
          return &DAT_005d7ce9;
        }
        return &DAT_005d7ceb;
      }
      if (keycode < DIK_T) {
        return &DAT_005d7ce1;
      }
      return &DAT_005d7ce3;
    }
    if (DIK_4 < keycode) {
      if (keycode < DIK_6) {
        return &DAT_005d7cbd;
      }
      if (keycode < DIK_8) {
        if (keycode < DIK_7) {
          return &DAT_005d7cbf;
        }
        return &DAT_005d7cc1;
      }
      if (keycode < DIK_9) {
        return &DAT_005d7cc3;
      }
      if (keycode < DIK_0) {
        return &DAT_005d7cc5;
      }
      return &DAT_005d7cc7;
    }
    if (DIK_1 < keycode) {
      if (keycode < DIK_3) {
        return &DAT_005d7cb7;
      }
      if (keycode < DIK_4) {
        return &DAT_005d7cb9;
      }
      return &DAT_005d7cbb;
    }
    if (keycode != 0) {
      if (DIK_ESCAPE < keycode) {
        return &DAT_005d7cb5;
      }
      return &DAT_005d7cb1;
    }
  }
  else {
    if (keycode < DIK_SLASH) {
      return &DAT_005d7d34;
    }
    if (keycode < DIK_NUMPAD6) {
      if (DIK_F5 < keycode) {
        if (keycode < DIK_F7) {
          return &DAT_005d7d71;
        }
        if (keycode < DIK_SCROLL) {
          if (keycode < DIK_F9) {
            if (keycode < DIK_F8) {
              return &DAT_005d7d74;
            }
            return &DAT_005d7d77;
          }
          if (DIK_F9 < keycode) {
            if (keycode < DIK_PAUSE) {
              return &DAT_005d7d7d;
            }
            return "Pause";
          }
          return &DAT_005d7d7a;
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
            return &DAT_005d7d36;
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
          return &DAT_005d7d68;
        }
        if (keycode < DIK_F5) {
          return &DAT_005d7d6b;
        }
        return &DAT_005d7d6e;
      }
      if (keycode < DIK_F2) {
        return &DAT_005d7d62;
      }
      return &DAT_005d7d65;
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
          return &DAT_005d7dfa;
        }
        if (keycode == DIK_F12) {
          return &DAT_005d7dfe;
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
              return &DAT_005d7e31;
            }
            return &DAT_005d7e36;
          }
        }
        else {
          if (keycode < (DIK_UP|DIK_1)) {
            return &DAT_005d7e39;
          }
          if ((DIK_UP|DIK_1) < keycode) {
            if (keycode < (DIK_UP|DIK_3)) {
              return &DAT_005d7e3e;
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
          return &DAT_005d7e49;
        }
        if (keycode < DIK_INSERT) {
          if (keycode < DIK_NEXT) {
            return &DAT_005d7e4d;
          }
          return &DAT_005d7e52;
        }
        if (keycode < DIK_DELETE) {
          return &DAT_005d7e57;
        }
        if (keycode < DIM_LBUTTON) {
          if (keycode == DIK_DELETE) {
            return &DAT_005d7e5b;
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
