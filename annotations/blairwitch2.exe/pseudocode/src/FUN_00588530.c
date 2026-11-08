// Name: FUN_00588530
// Address: 00588530
// Address Range: [[00588530, 005885db]]
// Convention: unknown
// Signature: undefined4 FUN_00588530(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00588530(void)

{
  int iVar1;
  
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
    iVar1 = (**(code **)(*_DAT_02661ae0 + 0x50))(_DAT_02661ae0,_DAT_02664628,0x11);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}
