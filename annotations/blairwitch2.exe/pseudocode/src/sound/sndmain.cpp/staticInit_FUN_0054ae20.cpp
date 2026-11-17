// Name: sound_sndmain.cpp_staticInit_FUN_0054ae20
// Address: 0054ae20
// Address Range: [[0054ae20, 0054ae7b]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_staticInit_FUN_0054ae20(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_staticInit_FUN_0054ae20(void)

{
  g_SoundReferenceVolumeDistance = 20.0f / 4.0f;
  __arrinit(g_CSfxSlot_ARRAY_0263cf1c,0x40,&g_SfxSlotTypeInfo);
  __arrinit(g_CSfxOptions_ARRAY_02641620,8,&g_SfxOptionsTypeInfo);
  __arrinit(g_SfxSamples,0x40,&g_SfxSampleTypeInfo);
  _atexit(&g_SfxSamplesDestructorNode);
  return;
}
