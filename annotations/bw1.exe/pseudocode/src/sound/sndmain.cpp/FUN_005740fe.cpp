// Name: sound_sndmain.cpp_FUN_005740fe
// Address: 005740fe
// Address Range: [[005740fe, 00574223]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_005740fe(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_FUN_005740fe(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  CSfxSample *this_ptr;
  CSfxSample *pCVar4;
  byte bVar5;
  
  bVar5 = 0;
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  sound_sndmain_cpp_FUN_00574380(param_1,1);
  iVar2 = 0;
  while( true ) {
    iVar3 = _DAT_02c78ff0 + 1;
    if (0x3f < iVar3) {
      iVar3 = 0;
    }
    _DAT_02c78ff0 = iVar3;
    if ((((*(int *)&g_SfxSamples[iVar3].field_0x150 == 0) &&
         (*(int *)&g_SfxSamples[iVar3].field_0x154 == 0)) &&
        (*(int *)&g_SfxSamples[iVar3].field_0x15c == 0)) &&
       (*(int *)&g_SfxSamples[iVar3].field_0x1ac == 0)) break;
    iVar2 = iVar2 + 1;
    if (0x3f < iVar2) {
LAB_0057414c:
      sound_sndmain_cpp_FUN_00573e70();
      return 0;
    }
  }
  this_ptr = g_SfxSamples + iVar3;
  if (this_ptr != (CSfxSample *)0x0) {
    pCVar4 = this_ptr;
    for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pCVar4 = *param_1;
      param_1 = param_1 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CSfxSample *)((int)pCVar4 + (uint)bVar5 * -8 + 4);
    }
    *(uint *)&g_SfxSamples[iVar3].field_0x150 = 0;
    *(uint *)&g_SfxSamples[iVar3].field_0x154 = 0;
    *(uint *)&g_SfxSamples[iVar3].field_0x158 = 0;
    *(uint *)&g_SfxSamples[iVar3].field_0x15c = 1;
    *(uint *)&g_SfxSamples[iVar3].field_0x160 = 0xffffffff;
    uVar1 = *(uint *)&g_SfxSamples[iVar3].field_0x110;
    *(uint *)&g_SfxSamples[iVar3].field_0x164 = uVar1;
    *(uint *)&g_SfxSamples[iVar3].field_0x16c = uVar1;
    *(uint *)&g_SfxSamples[iVar3].field_0x170 = uVar1;
    uVar1 = sound_sndmain_cpp_FUN_00572400(this_ptr,uVar1);
    *(uint *)&g_SfxSamples[iVar3].field_0x168 = uVar1;
    iVar2 = sound_sndmain_cpp_FUN_0056feb0(this_ptr);
    if (iVar2 != 0) {
      sound_sndmain_cpp_FUN_00573e70();
      return 1;
    }
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(this_ptr);
    return 0;
  }
  goto LAB_0057414c;
}
