// Name: core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70
// Address: 0046fb70
// Address Range: [[0046fb70, 0046fcb8]]
// Convention: unknown
// Signature: undefined core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70()

#include "nocturne.h"

/* Signature: byte actors_other_dest.cpp_CDestActor_renderTransparent(uint param_1) */

uint core_dest_cpp_CDestActor_renderTransparent_FUN_0046fb70(void)

{
  int iVar1;
  CBoundingBox3D *pCVar2;
  CDemonActor *pCVar3;
  CDemonActor *in_stack_00000004;
  CBoundingBox3D local_24;
  
  if (*(int *)(g_CDemonMissionPtr->unk1 + 4) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar1 == 0) {
      if (*(CDemonActor **)in_stack_00000004[1].actor_name != (CDemonActor *)0x0) {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0
                          (*(CDemonActor **)in_stack_00000004[1].actor_name,"CBoxActor");
        if (iVar1 != 0) {
          core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
          pCVar2 = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)
                             (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffc4);
          iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar2);
          if (iVar1 != 0) {
            pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (*(CDemonActor **)in_stack_00000004[1].actor_name,
                                g_CBoxActorClassInfo.name_hash);
            if (pCVar3 == (CDemonActor *)0x0) {
              g_CurrentFilename = "..\\core\\dest.cpp";
              g_CurrentLineNumber = 0xa5;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CDestActor::renderTransparent - Catch 22");
            }
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr2,0x8000);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                      ((CKeyFramedModelInstance *)(pCVar3 + 1),0.0,0x2e6);
          }
          core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
          return 1;
        }
      }
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
      pCVar2 = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)(in_stack_00000004,&local_24);
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar2);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
      if (iVar1 != 0) {
        core_actor_cpp_CDemonActor_FUN_0040dec0(in_stack_00000004);
        return 1;
      }
    }
  }
  return 0;
}
