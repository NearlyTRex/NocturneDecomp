// Name: core_tbplayer.cpp_CBassPlayer_dtor_FUN_00572110
// Address: 00572110
// Address Range: [[00572110, 005721b4]]
// Convention: unknown
// Signature: CBassPlayer * core_tbplayer_cpp_CBassPlayer_dtor_FUN_00572110(CBassPlayer *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBassPlayer * core_tbplayer_cpp_CBassPlayer_dtor_FUN_00572110(CBassPlayer *this_ptr,uint flags)

{
  CPathMap *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CBassPlayer *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBassPlayerTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_00511d10(&(this_ptr->base).path_map,0);
  iVar2 = core_armour_cpp_FUN_0040f2b0(pCVar1[-1].height_cache[0x42] + 0x53,0);
  iVar2 = core_muzzle_cpp_FUN_0059df70(iVar2 + -0x9c8,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar2 + -0x34c),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[6] + 0x10),0);
  pCVar5 = (CBassPlayer *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar4[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return pCVar5;
  }
  FUN_005b7fdc(pCVar5);
  return pCVar5;
}
