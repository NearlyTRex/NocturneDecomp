// Name: core_passngr.cpp_CPassenger_dtor_FUN_00545c10
// Address: 00545c10
// Address Range: [[00545c10, 00545d2c]]
// Convention: __cdecl
// Signature: CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint flags)

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint flags)

{
  CDemonActor *this_ptr_00;
  CMorph *pCVar1;
  CPathMap *pCVar2;
  CFlame *pCVar3;
  SFire *pSVar4;
  CVector3f *pCVar5;
  CClothList *pCVar6;
  CDeformableModelInstance *pCVar7;
  CPassenger *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_ESI;
  uint unaff_retaddr;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  byte in_stack_0000002c;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CPassengerTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  this_ptr_00 = this_ptr->werewolf_actor;
  (this_ptr->base).base.base.vtable._ub = &g_CPassengerVTable;
  if (this_ptr_00 != (CDemonActor *)0x0) {
    g_CurrentDebugLine = 0x50;
    g_CurrentDebugFilename = "..\\core\\passngr.cpp";
    (*((this_ptr_00->vtable)._ub)->dtor)
              (this_ptr_00,2,unaff_ESI,unaff_EBX,unaff_retaddr,(uint)this_ptr,flags,
               in_stack_0000000c,in_stack_00000010);
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_0052b330(&this_ptr->morph,0);
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_005464d0
                     ((CPathMap *)(pCVar1[-0x1a].models[0].textures[7].textures[1].texture_name + 8)
                      ,0);
  pCVar3 = core_armour_cpp_CFlame_arrdtor_FUN_00412720
                     ((CFlame *)(pCVar2[-1].height_cache_tags[0xb] + 0x39),0);
  pSVar4 = core_armour_cpp_SFire_arrdtor_FUN_00412700
                     ((SFire *)(pCVar3[-2].base.create_event + 0x20),0);
  pCVar5 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0((CVector3f *)&pSVar4[-0x16].bone_index,0);
  pCVar5 = core_armour_cpp_CVector3f_arrdtor_FUN_004126e0(pCVar5 + -0xf,0);
  pCVar6 = core_cloth_cpp_CClothList_dtor_FUN_0043bf80((CClothList *)(pCVar5 + -0x26),0);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(pCVar6[-0x18].filenames[2] + 0x10),0);
  ptr = (CPassenger *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar7[-1].part_data.visibility_flags + 7),1);
  if ((in_stack_0000002c & 2) != 0) {
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
    return ptr;
  }
  return ptr;
}
