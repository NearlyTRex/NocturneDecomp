// Name: core_main.c_FUN_004c8440
// Address: 004c8440
// Address Range: [[004c8440, 004c8506]]
// Convention: unknown
// Signature: void core_main_c_FUN_004c8440(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_main_c_FUN_004c8440(uint param_1)

{
  byte uVar1;
  byte extraout_DL;
  uint unaff_EBX;
  char *pcVar2;
  char *pcVar3;
  byte *local_c;
  
  if (_DAT_01cc4808 != 0) {
    notifyAbnormalTermination();
  }
  local_c = &stack0x00000008;
  _DAT_01cc4808 = 1;
  _vsprintf(0x1cc3700,param_1,&local_c);
  local_c = (byte *)0x0;
  pcVar3 = PTR_01cc4800;
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '\\') goto LAB_004c84a6;
    if (*pcVar3 == '\0') goto LAB_004c84a4;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '\\') goto LAB_004c84a6;
    pcVar3 = pcVar3 + 2;
    if (*pcVar2 == '\0') {
LAB_004c84a4:
      pcVar2 = (char *)0x0;
LAB_004c84a6:
      if (pcVar2 == (char *)0x0) {
        core_sound_cpp_FUN_00527e10(0x02DC9450);
        uVar1 = engine_2d_c_FUN_004012a0();
        wincore_winrun_cpp_endPeriod_FUN_00558a20(uVar1,extraout_DL,unaff_EBX);
        wincore_winrun_cpp_FUN_00559500(0x1cc3700);
        return;
      }
      do {
        pcVar3 = PTR_01cc4800;
        if (*PTR_01cc4800 == '\\') goto LAB_004c84fe;
        if (*PTR_01cc4800 == '\0') break;
        pcVar3 = PTR_01cc4800 + 1;
        if (*pcVar3 == '\\') goto LAB_004c84fe;
        PTR_01cc4800 = PTR_01cc4800 + 2;
      } while (*pcVar3 != '\0');
      pcVar3 = (char *)0x0;
LAB_004c84fe:
      pcVar3 = pcVar3 + 1;
      PTR_01cc4800 = pcVar3;
    }
  } while( true );
}
