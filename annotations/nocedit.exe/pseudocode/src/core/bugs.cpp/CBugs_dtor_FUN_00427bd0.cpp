// Name: core_bugs.cpp_CBugs_dtor_FUN_00427bd0
// Address: 00427bd0
// Address Range: [[00427bd0, 00427c98]]
// Convention: __cdecl
// Signature: CBugs * __cdecl core_bugs_cpp_CBugs_dtor_FUN_00427bd0(CBugs *this_ptr,uint flags)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_CBugs_dtor_FUN_00427bd0(CBugs *this_ptr,uint flags)

{
  CBugs_ptr_48836 pSVar1;
  CBugs_ptr_13260 pCVar1;
  CBugs_ptr_12060 pSVar2;
  CBugs_ptr_11536 pCVar2;
  CBugs_ptr_11356 pCVar3;
  CBugs_ptr_10900 pCVar4;
  CBugs_ptr_344 pCVar5;
  CBugs *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    __vec_delete(this_ptr,&g_CBugsTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pSVar1 = (CBugs_ptr_48836)core_bugs_cpp_SBug_arrdtor_FUN_00427cc0(this_ptr->bugs,0);
  pCVar1 = (CBugs_ptr_13260)
           core_armour_cpp_CFlame_arrdtor_FUN_00412720(ADJ(pSVar1)->base.base.flames,0);
  pSVar2 = (CBugs_ptr_12060)
           core_armour_cpp_SFire_arrdtor_FUN_00412700(ADJ(pCVar1)->base.base.fire_effects,0);
  pCVar2 = (CBugs_ptr_11536)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pSVar2)->base.base.collision_test_normals,0);
  pCVar3 = (CBugs_ptr_11356)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pCVar2)->base.base.collision_test_points,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar3)->base.base.cloth_list,0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     (&ADJ(pCVar4)->base.base.model,0);
  ptr = (CBugs *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)ADJ(pCVar5),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
