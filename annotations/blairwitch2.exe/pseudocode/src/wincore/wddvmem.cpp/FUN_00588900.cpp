// Name: wincore_wddvmem.cpp_FUN_00588900
// Address: 00588900
// Address Range: [[00588900, 005889ba]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_FUN_00588900(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_FUN_00588900(void)

{
  if (DAT_00622010 != 0) {
    FUN_005b86a0(DAT_00622010);
    DAT_00622010 = 0;
  }
  if (_DAT_02661af0 != 0) {
    FUN_005b86a0(_DAT_02661af0);
    DAT_0070c62c = 0;
  }
  engine_special_cpp_kill_FUN_0055f4d0();
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
  if (_DAT_02661ae0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02661ae0 + 0x4c))(_DAT_02661ae0);
  (**(code **)(*_DAT_02661ae0 + 8))(_DAT_02661ae0);
  _DAT_02661ae0 = (int *)0x0;
  return;
}
