// Name: sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270
// Address: 00555270
// Address Range: [[00555270, 00555400]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot *this_ptr)

{
  int *piVar1;
  CSfxSample *this_ptr_00;
  char *pcVar2;
  
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0xca5;
    core_main_c_FUN_004e4330("SfxSlot::kill - must be locked!");
  }
  if (*(int *)&this_ptr->field_0x108 != 0) {
    pcVar2 = "[NULLsamplePtr]";
    if (*(char **)&this_ptr->field_0x68 != (char *)0x0) {
      pcVar2 = *(char **)&this_ptr->field_0x68;
    }
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Killing sfx %s\n",pcVar2);
  }
  if (*(int *)&this_ptr->field_0x60 != 0) {
    if (_DAT_02cf3280 != (int *)0x0) {
      (**(code **)(*_DAT_02cf3280 + 0x50))(_DAT_02cf3280,this_ptr);
    }
    *(uint *)&this_ptr->field_0x60 = 0;
  }
  *(uint *)&this_ptr->field_0x108 = 0;
  *(uint *)&this_ptr->field_0x64 = 0;
  if (*(int *)&this_ptr->field_0x68 != 0) {
    if (*(int *)(*(int *)&this_ptr->field_0x68 + 0x154) < 1) {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0xcc4;
      core_main_c_FUN_004e4330("SfxSlot::kill - ref count out of balance!");
    }
    piVar1 = (int *)(*(int *)&this_ptr->field_0x68 + 0x154);
    *piVar1 = *piVar1 + -1;
    this_ptr_00 = *(CSfxSample **)&this_ptr->field_0x68;
    *(uint *)&this_ptr->field_0x68 = 0;
    if (-1 < *(int *)&this_ptr_00->field_0x160) {
      if (*(int *)&this_ptr_00->field_0x154 != 0) {
        _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
        _DAT_01d71de4 = 0xcd3;
        core_main_c_FUN_004e4330("refCount for streaming Sfx %s > 1",this_ptr_00);
      }
      if ((int)&this_ptr[-0x2879d].field_0x10 / 0x11c != *(int *)&this_ptr_00->field_0x160) {
        _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
        _DAT_01d71de4 = 0xcd4;
        core_main_c_FUN_004e4330("streaming sample sfx index mismatch on %s",this_ptr_00);
      }
      sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(this_ptr_00);
    }
    sound_sndmain_cpp_FUN_005514c0(0);
    *(uint *)&this_ptr_00->field_0x160 = 0xffffffff;
  }
  *(uint *)&this_ptr->field_0x118 = 0;
  return;
}
