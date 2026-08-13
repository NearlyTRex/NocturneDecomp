// Name: core_set.cpp_CDemonSet_buildMirrorList_FUN_0050e210
// Address: 0050e210
// Address Range: [[0050e210, 0050e2f7]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_0050e210(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_0050e210(CDemonSet *this_ptr)

{
  CGlass *actor;
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  int iVar2;
  CDemonSet *pCVar3;
  CBoundingBox3D local_28;
  
  this_ptr->mirror_glass_actor_count = 0;
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      actor = (CGlass *)
              core_actor_cpp_castToClassHash_FUN_0040d890
                        (pCVar3->actors[0],g_CGlassActorType_01c78c40.name_hash);
      if ((actor != (CGlass *)0x0) && (actor->mirror_flag != 0)) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)actor);
        this_ptr_00 = (*((actor->base).vtable._ub)->getBoundingBox)((CDemonActor *)actor,&local_28);
        iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
        if (iVar1 != 0) {
          this_ptr->mirror_glass_actors[this_ptr->mirror_glass_actor_count] = actor;
          iVar1 = this_ptr->mirror_glass_actor_count + 1;
          this_ptr->mirror_glass_actor_count = iVar1;
          if (99 < iVar1) {
            g_CurrentFilename = "..\\core\\set.cpp";
            g_CurrentLineNumber = 4376;
            core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonSet::buildMirrorList - Too many mirrors");
          }
        }
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar2 < this_ptr->actor_count);
  }
  return;
}
