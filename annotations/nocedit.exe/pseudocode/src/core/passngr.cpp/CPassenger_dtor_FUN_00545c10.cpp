// Name: core_passngr.cpp_CPassenger_dtor_FUN_00545c10
// Address: 00545c10
// Address Range: [[00545c10, 00545d2c]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint flags)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint flags)

{
  CWerewolf *this_ptr_00;
  CPassenger_ptr_129044 pCVar1;
  CPassenger_ptr_48676 pCVar2;
  CPassenger_ptr_13260 pCVar3;
  CPassenger_ptr_12060 pSVar1;
  CPassenger_ptr_11536 pCVar4;
  CPassenger_ptr_11356 pCVar5;
  CPassenger_ptr_10900 pCVar6;
  CPassenger_ptr_344 pCVar7;
  CPassenger *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    __vec_delete(this_ptr,&g_CPassengerTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  this_ptr_00 = this_ptr->werewolf_actor;
  (this_ptr->base).base.base.vtable._ub = &g_CPassengerVTable;
  if (this_ptr_00 != (CWerewolf *)0x0) {
    g_CurrentDebugLine = 0x50;
    g_CurrentDebugFilename = "..\\core\\passngr.cpp";
    (*((this_ptr_00->base).base.base.vtable._ub)->dtor)((CDemonActor *)this_ptr_00,2);
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_0052b330(&this_ptr->morph,0);
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_005464d0(&ADJ(pCVar1)->base.path_map,0);
  pCVar3 = (CPassenger_ptr_13260)
           core_armour_cpp_CFlame_arrdtor_FUN_00412720(ADJ(pCVar2)->base.base.flames,0);
  pSVar1 = (CPassenger_ptr_12060)
           core_armour_cpp_SFire_arrdtor_FUN_00412700(ADJ(pCVar3)->base.base.fire_effects,0);
  pCVar4 = (CPassenger_ptr_11536)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pSVar1)->base.base.collision_test_normals,0);
  pCVar5 = (CPassenger_ptr_11356)
           core_armour_cpp_CVector3f_arrdtor_FUN_004126e0
                     (ADJ(pCVar4)->base.base.collision_test_points,0);
  pCVar6 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80(&ADJ(pCVar5)->base.base.cloth_list,0);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     (&ADJ(pCVar6)->base.base.model,0);
  ptr = (CPassenger *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)ADJ(pCVar7),1);
  if ((flags & 2) != 0) {
    shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
    return ptr;
  }
  return ptr;
}
