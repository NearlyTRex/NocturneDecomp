// Name: core_passngr.cpp_CPassenger_dtor_FUN_00545c10
// Address: 00545c10
// Address Range: [[00545c10, 00545d2c]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint d1)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint d1)

{
  int extraout_EAX;
  CPathMap *pCVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  CPassenger *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_ESI;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPassengerTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar2 = *(int *)(this_ptr->unk + 0x108);
  (this_ptr->base).base.base.vtable._ub = &g_CPassengerVTable;
  if (iVar2 != 0) {
    g_CurrentDebugLine = 0x50;
    g_CurrentDebugFilename = "..\\core\\passngr.cpp";
    (**(code **)(*(int *)(iVar2 + 0x154) + 0xe4))();
  }
  core_morph_cpp_CMorphModel_FUN_0052b330((CMorphModel *)(this_ptr->unk + 0x10c));
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_005464d0((CPathMap *)(extraout_EAX + -0x139f0));
  iVar2 = core_backgnd_cpp_freeFlames_FUN_00412720
                    ((CFlame **)(pCVar1[-1].height_cache_tags[0xb] + 0x39));
  iVar2 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar2 + -0x4b0));
  iVar2 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar2 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar2 + -0xb4));
  iVar2 = core_cloth_cpp_FUN_0043bf80();
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar2 + -0x293c),0,unaff_ESI,unaff_EBX,
                      unaff_retaddr);
  ptr = (CPassenger *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar3[-1].part_visibility_flags + 7),1);
  if ((d1 & 2) != 0) {
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
    return ptr;
  }
  return ptr;
}
