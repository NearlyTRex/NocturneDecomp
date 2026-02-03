// Name: core_bugs.cpp_CBugs_dtor_FUN_00427bd0
// Address: 00427bd0
// Address Range: [[00427bd0, 00427c98]]
// Convention: __cdecl
// Signature: CBugs * __cdecl core_bugs_cpp_CBugs_dtor_FUN_00427bd0(CBugs *this_ptr,uint flags)

#include "nocturne.h"

CBugs * __cdecl core_bugs_cpp_CBugs_dtor_FUN_00427bd0(CBugs *this_ptr,uint flags)

{
  int iVar1;
  CFlame *pCVar2;
  SFire *pSVar3;
  CVector3f *pCVar4;
  CDeformableModelInstance *pCVar5;
  CBugs *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBugsTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_bugs_cpp_FUN_00427cc0((SBug **)this_ptr->unk2);
  pCVar2 = core_armour_cpp_freeFlames_FUN_00412720((CFlame *)(iVar1 + -0x8af8));
  pSVar3 = core_armour_cpp_freeFires_FUN_00412700((SFire *)(pCVar2[-2].base.create_event + 0x20));
  pCVar4 = core_armour_cpp_freeVectors_FUN_004126e0((CVector3f *)(pSVar3[-0x16].unk + 4));
  core_armour_cpp_freeVectors_FUN_004126e0(pCVar4 + -0xf);
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0);
  ptr = (CBugs *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                           ((CDemonActor *)(pCVar5[-1].part_visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
