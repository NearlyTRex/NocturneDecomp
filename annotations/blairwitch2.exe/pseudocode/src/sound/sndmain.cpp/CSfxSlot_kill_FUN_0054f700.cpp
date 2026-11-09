// Name: sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
// Address: 0054f700
// Address Range: [[0054f700, 0054f890]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot *this_ptr)

{
  int *piVar1;
  CSfxSample *this_ptr_00;
  char *pcVar2;
  
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xca3;
    core_main_c_FUN_004e4500("SfxSlot::kill - must be locked!");
  }
  if (*(int *)&this_ptr->field_0x108 != 0) {
    pcVar2 = "[NULLsamplePtr]";
    if (*(char **)&this_ptr->field_0x68 != (char *)0x0) {
      pcVar2 = *(char **)&this_ptr->field_0x68;
    }
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"Killing sfx %s\n",pcVar2);
  }
  if (*(int *)&this_ptr->field_0x60 != 0) {
    if (_DAT_02648e80 != (int *)0x0) {
      (**(code **)(*_DAT_02648e80 + 0x50))(_DAT_02648e80,this_ptr);
    }
    *(uint *)&this_ptr->field_0x60 = 0;
  }
  *(uint *)&this_ptr->field_0x108 = 0;
  *(uint *)&this_ptr->field_0x64 = 0;
  if (*(int *)&this_ptr->field_0x68 != 0) {
    if (*(int *)(*(int *)&this_ptr->field_0x68 + 0x154) < 1) {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0xcc2;
      core_main_c_FUN_004e4500("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = (int *)(*(int *)&this_ptr->field_0x68 + 0x154);
    *piVar1 = *piVar1 + -1;
    this_ptr_00 = *(CSfxSample **)&this_ptr->field_0x68;
    *(uint *)&this_ptr->field_0x68 = 0;
    if (-1 < *(int *)&this_ptr_00->field_0x160) {
      if (*(int *)&this_ptr_00->field_0x154 != 0) {
        _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
        _DAT_01d046a4 = 0xcd1;
        core_main_c_FUN_004e4500("refCount for streaming Sfx %s > 1",this_ptr_00);
      }
      if ((int)&this_ptr[-0x2277e].field_0xac / 0x11c != *(int *)&this_ptr_00->field_0x160) {
        _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
        _DAT_01d046a4 = 0xcd2;
        core_main_c_FUN_004e4500("streaming sample sfx index mismatch on %s",this_ptr_00);
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(this_ptr_00);
    }
    sound_sndmain_cpp_FUN_0054b960(0);
    *(uint *)&this_ptr_00->field_0x160 = 0xffffffff;
  }
  *(uint *)&this_ptr->field_0x118 = 0;
  return;
}
