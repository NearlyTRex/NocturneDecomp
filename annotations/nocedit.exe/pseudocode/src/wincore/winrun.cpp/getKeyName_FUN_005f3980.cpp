// Name: wincore_winrun.cpp_getKeyName_FUN_005f3980
// Address: 005f3980
// Address Range: [[005f3980, 005f3fd9]]
// Convention: __cdecl
// Signature: char * wincore_winrun.cpp_getKeyName_FUN_005f3980(int keycode)

#include "nocturne.h"

char * __cdecl wincore_winrun_cpp_getKeyName_FUN_005f3980(int keycode)

{
  int iVar1;
  
  if ((keycode < 0x200) &&
     (iVar1 = (*g_GetKeyNameTextAFunc)((keycode & 0x1ffU) << 0x10,g_KeyNameBuffer,200), 0 < iVar1))
  {
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
