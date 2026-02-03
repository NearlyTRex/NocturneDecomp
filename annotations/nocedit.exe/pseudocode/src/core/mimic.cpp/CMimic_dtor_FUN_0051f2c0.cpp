// Name: core_mimic.cpp_CMimic_dtor_FUN_0051f2c0
// Address: 0051f2c0
// Address Range: [[0051f2c0, 0051f3de]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_0051f2c0(CMimic *this_ptr,uint flags)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_0051f2c0(CMimic *this_ptr,uint flags)

{
  int extraout_EAX;
  CFlame *pCVar1;
  SFire *pSVar2;
  CVector3f *pCVar3;
  int iVar4;
  CDeformableModelInstance *pCVar5;
  CMimic *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMimicTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar4 = *(int *)(this_ptr->unk4 + 0xc54);
  (this_ptr->base).base.base.vtable._ub = &g_CMimicVTable;
  g_CurrentDebugFilename = "..\\core\\mimic.cpp";
  g_CurrentDebugLine = 0xa9;
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 0x154) + 0xe4))();
  }
  this_ptr->unk4[0xc54] = '\0';
  this_ptr->unk4[0xc55] = '\0';
  this_ptr->unk4[0xc56] = '\0';
  this_ptr->unk4[0xc57] = '\0';
  core_morph_cpp_CMorphModel_FUN_0052b330((CMorphModel *)(this_ptr->unk4 + 0x24));
  core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  pCVar1 = core_armour_cpp_freeFlames_FUN_00412720((CFlame *)(extraout_EAX + -0x8bb8));
  pSVar2 = core_armour_cpp_freeFires_FUN_00412700((SFire *)(pCVar1[-2].base.create_event + 0x20));
  pCVar3 = core_armour_cpp_freeVectors_FUN_004126e0((CVector3f *)(pSVar2[-0x16].unk + 4));
  core_armour_cpp_freeVectors_FUN_004126e0(pCVar3 + -0xf);
  iVar4 = core_cloth_cpp_FUN_0043bf80();
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar4 + -0x293c),0);
  ptr = (CMimic *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar5[-1].part_visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
