// Name: sound_sndmain.cpp_FUN_00558f20
// Address: 00558f20
// Address Range: [[00558f20, 005590e0]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00558f20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00558f20(void)

{
  byte *pbVar1;
  int extraout_EAX;
  int iVar2;
  int unaff_EBP;
  CSfxSlot *this_ptr;
  
  if (_DAT_02cf3280 != (int *)0x0) {
    sound_sndmain_cpp_FUN_005586d0(unaff_EBP);
    if (0 < extraout_EAX) {
      this_ptr = (CSfxSlot *)0x2ce721c;
      do {
        if (this_ptr->hardware_buffer_handle != 0) {
          if (_DAT_02cf3288 == 1) {
            this_ptr->changed_flags = this_ptr->changed_flags | _DAT_02cf3424;
          }
          if (((this_ptr->options).flags & 1) != 0) {
            this_ptr->changed_flags = this_ptr->changed_flags & 0xdffffff9;
          }
          if (this_ptr->changed_flags != 0) {
            sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430(this_ptr,0.0);
            iVar2 = (**(code **)(*_DAT_02cf3280 + 0x44))
                              (_DAT_02cf3280,this_ptr,this_ptr->changed_flags);
            if (iVar2 == 0) {
LAB_005590d3:
              sound_sndmain_cpp_CSfxSlot_kill_FUN_00555270(this_ptr);
            }
            else if ((this_ptr->changed_flags & 0x40000000) != 0) {
              iVar2 = (**(code **)(*_DAT_02cf3280 + 0x4c))(_DAT_02cf3280,this_ptr);
              if (iVar2 == 0) goto LAB_005590d3;
              pbVar1 = (byte *)((int)&this_ptr->changed_flags + 3);
              *pbVar1 = *pbVar1 & 0xbf;
            }
          }
        }
        this_ptr = this_ptr + 1;
        if (this_ptr == (CSfxSlot *)&DAT_02ceb91c) {
          if ((_DAT_02cf3424 & 2) != 0) {
            (**(code **)(*_DAT_02cf3280 + 0x1c))
                      (_DAT_02cf3280,*(uint *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8),
                       *(uint *)(_DAT_02cf28b8 * 8 + 0x2cf282c),
                       *(uint *)(&DAT_02cf2838 + _DAT_02cf28b8 * 8),
                       *(uint *)(_DAT_02cf28b8 * 8 + 0x2cf283c),
                       *(uint *)(&DAT_02cf2848 + _DAT_02cf28b8 * 8),
                       *(uint *)(_DAT_02cf28b8 * 8 + 0x2cf284c));
          }
          if ((_DAT_02cf3424 & 0x20000000) != 0) {
            (**(code **)(*_DAT_02cf3280 + 0x20))
                      (_DAT_02cf3280,*(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2870),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2878),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2880),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2888),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2890),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2898),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf28a0),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf28a8),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf28b0));
          }
          if ((_DAT_02cf3424 & 4) != 0) {
            (**(code **)(*_DAT_02cf3280 + 0x24))
                      (_DAT_02cf3280,*(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2858),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2860),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2868));
          }
          _DAT_02cf3424 = 0;
          (**(code **)(*_DAT_02cf3280 + 0x18))(_DAT_02cf3280);
          return;
        }
      } while( true );
    }
  }
  return;
}
