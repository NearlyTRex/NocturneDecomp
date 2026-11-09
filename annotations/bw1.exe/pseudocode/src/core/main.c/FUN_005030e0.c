// Name: core_main.c_FUN_005030e0
// Address: 005030e0
// Address Range: [[005030e0, 005031a6]]
// Convention: unknown
// Signature: void core_main_c_FUN_005030e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_main_c_FUN_005030e0(uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte *local_c;
  
  if (_DAT_01d1d408 != 0) {
    notifyAbnormalTermination();
  }
  local_c = &stack0x00000008;
  _DAT_01d1d408 = 1;
  _vsprintf(0x1d1c300,param_1,&local_c);
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
        sound_sndmain_cpp_shutdownSoundSystem_FUN_0057cb90();
        engine_2d_c_cleanupGraphicsSystem_FUN_00401120();
        wincore_winrun_cpp_endPeriod_FUN_005b2410();
        wincore_winrun_cpp_FUN_005b3080((char *)0x1d1c300);
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
