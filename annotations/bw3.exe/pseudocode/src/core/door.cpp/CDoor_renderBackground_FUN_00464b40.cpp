// Name: core_door.cpp_CDoor_renderBackground_FUN_00464b40
// Address: 00464b40
// Address Range: [[00464b40, 00464bc7]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_renderBackground_FUN_00464b40(CDoor *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_renderBackground_FUN_00464b40(CDoor *this_ptr,int layer_flag)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((layer_flag != 0) && (1 < (int)this_ptr->one_shot)) {
    this_ptr->one_shot = ONE_SHOT_DONE_IN_BACKGROUND;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = core_box_cpp_FUN_0041daf0(auStack_1c);
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                (&this_ptr->model,0.0,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    return;
  }
  return;
}
