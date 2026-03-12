// Name: core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042a420
// Address: 0042a420
// Address Range: [[0042a420, 0042a50b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042a420(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_0042a420(CCharacter *this_ptr)

{
  int iVar1;
  SDamageDecal *pSVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x3f *pCVar5;
  byte bVar6;
  CMatrix3x4f local_8c;
  CMatrix3x3f local_5c;
  int local_30;
  CVector3f local_2c;
  CVector3i local_20;
  CMatrix3x4f *local_14;
  
  bVar6 = 0;
  iVar3 = 0;
  if (0 < this_ptr->damage_decal_count) {
    pSVar2 = this_ptr->damage_decals;
    do {
      if ((this_ptr->model).part_data.visibility_flags[pSVar2->part_index] != 0) {
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  (&pSVar2->transform,
                   (this_ptr->model).bone_transform.bone_world_matrices + pSVar2->bone_index,
                   &local_8c);
        pCVar4 = &local_8c;
        pCVar5 = &local_5c;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          pCVar5 = (CMatrix3x3f *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
          pCVar4 = (CMatrix3x4f *)((int)pCVar4 + (uint)bVar6 * -8 + 4);
          pCVar5->m[0].x = pCVar4->m[0].w;
          pCVar4 = pCVar4;
          pCVar5 = pCVar5;
        }
        core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_5c,&local_2c);
        local_20.x = (int)local_5c.m[1].x;
        local_20.y = (int)local_5c.m[2].y;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,(CVector3i *)&local_2c,&local_20);
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                  (&CKeyFramedModelInstance_00823a98,0.0,-1);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      }
      iVar3 = iVar3 + 1;
      pSVar2 = pSVar2 + 1;
    } while (iVar3 < this_ptr->damage_decal_count);
  }
  return;
}
