// Name: core_netgame.cpp_allocSimFrame_FUN_0050b160
// Address: 0050b160
// Address Range: [[0050b160, 0050b20b]]
// Convention: __cdecl
// Signature: SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_0050b160(int sequence_number)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_0050b160(int sequence_number)

{
  int iVar1;
  int iVar2;
  SSimFrame *dest;
  
  iVar2 = 0;
  if (0 < _DAT_01d54640) {
    iVar1 = 0;
    do {
      if (sequence_number == *(int *)(iVar1 + 0x1d54644)) {
        if (-1 < iVar2) {
          return (SSimFrame *)(iVar1 + 0x1d54644);
        }
        break;
      }
      iVar1 = iVar1 + 0x74;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01d54640 * 0x74);
  }
  if (0x1ff < _DAT_01d54640) {
    _DAT_01d046a0 = "..\\core\\netgame.cpp";
    _DAT_01d046a4 = 299;
    core_main_c_FUN_004e4500("allocSimFrame - sim history list full");
  }
  dest = (SSimFrame *)(_DAT_01d54640 * 0x74 + 0x1d54644);
  _DAT_01d54640 = _DAT_01d54640 + 1;
  memset(dest,0,0x74);
  dest->sequence_number = sequence_number;
  return dest;
}
