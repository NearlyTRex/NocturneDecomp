// Name: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910
// Address: 00523910
// Address Range: [[00523910, 00523a55]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(CSfxSample *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  
  sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_00523b20(this_ptr);
  sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00523b70(this_ptr);
  uVar4 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
  if (uVar4 == 0) {
    iVar6 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(this_ptr);
    sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_00521ca0(iVar6 * this_ptr->loop_endpoints[4]);
    iVar6 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(this_ptr);
    psVar7 = (short *)realloc
                       (this_ptr->sample_data,iVar6 * this_ptr->loop_endpoints[4]);
    if (psVar7 != (short *)0x0) {
      this_ptr->sample_data = psVar7;
      return 1;
    }
  }
  else {
    iVar6 = (this_ptr->sample_info).num_channels;
    iVar1 = (this_ptr->sample_info).sample_rate;
    iVar2 = this_ptr->loop_endpoints[4];
    iVar3 = (this_ptr->sample_info).bit_depth;
    if (_DAT_02dc8318 != (int *)0x0) {
      do {
        iVar5 = (**(code **)(*_DAT_02dc8318 + 0x2c))(_DAT_02dc8318,iVar3,iVar6,iVar1,iVar2);
        if (iVar5 != 0) goto LAB_005239c5;
        iVar9 = 0;
        iVar5 = _DAT_02dc1ed8;
        do {
          iVar5 = iVar5 + 1;
          if (0x3f < iVar5) {
            iVar5 = 0;
          }
          iVar8 = iVar5 * 0x168;
          if (((*(int *)(iVar8 + 0x2dc2008) == 0) && (*(int *)(iVar8 + 0x2dc200c) != 0)) &&
             (*(int *)(iVar8 + 0x2dc2004) == 0)) {
            sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60
                      ((CSfxSample *)(&DAT_02dc1edc + iVar8));
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x40);
      } while (iVar9 < 0x40);
      sound_sndmain_cpp_FUN_00529980("allocateHwSample - failed\n");
    }
    iVar5 = 0;
LAB_005239c5:
    this_ptr->loop_endpoints[2] = iVar5;
    if (iVar5 != 0) {
      return 1;
    }
  }
  return 0;
}
