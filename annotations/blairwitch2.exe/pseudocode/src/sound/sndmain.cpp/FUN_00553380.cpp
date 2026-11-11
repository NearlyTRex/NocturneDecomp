// Name: sound_sndmain.cpp_FUN_00553380
// Address: 00553380
// Address Range: [[00553380, 00553540]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00553380(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00553380(void)

{
  byte *pbVar1;
  int extraout_EAX;
  int iVar2;
  int unaff_EBP;
  CSfxSlot *this_ptr;
  
  if (_DAT_02648e80 != (int *)0x0) {
    sound_sndmain_cpp_FUN_00552b30(unaff_EBP);
    if (0 < extraout_EAX) {
      this_ptr = (CSfxSlot *)0x263cf1c;
      do {
        if (this_ptr->hardware_buffer_handle != 0) {
          if (_DAT_02648e88 == 1) {
            this_ptr->changed_flags = this_ptr->changed_flags | _DAT_02649024;
          }
          if (((this_ptr->options).flags & 1) != 0) {
            this_ptr->changed_flags = this_ptr->changed_flags & 0xdffffff9;
          }
          if (this_ptr->changed_flags != 0) {
            sound_sndmain_cpp_CSfxSlot_compute_FUN_0054e8c0(this_ptr,0.0);
            iVar2 = (**(code **)(*_DAT_02648e80 + 0x44))
                              (_DAT_02648e80,this_ptr,this_ptr->changed_flags);
            if (iVar2 == 0) {
LAB_00553533:
              sound_sndmain_cpp_CSfxSlot_kill_FUN_0054f700(this_ptr);
            }
            else if ((this_ptr->changed_flags & 0x40000000) != 0) {
              iVar2 = (**(code **)(*_DAT_02648e80 + 0x4c))(_DAT_02648e80,this_ptr);
              if (iVar2 == 0) goto LAB_00553533;
              pbVar1 = (byte *)((int)&this_ptr->changed_flags + 3);
              *pbVar1 = *pbVar1 & 0xbf;
            }
          }
        }
        this_ptr = this_ptr + 1;
        if (this_ptr == (CSfxSlot *)&DAT_0264161c) {
          if ((_DAT_02649024 & 2) != 0) {
            (**(code **)(*_DAT_02648e80 + 0x1c))
                      (_DAT_02648e80,*(uint *)(&DAT_02648428 + _DAT_026484b8 * 8),
                       *(uint *)(_DAT_026484b8 * 8 + 0x264842c),
                       *(uint *)(&DAT_02648438 + _DAT_026484b8 * 8),
                       *(uint *)(_DAT_026484b8 * 8 + 0x264843c),
                       *(uint *)(&DAT_02648448 + _DAT_026484b8 * 8),
                       *(uint *)(_DAT_026484b8 * 8 + 0x264844c));
          }
          if ((_DAT_02649024 & 0x20000000) != 0) {
            (**(code **)(*_DAT_02648e80 + 0x20))
                      (_DAT_02648e80,*(uint *)(_DAT_026484b8 * 4 + 0x2648470),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648478),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648480),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648488),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648490),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648498),
                       *(uint *)(_DAT_026484b8 * 4 + 0x26484a0),
                       *(uint *)(_DAT_026484b8 * 4 + 0x26484a8),
                       *(uint *)(_DAT_026484b8 * 4 + 0x26484b0));
          }
          if ((_DAT_02649024 & 4) != 0) {
            (**(code **)(*_DAT_02648e80 + 0x24))
                      (_DAT_02648e80,*(uint *)(_DAT_026484b8 * 4 + 0x2648458),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648460),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648468));
          }
          _DAT_02649024 = 0;
          (**(code **)(*_DAT_02648e80 + 0x18))(_DAT_02648e80);
          return;
        }
      } while( true );
    }
  }
  return;
}
