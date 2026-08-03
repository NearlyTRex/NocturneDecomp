// Name: core_sound.cpp_staticInit_FUN_0052c8c0
// Address: 0052c8c0
// Address Range: [[0052c8c0, 0052c8fb]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_staticInit_FUN_0052c8c0(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_staticInit_FUN_0052c8c0(void)

{
  core_sound_cpp_CSound_ctor_FUN_0052dd00(&g_CSound_02dc9450);
  shape_edittool_cpp_CStrList_ctor_FUN_00473b60(&g_CStrList_02dc9610);
  _atexit(&g_WatcomStaticDestructorNode_005bed50);
  __arrinit
            (g_STrainNoise_ARRAY_02dc9ca4,10,&g_STrainNoiseTypeInfo_005a22f0);
  return;
}
