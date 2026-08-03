// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_0052ab60
// Address: 0052ab60
// Address Range: [[0052ab60, 0052ad2d]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_0052ab60(CDirectSoundDevice *this_ptr,int bits_per_sample,int channel_count,int sample_rate,int sample_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSample_FUN_0052ab60(CDirectSoundDevice *this_ptr,int bits_per_sample,int channel_count,int sample_rate,int sample_count)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint error_code;
  int iVar4;
  int *piStack_1d8;
  uint local_38;
  uint local_34;
  int local_30;
  ushort *local_28;
  ushort local_24;
  short local_22;
  int local_20;
  int local_1c;
  ushort local_18;
  ushort local_16;
  
  if (_DAT_02dc9214 != (int *)0x0) {
    iVar4 = 1;
    iVar2 = 4;
    iVar3 = _DAT_02dc9248;
    while (iVar3 != 0) {
      iVar4 = iVar4 + 1;
      if (99 < iVar2 + 4) break;
      iVar3 = *(int *)(&DAT_02dc9248 + iVar2);
      iVar2 = iVar2 + 4;
    }
    if (iVar4 < 0x19) {
      piStack_1d8 = (int *)0x52abc3;
      memset(&local_24,0,0x12);
      local_24 = 1;
      local_22 = (short)channel_count;
      local_20 = sample_rate;
      iVar3 = (int)((bits_per_sample + (bits_per_sample >> 0x1f) * -8) -
                   (uint)((bits_per_sample >> 0x1f) << 2 < 0)) >> 3;
      local_18 = local_22 * (short)iVar3;
      local_1c = sample_rate * (uint)local_18;
      local_16 = (ushort)bits_per_sample;
      piStack_1d8 = (int *)0x52ac45;
      memset(&local_38,0,0x14);
      local_28 = &local_24;
      local_30 = channel_count * iVar3 * sample_count;
      local_38 = 0x14;
      local_34 = 0xb0;
      piStack_1d8 = _DAT_02dc9214;
      error_code = (**(code **)(*_DAT_02dc9214 + 0xc))();
      if (error_code == 0) {
        if (*(int *)(&DAT_02dc9244 + iVar4 * 4) != 0) {
          return iVar4;
        }
      }
      else {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
        _sprintf((char *)&piStack_1d8,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_00529980(&piStack_1d8);
      }
      sound_sndmain_cpp_FUN_00529980("DirectSoundDevice::allocateSample - access failed\n");
      piVar1 = *(int **)(&DAT_02dc9244 + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(int *)(&DAT_02dc9244 + iVar4 * 4) = 0;
        return 0;
      }
    }
  }
  return 0;
}
