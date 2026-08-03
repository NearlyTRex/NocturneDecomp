// Name: core_netgame.cpp_allocSimFrame_FUN_004e9730
// Address: 004e9730
// Address Range: [[004e9730, 004e97db]]
// Convention: __cdecl
// Signature: SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_004e9730(int sequence_number)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSimFrame * __cdecl core_netgame_cpp_allocSimFrame_FUN_004e9730(int sequence_number)

{
  int iVar1;
  int iVar2;
  SSimFrame *dest;
  
  iVar2 = 0;
  if (0 < _DAT_01d09c00) {
    iVar1 = 0;
    do {
      if (sequence_number == *(int *)(iVar1 + 0x1d09c04)) {
        if (-1 < iVar2) {
          return (SSimFrame *)(iVar1 + 0x1d09c04);
        }
        break;
      }
      iVar1 = iVar1 + 100;
      iVar2 = iVar2 + 1;
    } while (iVar1 < _DAT_01d09c00 * 100);
  }
  if (0x1ff < _DAT_01d09c00) {
    g_CHAR_PTR_01cc4800 = "..\\core\\netgame.cpp";
    g_INT_01cc4804 = 299;
    core_main_c_FUN_004c8440("allocSimFrame - sim history list full");
  }
  dest = (SSimFrame *)(_DAT_01d09c00 * 100 + 0x1d09c04);
  _DAT_01d09c00 = _DAT_01d09c00 + 1;
  memset(dest,0,100);
  dest->sequence_number = sequence_number;
  return dest;
}
