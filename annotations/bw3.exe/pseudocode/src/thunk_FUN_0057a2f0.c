// Name: thunk_FUN_0057a2f0
// Address: 00402ad0
// Address Range: [[00402ad0, 00402ad4]]
// Convention: unknown
// Signature: void thunk_FUN_0057a2f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0057a2f0(void)

{
  int iVar1;
  
  _DAT_02d0bcf8 = 0;
  if (_DAT_02cf5fcc == 0) {
    return;
  }
  FUN_00565be0();
  if (_DAT_02d0bcec != (int *)0x0) {
    (**(code **)(*_DAT_02d0bcec + 8))(_DAT_02d0bcec);
    _DAT_02d0bcec = (int *)0x0;
  }
  if (_DAT_02d0bce8 != (int *)0x0) {
    (**(code **)(*_DAT_02d0bce8 + 8))(_DAT_02d0bce8);
    _DAT_02d0bce8 = (int *)0x0;
  }
  if (_DAT_02d0bce4 != (int *)0x0) {
    (**(code **)(*_DAT_02d0bce4 + 8))(_DAT_02d0bce4);
    _DAT_02d0bce4 = (int *)0x0;
  }
  if (_DAT_02d0bce0 != (int *)0x0) {
    (**(code **)(*_DAT_02d0bce0 + 0x4c))(_DAT_02d0bce0);
    (**(code **)(*_DAT_02d0bce0 + 8))(_DAT_02d0bce0);
    _DAT_02d0bce0 = (int *)0x0;
  }
  iVar1 = DirectDrawCreate(0,&DAT_02d0bce0,0);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_02d0bce0 + 0x50))(_DAT_02d0bce0,_DAT_02d21b78,0x11);
  }
  FUN_00579bb0(DAT_005fba18,DAT_005fba1c,DAT_005fba20);
  return;
}
