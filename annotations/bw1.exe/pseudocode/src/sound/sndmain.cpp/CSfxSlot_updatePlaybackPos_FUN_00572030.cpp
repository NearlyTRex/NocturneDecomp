// Name: sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00572030
// Address: 00572030
// Address Range: [[00572030, 00572242]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00572030(CSfxSlot *this_ptr,double hardware_playback_pos)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_00572030(CSfxSlot *this_ptr,double hardware_playback_pos)

{
  CSfxSample *this_ptr_00;
  double dVar1;
  int iVar2;
  double dVar3;
  ulonglong local_28;
  
  if (*(int *)&this_ptr->field_0x68 == 0) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xd34;
    core_main_c_FUN_005030e0();
  }
  if ((hardware_playback_pos < 0.0) ||
     ((double)*(int *)(*(int *)&this_ptr->field_0x68 + 0x164) < hardware_playback_pos)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xd3a;
    core_main_c_FUN_005030e0();
  }
  local_28 = hardware_playback_pos - *(double *)&this_ptr->field_0x10c;
  if (local_28 < 0.0) {
    local_28 = (double)*(int *)(*(int *)&this_ptr->field_0x68 + 0x164) + local_28;
  }
  if ((local_28 < 0.0) ||
     ((double)*(int *)(*(int *)&this_ptr->field_0x68 + 0x164) + _DAT_005f3bd0 < local_28)) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xd48;
    core_main_c_FUN_005030e0
              ("SfxSlot::updatePlaybackPos - stepped too much: %f-%f=%f, sample=%d (%s)",hardware_playback_pos,
               *(uint *)&this_ptr->field_0x10c,*(uint *)&this_ptr->field_0x110,
               (uint)local_28,local_28._4_4_,
               *(uint *)(*(int *)&this_ptr->field_0x68 + 0x164));
  }
  if ((*(double *)&this_ptr->field_0x50 != *(double *)&this_ptr->field_0x10c) ||
     (hardware_playback_pos < *(double *)&this_ptr->field_0x50)) {
    *(double *)&this_ptr->field_0x50 = *(double *)&this_ptr->field_0x50 + local_28;
  }
  else {
    *(double *)&this_ptr->field_0x50 = hardware_playback_pos;
  }
  if (*(double *)&this_ptr->field_0x50 < 0.0) {
    *(uint *)&this_ptr->field_0x50 = 0;
    *(uint *)&this_ptr->field_0x54 = 0;
  }
  this_ptr_00 = *(CSfxSample **)&this_ptr->field_0x68;
  if ((-1 < *(int *)&this_ptr_00->field_0x110) &&
     ((double)*(int *)&this_ptr_00->field_0x110 <= *(double *)&this_ptr->field_0x50)) {
    iVar2 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00572680(this_ptr_00);
    if (iVar2 == 0) {
      *(double *)&this_ptr->field_0x50 = (double)*(int *)(*(int *)&this_ptr->field_0x68 + 0x110);
    }
    else {
      dVar1 = (double)*(int *)(*(int *)&this_ptr->field_0x68 + 0x110);
      dVar3 = floor(*(double *)&this_ptr->field_0x50 / dVar1);
      *(double *)&this_ptr->field_0x50 = *(double *)&this_ptr->field_0x50 - dVar3 * dVar1;
    }
  }
  *(double *)&this_ptr->field_0x10c = hardware_playback_pos;
  return;
}
