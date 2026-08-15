// Name: core_bugs.cpp_CBugs_dtor_FUN_00423d90
// Address: 00423d90
// Address Range: [[00423d90, 00423e58]]
// Convention: __cdecl
// Signature: CBugs * __cdecl core_bugs_cpp_CBugs_dtor_FUN_00423d90(CBugs *this_ptr,uint flags)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_CBugs_dtor_FUN_00423d90(CBugs *this_ptr,uint flags)

{
  SBug *pSVar1;
  CFlame *pCVar2;
  SFire *pSVar3;
  CVector3f *pCVar4;
  CClothList *pCVar5;
  CDeformableModelInstance *pCVar6;
  CBugs *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBugsTypeInfo_0059b050);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pSVar1 = core_bugs_cpp_SBug_arrdtor400_FUN_00423e80(this_ptr->bugs,0);
  pCVar2 = core_armour_cpp_CFlame_arrdtor50_FUN_0040fe50((CFlame *)&pSVar1[-0x226].orientation.y,0);
  pSVar3 = core_armour_cpp_SFire_arrdtor50_FUN_0040fe30
                     ((SFire *)(pCVar2[-2].base.create_event + 0x10),0);
  pCVar4 = core_armour_cpp_CVector3f_arrdtor15_FUN_0040fe10
                     ((CVector3f *)&pSVar3[-0x16].bone_index,0);
  pCVar4 = core_armour_cpp_CVector3f_arrdtor15_FUN_0040fe10(pCVar4 + -0xf,0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_00438250((CClothList *)(pCVar4 + -0x26),0);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)(pCVar5[-0x18].filenames[2] + 0x10),0);
  ptr = (CBugs *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                           ((CDemonActor *)(pCVar6[-1].part_data.visibility_flags + 9),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
