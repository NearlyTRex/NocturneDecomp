// Name: core_vampboss.cpp_CVampireBoss_dtor_FUN_0054e370
// Address: 0054e370
// Address Range: [[0054e370, 0054e478]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_0054e370(CVampireBoss *this_ptr,uint flags)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_0054e370(CVampireBoss *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CCloth *pCVar2;
  CDeformableModelInstance *pCVar3;
  CFlame *pCVar4;
  SFire *pSVar5;
  CVector3f *pCVar6;
  CClothList *pCVar7;
  CVampireBoss *pCVar8;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CVampireBossTypeInfo_005a3be0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004e0070
                     ((CMorph *)((this_ptr->skirt_cloth).vertices[0x26a].connected_indices + 4),0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_00435160
                     ((CCloth *)&pCVar1[-0x4e].models[1].textures[0xd].textures[1].base.count,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_00435160
                     ((CCloth *)
                      (pCVar2[-1].model.texture_list[0x123].textures[2].texture_name + 0xc),0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_00435160
                     ((CCloth *)
                      (pCVar2[-1].model.texture_list[0x123].textures[2].texture_name + 0xc),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)
                      (pCVar2[-1].collide_bones[0x13].world_matrix.m + 2),0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor_FUN_0040fe50
                     ((CFlame *)&pCVar3[-4].transformed_vertices[0x17].y,0);
  pSVar5 = core_armour_cpp_SFire_arrdtor_FUN_0040fe30
                     ((SFire *)(pCVar4[-2].base.create_event + 0x10),0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10((CVector3f *)&pSVar5[-0x16].bone_index,0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(pCVar6 + -0xf,0);
  pCVar7 = core_cloth_cpp_CClothList_dtor_FUN_00438250((CClothList *)(pCVar6 + -0x26),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar7[-0x18].filenames[2] + 0x10),0);
  pCVar8 = (CVampireBoss *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)(pCVar3[-1].part_data.visibility_flags + 9),1);
  if ((flags & 2) == 0) {
    return pCVar8;
  }
  FUN_00564494(pCVar8);
  return pCVar8;
}
