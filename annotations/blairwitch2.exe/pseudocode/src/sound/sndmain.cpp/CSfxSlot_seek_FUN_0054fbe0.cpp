// Name: sound_sndmain.cpp_CSfxSlot_seek_FUN_0054fbe0
// Address: 0054fbe0
// Address Range: [[0054fbe0, 0054fcc4]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_0054fbe0(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_0054fbe0(CSfxSlot *this_ptr)

{
  CSfxSample *pCVar1;
  float10 fVar2;
  double dVar3;
  int dest_buffer_offset;
  
  if (this_ptr->sample == (CSfxSample *)0x0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xd75;
    core_main_c_FUN_004e4500("SfxSlot::seek - no sample?!");
  }
  dVar3 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0
                    (&this_ptr->sample->sample_info,*(double *)&(this_ptr->options).field_0x50,
                     *(uint *)&(this_ptr->options).field_0x58,0);
  *(uint *)&(this_ptr->options).field_0x58 = 0;
  *(double *)&(this_ptr->options).field_0x50 = dVar3;
  dVar3 = sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_0054ff30
                    (this_ptr->sample,*(double *)&(this_ptr->options).field_0x50,
                     *(uint *)&(this_ptr->options).field_0x58);
  pCVar1 = this_ptr->sample;
  *(double *)&(this_ptr->options).field_0x50 = dVar3;
  if (*(int *)&pCVar1->field_0x160 < 0) {
    *(uint *)&this_ptr->field_0x10c = *(uint *)&(this_ptr->options).field_0x50;
    this_ptr->fade_time_remaining = *(float *)&(this_ptr->options).field_0x54;
    return;
  }
  fVar2 = (float10)*(double *)&(this_ptr->options).field_0x50;
  dest_buffer_offset = 0;
  pCVar1 = (CSfxSample *)round();
  sound_sndmain_cpp_CSfxSample_seek_FUN_0054dc50(pCVar1,(int)ROUND(fVar2),dest_buffer_offset);
  *(double *)&this_ptr->field_0x10c = (double)*(int *)&this_ptr->sample->field_0x170;
  return;
}
