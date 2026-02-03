// Name: core_bodypart.cpp_CBodyPart_dtor_FUN_00419130
// Address: 00419130
// Address Range: [[00419130, 004191cb]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00419130(CBodyPart *this_ptr,uint flags)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00419130(CBodyPart *this_ptr,uint flags)

{
  CBox *pCVar1;
  SBodyPartFire *pSVar2;
  SBodyPartModel *pSVar3;
  CBodyPart *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBodyPartTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CBodyPartVTable;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr);
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00((CBox *)(this_ptr->unk + 0xb74));
  pSVar2 = core_bodypart_cpp_freeBodyPartFires_FUN_0041b6b0
                     ((SBodyPartFire *)&pCVar1[-3].scrape_points[4].local_position.z);
  pSVar3 = core_bodypart_cpp_freeBodyPartModels_FUN_0041b690
                     ((SBodyPartModel *)(pSVar2[-2].unk2.base.create_event + 0x1c));
  ptr = (CBodyPart *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pSVar3[-2].model.animation_state + 0x24),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
