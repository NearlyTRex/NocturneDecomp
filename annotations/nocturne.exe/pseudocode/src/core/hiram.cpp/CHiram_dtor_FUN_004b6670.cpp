// Name: core_hiram.cpp_CHiram_dtor_FUN_004b6670
// Address: 004b6670
// Address Range: [[004b6670, 004b6742]]
// Convention: unknown
// Signature: CDemonActor * core_hiram_cpp_CHiram_dtor_FUN_004b6670(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_hiram_cpp_CHiram_dtor_FUN_004b6670(CDemonActor *param_1,byte param_2)

{
  CPathMap *pCVar1;
  CFlame *pCVar2;
  SFire *pSVar3;
  CVector3f *pCVar4;
  CClothList *pCVar5;
  CDeformableModelInstance *pCVar6;
  CDemonActor *pCVar7;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CHiramTypeInfo_0059eee0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  (param_1->vtable)._ub = &g_CHiramVTable._ub;
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_004efdd0((CPathMap *)&param_1[0x8f].standing_platform,0);
  pCVar2 = core_armour_cpp_CFlame_arrdtor_FUN_0040fe50
                     ((CFlame *)(pCVar1[-1].height_cache_tags[0xc] + 0x39),0);
  pSVar3 = core_armour_cpp_SFire_arrdtor_FUN_0040fe30
                     ((SFire *)(pCVar2[-2].base.create_event + 0x10),0);
  pCVar4 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10((CVector3f *)&pSVar3[-0x16].bone_index,0);
  pCVar4 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(pCVar4 + -0xf,0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_00438250((CClothList *)(pCVar4 + -0x26),0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar5[-0x18].filenames[2] + 0x10),0);
  pCVar7 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)(pCVar6[-1].part_data.visibility_flags + 9),1);
  if ((param_2 & 2) == 0) {
    return pCVar7;
  }
  FUN_00564494(pCVar7);
  return pCVar7;
}
