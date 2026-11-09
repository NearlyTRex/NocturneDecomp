// Name: sound_sndmain.cpp_staticInit_FUN_0056d490
// Address: 0056d490
// Address Range: [[0056d490, 0056d4eb]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_staticInit_FUN_0056d490(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_staticInit_FUN_0056d490(void)

{
  _DAT_02c745e0 = _DAT_00605b08 / _DAT_00605b04;
  __arrinit(0x2c745ec,0x40,&g_SfxSlotTypeInfo);
  __arrinit(0x2c78cf0,8,&g_SfxOptionsTypeInfo);
  __arrinit(g_SfxSamples,0x40,&g_SfxSampleTypeInfo);
  _atexit(&g_SfxSamplesDestructorNode);
  return;
}
