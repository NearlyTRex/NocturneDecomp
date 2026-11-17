// Name: core_set.cpp_applyActorFlatColor_FUN_0054cf80
// Address: 0054cf80
// Address Range: [[0054cf80, 0054cff2]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_applyActorFlatColor_FUN_0054cf80(CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_set_cpp_applyActorFlatColor_FUN_0054cf80(CDemonActor *actor)

{
  int light_scale;
  int color_scale;
  int fog_scale;
  
  color_scale = (actor->scale).y;
  fog_scale = (actor->scale).z;
  light_scale = (actor->scale).x;
  if (actor == (CDemonActor *)g_INT_02026358) {
    light_scale = (light_scale * 3) / 2;
    color_scale = (color_scale * 3) / 2;
    fog_scale = (fog_scale * 3) / 2;
  }
  core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(g_CDemonSetPtr,light_scale,color_scale,fog_scale)
  ;
  return;
}
