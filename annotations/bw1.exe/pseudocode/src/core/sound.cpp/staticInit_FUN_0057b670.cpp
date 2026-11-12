// Name: core_sound.cpp_staticInit_FUN_0057b670
// Address: 0057b670
// Address Range: [[0057b670, 0057b6ab]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_staticInit_FUN_0057b670(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_staticInit_FUN_0057b670(void)

{
  core_sound_cpp_CSound_ctor_FUN_0057cb10((CSound *)0x2c82a60);
  shape_edittool_cpp_CStrList_ctor_FUN_00499380(&g_CStrListInstance);
  _atexit(&WatcomStaticDestructorNode_006236a0);
  __arrinit(&DAT_02c832b4,10,&g_STrainNoiseTypeInfo);
  return;
}
