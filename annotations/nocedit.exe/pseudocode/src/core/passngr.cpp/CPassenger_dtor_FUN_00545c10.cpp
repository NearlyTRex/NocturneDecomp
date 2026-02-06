// Name: core_passngr.cpp_CPassenger_dtor_FUN_00545c10
// Address: 00545c10
// Address Range: [[00545c10, 00545d2c]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint flags)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint flags)

{
  int iVar1;
  int extraout_EAX;
  CPathMap *pCVar2;
  CFlame *pCVar3;
  SFire *pSVar4;
  CVector3f *pCVar5;
  CClothList *pCVar6;
  CDeformableModelInstance *pCVar7;
  CPassenger *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPassengerTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = *(int *)(this_ptr->unk + 0x60);
  (this_ptr->base).base.base.vtable._ub = &g_CPassengerVTable;
  if (iVar1 != 0) {
    g_CurrentDebugLine = 0x50;
    g_CurrentDebugFilename = "..\\core\\passngr.cpp";
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xe4))();
  }
  core_morph_cpp_CMorphModel_FUN_0052b330((CMorphModel *)(this_ptr->unk + 100));
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_005464d0((CPathMap *)(extraout_EAX + -0x139f0));
  pCVar3 = core_armour_cpp_freeFlames_FUN_00412720
                     ((CFlame *)(pCVar2[-1].height_cache_tags[0xb] + 0x39));
  pSVar4 = core_armour_cpp_freeFires_FUN_00412700((SFire *)(pCVar3[-2].base.create_event + 0x20));
  pCVar5 = core_armour_cpp_freeVectors_FUN_004126e0((CVector3f *)(pSVar4[-0x16].unk + 4));
  pCVar5 = core_armour_cpp_freeVectors_FUN_004126e0(pCVar5 + -0xf);
  pCVar6 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar5 + -0x26));
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar6[-0x18].filenames[2] + 0x10),0);
  ptr = (CPassenger *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar7[-1].part_visibility_flags + 7),1);
  if ((flags & 2) != 0) {
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
    return ptr;
  }
  return ptr;
}
