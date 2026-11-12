// Name: core_netgame.cpp_allocSimFrame_FUN_0052c32e
// Address: 0052c32e
// Address Range: [[0052c32e, 0052c3e5]]
// Convention: __cdecl
// Signature: SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_0052c32e(int sequence_number)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_0052c32e(int sequence_number)

{
  int iVar1;
  int iVar2;
  SSimFrame *dest;
  
  iVar2 = 0;
  if (0 < _DAT_01d715a8) {
    iVar1 = 0;
    do {
      if (sequence_number == *(int *)(iVar1 + 0x1d715ac)) {
        if (-1 < iVar2) {
          return (SSimFrame *)(iVar1 + 0x1d715ac);
        }
        break;
      }
      iVar1 = iVar1 + 0x6c;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01d715a8 * 0x6c);
  }
  if (0x1ff < _DAT_01d715a8) {
    _DAT_01d1d400 = "..\\core\\netgame.cpp";
    _DAT_01d1d404 = 299;
    core_main_c_FUN_005030e0("allocSimFrame - sim history list full");
  }
  dest = (SSimFrame *)(_DAT_01d715a8 * 0x6c + 0x1d715ac);
  _DAT_01d715a8 = _DAT_01d715a8 + 1;
  memset(dest,0,0x6c);
  dest->sequence_number = sequence_number;
  return dest;
}
