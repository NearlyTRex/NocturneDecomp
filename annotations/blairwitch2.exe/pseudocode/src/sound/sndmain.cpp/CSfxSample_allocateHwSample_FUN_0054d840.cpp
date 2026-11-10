// Name: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840
// Address: 0054d840
// Address Range: [[0054d840, 0054d9a3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(CSfxSample *this_ptr)

{
  int extraout_EAX;
  short *psVar1;
  int iVar2;
  int iVar3;
  CSfxSample *pCVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  int in_stack_fffffd50;
  uint local_160 [84];
  
  bVar7 = 0;
  sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_0054da70(this_ptr);
  sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_0054dac0(this_ptr);
  if ((this_ptr->sample_info).streaming_flag == 2) {
    sound_sndmain_cpp_FUN_005549c0("Atried to use Yamaha WAV on non-CE platform." + 1);
  }
  else {
    sound_sndmain_cpp_FUN_00552b30(in_stack_fffffd50);
    if (extraout_EAX < 1) {
      sound_sndmain_cpp_FUN_0054b960(*(int *)&this_ptr->field_0x168);
      psVar1 = (short *)realloc
                         (this_ptr->sample_data,*(ulong *)&this_ptr->field_0x168);
      if (psVar1 != (short *)0x0) {
        this_ptr->sample_data = psVar1;
        return 1;
      }
    }
    else {
      pCVar4 = this_ptr;
      puVar5 = (uint *)&stack0xfffffd50;
      for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *(uint *)(pCVar4->sample_info).name;
        pCVar4 = (CSfxSample *)((int)pCVar4 + (uint)bVar7 * -8 + 4);
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      }
      puVar5 = (uint *)&stack0xfffffd50;
      puVar6 = local_160;
      for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      if (_DAT_02648e80 != (int *)0x0) {
        do {
          iVar2 = (**(code **)(*_DAT_02648e80 + 0x30))(_DAT_02648e80,local_160);
          if (iVar2 != 0) goto LAB_0054d90a;
          iVar3 = 0;
          iVar2 = _DAT_02641920;
          do {
            iVar2 = iVar2 + 1;
            if (0x3f < iVar2) {
              iVar2 = 0;
            }
            if ((((g_SfxSamples[iVar2].ref_count == 0) && (g_SfxSamples[iVar2].buffer_id != 0)) &&
                (g_SfxSamples[iVar2].taken == 0)) &&
               ((*(int *)&g_SfxSamples[iVar2].field_0x15c == 0 &&
                (g_SfxSamples[_DAT_02641920].locked_length == 0)))) {
              sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(g_SfxSamples + iVar2);
              break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x40);
        } while (iVar3 < 0x40);
        sound_sndmain_cpp_FUN_005549c0("allocateHwSample - failed\n");
      }
      iVar2 = 0;
LAB_0054d90a:
      this_ptr->buffer_id = iVar2;
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}
