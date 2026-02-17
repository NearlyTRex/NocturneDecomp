// Name: core_passngr.cpp_CPassenger_dtor_FUN_00545c10
// Address: 00545c10
// Address Range: [[00545c10, 00545d2c]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint flags)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint flags)

{
  int iVar1;
  CMorph *pCVar2;
  CPathMap *pCVar3;
  CFlame *pCVar4;
  SFire *pSVar5;
  CVector3f *pCVar6;
  CClothList *pCVar7;
  CDeformableModelInstance *pCVar8;
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
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xe4))(iVar1,2);
  }
  pCVar2 = core_morph_cpp_CMorph_dtor_FUN_0052b330((CMorph *)(this_ptr->unk + 100),0);
  pCVar3 = core_path_cpp_CPathMap_dtor_FUN_005464d0
                     ((CPathMap *)(pCVar2[-0x1a].models[0].textures[7].unknown + 0x10),0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor_FUN_00412720
                     ((CFlame *)(pCVar3[-1].height_cache_tags[0xb] + 0x39),0);
  pSVar5 = core_armour_cpp_SFire_arrdtor_FUN_00412700
                     ((SFire *)(pCVar4[-2].base.create_event + 0x20),0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0((CVector3f *)&pSVar5[-0x16].bone_index,0);
  pCVar6 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(pCVar6 + -0xf,0);
  pCVar7 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar6 + -0x26),0);
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar7[-0x18].filenames[2] + 0x10),0);
  ptr = (CPassenger *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar8[-1].part_data.visibility_flags + 7),1);
  if ((flags & 2) != 0) {
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
    return ptr;
  }
  return ptr;
}
