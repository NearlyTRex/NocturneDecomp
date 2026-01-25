// Name: core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70
// Address: 00570b70
// Address Range: [[00570b70, 00570c36] [00570c3a, 00570c53]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_00570b70(CDemonSet *this_ptr)

{
  CGlass *actor;
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  int iVar2;
  CDemonSet *pCVar3;
  float fStack_28;
  
  this_ptr->mirror_glass_count = 0;
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < (int)this_ptr->actor_list_ptr) {
    do {
      actor = (CGlass *)
              core_actor_cpp_castToClassHash_FUN_0040c790
                        (*(CDemonActor **)pCVar3->actor_list_data,g_CGlassClassInfo.name_hash);
      if ((actor != (CGlass *)0x0) && (actor->mirror_flag != 0)) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)actor);
        this_ptr_00 = (*((actor->base).vtable._ub)->getBoundingBox)
                                ((CDemonActor *)actor,(CBoundingBox3D *)&fStack_28);
        fStack_28 = 7.993952e-39;
        iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
        if (iVar1 != 0) {
          this_ptr->mirror_glass_actors[this_ptr->mirror_glass_count] = actor;
          iVar1 = this_ptr->mirror_glass_count + 1;
          this_ptr->mirror_glass_count = iVar1;
          if (99 < iVar1) {
            g_CurrentFilename = "..\\core\\set.cpp";
            g_CurrentLineNumber = 0x11d4;
            fStack_28 = 7.994049e-39;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::buildMirrorList - Too many mirrors");
          }
        }
        fStack_28 = 7.99407e-39;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar2 < (int)this_ptr->actor_list_ptr);
  }
  return;
}
