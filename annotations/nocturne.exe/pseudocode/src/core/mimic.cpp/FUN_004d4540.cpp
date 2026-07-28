// Name: core_mimic.cpp_FUN_004d4540
// Address: 004d4540
// Address Range: [[004d4540, 004d4648]]
// Convention: unknown
// Signature: CDemonActor * core_mimic_cpp_FUN_004d4540(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_mimic_cpp_FUN_004d4540(CDemonActor *param_1,byte param_2)

{
  float fVar1;
  CMorph *pCVar2;
  CCloth *pCVar3;
  CFlame *pCVar4;
  SFire *pSVar5;
  CVector3f *pCVar6;
  CClothList *pCVar7;
  CDeformableModelInstance *pCVar8;
  CDemonActor *pCVar9;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CMimicTypeInfo_005a0740);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  fVar1 = param_1[0x365].platform_orientation_delta.x;
  (param_1->vtable)._ub = (CDemonActor_vtable *)&PTR_core_mimic_cpp_FUN_004d4650_005a05f4;
  if (fVar1 != 0.0) {
    (**(code **)(*(int *)((int)fVar1 + 0x14c) + 200))(fVar1,2);
  }
  param_1[0x365].platform_orientation_delta.x = 0.0;
  pCVar2 = core_morph_cpp_CMorph_dtor_FUN_004e0070((CMorph *)(param_1[0x35c].create_event + 0x14),0)
  ;
  pCVar3 = core_cloth_cpp_CCloth_dtor_FUN_00435160
                     ((CCloth *)pCVar2[-0x4e].models[1].textures[0xc].textures[2].texture_name,0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor_FUN_0040fe50
                     ((CFlame *)(pCVar3[-1].vertices[0x2ce].bone_index + 2),0);
  pSVar5 = core_armour_cpp_SFire_arrdtor_FUN_0040fe30
                     ((SFire *)(pCVar4[-2].base.create_event + 0x10),0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10((CVector3f *)&pSVar5[-0x16].bone_index,0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(pCVar6 + -0xf,0);
  pCVar7 = core_cloth_cpp_CClothList_dtor_FUN_00438250((CClothList *)(pCVar6 + -0x26),0);
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar7[-0x18].filenames[2] + 0x10),0);
  pCVar9 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)(pCVar8[-1].part_data.visibility_flags + 9),1);
  if ((param_2 & 2) == 0) {
    return pCVar9;
  }
  FUN_00564494(pCVar9);
  return pCVar9;
}
