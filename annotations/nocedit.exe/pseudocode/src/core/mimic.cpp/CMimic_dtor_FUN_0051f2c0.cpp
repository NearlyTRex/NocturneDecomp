// Name: core_mimic.cpp_CMimic_dtor_FUN_0051f2c0
// Address: 0051f2c0
// Address Range: [[0051f2c0, 0051f3de]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_0051f2c0(CMimic *this_ptr,uint flags)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_0051f2c0(CMimic *this_ptr,uint flags)

{
  int iVar1;
  CMorph *pCVar2;
  CCloth *pCVar3;
  CFlame *pCVar4;
  SFire *pSVar5;
  CVector3f *pCVar6;
  CClothList *pCVar7;
  CDeformableModelInstance *pCVar8;
  CMimic *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMimicTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = *(int *)(this_ptr->unk4 + 0xc54);
  (this_ptr->base).base.base.vtable._ub = &g_CMimicVTable;
  g_CurrentDebugFilename = "..\\core\\mimic.cpp";
  g_CurrentDebugLine = 0xa9;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xe4))(iVar1,2);
  }
  this_ptr->unk4[0xc54] = '\0';
  this_ptr->unk4[0xc55] = '\0';
  this_ptr->unk4[0xc56] = '\0';
  this_ptr->unk4[0xc57] = '\0';
  pCVar2 = core_morph_cpp_CMorph_dtor_FUN_0052b330((CMorph *)(this_ptr->unk4 + 0x24),0);
  pCVar3 = core_cloth_cpp_CCloth_dtor_FUN_00438c00
                     ((CCloth *)(pCVar2[-0x55].models[1].textures[0x13].unknown + 0x1c),0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor_FUN_00412720
                     ((CFlame *)(pCVar3[-1].vertices[0x2cd].connected_indices + 0xd),0);
  pSVar5 = core_armour_cpp_SFire_arrdtor_FUN_00412700
                     ((SFire *)(pCVar4[-2].base.create_event + 0x20),0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0((CVector3f *)(pSVar5[-0x16].unk + 4),0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(pCVar6 + -0xf,0);
  pCVar7 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar6 + -0x26),0);
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar7[-0x18].filenames[2] + 0x10),0);
  ptr = (CMimic *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar8[-1].part_data.visibility_flags + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
