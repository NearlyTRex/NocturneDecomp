// Name: core_charactr.cpp_CCharacter_renderAttachedModels_FUN_004265a0
// Address: 004265a0
// Address Range: [[004265a0, 00426693]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_004265a0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_004265a0(CCharacter *this_ptr)

{
  int iVar1;
  SDamageDecal *pSVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  CMatrix3x4f local_8c;
  CMatrix3x4f local_5c;
  CVector3f local_2c;
  CVector3f local_20;
  CMatrix3x4f *local_14;
  
  bVar6 = 0;
  iVar3 = 0;
  if (0 < this_ptr->damage_decal_count) {
    local_14 = (this_ptr->model).bone_transform.bone_world_matrices;
    pSVar2 = this_ptr->damage_decals;
    do {
      if ((this_ptr->model).part_data.visibility_flags[pSVar2->part_index] != 0) {
        core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
                  (&pSVar2->transform,local_14 + pSVar2->bone_index,&local_8c);
        pCVar4 = &local_8c;
        pCVar5 = &local_5c;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          pCVar5->m[0].w = *(float *)pCVar4;
          pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
        }
        core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_5c,&local_2c);
        local_20.x = local_5c.m[0].z;
        local_20.y = local_5c.m[1].z;
        local_20.z = local_5c.m[2].z;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                  (g_CDemonRenderer_PTR_005ae704,&local_2c,&local_20);
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                  ((CKeyFramedModelInstance *)&DAT_007658e4,0.0,-1);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
      }
      iVar3 = iVar3 + 1;
      pSVar2 = pSVar2 + 1;
    } while (iVar3 < this_ptr->damage_decal_count);
  }
  return;
}
