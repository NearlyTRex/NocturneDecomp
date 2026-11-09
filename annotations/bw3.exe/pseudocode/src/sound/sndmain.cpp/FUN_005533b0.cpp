// Name: sound_sndmain.cpp_FUN_005533b0
// Address: 005533b0
// Address Range: [[005533b0, 00553513]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_005533b0(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_FUN_005533b0(CSfxSample *this_ptr)

{
  int extraout_EAX;
  void *pvVar1;
  int iVar2;
  int iVar3;
  CSfxSample *pCVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  int in_stack_fffffd50;
  uint local_160 [84];
  
  bVar7 = 0;
  sound_sndmain_cpp_FUN_005535e0(this_ptr);
  sound_sndmain_cpp_FUN_00553630(this_ptr);
  if (*(int *)&this_ptr->field_0x100 == 2) {
    sound_sndmain_cpp_FUN_0055a560("Atried to use Yamaha WAV on non-CE platform." + 1);
  }
  else {
    sound_sndmain_cpp_FUN_005586d0(in_stack_fffffd50);
    if (extraout_EAX < 1) {
      sound_sndmain_cpp_FUN_005514c0(*(int *)&this_ptr->field_0x168);
      pvVar1 = realloc
                         (*(void **)&this_ptr->field_0x120,*(ulong *)&this_ptr->field_0x168);
      if (pvVar1 != (void *)0x0) {
        *(void **)&this_ptr->field_0x120 = pvVar1;
        return 1;
      }
    }
    else {
      pCVar4 = this_ptr;
      puVar5 = (uint *)&stack0xfffffd50;
      for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *(uint *)pCVar4;
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
      if (_DAT_02cf3280 != (int *)0x0) {
        do {
          iVar2 = (**(code **)(*_DAT_02cf3280 + 0x30))(_DAT_02cf3280,local_160);
          if (iVar2 != 0) goto LAB_0055347a;
          iVar3 = 0;
          iVar2 = _DAT_02cebc20;
          do {
            iVar2 = iVar2 + 1;
            if (0x3f < iVar2) {
              iVar2 = 0;
            }
            if ((((*(int *)&g_SfxSamples[iVar2].field_0x154 == 0) &&
                 (*(int *)&g_SfxSamples[iVar2].field_0x158 != 0)) &&
                (*(int *)&g_SfxSamples[iVar2].field_0x150 == 0)) &&
               ((*(int *)&g_SfxSamples[iVar2].field_0x15c == 0 &&
                (*(int *)&g_SfxSamples[_DAT_02cebc20].field_0x1ac == 0)))) {
              sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(g_SfxSamples + iVar2);
              break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x40);
        } while (iVar3 < 0x40);
        sound_sndmain_cpp_FUN_0055a560("allocateHwSample - failed\n");
      }
      iVar2 = 0;
LAB_0055347a:
      *(int *)&this_ptr->field_0x158 = iVar2;
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}
