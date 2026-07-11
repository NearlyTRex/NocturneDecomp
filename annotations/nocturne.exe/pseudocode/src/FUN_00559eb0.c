// Name: FUN_00559eb0
// Address: 00559eb0
// Address Range: [[00559eb0, 0055a005]]
// Convention: unknown
// Signature: void FUN_00559eb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00559eb0(void)

{
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_38;
  uint uStack_30;
  joyinfo_tag local_1c;
  
  if (_DAT_01c0390c != 0) {
    if (_DAT_02de3114 == (code *)0x0) {
      joyGetPos(0,&local_1c);
      _DAT_01c03908 = local_1c.wButtons;
      _DAT_01c038f8 = local_1c.wXpos;
      _DAT_01c038fc = local_1c.wYpos;
      _DAT_01c03904 = local_1c.wZpos;
      return;
    }
    local_4c = 0x83;
    local_50 = 0x34;
    if (_DAT_01c0391c != 0) {
      local_4c = 0xc3;
    }
    if (_DAT_01c03914 != 0) {
      local_4c = local_4c | 4;
    }
    if (_DAT_01c03910 != 0) {
      local_4c = local_4c | 8;
    }
    (*_DAT_02de3114)(0,&local_50);
    _DAT_01c03908 = uStack_38;
    _DAT_01c038f8 = local_50;
    _DAT_01c038fc = local_4c;
    _DAT_01c03900 = uStack_44;
    _DAT_01c03904 = uStack_48;
    if (_DAT_01c0391c != 0) {
      if (uStack_30 < 18000) {
        if (uStack_30 == 0) {
          _DAT_01c03920 = 1;
          return;
        }
        if (uStack_30 == 9000) {
          _DAT_01c03920 = 4;
          return;
        }
      }
      else {
        if (uStack_30 < 0x4651) {
          _DAT_01c03920 = 2;
          return;
        }
        if (26999 < uStack_30) {
          if (27000 < uStack_30) {
            _DAT_01c03920 = 0;
            return;
          }
          _DAT_01c03920 = 3;
          return;
        }
      }
      _DAT_01c03920 = 0;
    }
  }
  return;
}
