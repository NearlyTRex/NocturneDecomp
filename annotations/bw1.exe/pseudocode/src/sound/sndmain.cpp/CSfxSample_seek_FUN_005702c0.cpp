// Name: sound_sndmain.cpp_CSfxSample_seek_FUN_005702c0
// Address: 005702c0
// Address Range: [[005702c0, 00570452]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_005702c0(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_005702c0(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  
  if (*(int *)&this_ptr->field_0x160 < 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x8de;
    core_main_c_FUN_005030e0();
  }
  dVar3 = sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0
                    (this_ptr,(double)playback_position,0);
  fVar2 = (float10)dVar3;
  round();
  *(int *)&this_ptr->field_0x16c = (int)ROUND(fVar2);
  if (*(int *)&this_ptr->field_0x16c < 0) {
    *(uint *)&this_ptr->field_0x16c = 0;
  }
  if ((dest_buffer_offset < 0) || (*(int *)&this_ptr->field_0x164 <= dest_buffer_offset)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x8e9;
    core_main_c_FUN_005030e0("SfxSample::seek - invalid destPtr");
  }
  *(int *)&this_ptr->field_0x170 = dest_buffer_offset;
  if (*(CMP3Decoder **)&this_ptr->field_0x174 != (CMP3Decoder *)0x0) {
    iVar1 = sound_mp3_cpp_CMP3Decoder_seek_FUN_0052b2b0
                      (*(CMP3Decoder **)&this_ptr->field_0x174,*(int *)&this_ptr->field_0x16c);
    if (iVar1 != 0) {
      return;
    }
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x8f2;
    core_main_c_FUN_005030e0
              ("Error seeking %s to %d",this_ptr,*(uint *)&this_ptr->field_0x16c);
    return;
  }
  iVar1 = unkaddr_0059f520_cpp_FUN_005a0d70(&this_ptr->field_0x17c);
  if (iVar1 != 0) {
    iVar1 = sound_sndmain_cpp_FUN_00572400(this_ptr,*(uint *)&this_ptr->field_0x16c,0);
    unkaddr_0059f520_cpp_FUN_005a0d00(&this_ptr->field_0x17c,iVar1 + *(int *)&this_ptr->field_0x178)
    ;
    return;
  }
  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
  _DAT_01d1d404 = 0x8fd;
  core_main_c_FUN_005030e0();
  return;
}
