// Name: wincore_winrun.cpp_getKeyName_FUN_0058f630
// Address: 0058f630
// Address Range: [[0058f630, 0058fc89]]
// Convention: __cdecl
// Signature: char * __cdecl wincore_winrun_cpp_getKeyName_FUN_0058f630(uint param_1)

#include "nocturne.h"

char * __cdecl wincore_winrun_cpp_getKeyName_FUN_0058f630(uint param_1)

{
  int iVar1;
  
  if (((int)param_1 < 0x200) &&
     (iVar1 = GetKeyNameTextA((param_1 & 0x1ff) << 0x10,(LPSTR)0x2664560,200), 0 < iVar1)) {
    return (char *)0x2664560;
  }
  if (param_1 < 0x34) {
    if (0x18 < param_1) {
      if (param_1 < 0x1a) {
        return &DAT_005ee8f4;
      }
      if (param_1 < 0x26) {
        if (param_1 < 0x1f) {
          if (param_1 < 0x1c) {
            if (param_1 < 0x1b) {
              return &DAT_005ee8f6;
            }
            return &DAT_005ee8f8;
          }
          if (0x1c < param_1) {
            if (param_1 < 0x1e) {
              return "LeftCtrl";
            }
            return &DAT_005ee909;
          }
          return "Enter";
        }
        if (param_1 < 0x20) {
          return &DAT_005ee90b;
        }
        if (0x21 < param_1) {
          if (param_1 < 0x23) {
            return &DAT_005ee911;
          }
          if (param_1 < 0x24) {
            return &DAT_005ee913;
          }
          if (param_1 < 0x25) {
            return &DAT_005ee915;
          }
          return &DAT_005ee917;
        }
        if (param_1 < 0x21) {
          return &DAT_005ee90d;
        }
        return &DAT_005ee90f;
      }
      if (param_1 < 0x27) {
        return &DAT_005ee919;
      }
      if (param_1 < 0x2d) {
        if (param_1 < 0x29) {
          if (param_1 < 0x28) {
            return &DAT_005ee91b;
          }
          return &DAT_005ee91d;
        }
        if (param_1 < 0x2a) {
          return &DAT_005ee91f;
        }
        if (param_1 < 0x2b) {
          return "LeftShift";
        }
        if (param_1 == 0x2c) {
          return &DAT_005ee92b;
        }
        return "(invalid key)";
      }
      if (param_1 < 0x2e) {
        return &DAT_005ee92d;
      }
      if (param_1 < 0x30) {
        if (param_1 < 0x2f) {
          return &DAT_005ee92f;
        }
        return &DAT_005ee931;
      }
      if (param_1 < 0x31) {
        return &DAT_005ee933;
      }
      if (param_1 < 0x32) {
        return &DAT_005ee935;
      }
      if (param_1 < 0x33) {
        return &DAT_005ee937;
      }
      return &DAT_005ee939;
    }
    if (0xb < param_1) {
      if (param_1 < 0xd) {
        return &DAT_005ee8d0;
      }
      if (param_1 < 0x12) {
        if (param_1 < 0xf) {
          if (param_1 < 0xe) {
            return &DAT_005ee8d2;
          }
          return "BackSpace";
        }
        if (0xf < param_1) {
          if (param_1 < 0x11) {
            return &DAT_005ee8e2;
          }
          return &DAT_005ee8e4;
        }
        return &DAT_005ee8de;
      }
      if (param_1 < 0x13) {
        return &DAT_005ee8e6;
      }
      if (0x14 < param_1) {
        if (param_1 < 0x16) {
          return &DAT_005ee8ec;
        }
        if (param_1 < 0x17) {
          return &DAT_005ee8ee;
        }
        if (param_1 < 0x18) {
          return &DAT_005ee8f0;
        }
        return &DAT_005ee8f2;
      }
      if (param_1 < 0x14) {
        return &DAT_005ee8e8;
      }
      return &DAT_005ee8ea;
    }
    if (5 < param_1) {
      if (param_1 < 7) {
        return &DAT_005ee8c4;
      }
      if (param_1 < 9) {
        if (param_1 < 8) {
          return &DAT_005ee8c6;
        }
        return &DAT_005ee8c8;
      }
      if (param_1 < 10) {
        return &DAT_005ee8ca;
      }
      if (param_1 < 0xb) {
        return &DAT_005ee8cc;
      }
      return &DAT_005ee8ce;
    }
    if (2 < param_1) {
      if (param_1 < 4) {
        return &DAT_005ee8be;
      }
      if (param_1 < 5) {
        return &DAT_005ee8c0;
      }
      return &DAT_005ee8c2;
    }
    if (param_1 != 0) {
      if (1 < param_1) {
        return &DAT_005ee8bc;
      }
      return &DAT_005ee8b8;
    }
  }
  else {
    if (param_1 < 0x35) {
      return &DAT_005ee93b;
    }
    if (param_1 < 0x4d) {
      if (0x3f < param_1) {
        if (param_1 < 0x41) {
          return &DAT_005ee978;
        }
        if (param_1 < 0x46) {
          if (param_1 < 0x43) {
            if (param_1 < 0x42) {
              return &DAT_005ee97b;
            }
            return &DAT_005ee97e;
          }
          if (0x43 < param_1) {
            if (param_1 < 0x45) {
              return &DAT_005ee984;
            }
            return "Pause";
          }
          return &DAT_005ee981;
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
            return &DAT_005ee93d;
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
          return &DAT_005ee96f;
        }
        if (param_1 < 0x3f) {
          return &DAT_005ee972;
        }
        return &DAT_005ee975;
      }
      if (param_1 < 0x3c) {
        return &DAT_005ee969;
      }
      return &DAT_005ee96c;
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
          return &DAT_005eea01;
        }
        if (param_1 == 0x58) {
          return &DAT_005eea05;
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
              return &DAT_005eea38;
            }
            return &DAT_005eea3d;
          }
        }
        else {
          if (param_1 < 0x14a) {
            return &DAT_005eea40;
          }
          if (0x14a < param_1) {
            if (param_1 < 0x14c) {
              return &DAT_005eea45;
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
          return &DAT_005eea50;
        }
        if (param_1 < 0x152) {
          if (param_1 < 0x151) {
            return &DAT_005eea54;
          }
          return &DAT_005eea59;
        }
        if (param_1 < 0x153) {
          return &DAT_005eea5e;
        }
        if (param_1 < 0x200) {
          if (param_1 == 0x153) {
            return &DAT_005eea62;
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
