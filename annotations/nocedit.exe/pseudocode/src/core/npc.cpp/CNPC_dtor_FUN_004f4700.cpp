// Name: core_npc.cpp_CNPC_dtor_FUN_004f4700
// Address: 004f4700
// Address Range: [[004f4700, 004f47c8]]
// Convention: __cdecl
// Signature: CNPC * __cdecl core_npc_cpp_CNPC_dtor_FUN_004f4700(CNPC *this_ptr,uint flags)

#include "nocturne.h"

CNPC * __cdecl core_npc_cpp_CNPC_dtor_FUN_004f4700(CNPC *this_ptr,uint flags)

{
  CNPC_ptr_48676 pCVar1;
  CNPC_ptr_13260 pCVar2;
  CNPC_ptr_12060 pSVar1;
  CNPC_ptr_11536 pCVar3;
  CNPC_ptr_11356 pCVar4;
  CNPC_ptr_10900 pCVar5;
  CNPC_ptr_344 pCVar6;
  CNPC *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    __vec_delete(this_ptr,&g_CNPCTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_005464d0(&this_ptr->path_map,0);
  pCVar2 = (CNPC_ptr_13260)core_armour_cpp_CFlame_arrdtor_FUN_00412720(ADJ(pCVar1)->base.flames,0);
  pSVar1 = (CNPC_ptr_12060)
           core_armour_cpp_SFire_arrdtor_FUN_00412700(ADJ(pCVar2)->base.fire_effects,0);
  pCVar3 = (CNPC_ptr_11536)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(ADJ(pSVar1)->base.collision_test_normals,0)
  ;
  pCVar4 = (CNPC_ptr_11356)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(ADJ(pCVar3)->base.collision_test_points,0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar4)->base.cloth_list,0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40(&ADJ(pCVar5)->base.model,0);
  ptr = (CNPC *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)ADJ(pCVar6),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
