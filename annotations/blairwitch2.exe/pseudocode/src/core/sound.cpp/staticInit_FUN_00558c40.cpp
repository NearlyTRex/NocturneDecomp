// Name: core_sound.cpp_staticInit_FUN_00558c40
// Address: 00558c40
// Address Range: [[00558c40, 00558c7b]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_staticInit_FUN_00558c40(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_staticInit_FUN_00558c40(void)

{
  core_sound_cpp_CSound_ctor_FUN_0055a0e0((CSound *)0x264b290);
  shape_edittool_cpp_CStrList_ctor_FUN_00480d20(&g_CStrListInstance);
  _atexit();
  __arrinit(&DAT_0264bae4,10);
  return;
}
