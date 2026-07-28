// Name: sound_sndmain.cpp_staticInit_FUN_00521190
// Address: 00521190
// Address Range: [[00521190, 005211eb]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_staticInit_FUN_00521190(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_staticInit_FUN_00521190(void)

{
  _DAT_02dbd370 = 20.0f / 4.0f;
  __arrinit((void *)0x2dbd374,0x40,&g_SSfxSlotTypeInfo_005a2180);
  __arrinit((void *)0x2dc1b78,8,&g_SSfxOptionsTypeInfo_005a21a0);
  __arrinit((void *)0x2dc1edc,0x40,&g_SSfxSampleTypeInfo_005a21c0);
  _atexit((WatcomStaticDestructorNode *)0x5bea20);
  return;
}
