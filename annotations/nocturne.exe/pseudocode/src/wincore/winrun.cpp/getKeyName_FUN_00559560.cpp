// Name: wincore_winrun.cpp_getKeyName_FUN_00559560
// Address: 00559560
// Address Range: [[00559560, 00559bb9]]
// Convention: __cdecl
// Signature: char * __cdecl wincore_winrun_cpp_getKeyName_FUN_00559560(uint param_1)

#include "nocturne.h"

char * __cdecl wincore_winrun_cpp_getKeyName_FUN_00559560(uint param_1)

{
  int iVar1;
  
  if (((int)param_1 < 0x200) &&
     (iVar1 = GetKeyNameTextA((param_1 & 0x1ff) << 0x10,(LPSTR)0x2de1fd0,200), 0 < iVar1)) {
    return (char *)0x2de1fd0;
  }
  if (param_1 < 0x34) {
    if (0x18 < param_1) {
      if (param_1 < 0x1a) {
        return "P";
      }
      if (param_1 < 0x26) {
        if (param_1 < 0x1f) {
          if (param_1 < 0x1c) {
            if (param_1 < 0x1b) {
              return "[";
            }
            return "]";
          }
          if (0x1c < param_1) {
            if (param_1 < 0x1e) {
              return "LeftCtrl";
            }
            return "A";
          }
          return "Enter";
        }
        if (param_1 < 0x20) {
          return "S";
        }
        if (0x21 < param_1) {
          if (param_1 < 0x23) {
            return "G";
          }
          if (param_1 < 0x24) {
            return "H";
          }
          if (param_1 < 0x25) {
            return "J";
          }
          return "K";
        }
        if (param_1 < 0x21) {
          return "D";
        }
        return "F";
      }
      if (param_1 < 0x27) {
        return "L";
      }
      if (param_1 < 0x2d) {
        if (param_1 < 0x29) {
          if (param_1 < 0x28) {
            return ";";
          }
          return "'";
        }
        if (param_1 < 0x2a) {
          return "`";
        }
        if (param_1 < 0x2b) {
          return "LeftShift";
        }
        if (param_1 == 0x2c) {
          return "Z";
        }
        return "(invalid key)";
      }
      if (param_1 < 0x2e) {
        return "X";
      }
      if (param_1 < 0x30) {
        if (param_1 < 0x2f) {
          return "C";
        }
        return "V";
      }
      if (param_1 < 0x31) {
        return "B";
      }
      if (param_1 < 0x32) {
        return "N";
      }
      if (param_1 < 0x33) {
        return "M";
      }
      return ",";
    }
    if (0xb < param_1) {
      if (param_1 < 0xd) {
        return "-";
      }
      if (param_1 < 0x12) {
        if (param_1 < 0xf) {
          if (param_1 < 0xe) {
            return "=";
          }
          return "BackSpace";
        }
        if (0xf < param_1) {
          if (param_1 < 0x11) {
            return "Q";
          }
          return "W";
        }
        return "Tab";
      }
      if (param_1 < 0x13) {
        return "E";
      }
      if (0x14 < param_1) {
        if (param_1 < 0x16) {
          return "Y";
        }
        if (param_1 < 0x17) {
          return "U";
        }
        if (param_1 < 0x18) {
          return "I";
        }
        return "O";
      }
      if (param_1 < 0x14) {
        return "R";
      }
      return "T";
    }
    if (5 < param_1) {
      if (param_1 < 7) {
        return "5";
      }
      if (param_1 < 9) {
        if (param_1 < 8) {
          return "6";
        }
        return "7";
      }
      if (param_1 < 10) {
        return "8";
      }
      if (param_1 < 0xb) {
        return "9";
      }
      return "0";
    }
    if (2 < param_1) {
      if (param_1 < 4) {
        return "2";
      }
      if (param_1 < 5) {
        return "3";
      }
      return "4";
    }
    if (param_1 != 0) {
      if (1 < param_1) {
        return "1";
      }
      return "Esc";
    }
  }
  else {
    if (param_1 < 0x35) {
      return ".";
    }
    if (param_1 < 0x4d) {
      if (0x3f < param_1) {
        if (param_1 < 0x41) {
          return "F6";
        }
        if (param_1 < 0x46) {
          if (param_1 < 0x43) {
            if (param_1 < 0x42) {
              return "F7";
            }
            return "F8";
          }
          if (0x43 < param_1) {
            if (param_1 < 0x45) {
              return "F10";
            }
            return "Pause";
          }
          return "F9";
        }
        if (param_1 < 0x47) {
          return "ScrollLock";
        }
        if (0x48 < param_1) {
          if (param_1 < 0x4a) {
            return "NumPad9";
          }
          if (param_1 < 0x4b) {
            return "NumPad-";
          }
          if (param_1 < 0x4c) {
            return "NumPad4";
          }
          return "NumPad5";
        }
        if (param_1 < 0x48) {
          return "NumPad7";
        }
        return "NumPad8";
      }
      if (param_1 < 0x3a) {
        if (param_1 < 0x37) {
          if (param_1 < 0x36) {
            return "/";
          }
          return "RightShift";
        }
        if (0x37 < param_1) {
          if (param_1 < 0x39) {
            return "LeftAlt";
          }
          return "Space";
        }
        return "NumPad*";
      }
      if (param_1 < 0x3b) {
        return "CapsLock";
      }
      if (0x3c < param_1) {
        if (param_1 < 0x3e) {
          return "F3";
        }
        if (param_1 < 0x3f) {
          return "F4";
        }
        return "F5";
      }
      if (param_1 < 0x3c) {
        return "F1";
      }
      return "F2";
    }
    if (param_1 < 0x4e) {
      return "NumPad6";
    }
    if (param_1 < 0x145) {
      if (param_1 < 0x53) {
        if (param_1 < 0x50) {
          if (param_1 < 0x4f) {
            return "NumPad+";
          }
          return "NumPad1";
        }
        if (0x50 < param_1) {
          if (param_1 < 0x52) {
            return "NumPad3";
          }
          return "NumPad0";
        }
        return "NumPad2";
      }
      if (param_1 < 0x54) {
        return "NumPad.";
      }
      if (0x11b < param_1) {
        if (param_1 < 0x11d) {
          return "NumPadEnter";
        }
        if (param_1 < 0x135) {
          if (param_1 == 0x11d) {
            return "RightCtrl";
          }
          return "(invalid key)";
        }
        if (param_1 < 0x136) {
          return "NumPad/";
        }
        if (param_1 == 0x138) {
          return "RightAlt";
        }
        return "(invalid key)";
      }
      if (0x56 < param_1) {
        if (param_1 < 0x58) {
          return "F11";
        }
        if (param_1 == 0x58) {
          return "F12";
        }
        return "(invalid key)";
      }
    }
    else {
      if (param_1 < 0x146) {
        return "NumLock";
      }
      if (param_1 < 0x14f) {
        if (param_1 < 0x149) {
          if (0x146 < param_1) {
            if (param_1 < 0x148) {
              return "Home";
            }
            return "Up";
          }
        }
        else {
          if (param_1 < 0x14a) {
            return "PgUp";
          }
          if (0x14a < param_1) {
            if (param_1 < 0x14c) {
              return "Left";
            }
            if (param_1 == 0x14d) {
              return "Right";
            }
            return "(invalid key)";
          }
        }
      }
      else {
        if (param_1 < 0x150) {
          return "End";
        }
        if (param_1 < 0x152) {
          if (param_1 < 0x151) {
            return "Down";
          }
          return "PgDn";
        }
        if (param_1 < 0x153) {
          return "Ins";
        }
        if (param_1 < 0x200) {
          if (param_1 == 0x153) {
            return "Del";
          }
        }
        else {
          if (param_1 < 0x201) {
            return "Left Mouse Button";
          }
          if (param_1 == 0x201) {
            return "Right Mouse Button";
          }
        }
      }
    }
  }
  return "(invalid key)";
}
