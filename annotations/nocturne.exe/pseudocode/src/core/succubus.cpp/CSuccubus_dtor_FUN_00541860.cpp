// Name: core_succubus.cpp_CSuccubus_dtor_FUN_00541860
// Address: 00541860
// Address Range: [[00541860, 00541948]]
// Convention: unknown
// Signature: CDemonActor * core_succubus_cpp_CSuccubus_dtor_FUN_00541860(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_succubus_cpp_CSuccubus_dtor_FUN_00541860(CDemonActor *param_1,byte param_2)

{
  CMorph *pCVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CFlame *pCVar4;
  SFire *pSVar5;
  CVector3f *pCVar6;
  CDemonActor *pCVar7;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CSuccubusTypeInfo_005a2a30);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004e0070
                     ((CMorph *)&param_1[0xab].previous_transform_state.orientation.vec,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_00438250
                     ((CClothList *)(pCVar1[-1].models[1].textures + 0xe),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar2[-0x15].cloths + 9),0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor_FUN_0040fe50
                     ((CFlame *)&pCVar3[-4].transformed_vertices[0x17].y,0);
  pSVar5 = core_armour_cpp_SFire_arrdtor_FUN_0040fe30
                     ((SFire *)(pCVar4[-2].base.create_event + 0x10),0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10((CVector3f *)&pSVar5[-0x16].bone_index,0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(pCVar6 + -0xf,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_00438250((CClothList *)(pCVar6 + -0x26),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar2[-0x18].filenames[2] + 0x10),0);
  pCVar7 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)(pCVar3[-1].part_data.visibility_flags + 9),1);
  if ((param_2 & 2) == 0) {
    return pCVar7;
  }
  FUN_00564494(pCVar7);
  return pCVar7;
}
