// Name: FUN_00581360
// Address: 00581360
// Address Range: [[00581360, 0058191e]]
// Convention: unknown
// Signature: char * FUN_00581360(uint param_1)

#include "nocturne.h"

char * FUN_00581360(uint param_1)

{
  if (param_1 < 0x34) {
    if (0x18 < param_1) {
      if (param_1 < 0x1a) {
        return &DAT_005d7ced;
      }
      if (param_1 < 0x26) {
        if (param_1 < 0x1f) {
          if (param_1 < 0x1c) {
            if (param_1 < 0x1b) {
              return &DAT_005d7cef;
            }
            return &DAT_005d7cf1;
          }
          if (0x1c < param_1) {
            if (param_1 < 0x1e) {
              return "LeftCtrl";
            }
            return &DAT_005d7d02;
          }
          return "Enter";
        }
        if (param_1 < 0x20) {
          return &DAT_005d7d04;
        }
        if (0x21 < param_1) {
          if (param_1 < 0x23) {
            return &DAT_005d7d0a;
          }
          if (param_1 < 0x24) {
            return &DAT_005d7d0c;
          }
          if (param_1 < 0x25) {
            return &DAT_005d7d0e;
          }
          return &DAT_005d7d10;
        }
        if (param_1 < 0x21) {
          return &DAT_005d7d06;
        }
        return &DAT_005d7d08;
      }
      if (param_1 < 0x27) {
        return &DAT_005d7d12;
      }
      if (param_1 < 0x2d) {
        if (param_1 < 0x29) {
          if (param_1 < 0x28) {
            return &DAT_005d7d14;
          }
          return &DAT_005d7d16;
        }
        if (param_1 < 0x2a) {
          return &DAT_005d7d18;
        }
        if (param_1 < 0x2b) {
          return "LeftShift";
        }
        if (param_1 == 0x2c) {
          return &DAT_005d7d24;
        }
        return "(invalid key)";
      }
      if (param_1 < 0x2e) {
        return &DAT_005d7d26;
      }
      if (param_1 < 0x30) {
        if (param_1 < 0x2f) {
          return &DAT_005d7d28;
        }
        return &DAT_005d7d2a;
      }
      if (param_1 < 0x31) {
        return &DAT_005d7d2c;
      }
      if (param_1 < 0x32) {
        return &DAT_005d7d2e;
      }
      if (param_1 < 0x33) {
        return &DAT_005d7d30;
      }
      return &DAT_005d7d32;
    }
    if (0xb < param_1) {
      if (param_1 < 0xd) {
        return &DAT_005d7cc9;
      }
      if (param_1 < 0x12) {
        if (param_1 < 0xf) {
          if (param_1 < 0xe) {
            return &DAT_005d7ccb;
          }
          return "BackSpace";
        }
        if (0xf < param_1) {
          if (param_1 < 0x11) {
            return &DAT_005d7cdb;
          }
          return &DAT_005d7cdd;
        }
        return &DAT_005d7cd7;
      }
      if (param_1 < 0x13) {
        return &DAT_005d7cdf;
      }
      if (0x14 < param_1) {
        if (param_1 < 0x16) {
          return &DAT_005d7ce5;
        }
        if (param_1 < 0x17) {
          return &DAT_005d7ce7;
        }
        if (param_1 < 0x18) {
          return &DAT_005d7ce9;
        }
        return &DAT_005d7ceb;
      }
      if (param_1 < 0x14) {
        return &DAT_005d7ce1;
      }
      return &DAT_005d7ce3;
    }
    if (5 < param_1) {
      if (param_1 < 7) {
        return &DAT_005d7cbd;
      }
      if (param_1 < 9) {
        if (param_1 < 8) {
          return &DAT_005d7cbf;
        }
        return &DAT_005d7cc1;
      }
      if (param_1 < 10) {
        return &DAT_005d7cc3;
      }
      if (param_1 < 0xb) {
        return &DAT_005d7cc5;
      }
      return &DAT_005d7cc7;
    }
    if (2 < param_1) {
      if (param_1 < 4) {
        return &DAT_005d7cb7;
      }
      if (param_1 < 5) {
        return &DAT_005d7cb9;
      }
      return &DAT_005d7cbb;
    }
    if (param_1 != 0) {
      if (1 < param_1) {
        return &DAT_005d7cb5;
      }
      return &DAT_005d7cb1;
    }
  }
  else {
    if (param_1 < 0x35) {
      return &DAT_005d7d34;
    }
    if (param_1 < 0x4d) {
      if (0x3f < param_1) {
        if (param_1 < 0x41) {
          return &DAT_005d7d71;
        }
        if (param_1 < 0x46) {
          if (param_1 < 0x43) {
            if (param_1 < 0x42) {
              return &DAT_005d7d74;
            }
            return &DAT_005d7d77;
          }
          if (0x43 < param_1) {
            if (param_1 < 0x45) {
              return &DAT_005d7d7d;
            }
            return "Pause";
          }
          return &DAT_005d7d7a;
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
            return &DAT_005d7d36;
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
          return &DAT_005d7d68;
        }
        if (param_1 < 0x3f) {
          return &DAT_005d7d6b;
        }
        return &DAT_005d7d6e;
      }
      if (param_1 < 0x3c) {
        return &DAT_005d7d62;
      }
      return &DAT_005d7d65;
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
          return &DAT_005d7dfa;
        }
        if (param_1 == 0x58) {
          return &DAT_005d7dfe;
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
              return &DAT_005d7e31;
            }
            return &DAT_005d7e36;
          }
        }
        else {
          if (param_1 < 0x14a) {
            return &DAT_005d7e39;
          }
          if (0x14a < param_1) {
            if (param_1 < 0x14c) {
              return &DAT_005d7e3e;
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
          return &DAT_005d7e49;
        }
        if (param_1 < 0x152) {
          if (param_1 < 0x151) {
            return &DAT_005d7e4d;
          }
          return &DAT_005d7e52;
        }
        if (param_1 < 0x153) {
          return &DAT_005d7e57;
        }
        if (param_1 < 0x200) {
          if (param_1 == 0x153) {
            return &DAT_005d7e5b;
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
