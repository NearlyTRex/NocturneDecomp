// Name: core_succubus.cpp_CSuccubus_renderOpaque_FUN_005c7590
// Address: 005c7590
// Address Range: [[005c7590, 005c7709]]
// Convention: __cdecl
// Signature: int __cdecl core_succubus_cpp_CSuccubus_renderOpaque_FUN_005c7590(CSuccubus *this_ptr)

#include "nocturne.h"

int __cdecl core_succubus_cpp_CSuccubus_renderOpaque_FUN_005c7590(CSuccubus *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  int unaff_retaddr;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr2);
  if (iVar1 == 0) {
    (this_ptr->base).base.field43_0x2620 = 0;
  }
  if ((this_ptr->base).base.field2_0x240c == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                            ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffffdc);
    iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar2 != 0) {
      (this_ptr->base).base.field43_0x2620 = 1;
      if (iVar1 == 0) {
        if (*(int *)(this_ptr->unk + 0x2478) == 0) {
          core_charactr_cpp_CCharacter_renderCharacter_FUN_00429aa0((CCharacter *)this_ptr);
        }
        else {
          core_morph_cpp_FUN_0052b600();
          core_morph_cpp_FUN_0052b600();
          core_morph_cpp_FUN_0052b640();
          core_morph_cpp_FUN_0052b640();
          core_morph_cpp_CMorphModel_FUN_0052bae0((CMorphModel *)(this_ptr->unk + 0x2480));
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                  ((CDeformableModelInstance *)this_ptr->unk,-1,0xffffffff,1,0);
        core_cloth_cpp_CClothList_render_FUN_0043c320
                  ((CClothList *)(this_ptr->unk + 0x22b4),(CDeformableModelInstance *)this_ptr->unk)
        ;
      }
      if ((DAT_02f43978 != 0) &&
         (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
         iVar1 == 0)) {
        core_motion_cpp_CMotionController_render_FUN_0052e700
                  (&(this_ptr->base).base.model.motion_controller,(CDemonActor *)this_ptr);
        (*((this_ptr->base).base.base.vtable._ub)->renderTargetPoints)((CDemonActor *)this_ptr);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return unaff_retaddr;
  }
  return 0;
}
