// Name: FUN_005030e0
// Address: 005030e0
// Address Range: [[005030e0, 005031a6]]
// Convention: unknown
// Signature: void FUN_005030e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005030e0(uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte *local_c;
  
  if (_DAT_01d1d408 != 0) {
    FUN_005c3140();
  }
  local_c = &stack0x00000008;
  _DAT_01d1d408 = 1;
  FUN_005bfb18(0x1d1c300,param_1,&local_c);
  local_c = (byte *)0x0;
  pcVar2 = _DAT_01d1d400;
  do {
    pcVar1 = pcVar2;
    if (*pcVar2 == '\\') goto LAB_00503146;
    if (*pcVar2 == '\0') goto LAB_00503144;
    pcVar1 = pcVar2 + 1;
    if (*pcVar1 == '\\') goto LAB_00503146;
    pcVar2 = pcVar2 + 2;
    if (*pcVar1 == '\0') {
LAB_00503144:
      pcVar1 = (char *)0x0;
LAB_00503146:
      if (pcVar1 == (char *)0x0) {
        thunk_FUN_00574ea0(0x02C82A60);
        thunk_FUN_005ac1b0();
        FUN_005b2410();
        FUN_005b3080(0x1d1c300);
        return;
      }
      do {
        pcVar2 = _DAT_01d1d400;
        if (*_DAT_01d1d400 == '\\') goto LAB_0050319e;
        if (*_DAT_01d1d400 == '\0') break;
        pcVar2 = _DAT_01d1d400 + 1;
        if (*pcVar2 == '\\') goto LAB_0050319e;
        _DAT_01d1d400 = _DAT_01d1d400 + 2;
      } while (*pcVar2 != '\0');
      pcVar2 = (char *)0x0;
LAB_0050319e:
      pcVar2 = pcVar2 + 1;
      _DAT_01d1d400 = pcVar2;
    }
  } while( true );
}
