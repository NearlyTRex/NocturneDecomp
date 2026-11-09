// Name: sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70
// Address: 00571d70
// Address Range: [[00571d70, 00571f00]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(CSfxSlot *this_ptr)

{
  int *piVar1;
  CSfxSample *this_ptr_00;
  char *pcVar2;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xca3;
    core_main_c_FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  if (*(int *)&this_ptr->field_0x108 != 0) {
    pcVar2 = "[NULLsamplePtr]";
    if (*(char **)&this_ptr->field_0x68 != (char *)0x0) {
      pcVar2 = *(char **)&this_ptr->field_0x68;
    }
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"Killing sfx %s\n",pcVar2);
  }
  if (*(int *)&this_ptr->field_0x60 != 0) {
    if (_DAT_02c80650 != (int *)0x0) {
      (**(code **)(*_DAT_02c80650 + 0x50))(_DAT_02c80650,this_ptr);
    }
    *(uint *)&this_ptr->field_0x60 = 0;
  }
  *(uint *)&this_ptr->field_0x108 = 0;
  *(uint *)&this_ptr->field_0x64 = 0;
  if (*(int *)&this_ptr->field_0x68 != 0) {
    if (*(int *)(*(int *)&this_ptr->field_0x68 + 0x154) < 1) {
      _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
      _DAT_01d1d404 = 0xcc2;
      core_main_c_FUN_005030e0("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = (int *)(*(int *)&this_ptr->field_0x68 + 0x154);
    *piVar1 = *piVar1 + -1;
    this_ptr_00 = *(CSfxSample **)&this_ptr->field_0x68;
    *(uint *)&this_ptr->field_0x68 = 0;
    if (-1 < *(int *)&this_ptr_00->field_0x160) {
      if (*(int *)&this_ptr_00->field_0x154 != 0) {
        _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
        _DAT_01d1d404 = 0xcd1;
        core_main_c_FUN_005030e0("refCount for streaming Sfx %s > 1",this_ptr_00);
      }
      if ((int)&this_ptr[-0x28126].field_0x3c / 0x11c != *(int *)&this_ptr_00->field_0x160) {
        _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
        _DAT_01d1d404 = 0xcd2;
        core_main_c_FUN_005030e0("streaming sample sfx index mismatch on %s",this_ptr_00);
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(this_ptr_00);
    }
    sound_sndmain_cpp_FUN_0056dfd0(0);
    *(uint *)&this_ptr_00->field_0x160 = 0xffffffff;
  }
  *(uint *)&this_ptr->field_0x118 = 0;
  return;
}
