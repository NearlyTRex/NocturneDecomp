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
  CSfxSample *pCVar2;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xca3;
    core_main_c_FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  if (*(int *)&this_ptr->field_0x108 != 0) {
    pCVar2 = (CSfxSample *)"[NULLsamplePtr]";
    if (this_ptr->sample != (CSfxSample *)0x0) {
      pCVar2 = this_ptr->sample;
    }
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"Killing sfx %s\n",pCVar2);
  }
  if (this_ptr->hardware_buffer_handle != 0) {
    if (_DAT_02c80650 != (int *)0x0) {
      (**(code **)(*_DAT_02c80650 + 0x50))(_DAT_02c80650,this_ptr);
    }
    this_ptr->hardware_buffer_handle = 0;
  }
  *(uint *)&this_ptr->field_0x108 = 0;
  this_ptr->playback_state = 0;
  if (this_ptr->sample != (CSfxSample *)0x0) {
    if (this_ptr->sample->ref_count < 1) {
      _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
      _DAT_01d1d404 = 0xcc2;
      core_main_c_FUN_005030e0("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = &this_ptr->sample->ref_count;
    *piVar1 = *piVar1 + -1;
    pCVar2 = this_ptr->sample;
    this_ptr->sample = (CSfxSample *)0x0;
    if (-1 < *(int *)&pCVar2->field_0x160) {
      if (pCVar2->ref_count != 0) {
        _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
        _DAT_01d1d404 = 0xcd1;
        core_main_c_FUN_005030e0("refCount for streaming Sfx %s > 1",pCVar2);
      }
      if ((int)&this_ptr[-0x28126].options.field_0x3c / 0x11c != *(int *)&pCVar2->field_0x160) {
        _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
        _DAT_01d1d404 = 0xcd2;
        core_main_c_FUN_005030e0("streaming sample sfx index mismatch on %s",pCVar2);
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(pCVar2);
    }
    sound_sndmain_cpp_FUN_0056dfd0(0);
    *(uint *)&pCVar2->field_0x160 = 0xffffffff;
  }
  *(uint *)&this_ptr->field_0x118 = 0;
  return;
}
