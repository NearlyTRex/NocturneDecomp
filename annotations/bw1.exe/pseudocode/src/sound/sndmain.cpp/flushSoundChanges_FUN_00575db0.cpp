// Name: sound_sndmain.cpp_flushSoundChanges_FUN_00575db0
// Address: 00575db0
// Address Range: [[00575db0, 00575f70]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_flushSoundChanges_FUN_00575db0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_flushSoundChanges_FUN_00575db0(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  CSfxSlot *this_ptr;
  
  if (_DAT_02c80650 != (int *)0x0) {
    uVar2 = sound_sndmain_cpp_hasHardware3DSound_FUN_00575560();
    if (0 < (int)uVar2) {
      this_ptr = (CSfxSlot *)0x2c745ec;
      do {
        if (this_ptr->hardware_buffer_handle != 0) {
          if (_DAT_02c80658 == 1) {
            this_ptr->changed_flags = this_ptr->changed_flags | _DAT_02c807f4;
          }
          if (((this_ptr->options).flags & 1) != 0) {
            this_ptr->changed_flags = this_ptr->changed_flags & 0xdffffff9;
          }
          if (this_ptr->changed_flags != 0) {
            sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(this_ptr,0.0);
            iVar3 = (**(code **)(*_DAT_02c80650 + 0x44))
                              (_DAT_02c80650,this_ptr,this_ptr->changed_flags);
            if (iVar3 == 0) {
LAB_00575f63:
              sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr);
            }
            else if ((this_ptr->changed_flags & 0x40000000) != 0) {
              iVar3 = (**(code **)(*_DAT_02c80650 + 0x4c))(_DAT_02c80650,this_ptr);
              if (iVar3 == 0) goto LAB_00575f63;
              pbVar1 = (byte *)((int)&this_ptr->changed_flags + 3);
              *pbVar1 = *pbVar1 & 0xbf;
            }
          }
        }
        this_ptr = this_ptr + 1;
        if (this_ptr == (CSfxSlot *)&DAT_02c78cec) {
          if ((_DAT_02c807f4 & 2) != 0) {
            (**(code **)(*_DAT_02c80650 + 0x1c))
                      (_DAT_02c80650,*(uint *)(&DAT_02c7fbf8 + _DAT_02c7fc88 * 8),
                       *(uint *)(_DAT_02c7fc88 * 8 + 0x2c7fbfc),
                       *(uint *)(&DAT_02c7fc08 + _DAT_02c7fc88 * 8),
                       *(uint *)(_DAT_02c7fc88 * 8 + 0x2c7fc0c),
                       *(uint *)(&DAT_02c7fc18 + _DAT_02c7fc88 * 8),
                       *(uint *)(_DAT_02c7fc88 * 8 + 0x2c7fc1c));
          }
          if ((_DAT_02c807f4 & 0x20000000) != 0) {
            (**(code **)(*_DAT_02c80650 + 0x20))
                      (_DAT_02c80650,*(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc40),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc48),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc50),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc58),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc60),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc68),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc70),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc78),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc80));
          }
          if ((_DAT_02c807f4 & 4) != 0) {
            (**(code **)(*_DAT_02c80650 + 0x24))
                      (_DAT_02c80650,*(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc28),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc30),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc38));
          }
          _DAT_02c807f4 = 0;
          (**(code **)(*_DAT_02c80650 + 0x18))(_DAT_02c80650);
          return;
        }
      } while( true );
    }
  }
  return;
}
