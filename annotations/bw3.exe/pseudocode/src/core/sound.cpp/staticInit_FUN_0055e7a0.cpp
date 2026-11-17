// Name: core_sound.cpp_staticInit_FUN_0055e7a0
// Address: 0055e7a0
// Address Range: [[0055e7a0, 0055e7db]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_staticInit_FUN_0055e7a0(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_staticInit_FUN_0055e7a0(void)

{
  core_sound_cpp_CSound_ctor_FUN_0055fc40(&g_CSound_02cf5680);
  shape_edittool_cpp_CStrList_ctor_FUN_00481f20(&g_CStrListInstance);
  _atexit(&WatcomStaticDestructorNode_006045e0);
  __arrinit(g_STrainNoise_ARRAY_02cf5ed4,10,&g_STrainNoiseTypeInfo);
  return;
}
