// Name: core_set.cpp_applyActorFlatColor_FUN_0052bca0
// Address: 0052bca0
// Address Range: [[0052bca0, 0052bd12]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_applyActorFlatColor_FUN_0052bca0(CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_applyActorFlatColor_FUN_0052bca0(CDemonActor *actor)

{
  int light_scale;
  int color_scale;
  int fog_scale;
  
  color_scale = (actor->scale).y;
  fog_scale = (actor->scale).z;
  light_scale = (actor->scale).x;
  if (actor == _DAT_0200a3a4) {
    light_scale = (light_scale * 3) / 2;
    color_scale = (color_scale * 3) / 2;
    fog_scale = (fog_scale * 3) / 2;
  }
  core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(g_CDemonSetPtr,light_scale,color_scale,fog_scale)
  ;
  return;
}
