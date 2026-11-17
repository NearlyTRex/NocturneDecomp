// Name: sound_sndmain.cpp_staticInit_FUN_00550980
// Address: 00550980
// Address Range: [[00550980, 005509db]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_staticInit_FUN_00550980(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_staticInit_FUN_00550980(void)

{
  g_FLOAT_02ce7210 = 20.0f / 4.0f;
  __arrinit(g_CSfxSlot_ARRAY_02ce721c,0x40,&g_SfxSlotTypeInfo);
  __arrinit(g_CSfxOptions_ARRAY_02ceb920,8,&g_SfxOptionsTypeInfo);
  __arrinit(g_SfxSamples,0x40,&g_SfxSampleTypeInfo);
  _atexit(&g_SfxSamplesDestructorNode);
  return;
}
