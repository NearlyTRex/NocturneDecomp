// Name: sound_sndmain.cpp_staticInit_FUN_0054ae20
// Address: 0054ae20
// Address Range: [[0054ae20, 0054ae7b]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_staticInit_FUN_0054ae20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_staticInit_FUN_0054ae20(void)

{
  _DAT_0263cf10 = _DAT_005fbc28 / _DAT_005fbc24;
  __arrinit(0x263cf1c,0x40,&g_SfxSlotTypeInfo);
  __arrinit(0x2641620,8,&g_SfxOptionsTypeInfo);
  __arrinit(g_SfxSamples,0x40,&g_SfxSampleTypeInfo);
  _atexit(&g_SfxSamplesDestructorNode);
  return;
}
