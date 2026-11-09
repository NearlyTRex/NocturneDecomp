// Name: sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520
// Address: 00553520
// Address Range: [[00553520, 005535dd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample *this_ptr)

{
  CMP3Decoder *pCVar1;
  
  if (*(int *)&this_ptr->field_0x154 != 0) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x85a;
    core_main_c_FUN_004e4330("SfxSample::freeMemory - freeing sample in use!");
  }
  sound_sndmain_cpp_FUN_00553760(this_ptr);
  sound_sndmain_cpp_FUN_00553630(this_ptr);
  sound_sndmain_cpp_FUN_005535e0(this_ptr);
  if (*(CMP3Decoder **)&this_ptr->field_0x174 != (CMP3Decoder *)0x0) {
    pCVar1 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00502790(*(CMP3Decoder **)&this_ptr->field_0x174,0);
    FUN_005a30c4(pCVar1);
  }
  *(uint *)&this_ptr->field_0x174 = 0;
  unkafter_turret_cpp_FUN_00573db0(&this_ptr->field_0x17c);
  *(byte *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x150 = 0;
  *(uint *)&this_ptr->field_0x15c = 0;
  *(uint *)&this_ptr->field_0x164 = 0;
  *(uint *)&this_ptr->field_0x168 = 0;
  *(uint *)&this_ptr->field_0x160 = 0xffffffff;
  return;
}
