// Name: sound_sndmain.cpp_FUN_005514c0
// Address: 005514c0
// Address Range: [[005514c0, 00551589]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_005514c0(int requested_bytes)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_FUN_005514c0(int requested_bytes)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)(&g_SfxSamples[0].field_0x120 + iVar1) != 0) {
      iVar3 = iVar3 + *(int *)(&g_SfxSamples[0].field_0x168 + iVar1);
    }
    iVar1 = iVar1 + 0x1b0;
  } while (iVar1 != 0x6c00);
LAB_005514e0:
  do {
    if (iVar3 + requested_bytes <= DAT_0060424c) {
      return 1;
    }
    iVar2 = 0;
    iVar1 = _DAT_02cebc20;
    do {
      iVar1 = iVar1 + 1;
      if (0x3f < iVar1) {
        iVar1 = 0;
      }
      if ((((*(int *)&g_SfxSamples[iVar1].field_0x120 != 0) &&
           (0 < *(int *)&g_SfxSamples[iVar1].field_0x164)) &&
          (*(int *)&g_SfxSamples[iVar1].field_0x154 == 0)) &&
         (((*(int *)&g_SfxSamples[iVar1].field_0x150 == 0 &&
           (*(int *)&g_SfxSamples[iVar1].field_0x15c == 0)) &&
          (*(int *)&g_SfxSamples[_DAT_02cebc20].field_0x1ac == 0)))) {
        iVar3 = iVar3 - *(int *)&g_SfxSamples[iVar1].field_0x168;
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(g_SfxSamples + iVar1);
        if (0x3f < iVar2) {
          return 0;
        }
        goto LAB_005514e0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x40);
    if (0x3f < iVar2) {
      return 0;
    }
  } while( true );
}
