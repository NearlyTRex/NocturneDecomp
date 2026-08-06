// Name: core_ghoul.cpp_CGhoul_dtor_FUN_004aba30
// Address: 004aba30
// Address Range: [[004aba30, 004abae8]]
// Convention: __cdecl
// Signature: CGhoul * __cdecl core_ghoul_cpp_CGhoul_dtor_FUN_004aba30(CGhoul *this_ptr,uint flags)

#include "nocturne.h"

CGhoul * __cdecl core_ghoul_cpp_CGhoul_dtor_FUN_004aba30(CGhoul *this_ptr,uint flags)

{
  CFlame *pCVar1;
  SFire *pSVar2;
  CVector3f *pCVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CGhoul *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CGhoulTypeInfo_0059e370);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_armour_cpp_CFlame_arrdtor_FUN_0040fe50((this_ptr->base).base.flames,0);
  pSVar2 = core_armour_cpp_SFire_arrdtor_FUN_0040fe30
                     ((SFire *)(pCVar1[-2].base.create_event + 0x10),0);
  pCVar3 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10((CVector3f *)&pSVar2[-0x16].bone_index,0);
  pCVar3 = core_armour_cpp_CVector3f_arrdtor_FUN_0040fe10(pCVar3 + -0xf,0);
  pCVar4 = core_cloth_cpp_CClothList_dtor_FUN_00438250((CClothList *)(pCVar3 + -0x26),0);
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar4[-0x18].filenames[2] + 0x10),0);
  ptr = (CGhoul *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                  ((CDemonActor *)(pCVar5[-1].part_data.visibility_flags + 9),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
