// Name: core_basicnpc.cpp_CBasicNPC_dtor_FUN_005a4980
// Address: 005a4980
// Address Range: [[005a4980, 005a4a14]]
// Convention: __cdecl
// Signature: CBasicNPC * __cdecl core_basicnpc_cpp_CBasicNPC_dtor_FUN_005a4980(CBasicNPC *this_ptr,uint flags)

#include "nocturne.h"

CBasicNPC * __cdecl core_basicnpc_cpp_CBasicNPC_dtor_FUN_005a4980(CBasicNPC *this_ptr,uint flags)

{
  CFlame *pCVar1;
  int iVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CDemonActor *pCVar5;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBasicNPCTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_armour_cpp_CFlame_arrdtor50_FUN_0040f2b0((this_ptr->base).base.base.flames,0);
  iVar2 = core_muzzle_cpp_FUN_0059df70(&pCVar1[-3].base.particle_systems[3].max_particles,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_005b1480((CClothList *)(iVar2 + -0x34c),0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[6] + 0x10),0);
  pCVar5 = core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)(pCVar4[-1].bone_transform.bone_model_matrices[0x5d].m + 1),1);
  if ((flags & 2) == 0) {
    return (CBasicNPC *)pCVar5;
  }
  FUN_005b7fdc(pCVar5);
  return (CBasicNPC *)pCVar5;
}
