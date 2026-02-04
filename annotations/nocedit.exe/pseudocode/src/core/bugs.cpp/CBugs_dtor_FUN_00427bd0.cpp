// Name: core_bugs.cpp_CBugs_dtor_FUN_00427bd0
// Address: 00427bd0
// Address Range: [[00427bd0, 00427c98]]
// Convention: __cdecl
// Signature: CBugs * __cdecl core_bugs_cpp_CBugs_dtor_FUN_00427bd0(CBugs *this_ptr,uint flags)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_CBugs_dtor_FUN_00427bd0(CBugs *this_ptr,uint flags)

{
  SBug *pSVar1;
  CFlame *pCVar2;
  SFire *pSVar3;
  CVector3f *pCVar4;
  int iVar5;
  CDeformableModelInstance *pCVar6;
  CBugs *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBugsTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pSVar1 = core_bugs_cpp_freeBugs_FUN_00427cc0(this_ptr->bugs);
  pCVar2 = core_armour_cpp_freeFlames_FUN_00412720((CFlame *)(pSVar1[-0x22c].unk + 8));
  pSVar3 = core_armour_cpp_freeFires_FUN_00412700((SFire *)(pCVar2[-2].base.create_event + 0x20));
  pCVar4 = core_armour_cpp_freeVectors_FUN_004126e0((CVector3f *)(pSVar3[-0x16].unk + 4));
  core_armour_cpp_freeVectors_FUN_004126e0(pCVar4 + -0xf);
  iVar5 = core_cloth_cpp_FUN_0043bf80();
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar5 + -0x293c),0);
  ptr = (CBugs *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                           ((CDemonActor *)(pCVar6[-1].part_visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
