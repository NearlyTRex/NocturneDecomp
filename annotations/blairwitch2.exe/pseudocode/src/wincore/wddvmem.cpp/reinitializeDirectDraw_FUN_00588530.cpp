// Name: wincore_wddvmem.cpp_reinitializeDirectDraw_FUN_00588530
// Address: 00588530
// Address Range: [[00588530, 005885db]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_00588530(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_wddvmem_cpp_reinitializeDirectDraw_FUN_00588530(void)

{
  HRESULT HVar1;
  int iVar2;
  
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
  HVar1 = DirectDrawCreate((GUID *)0x0,(LPDIRECTDRAW *)&DAT_02661ae0,(IUnknown *)0x0);
  if (HVar1 == 0) {
    iVar2 = (**(code **)(*_DAT_02661ae0 + 0x50))(_DAT_02661ae0,_DAT_02664628,0x11);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}
