// Name: sound_sndmain.cpp_pushSfxOptions_FUN_00526340
// Address: 00526340
// Address Range: [[00526340, 005263bd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_00526340(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_00526340(void)

{
  int iVar1;
  CSfxOptions *pCVar2;
  CSfxOptions *pCVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_02dc1b74 = _DAT_02dc1b74 + 1;
  if (7 < _DAT_02dc1b74) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    g_INT_01cc4804 = 0xcf4;
    core_main_c_FUN_004c8440("pushSfxOptions - stack full");
  }
  pCVar2 = g_CSfxOptions_ARRAY_02dc1b78 + _DAT_02dc1b74 + -1;
  pCVar3 = g_CSfxOptions_ARRAY_02dc1b78 + _DAT_02dc1b74;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->channel_index = pCVar2->channel_index;
    pCVar2 = (CSfxOptions *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CSfxOptions *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return;
}
