// Name: core_beast.cpp_CBeast_dtor_FUN_00418490
// Address: 00418490
// Address Range: [[00418490, 00418548]]
// Convention: __cdecl
// Signature: CBeast * __cdecl core_beast_cpp_CBeast_dtor_FUN_00418490(CBeast *this_ptr,uint flags)

#include "nocturne.h"

CBeast * __cdecl core_beast_cpp_CBeast_dtor_FUN_00418490(CBeast *this_ptr,uint flags)

{
  CFlame *pCVar1;
  SFire *pSVar2;
  CVector3f *pCVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CBeast *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBeastTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_armour_cpp_freeFlames_FUN_00412720((this_ptr->base).base.field66_0x33cc);
  pSVar2 = core_armour_cpp_freeFires_FUN_00412700((SFire *)(pCVar1[-2].base.create_event + 0x20));
  pCVar3 = core_armour_cpp_freeVectors_FUN_004126e0((CVector3f *)(pSVar2[-0x16].unk + 4));
  pCVar3 = core_armour_cpp_freeVectors_FUN_004126e0(pCVar3 + -0xf);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar3 + -0x26));
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar4[-0x18].filenames[2] + 0x10),0);
  ptr = (CBeast *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar5[-1].part_visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
