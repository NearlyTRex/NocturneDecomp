// Name: core_dest.cpp_CActorDestination_renderTransparent_FUN_0046fb70
// Address: 0046fb70
// Address Range: [[0046fb70, 0046fcb8]]
// Convention: __cdecl
// Signature: int __cdecl core_dest_cpp_CActorDestination_renderTransparent_FUN_0046fb70(CActorDestination *this_ptr)

#include "nocturne.h"

int __cdecl core_dest_cpp_CActorDestination_renderTransparent_FUN_0046fb70(CActorDestination *this_ptr)

{
  int iVar1;
  CBoundingBox3D *pCVar2;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  CBoxActor *pCVar3;
  CBoundingBox3D CStack_3c;
  CBoundingBox3D local_24;
  
  if (g_CDemonMissionPtr->is_in_editor != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar1 == 0) {
      if (this_ptr->dest_actor != (CDemonActor *)0x0) {
        iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(this_ptr->dest_actor,"CBoxActor");
        if (iVar2 != 0) {
          core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
          this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_3c)
          ;
          iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
          if (iVar2 != 0) {
            pCVar3 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (this_ptr->dest_actor,g_CBoxActorClassInfo.name_hash);
            if (pCVar3 == (CBoxActor *)0x0) {
              g_CurrentFilename = "..\\core\\dest.cpp";
              g_CurrentLineNumber = 165;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CDestActor::renderTransparent - Catch 22");
            }
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr2,0x8000);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                      (&pCVar3->model,0.0,0x2e6);
          }
          core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
          return 1;
        }
      }
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
      pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_24);
      iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar2);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
      if (iVar2 != 0) {
        core_actor_cpp_CDemonActor_renderBoundingBoxSolid_FUN_0040dec0
                  (&this_ptr->base,0xff,0,0,0x80);
        return 1;
      }
    }
  }
  return 0;
}
