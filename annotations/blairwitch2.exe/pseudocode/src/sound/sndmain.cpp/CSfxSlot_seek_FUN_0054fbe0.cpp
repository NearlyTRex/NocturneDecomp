// Name: sound_sndmain.cpp_CSfxSlot_seek_FUN_0054fbe0
// Address: 0054fbe0
// Address Range: [[0054fbe0, 0054fcc4]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_0054fbe0(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_0054fbe0(CSfxSlot *this_ptr)

{
  CSfxSample *this_ptr_00;
  float10 fVar1;
  double dVar2;
  int dest_buffer_offset;
  
  if (*(int *)&this_ptr->field_0x68 == 0) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0xd75;
    core_main_c_FUN_004e4500("SfxSlot::seek - no sample?!");
  }
  dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0
                    (*(CSampleInfo **)&this_ptr->field_0x68,*(double *)&this_ptr->field_0x50,
                     *(uint *)&this_ptr->field_0x58,0);
  *(uint *)&this_ptr->field_0x58 = 0;
  *(double *)&this_ptr->field_0x50 = dVar2;
  dVar2 = sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_0054ff30
                    (*(CSfxSample **)&this_ptr->field_0x68,*(double *)&this_ptr->field_0x50,
                     *(uint *)&this_ptr->field_0x58);
  *(double *)&this_ptr->field_0x50 = dVar2;
  if (*(int *)(*(int *)&this_ptr->field_0x68 + 0x160) < 0) {
    *(uint *)&this_ptr->field_0x10c = *(uint *)&this_ptr->field_0x50;
    *(uint *)&this_ptr->field_0x110 = *(uint *)&this_ptr->field_0x54;
    return;
  }
  fVar1 = (float10)*(double *)&this_ptr->field_0x50;
  dest_buffer_offset = 0;
  this_ptr_00 = (CSfxSample *)round();
  sound_sndmain_cpp_CSfxSample_seek_FUN_0054dc50(this_ptr_00,(int)ROUND(fVar1),dest_buffer_offset);
  *(double *)&this_ptr->field_0x10c = (double)*(int *)(*(int *)&this_ptr->field_0x68 + 0x170);
  return;
}
