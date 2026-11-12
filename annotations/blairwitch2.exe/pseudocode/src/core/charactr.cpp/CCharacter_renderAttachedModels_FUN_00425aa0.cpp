// Name: core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0
// Address: 00425aa0
// Address Range: [[00425aa0, 00425ba9]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_00425aa0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_00425aa0(CCharacter *this_ptr)

{
  int iVar1;
  SDamageDecal *pSVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  CMatrix3x4f *apCStackY_1020 [991];
  CVector3f *translation;
  uint local_68 [3];
  float local_5c;
  float local_4c;
  float local_3c;
  CVector3f local_38;
  CVector3f local_2c;
  float local_20;
  CMatrix3x4f *apCStack_1c [3];
  
  bVar6 = 0;
  iVar3 = 0;
  if (0 < this_ptr->damage_decal_count) {
    apCStack_1c[2] = (this_ptr->model).bone_transform.bone_model_matrices;
    pSVar2 = this_ptr->damage_decals;
    do {
      if ((this_ptr->model).part_data.visibility_flags[pSVar2->part_index] != 0) {
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                  (&pSVar2->transform,apCStack_1c[2] + pSVar2->bone_index);
        puVar4 = (uint *)&stack0xffffff68;
        puVar5 = local_68;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        core_xform_cpp_matrixToEulerAngles_FUN_00591de0(local_68);
        local_2c.x = local_5c;
        local_2c.y = local_4c;
        local_2c.z = local_3c;
        translation = &local_2c;
        local_38.x = local_20;
        *(CMatrix3x4f **)((int)&local_38 + (uint)bVar6 * -8 + 4) = apCStack_1c[(uint)bVar6 * -2];
        *(CMatrix3x4f **)((int)&local_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             apCStack_1c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                  (DAT_0060b280,&local_38,translation);
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                  ((CKeyFramedModelInstance *)&DAT_007bdadc,0.0,-1);
        engine_drender_cpp_pop_FUN_0046b4a0();
      }
      iVar3 = iVar3 + 1;
      pSVar2 = pSVar2 + 1;
    } while (iVar3 < this_ptr->damage_decal_count);
  }
  return;
}
