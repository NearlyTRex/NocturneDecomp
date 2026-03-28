// Name: core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700
// Address: 005e7700
// Address Range: [[005e7700, 005e7808]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_005e7700(CVampireBoss *this_ptr,uint flags)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_005e7700(CVampireBoss *this_ptr,uint flags)

{
  CVampireBoss_ptr_842948 pCVar1;
  CVampireBoss_ptr_581200 pCVar2;
  CVampireBoss_ptr_319456 pCVar3;
  CVampireBoss_ptr_57712 pCVar4;
  CVampireBoss_ptr_48828 pCVar5;
  CVampireBoss_ptr_13260 pCVar6;
  CVampireBoss_ptr_12060 pSVar1;
  CVampireBoss_ptr_11536 pCVar7;
  CVampireBoss_ptr_11356 pCVar8;
  CVampireBoss_ptr_10900 pCVar9;
  CVampireBoss_ptr_344 pCVar10;
  CVampireBoss *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CVampireBossTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_0052b330(&this_ptr->morph,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_00438c00(&ADJ(pCVar1)->skirt_cloth,0);
  pCVar3 = core_cloth_cpp_CCloth_dtor_FUN_00438c00(&ADJ(pCVar2)->cape_cloth,0);
  pCVar4 = core_cloth_cpp_CCloth_dtor_FUN_00438c00(&ADJ(pCVar3)->wing_cloth,0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40(&ADJ(pCVar4)->model,0);
  pCVar6 = (CVampireBoss_ptr_13260)
           core_armour_cpp_CFlame_arrdtor_FUN_00412720(ADJ(pCVar5)->base.base.flames,0);
  pSVar1 = (CVampireBoss_ptr_12060)
           core_armour_cpp_SFire_arrdtor_FUN_00412700(ADJ(pCVar6)->base.base.fire_effects,0);
  pCVar7 = (CVampireBoss_ptr_11536)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pSVar1)->base.base.collision_test_normals,0);
  pCVar8 = (CVampireBoss_ptr_11356)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pCVar7)->base.base.collision_test_points,0);
  pCVar9 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar8)->base.base.cloth_list,0);
  pCVar10 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                      (&ADJ(pCVar9)->base.base.model,0);
  ptr = (CVampireBoss *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)ADJ(pCVar10),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
