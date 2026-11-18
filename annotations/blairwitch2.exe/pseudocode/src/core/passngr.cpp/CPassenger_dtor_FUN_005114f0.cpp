// Name: core_passngr.cpp_CPassenger_dtor_FUN_005114f0
// Address: 005114f0
// Address Range: [[005114f0, 005115d2]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_005114f0(CPassenger *this_ptr,uint flags)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_005114f0(CPassenger *this_ptr,uint flags)

{
  CWerewolf *this_ptr_00;
  CMorph *pCVar1;
  CPathMap *pCVar2;
  CFlame *pCVar3;
  SFollowFormation *pSVar4;
  CClothList *pCVar5;
  CDeformableModelInstance *pCVar6;
  CPassenger *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPassengerTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  this_ptr_00 = this_ptr->werewolf_actor;
  (this_ptr->base).base.base.vtable._ub = &g_CPassengerVTable._ub;
  if (this_ptr_00 != (CWerewolf *)0x0) {
    (*((this_ptr_00->base).base.base.vtable._ub)->dtor)((CDemonActor *)this_ptr_00,2);
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_005b6e80(&this_ptr->morph,0);
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_00511d10
                     ((CPathMap *)(pCVar1[-0x1a].models[0].textures[7].texture_name + 0x1c),0);
  pCVar3 = core_armour_cpp_CFlame_arrdtor50_FUN_0040f2b0
                     ((CFlame *)(pCVar2[-1].height_cache[0x42] + 0x53),0);
  pSVar4 = core_muzzle_cpp_SFollowFormation_dtor_FUN_0059df70
                     ((SFollowFormation *)&pCVar3[-3].base.particle_systems[3].max_particles,0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_005b1480
                     ((CClothList *)&pSVar4[-1].slots[2].offset.y,0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar5[-0x19].filenames[6] + 0x10),0);
  ptr = (CPassenger *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408930
                  ((CDemonActor *)(pCVar6[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) != 0) {
    debugFreeChecked(ptr);
    return ptr;
  }
  return ptr;
}
