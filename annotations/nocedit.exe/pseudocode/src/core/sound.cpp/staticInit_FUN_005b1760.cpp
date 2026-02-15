// Name: core_sound.cpp_staticInit_FUN_005b1760
// Address: 005b1760
// Address Range: [[005b1760, 005b179b]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_staticInit_FUN_005b1760(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_staticInit_FUN_005b1760(void)

{
  core_sound_cpp_CSound_ctor_FUN_005b2ce0(&g_CSoundInstance);
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&g_SoundFileList);
  _atexit(&WatcomStaticDestructorNode_00681ed0);
  __arrinit(g_TrainNoiseArray,10,&g_STrainNoiseTypeInfo);
  return;
}
