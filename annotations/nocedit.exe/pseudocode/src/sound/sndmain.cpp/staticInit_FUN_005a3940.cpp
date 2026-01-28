// Name: sound_sndmain.cpp_staticInit_FUN_005a3940
// Address: 005a3940
// Address Range: [[005a3940, 005a399b]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_staticInit_FUN_005a3940(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_staticInit_FUN_005a3940(void)

{
  g_SoundReferenceVolumeDistance = 20.0f / 4.0f;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_SfxSlots,0x40,&g_SfxSlotTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_SfxOptions,8,&g_SfxOptionsTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_SfxSamples,0x40,&g_SfxSampleTypeInfo)
  ;
  crt_stdlib_c_atexit_FUN_005ff060(&g_SfxSamplesDestructorNode);
  return;
}
