// Name: core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70
// Address: 00570b70
// Address Range: [[00570b70, 00570c53]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_00570b70(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_00570b70(CDemonSet *this_ptr)

{
  CGlass *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar1;
  int iVar2;
  CDemonSet *pCVar3;
  CBoundingBox3D CStack_28;
  
  this_ptr->mirror_glass_actor_count = 0;
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->actor_count) {
    do {
      this_ptr_00 = (CGlass *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (pCVar3->actors[0],g_CGlassClassInfo.name_hash);
      if ((this_ptr_00 != (CGlass *)0x0) && (this_ptr_00->mirror_flag != 0)) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr_00);
        this_ptr_01 = (*((this_ptr_00->base).vtable._ub)->getBoundingBox)
                                ((CDemonActor *)this_ptr_00,&CStack_28);
        iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
        if (iVar1 != 0) {
          this_ptr->mirror_glass_actors[this_ptr->mirror_glass_actor_count] = this_ptr_00;
          iVar1 = this_ptr->mirror_glass_actor_count + 1;
          this_ptr->mirror_glass_actor_count = iVar1;
          if (99 < iVar1) {
            g_CurrentFilename = "..\\core\\set.cpp";
            g_CurrentLineNumber = 4564;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::buildMirrorList - Too many mirrors");
          }
        }
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar2 < this_ptr->actor_count);
  }
  return;
}
