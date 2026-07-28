// Name: core_larva.cpp_FUN_004c5540
// Address: 004c5540
// Address Range: [[004c5540, 004c55f8]]
// Convention: unknown
// Signature: CDemonActor * core_larva_cpp_FUN_004c5540(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_larva_cpp_FUN_004c5540(CDemonActor *param_1,byte param_2)

{
  CFlame *pCVar1;
  SFire *pSVar2;
  CVector3f *pCVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CDemonActor *pCVar6;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CLarvaTypeInfo_0059fbd0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_armour_cpp_CFlame_arrdtor_FUN_0040fe50
                     ((CFlame *)(param_1[0x27].create_event + 0x1c),0);
  pSVar2 = core_armour_cpp_SFire_arrdtor_FUN_0040fe30
                     ((SFire *)(pCVar1[-2].base.create_event + 0x10),0);
  pCVar3 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10((CVector3f *)&pSVar2[-0x16].bone_index,0);
  pCVar3 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(pCVar3 + -0xf,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_00438250((CClothList *)(pCVar3 + -0x26),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar4[-0x18].filenames[2] + 0x10),0);
  pCVar6 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)(pCVar5[-1].part_data.visibility_flags + 9),1);
  if ((param_2 & 2) == 0) {
    return pCVar6;
  }
  FUN_00564494(pCVar6);
  return pCVar6;
}
