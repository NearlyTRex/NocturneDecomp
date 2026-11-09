// Name: sound_sndmain.cpp_staticInit_FUN_00550980
// Address: 00550980
// Address Range: [[00550980, 005509db]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_staticInit_FUN_00550980(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_staticInit_FUN_00550980(void)

{
  _DAT_02ce7210 = _DAT_005e4854 / _DAT_005e4850;
  __arrinit(0x2ce721c,0x40,&g_SfxSlotTypeInfo);
  __arrinit(0x2ceb920,8,&g_SfxOptionsTypeInfo);
  __arrinit(g_SfxSamples,0x40,&g_SfxSampleTypeInfo);
  _atexit(&g_SfxSamplesDestructorNode);
  return;
}
