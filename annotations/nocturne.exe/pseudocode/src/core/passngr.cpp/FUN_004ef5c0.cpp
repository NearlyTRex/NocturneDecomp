// Name: core_passngr.cpp_FUN_004ef5c0
// Address: 004ef5c0
// Address Range: [[004ef5c0, 004ef6c2]]
// Convention: unknown
// Signature: CDemonActor * core_passngr_cpp_FUN_004ef5c0(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_passngr_cpp_FUN_004ef5c0(CDemonActor *param_1,byte param_2)

{
  uint uVar1;
  CMorph *pCVar2;
  CPathMap *pCVar3;
  CFlame *pCVar4;
  SFire *pSVar5;
  CVector3f *pCVar6;
  CClothList *pCVar7;
  CDeformableModelInstance *pCVar8;
  CDemonActor *pCVar9;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CPassengerTypeInfo_005a11b0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  uVar1 = param_1[0x17e].blood_effect_color;
  (param_1->vtable)._ub = &g_CPassengerVTable._ub;
  if (uVar1 != 0) {
    (**(code **)(*(int *)(uVar1 + 0x14c) + 200))(uVar1,2);
  }
  pCVar2 = core_morph_cpp_CMorph_dtor_FUN_004e0070((CMorph *)param_1[0x17e].footstep_sound_code,0);
  pCVar3 = core_path_cpp_CPathMap_dtor_FUN_004efdd0
                     ((CPathMap *)(pCVar2[-0x1a].models[0].textures[7].textures[1].texture_name + 8)
                      ,0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor_FUN_0040fe50
                     ((CFlame *)(pCVar3[-1].height_cache_tags[0xc] + 0x39),0);
  pSVar5 = core_armour_cpp_SFire_arrdtor_FUN_0040fe30
                     ((SFire *)(pCVar4[-2].base.create_event + 0x10),0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10((CVector3f *)&pSVar5[-0x16].bone_index,0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(pCVar6 + -0xf,0);
  pCVar7 = core_cloth_cpp_CClothList_dtor_FUN_00438250((CClothList *)(pCVar6 + -0x26),0);
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar7[-0x18].filenames[2] + 0x10),0);
  pCVar9 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)(pCVar8[-1].part_data.visibility_flags + 9),1);
  if ((param_2 & 2) != 0) {
    FUN_00564494(pCVar9);
    return pCVar9;
  }
  return pCVar9;
}
