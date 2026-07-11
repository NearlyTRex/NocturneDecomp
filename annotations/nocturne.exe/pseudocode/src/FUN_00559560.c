// Name: FUN_00559560
// Address: 00559560
// Address Range: [[00559560, 00559bb9]]
// Convention: unknown
// Signature: char * FUN_00559560(uint param_1)

#include "nocturne.h"

char * FUN_00559560(uint param_1)

{
  int iVar1;
  
  if (((int)param_1 < 0x200) &&
     (iVar1 = GetKeyNameTextA((param_1 & 0x1ff) << 0x10,(LPSTR)0x2de1fd0,200), 0 < iVar1)) {
    return (char *)0x2de1fd0;
  }
  if (param_1 < 0x34) {
    if (0x18 < param_1) {
      if (param_1 < 0x1a) {
        return &DAT_00597f9b;
      }
      if (param_1 < 0x26) {
        if (param_1 < 0x1f) {
          if (param_1 < 0x1c) {
            if (param_1 < 0x1b) {
              return &DAT_00597f9d;
            }
            return &DAT_00597f9f;
          }
          if (0x1c < param_1) {
            if (param_1 < 0x1e) {
              return "LeftCtrl";
            }
            return &DAT_00597fb0;
          }
          return "Enter";
        }
        if (param_1 < 0x20) {
          return &DAT_00597fb2;
        }
        if (0x21 < param_1) {
          if (param_1 < 0x23) {
            return &DAT_00597fb8;
          }
          if (param_1 < 0x24) {
            return &DAT_00597fba;
          }
          if (param_1 < 0x25) {
            return &DAT_00597fbc;
          }
          return &DAT_00597fbe;
        }
        if (param_1 < 0x21) {
          return &DAT_00597fb4;
        }
        return &DAT_00597fb6;
      }
      if (param_1 < 0x27) {
        return &DAT_00597fc0;
      }
      if (param_1 < 0x2d) {
        if (param_1 < 0x29) {
          if (param_1 < 0x28) {
            return &DAT_00597fc2;
          }
          return &DAT_00597fc4;
        }
        if (param_1 < 0x2a) {
          return &DAT_00597fc6;
        }
        if (param_1 < 0x2b) {
          return "LeftShift";
        }
        if (param_1 == 0x2c) {
          return &DAT_00597fd2;
        }
        return "(invalid key)";
      }
      if (param_1 < 0x2e) {
        return &DAT_00597fd4;
      }
      if (param_1 < 0x30) {
        if (param_1 < 0x2f) {
          return &DAT_00597fd6;
        }
        return &DAT_00597fd8;
      }
      if (param_1 < 0x31) {
        return &DAT_00597fda;
      }
      if (param_1 < 0x32) {
        return &DAT_00597fdc;
      }
      if (param_1 < 0x33) {
        return &DAT_00597fde;
      }
      return &DAT_00597fe0;
    }
    if (0xb < param_1) {
      if (param_1 < 0xd) {
        return &DAT_00597f77;
      }
      if (param_1 < 0x12) {
        if (param_1 < 0xf) {
          if (param_1 < 0xe) {
            return &DAT_00597f79;
          }
          return "BackSpace";
        }
        if (0xf < param_1) {
          if (param_1 < 0x11) {
            return &DAT_00597f89;
          }
          return &DAT_00597f8b;
        }
        return &DAT_00597f85;
      }
      if (param_1 < 0x13) {
        return &DAT_00597f8d;
      }
      if (0x14 < param_1) {
        if (param_1 < 0x16) {
          return &DAT_00597f93;
        }
        if (param_1 < 0x17) {
          return &DAT_00597f95;
        }
        if (param_1 < 0x18) {
          return &DAT_00597f97;
        }
        return &DAT_00597f99;
      }
      if (param_1 < 0x14) {
        return &DAT_00597f8f;
      }
      return &DAT_00597f91;
    }
    if (5 < param_1) {
      if (param_1 < 7) {
        return &DAT_00597f6b;
      }
      if (param_1 < 9) {
        if (param_1 < 8) {
          return &DAT_00597f6d;
        }
        return &DAT_00597f6f;
      }
      if (param_1 < 10) {
        return &DAT_00597f71;
      }
      if (param_1 < 0xb) {
        return &DAT_00597f73;
      }
      return &DAT_00597f75;
    }
    if (2 < param_1) {
      if (param_1 < 4) {
        return &DAT_00597f65;
      }
      if (param_1 < 5) {
        return &DAT_00597f67;
      }
      return &DAT_00597f69;
    }
    if (param_1 != 0) {
      if (1 < param_1) {
        return &DAT_00597f63;
      }
      return &DAT_00597f5f;
    }
  }
  else {
    if (param_1 < 0x35) {
      return &DAT_00597fe2;
    }
    if (param_1 < 0x4d) {
      if (0x3f < param_1) {
        if (param_1 < 0x41) {
          return &DAT_0059801f;
        }
        if (param_1 < 0x46) {
          if (param_1 < 0x43) {
            if (param_1 < 0x42) {
              return &DAT_00598022;
            }
            return &DAT_00598025;
          }
          if (0x43 < param_1) {
            if (param_1 < 0x45) {
              return &DAT_0059802b;
            }
            return "Pause";
          }
          return &DAT_00598028;
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
            return &DAT_00597fe4;
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
          return &DAT_00598016;
        }
        if (param_1 < 0x3f) {
          return &DAT_00598019;
        }
        return &DAT_0059801c;
      }
      if (param_1 < 0x3c) {
        return &DAT_00598010;
      }
      return &DAT_00598013;
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
          return &DAT_005980a8;
        }
        if (param_1 == 0x58) {
          return &DAT_005980ac;
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
              return &DAT_005980df;
            }
            return &DAT_005980e4;
          }
        }
        else {
          if (param_1 < 0x14a) {
            return &DAT_005980e7;
          }
          if (0x14a < param_1) {
            if (param_1 < 0x14c) {
              return &DAT_005980ec;
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
          return &DAT_005980f7;
        }
        if (param_1 < 0x152) {
          if (param_1 < 0x151) {
            return &DAT_005980fb;
          }
          return &DAT_00598100;
        }
        if (param_1 < 0x153) {
          return &DAT_00598105;
        }
        if (param_1 < 0x200) {
          if (param_1 == 0x153) {
            return &DAT_00598109;
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
