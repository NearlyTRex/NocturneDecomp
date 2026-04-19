// Name: core_tentacle.cpp_CTentacle_dtor_FUN_005dbcf0
// Address: 005dbcf0
// Address Range: [[005dbcf0, 005dbda8]]
// Convention: __cdecl
// Signature: CTentacle * __cdecl core_tentacle_cpp_CTentacle_dtor_FUN_005dbcf0(CTentacle *this_ptr,uint flags)

#include "nocturne.h"

CTentacle * __cdecl core_tentacle_cpp_CTentacle_dtor_FUN_005dbcf0(CTentacle *this_ptr,uint flags)

{
  CTentacle_ptr_13260 pCVar1;
  CTentacle_ptr_12060 pSVar1;
  CTentacle_ptr_11536 pCVar2;
  CTentacle_ptr_11356 pCVar3;
  CTentacle_ptr_10900 pCVar4;
  CTentacle_ptr_344 pCVar5;
  CTentacle *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CTentacleTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = (CTentacle_ptr_13260)
           core_armour_cpp_CFlame_arrdtor_FUN_00412720((this_ptr->base).base.flames,0);
  pSVar1 = (CTentacle_ptr_12060)
           core_armour_cpp_SFire_arrdtor_FUN_00412700(ADJ(pCVar1)->base.base.fires,0);
  pCVar2 = (CTentacle_ptr_11536)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pSVar1)->base.base.collision_test_normals,0);
  pCVar3 = (CTentacle_ptr_11356)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pCVar2)->base.base.collision_test_points,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar3)->base.base.cloth_list,0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     (&ADJ(pCVar4)->base.base.model,0);
  ptr = (CTentacle *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)ADJ(pCVar5),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
