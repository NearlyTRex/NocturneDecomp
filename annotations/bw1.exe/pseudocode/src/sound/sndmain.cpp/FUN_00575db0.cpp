// Name: sound_sndmain.cpp_FUN_00575db0
// Address: 00575db0
// Address Range: [[00575db0, 00575f70]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00575db0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00575db0(void)

{
  int extraout_EAX;
  int iVar1;
  int unaff_EBP;
  CSfxSlot *this_ptr;
  
  if (_DAT_02c80650 != (int *)0x0) {
    sound_sndmain_cpp_FUN_00575560(unaff_EBP);
    if (0 < extraout_EAX) {
      this_ptr = (CSfxSlot *)0x2c745ec;
      do {
        if (this_ptr->hardware_buffer_handle != 0) {
          if (_DAT_02c80658 == 1) {
            *(uint *)&this_ptr->field_0x118 = *(uint *)&this_ptr->field_0x118 | _DAT_02c807f4;
          }
          if (((this_ptr->options).field_0x4c & 1) != 0) {
            *(uint *)&this_ptr->field_0x118 = *(uint *)&this_ptr->field_0x118 & 0xdffffff9;
          }
          if (*(int *)&this_ptr->field_0x118 != 0) {
            sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30(this_ptr,0.0);
            iVar1 = (**(code **)(*_DAT_02c80650 + 0x44))
                              (_DAT_02c80650,this_ptr,*(uint *)&this_ptr->field_0x118);
            if (iVar1 == 0) {
LAB_00575f63:
              sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(this_ptr);
            }
            else if ((this_ptr->field_0x11b & 0x40) != 0) {
              iVar1 = (**(code **)(*_DAT_02c80650 + 0x4c))(_DAT_02c80650,this_ptr);
              if (iVar1 == 0) goto LAB_00575f63;
              this_ptr->field_0x11b = this_ptr->field_0x11b & 0xbf;
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
