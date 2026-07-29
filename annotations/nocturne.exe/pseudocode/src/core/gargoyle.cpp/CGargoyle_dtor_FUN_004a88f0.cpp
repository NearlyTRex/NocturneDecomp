// Name: core_gargoyle.cpp_CGargoyle_dtor_FUN_004a88f0
// Address: 004a88f0
// Address Range: [[004a88f0, 004a89a8]]
// Convention: __cdecl
// Signature: CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_dtor_FUN_004a88f0(CGargoyle *this_ptr,uint flags)

#include "nocturne.h"

CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_dtor_FUN_004a88f0(CGargoyle *this_ptr,uint flags)

{
  CFlame *pCVar1;
  SFire *pSVar2;
  CVector3f *pCVar3;
  CClothList *pCVar4;
  CDeformableModelInstance *pCVar5;
  CGargoyle *pCVar6;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CGargoyleTypeInfo_0059e0a0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
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
  pCVar6 = (CGargoyle *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)(pCVar5[-1].part_data.visibility_flags + 9),1);
  if ((flags & 2) == 0) {
    return pCVar6;
  }
  FUN_00564494(pCVar6);
  return pCVar6;
}
