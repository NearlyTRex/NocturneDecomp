// Name: wincore_wddvmem.cpp_FUN_00552b40
// Address: 00552b40
// Address Range: [[00552b40, 00552ca4]]
// Convention: unknown
// Signature: undefined4 wincore_wddvmem_cpp_FUN_00552b40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint wincore_wddvmem_cpp_FUN_00552b40(void)

{
  int iVar1;
  
  DAT_005c5010 = malloc
                           (((int)((DAT_005b7624 + (DAT_005b7624 >> 0x1f) * -8) -
                                  (uint)((DAT_005b7624 >> 0x1f) << 2 < 0)) >> 3) *
                            DAT_005b761c * DAT_005b7620);
  if (DAT_005c5010 == (void *)0x0) {
    PTR_01cc4800 = "..\\wincore\\wddvmem.cpp";
    INT_01cc4804 = 0xea;
    core_main_c_FUN_004c8440("WDDVMEM: Fatal - out of frame buffer memory");
  }
  _DAT_02ddf560 = malloc(DAT_005b761c * DAT_005b7620 * 4 + 0x40);
  if (_DAT_02ddf560 == (void *)0x0) {
    PTR_01cc4800 = "..\\wincore\\wddvmem.cpp";
    INT_01cc4804 = 0xef;
    core_main_c_FUN_004c8440("WDDVMEM: Fatal - out of Z buffer memory");
  }
  DAT_006af62c = (int)_DAT_02ddf560 + 0x10U & 0xfffffff0;
  if (_DAT_02ddf55c != (int *)0x0) {
    (**(code **)(*_DAT_02ddf55c + 8))(_DAT_02ddf55c);
    _DAT_02ddf55c = (int *)0x0;
  }
  if (_DAT_02ddf558 != (int *)0x0) {
    (**(code **)(*_DAT_02ddf558 + 8))(_DAT_02ddf558);
    _DAT_02ddf558 = (int *)0x0;
  }
  if (_DAT_02ddf554 != (int *)0x0) {
    (**(code **)(*_DAT_02ddf554 + 8))(_DAT_02ddf554);
    _DAT_02ddf554 = (int *)0x0;
  }
  if (_DAT_02ddf550 != (int *)0x0) {
    (**(code **)(*_DAT_02ddf550 + 0x4c))(_DAT_02ddf550);
    (**(code **)(*_DAT_02ddf550 + 8))(_DAT_02ddf550);
    _DAT_02ddf550 = (int *)0x0;
  }
  iVar1 = DirectDrawCreate(0,&DAT_02ddf550,0);
  if (iVar1 == 0) {
    (**(code **)(*_DAT_02ddf550 + 0x50))(_DAT_02ddf550,_DAT_02de2098,0x11);
  }
  engine_special_cpp_loadExternalRenderer_FUN_00531780(_DAT_02de2098);
  return 1;
}
