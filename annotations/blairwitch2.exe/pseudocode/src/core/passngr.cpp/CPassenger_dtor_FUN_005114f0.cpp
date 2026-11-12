// Name: core_passngr.cpp_CPassenger_dtor_FUN_005114f0
// Address: 005114f0
// Address Range: [[005114f0, 005115d2]]
// Convention: unknown
// Signature: CPassenger * core_passngr_cpp_CPassenger_dtor_FUN_005114f0(CPassenger *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CPassenger * core_passngr_cpp_CPassenger_dtor_FUN_005114f0(CPassenger *this_ptr,uint flags)

{
  CWerewolf *this_ptr_00;
  CMorph *pCVar1;
  CPathMap *pCVar2;
  int iVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CPassenger *pCVar6;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CPassengerTypeInfo);
    FUN_005b7fce(ptr);
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
  iVar3 = core_armour_cpp_FUN_0040f2b0(pCVar2[-1].height_cache[0x42] + 0x53,0);
  iVar3 = core_muzzle_cpp_FUN_0059df70(iVar3 + -0x9c8,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar3 + -0x34c),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar4[-0x19].filenames[6] + 0x10),0);
  pCVar6 = (CPassenger *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar5[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) != 0) {
    FUN_005b7fdc(pCVar6);
    return pCVar6;
  }
  return pCVar6;
}
