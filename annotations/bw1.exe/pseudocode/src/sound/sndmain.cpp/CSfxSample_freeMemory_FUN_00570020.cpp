// Name: sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020
// Address: 00570020
// Address Range: [[00570020, 005700dd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample *this_ptr)

{
  CMP3Decoder *pCVar1;
  
  if (this_ptr->ref_count != 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x858;
    core_main_c_FUN_005030e0("SfxSample::freeMemory - freeing sample in use!");
  }
  sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00570260(this_ptr);
  sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00570130(this_ptr);
  sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_005700e0(this_ptr);
  if (*(CMP3Decoder **)&this_ptr->field_0x174 != (CMP3Decoder *)0x0) {
    pCVar1 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_0052ae80(*(CMP3Decoder **)&this_ptr->field_0x174,0);
    FUN_005c0344(pCVar1);
  }
  *(uint *)&this_ptr->field_0x174 = 0;
  unkaddr_0059f520_cpp_FUN_005a0dc0(&this_ptr->field_0x17c);
  (this_ptr->sample_info).name[0] = '\0';
  this_ptr->taken = 0;
  *(uint *)&this_ptr->field_0x15c = 0;
  *(uint *)&this_ptr->field_0x164 = 0;
  *(uint *)&this_ptr->field_0x168 = 0;
  *(uint *)&this_ptr->field_0x160 = 0xffffffff;
  return;
}
