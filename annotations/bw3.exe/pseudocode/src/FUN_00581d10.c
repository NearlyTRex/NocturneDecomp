// Name: FUN_00581d10
// Address: 00581d10
// Address Range: [[00581d10, 00581e65]]
// Convention: unknown
// Signature: void FUN_00581d10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00581d10(void)

{
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_38;
  uint uStack_30;
  joyinfo_tag local_1c;
  
  if (_DAT_01c6e264 != 0) {
    if (_DAT_02d22c1c == (code *)0x0) {
      joyGetPos(0,&local_1c);
      _DAT_01c6e260 = local_1c.wButtons;
      _DAT_01c6e250 = local_1c.wXpos;
      _DAT_01c6e254 = local_1c.wYpos;
      _DAT_01c6e25c = local_1c.wZpos;
      return;
    }
    local_4c = 0x83;
    local_50 = 0x34;
    if (_DAT_01c6e274 != 0) {
      local_4c = 0xc3;
    }
    if (_DAT_01c6e26c != 0) {
      local_4c = local_4c | 4;
    }
    if (_DAT_01c6e268 != 0) {
      local_4c = local_4c | 8;
    }
    (*_DAT_02d22c1c)(0,&local_50);
    _DAT_01c6e260 = uStack_38;
    _DAT_01c6e250 = local_50;
    _DAT_01c6e254 = local_4c;
    _DAT_01c6e258 = uStack_44;
    _DAT_01c6e25c = uStack_48;
    if (_DAT_01c6e274 != 0) {
      if (uStack_30 < 18000) {
        if (uStack_30 == 0) {
          _DAT_01c6e278 = 1;
          return;
        }
        if (uStack_30 == 9000) {
          _DAT_01c6e278 = 4;
          return;
        }
      }
      else {
        if (uStack_30 < 0x4651) {
          _DAT_01c6e278 = 2;
          return;
        }
        if (26999 < uStack_30) {
          if (27000 < uStack_30) {
            _DAT_01c6e278 = 0;
            return;
          }
          _DAT_01c6e278 = 3;
          return;
        }
      }
      _DAT_01c6e278 = 0;
    }
  }
  return;
}
