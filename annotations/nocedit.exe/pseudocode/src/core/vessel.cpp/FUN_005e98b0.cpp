// Name: core_vessel.cpp_FUN_005e98b0
// Address: 005e98b0
// Address Range: [[005e98b0, 005e99ff] [005e9a01, 005e9a79]]
// Convention: __cdecl
// Signature: int core_vessel.cpp_FUN_005e98b0(CCryptVessel * this_ptr)

#include "nocturne.h"

int __cdecl core_vessel_cpp_FUN_005e98b0(CCryptVessel *this_ptr)

{
  char cVar1;
  CKeyFramedModel *pCVar2;
  uint extraout_EDX;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  
  if (*(int *)(this_ptr->field14_0x3c0 + 0x428) == 0) {
    return 0;
  }
  if (this_ptr->visual_type == 1) {
    core_flame_cpp_FUN_004ca110();
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&(this_ptr->base_actor).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&(this_ptr->base_actor).orient,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)0x400ccccd,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  if (this_ptr->visual_type == 2) {
    dVar5 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,
                                        (CKeyFramedModelInstance *)(this_ptr->field14_0x3c0 + 0x2ac)
                                       ));
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(SUB84 /* extract 2-byte value */(dVar5,0));
    crt_stdio_c_sprintf_FUN_005fdbd0
              (pCVar2->texture_list[0].base.texture_name,"BWATER%d.RAW");
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,48000);
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(this_ptr->field14_0x3c0 + 0x2ac));
    pcVar3 = "MENUCLD2.RAW";
    pcVar4 = pCVar2->texture_list[0].base.texture_name;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    if (this_ptr->visual_type == 0) {
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0x4000);
    }
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(this_ptr->field14_0x3c0 + 0x2ac),0.0,0x267);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return 1;
}
