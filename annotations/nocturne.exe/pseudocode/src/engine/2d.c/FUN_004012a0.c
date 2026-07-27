// Name: engine_2d.c_FUN_004012a0
// Address: 004012a0
// Address Range: [[004012a0, 004012c5]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_004012a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_2d_c_FUN_004012a0(void)

{
  if (DAT_006afa38 != 0) {
    FUN_005638d0(DAT_006afa38);
    DAT_006afa38 = 0;
    wincore_wddvmem_cpp_FUN_00552cb0();
    return;
  }
  if (DAT_005c5010 != 0) {
    FUN_005638d0(DAT_005c5010);
    DAT_005c5010 = 0;
  }
  if (_DAT_02ddf560 != 0) {
    FUN_005638d0(_DAT_02ddf560);
    DAT_006af62c = 0;
  }
  engine_special_cpp_kill_FUN_005322b0();
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
  if (_DAT_02ddf550 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02ddf550 + 0x4c))(_DAT_02ddf550);
  (**(code **)(*_DAT_02ddf550 + 8))(_DAT_02ddf550);
  _DAT_02ddf550 = (int *)0x0;
  return;
}
