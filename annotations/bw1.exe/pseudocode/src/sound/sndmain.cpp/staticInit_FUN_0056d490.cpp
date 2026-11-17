// Name: sound_sndmain.cpp_staticInit_FUN_0056d490
// Address: 0056d490
// Address Range: [[0056d490, 0056d4eb]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_staticInit_FUN_0056d490(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_staticInit_FUN_0056d490(void)

{
  g_FLOAT_02c745e0 = 20.0f / 4.0f;
  __arrinit(g_CSfxSlot_ARRAY_02c745ec,0x40,&g_SfxSlotTypeInfo);
  __arrinit(g_CSfxOptions_ARRAY_02c78cf0,8,&g_SfxOptionsTypeInfo);
  __arrinit(g_SfxSamples,0x40,&g_SfxSampleTypeInfo);
  _atexit(&g_SfxSamplesDestructorNode);
  return;
}
