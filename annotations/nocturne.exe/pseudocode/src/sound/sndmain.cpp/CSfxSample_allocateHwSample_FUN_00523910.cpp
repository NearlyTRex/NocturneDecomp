// Name: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_00523910
// Address: 00523910
// Address Range: [[00523910, 00523a55]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_00523b20(param_1);
  sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00523b70(param_1);
  iVar5 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
  if (iVar5 == 0) {
    iVar5 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(param_1);
    sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_00521ca0(iVar5 * *(int *)(param_1 + 0x138));
    iVar5 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(param_1);
    iVar5 = realloc
                      (*(uint *)(param_1 + 0x120),iVar5 * *(int *)(param_1 + 0x138));
    if (iVar5 != 0) {
      *(int *)(param_1 + 0x120) = iVar5;
      return 1;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x108);
    uVar2 = *(uint *)(param_1 + 0x10c);
    uVar3 = *(uint *)(param_1 + 0x138);
    uVar4 = *(uint *)(param_1 + 0x104);
    if (_DAT_02dc8318 != (int *)0x0) {
      do {
        iVar5 = (**(code **)(*_DAT_02dc8318 + 0x2c))(_DAT_02dc8318,uVar4,uVar1,uVar2,uVar3);
        if (iVar5 != 0) goto LAB_005239c5;
        iVar7 = 0;
        iVar5 = _DAT_02dc1ed8;
        do {
          iVar5 = iVar5 + 1;
          if (0x3f < iVar5) {
            iVar5 = 0;
          }
          iVar6 = iVar5 * 0x168;
          if (((*(int *)(iVar6 + 0x2dc2008) == 0) && (*(int *)(iVar6 + 0x2dc200c) != 0)) &&
             (*(int *)(iVar6 + 0x2dc2004) == 0)) {
            sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(iVar6 + 0x2dc1edc);
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0x40);
      } while (iVar7 < 0x40);
      sound_sndmain_cpp_FUN_00529980("allocateHwSample - failed\n");
    }
    iVar5 = 0;
LAB_005239c5:
    *(int *)(param_1 + 0x130) = iVar5;
    if (iVar5 != 0) {
      return 1;
    }
  }
  return 0;
}
