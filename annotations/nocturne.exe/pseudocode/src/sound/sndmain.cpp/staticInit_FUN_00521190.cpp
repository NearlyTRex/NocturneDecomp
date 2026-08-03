// Name: sound_sndmain.cpp_staticInit_FUN_00521190
// Address: 00521190
// Address Range: [[00521190, 005211eb]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_staticInit_FUN_00521190(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_staticInit_FUN_00521190(void)

{
  g_FLOAT_02dbd370 = 20.0f / 4.0f;
  __arrinit(g_CSfxSlot_ARRAY_02dbd374,0x40,&g_SSfxSlotTypeInfo_005a2180);
  __arrinit
            (g_CSfxOptions_ARRAY_02dc1b78,8,&g_SSfxOptionsTypeInfo_005a21a0);
  __arrinit
            (g_CSfxSample_ARRAY_02dc1edc,0x40,&g_SSfxSampleTypeInfo_005a21c0);
  _atexit(&g_WatcomStaticDestructorNode_005bea20);
  return;
}
