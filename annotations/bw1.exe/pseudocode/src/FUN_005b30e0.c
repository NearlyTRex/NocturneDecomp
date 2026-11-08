// Name: FUN_005b30e0
// Address: 005b30e0
// Address Range: [[005b30e0, 005b3739]]
// Convention: unknown
// Signature: char * FUN_005b30e0(uint param_1)

#include "nocturne.h"

char * FUN_005b30e0(uint param_1)

{
  int iVar1;
  
  if (((int)param_1 < 0x200) &&
     (iVar1 = GetKeyNameTextA((param_1 & 0x1ff) << 0x10,(LPSTR)0x2c9bda0,200), 0 < iVar1)) {
    return (char *)0x2c9bda0;
  }
  if (param_1 < 0x34) {
    if (0x18 < param_1) {
      if (param_1 < 0x1a) {
        return &DAT_005f9ccc;
      }
      if (param_1 < 0x26) {
        if (param_1 < 0x1f) {
          if (param_1 < 0x1c) {
            if (param_1 < 0x1b) {
              return &DAT_005f9cce;
            }
            return &DAT_005f9cd0;
          }
          if (0x1c < param_1) {
            if (param_1 < 0x1e) {
              return "LeftCtrl";
            }
            return &DAT_005f9ce1;
          }
          return "Enter";
        }
        if (param_1 < 0x20) {
          return &DAT_005f9ce3;
        }
        if (0x21 < param_1) {
          if (param_1 < 0x23) {
            return &DAT_005f9ce9;
          }
          if (param_1 < 0x24) {
            return &DAT_005f9ceb;
          }
          if (param_1 < 0x25) {
            return &DAT_005f9ced;
          }
          return &DAT_005f9cef;
        }
        if (param_1 < 0x21) {
          return &DAT_005f9ce5;
        }
        return &DAT_005f9ce7;
      }
      if (param_1 < 0x27) {
        return &DAT_005f9cf1;
      }
      if (param_1 < 0x2d) {
        if (param_1 < 0x29) {
          if (param_1 < 0x28) {
            return &DAT_005f9cf3;
          }
          return &DAT_005f9cf5;
        }
        if (param_1 < 0x2a) {
          return &DAT_005f9cf7;
        }
        if (param_1 < 0x2b) {
          return "LeftShift";
        }
        if (param_1 == 0x2c) {
          return &DAT_005f9d03;
        }
        return "(invalid key)";
      }
      if (param_1 < 0x2e) {
        return &DAT_005f9d05;
      }
      if (param_1 < 0x30) {
        if (param_1 < 0x2f) {
          return &DAT_005f9d07;
        }
        return &DAT_005f9d09;
      }
      if (param_1 < 0x31) {
        return &DAT_005f9d0b;
      }
      if (param_1 < 0x32) {
        return &DAT_005f9d0d;
      }
      if (param_1 < 0x33) {
        return &DAT_005f9d0f;
      }
      return &DAT_005f9d11;
    }
    if (0xb < param_1) {
      if (param_1 < 0xd) {
        return &DAT_005f9ca8;
      }
      if (param_1 < 0x12) {
        if (param_1 < 0xf) {
          if (param_1 < 0xe) {
            return &DAT_005f9caa;
          }
          return "BackSpace";
        }
        if (0xf < param_1) {
          if (param_1 < 0x11) {
            return &DAT_005f9cba;
          }
          return &DAT_005f9cbc;
        }
        return &DAT_005f9cb6;
      }
      if (param_1 < 0x13) {
        return &DAT_005f9cbe;
      }
      if (0x14 < param_1) {
        if (param_1 < 0x16) {
          return &DAT_005f9cc4;
        }
        if (param_1 < 0x17) {
          return &DAT_005f9cc6;
        }
        if (param_1 < 0x18) {
          return &DAT_005f9cc8;
        }
        return &DAT_005f9cca;
      }
      if (param_1 < 0x14) {
        return &DAT_005f9cc0;
      }
      return &DAT_005f9cc2;
    }
    if (5 < param_1) {
      if (param_1 < 7) {
        return &DAT_005f9c9c;
      }
      if (param_1 < 9) {
        if (param_1 < 8) {
          return &DAT_005f9c9e;
        }
        return &DAT_005f9ca0;
      }
      if (param_1 < 10) {
        return &DAT_005f9ca2;
      }
      if (param_1 < 0xb) {
        return &DAT_005f9ca4;
      }
      return &DAT_005f9ca6;
    }
    if (2 < param_1) {
      if (param_1 < 4) {
        return &DAT_005f9c96;
      }
      if (param_1 < 5) {
        return &DAT_005f9c98;
      }
      return &DAT_005f9c9a;
    }
    if (param_1 != 0) {
      if (1 < param_1) {
        return &DAT_005f9c94;
      }
      return "Esc";
    }
  }
  else {
    if (param_1 < 0x35) {
      return &DAT_005f9d13;
    }
    if (param_1 < 0x4d) {
      if (0x3f < param_1) {
        if (param_1 < 0x41) {
          return &DAT_005f9d50;
        }
        if (param_1 < 0x46) {
          if (param_1 < 0x43) {
            if (param_1 < 0x42) {
              return &DAT_005f9d53;
            }
            return &DAT_005f9d56;
          }
          if (0x43 < param_1) {
            if (param_1 < 0x45) {
              return &DAT_005f9d5c;
            }
            return "Pause";
          }
          return &DAT_005f9d59;
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
            return &DAT_005f9d15;
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
          return &DAT_005f9d47;
        }
        if (param_1 < 0x3f) {
          return &DAT_005f9d4a;
        }
        return &DAT_005f9d4d;
      }
      if (param_1 < 0x3c) {
        return &DAT_005f9d41;
      }
      return &DAT_005f9d44;
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
              return &DAT_005f9e10;
            }
            return &DAT_005f9e15;
          }
        }
        else {
          if (param_1 < 0x14a) {
            return &DAT_005f9e18;
          }
          if (0x14a < param_1) {
            if (param_1 < 0x14c) {
              return &DAT_005f9e1d;
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
          return &DAT_005f9e28;
        }
        if (param_1 < 0x152) {
          if (param_1 < 0x151) {
            return &DAT_005f9e2c;
          }
          return &DAT_005f9e31;
        }
        if (param_1 < 0x153) {
          return &DAT_005f9e36;
        }
        if (param_1 < 0x200) {
          if (param_1 == 0x153) {
            return &DAT_005f9e3a;
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
