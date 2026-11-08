// Name: FUN_00588ff0
// Address: 00588ff0
// Address Range: [[00588ff0, 005890bd]]
// Convention: unknown
// Signature: void FUN_00588ff0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00588ff0(void)

{
  int iVar1;
  
  _DAT_02661af8 = 0;
  if (_DAT_0264bba0 == 0) {
    return;
  }
  FUN_0055f8c0();
  if (_DAT_02661aec != (int *)0x0) {
    (**(code **)(*_DAT_02661aec + 8))(_DAT_02661aec);
    _DAT_02661aec = (int *)0x0;
  }
  if (_DAT_02661ae8 != (int *)0x0) {
    (**(code **)(*_DAT_02661ae8 + 8))(_DAT_02661ae8);
    _DAT_02661ae8 = (int *)0x0;
  }
  if (_DAT_02661ae4 != (int *)0x0) {
    (**(code **)(*_DAT_02661ae4 + 8))(_DAT_02661ae4);
    _DAT_02661ae4 = (int *)0x0;
  }
  if (_DAT_02661ae0 != (int *)0x0) {
    (**(code **)(*_DAT_02661ae0 + 0x4c))(_DAT_02661ae0);
    (**(code **)(*_DAT_02661ae0 + 8))(_DAT_02661ae0);
    _DAT_02661ae0 = (int *)0x0;
  }
  iVar1 = DirectDrawCreate(0,&DAT_02661ae0,0);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_02661ae0 + 0x50))(_DAT_02661ae0,_DAT_02664628,0x11);
  }
  FUN_00588a50(DAT_006141b8,DAT_006141bc,DAT_006141c0);
  return;
}
