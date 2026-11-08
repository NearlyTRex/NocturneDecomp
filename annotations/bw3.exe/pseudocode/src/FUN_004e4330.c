// Name: FUN_004e4330
// Address: 004e4330
// Address Range: [[004e4330, 004e43f6]]
// Convention: unknown
// Signature: void FUN_004e4330(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e4330(uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte *local_c;
  
  if (_DAT_01d71de8 != 0) {
    FUN_005a5fb0();
  }
  local_c = &stack0x00000008;
  _DAT_01d71de8 = 1;
  FUN_005a2898(0x1d70ce0,param_1,&local_c);
  local_c = (byte *)0x0;
  pcVar2 = _DAT_01d71de0;
  do {
    pcVar1 = pcVar2;
    if (*pcVar2 == '\\') goto LAB_004e4396;
    if (*pcVar2 == '\0') goto LAB_004e4394;
    pcVar1 = pcVar2 + 1;
    if (*pcVar1 == '\\') goto LAB_004e4396;
    pcVar2 = pcVar2 + 2;
    if (*pcVar1 == '\0') {
LAB_004e4394:
      pcVar1 = (char *)0x0;
LAB_004e4396:
      if (pcVar1 == (char *)0x0) {
        thunk_FUN_00558010(0x02CF5680);
        thunk_FUN_00579a60();
        FUN_00580690();
        FUN_00581300(0x1d70ce0);
        return;
      }
      do {
        pcVar2 = _DAT_01d71de0;
        if (*_DAT_01d71de0 == '\\') goto LAB_004e43ee;
        if (*_DAT_01d71de0 == '\0') break;
        pcVar2 = _DAT_01d71de0 + 1;
        if (*pcVar2 == '\\') goto LAB_004e43ee;
        _DAT_01d71de0 = _DAT_01d71de0 + 2;
      } while (*pcVar2 != '\0');
      pcVar2 = (char *)0x0;
LAB_004e43ee:
      pcVar2 = pcVar2 + 1;
      _DAT_01d71de0 = pcVar2;
    }
  } while( true );
}
