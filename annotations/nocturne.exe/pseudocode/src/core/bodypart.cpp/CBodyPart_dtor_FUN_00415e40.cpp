// Name: core_bodypart.cpp_CBodyPart_dtor_FUN_00415e40
// Address: 00415e40
// Address Range: [[00415e40, 00415edb]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00415e40(CBodyPart *this_ptr,uint flags)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00415e40(CBodyPart *this_ptr,uint flags)

{
  CBox *pCVar1;
  SBodyPartFire *pSVar2;
  SBodyPartModel *pSVar3;
  CBodyPart *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBodyPartTypeInfo_0059a860);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CBodyPartVTable;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(this_ptr,0,0);
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0(&this_ptr->physics_box,0);
  pSVar2 = core_bodypart_cpp_SBodyPartFire_arrdtor_FUN_00418130
                     ((SBodyPartFire *)&pCVar1[-3].scrape_points[4].previous_position,0);
  pSVar3 = core_bodypart_cpp_SBodyPartModel_arrdtor_FUN_00418110
                     ((SBodyPartModel *)(pSVar2[-2].flame.base.create_event + 0xc),0);
  ptr = (CBodyPart *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                  ((CDemonActor *)(pSVar3[-2].model.model_name + 0x10),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
