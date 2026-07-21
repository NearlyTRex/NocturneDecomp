// Name: sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570
// Address: 00525570
// Address Range: [[00525570, 005256ec]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  if (_DAT_02dc84bc < 1) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0xb14;
    FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    pcVar3 = "[NULLsamplePtr]";
    if (*(char **)(param_1 + 0x74) != (char *)0x0) {
      pcVar3 = *(char **)(param_1 + 0x74);
    }
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"Killing sfx %s\n",pcVar3);
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    if (_DAT_02dc8318 != (int *)0x0) {
      (**(code **)(*_DAT_02dc8318 + 0x4c))(_DAT_02dc8318,param_1);
    }
    *(uint *)(param_1 + 0x6c) = 0;
  }
  *(uint *)(param_1 + 0x114) = 0;
  *(uint *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x74) + 300) < 1) {
      _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
      _DAT_01cc4804 = 0xb33;
      FUN_004c8440("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x74) + 300);
    *piVar1 = *piVar1 + -1;
    iVar2 = *(int *)(param_1 + 0x74);
    *(uint *)(param_1 + 0x74) = 0;
    if (-1 < *(int *)(iVar2 + 0x134)) {
      if (*(int *)(iVar2 + 300) != 0) {
        _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
        _DAT_01cc4804 = 0xb42;
        FUN_004c8440("refCount for streaming Sfx %s > 1",iVar2);
      }
      if ((param_1 + -0x2dbd374) / 0x120 != *(int *)(iVar2 + 0x134)) {
        _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
        _DAT_01cc4804 = 0xb43;
        FUN_004c8440("streaming sample sfx index mismatch on %s",iVar2);
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(iVar2);
    }
    sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_00521ca0(0);
  }
  return;
}
