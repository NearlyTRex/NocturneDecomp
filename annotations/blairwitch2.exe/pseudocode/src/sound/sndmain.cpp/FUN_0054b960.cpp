// Name: sound_sndmain.cpp_FUN_0054b960
// Address: 0054b960
// Address Range: [[0054b960, 0054ba29]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_0054b960(int requested_bytes)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_FUN_0054b960(int requested_bytes)

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
    iVar1 = iVar1 + 0x1ac;
  } while (iVar1 != 0x6b00);
LAB_0054b980:
  do {
    if (iVar3 + requested_bytes <= DAT_0061bcc0) {
      return 1;
    }
    iVar2 = 0;
    iVar1 = _DAT_02641920;
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
          (*(int *)&g_SfxSamples[_DAT_02641920].field_0x1a8 == 0)))) {
        iVar3 = iVar3 - *(int *)&g_SfxSamples[iVar1].field_0x168;
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(g_SfxSamples + iVar1);
        if (0x3f < iVar2) {
          return 0;
        }
        goto LAB_0054b980;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x40);
    if (0x3f < iVar2) {
      return 0;
    }
  } while( true );
}
