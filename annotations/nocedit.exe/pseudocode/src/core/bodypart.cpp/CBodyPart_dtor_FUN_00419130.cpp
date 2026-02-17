// Name: core_bodypart.cpp_CBodyPart_dtor_FUN_00419130
// Address: 00419130
// Address Range: [[00419130, 004191cb]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00419130(CBodyPart *this_ptr,uint flags)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00419130(CBodyPart *this_ptr,uint flags)

{
  CBodyPart *pCVar1;
  SBodyPartFire *pSVar1;
  SBodyPartModel *pSVar2;
  CBodyPart *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBodyPartTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CBodyPartVTable;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr,0,0);
  pCVar1 = (CBodyPart *)core_box_cpp_CBox_dtor_FUN_0041dd00(&this_ptr->physics_box,0);
  pSVar1 = core_bodypart_cpp_SBodyPartFire_arrdtor_FUN_0041b6b0
                     ((SBodyPartFire *)(pCVar1[-1].fires[0].flame.off_event + 0x3c),0);
  pSVar2 = core_bodypart_cpp_SBodyPartModel_arrdtor_FUN_0041b690
                     ((SBodyPartModel *)(pSVar1[-2].flame.base.create_event + 0x1c),0);
  ptr = (CBodyPart *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pSVar2[-2].model.model_name + 8),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
