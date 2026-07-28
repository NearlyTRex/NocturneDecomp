// Name: core_set.cpp_CDemonSet_buildMirrorList_FUN_0050e210
// Address: 0050e210
// Address Range: [[0050e210, 0050e2f7]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_0050e210(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_0050e210(CDemonSet *this_ptr)

{
  CDemonActor *pCVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  int iVar3;
  CDemonSet *pCVar4;
  CBoundingBox3D local_28;
  
  iVar2 = *(int *)this_ptr->lights[199].filter_names[0x14];
  this_ptr->renderable_actors[0x6f7] = (CDemonActor *)0x0;
  iVar3 = 0;
  pCVar4 = this_ptr;
  if (0 < iVar2) {
    do {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(CDemonActor **)(pCVar4->lights[199].filter_names[0x14] + 4),
                          g_CGlassActorType_01c78c40.name_hash);
      if ((pCVar1 != (CDemonActor *)0x0) && (*(int *)(pCVar1[1].create_event + 0x18) != 0)) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(pCVar1);
        this_ptr_00 = (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,&local_28);
        iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
        if (iVar2 != 0) {
          this_ptr->renderable_actors[(int)&this_ptr->renderable_actors[0x6f7][5].validation_magic]
               = pCVar1;
          pCVar1 = (CDemonActor *)(this_ptr->renderable_actors[0x6f7]->actor_name + 1);
          this_ptr->renderable_actors[0x6f7] = pCVar1;
          if (99 < (int)pCVar1) {
            PTR_01cc4800 = "..\\core\\set.cpp";
            INT_01cc4804 = 0x1118;
            core_main_c_FUN_004c8440("CDemonSet::buildMirrorList - Too many mirrors");
          }
        }
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
      }
      iVar3 = iVar3 + 1;
      pCVar4 = (CDemonSet *)pCVar4->cameras;
    } while (iVar3 < *(int *)this_ptr->lights[199].filter_names[0x14]);
  }
  return;
}
