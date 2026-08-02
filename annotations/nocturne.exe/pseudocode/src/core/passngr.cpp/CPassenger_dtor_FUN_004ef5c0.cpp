// Name: core_passngr.cpp_CPassenger_dtor_FUN_004ef5c0
// Address: 004ef5c0
// Address Range: [[004ef5c0, 004ef6c2]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_004ef5c0(CPassenger *this_ptr,uint flags)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_004ef5c0(CPassenger *this_ptr,uint flags)

{
  CWerewolf *this_ptr_00;
  CMorph *pCVar1;
  CPathMap *pCVar2;
  CFlame *pCVar3;
  SFire *pSVar4;
  CVector3f *pCVar5;
  CClothList *pCVar6;
  CDeformableModelInstance *pCVar7;
  CPassenger *pCVar8;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CPassengerTypeInfo_005a11b0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  this_ptr_00 = this_ptr->werewolf_actor;
  (this_ptr->base).base.base.vtable._ub = &g_CPassengerVTable._ub;
  if (this_ptr_00 != (CWerewolf *)0x0) {
    (*((this_ptr_00->base).base.base.vtable._ub)->dtor)((CDemonActor *)this_ptr_00,2);
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004e0070(&this_ptr->morph,0);
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_004efdd0
                     ((CPathMap *)(pCVar1[-0x1a].models[0].textures[7].textures[1].texture_name + 8)
                      ,0);
  pCVar3 = core_armour_cpp_CFlame_arrdtor_FUN_0040fe50
                     ((CFlame *)(pCVar2[-1].height_cache_tags[0xc] + 0x39),0);
  pSVar4 = core_armour_cpp_SFire_arrdtor_FUN_0040fe30
                     ((SFire *)(pCVar3[-2].base.create_event + 0x10),0);
  pCVar5 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10((CVector3f *)&pSVar4[-0x16].bone_index,0);
  pCVar5 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(pCVar5 + -0xf,0);
  pCVar6 = core_cloth_cpp_CClothList_dtor_FUN_00438250((CClothList *)(pCVar5 + -0x26),0);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar6[-0x18].filenames[2] + 0x10),0);
  pCVar8 = (CPassenger *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)(pCVar7[-1].part_data.visibility_flags + 9),1);
  if ((flags & 2) != 0) {
    FUN_00564494(pCVar8);
    return pCVar8;
  }
  return pCVar8;
}
