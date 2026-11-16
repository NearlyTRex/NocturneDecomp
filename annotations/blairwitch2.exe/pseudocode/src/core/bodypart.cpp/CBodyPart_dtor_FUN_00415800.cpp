// Name: core_bodypart.cpp_CBodyPart_dtor_FUN_00415800
// Address: 00415800
// Address Range: [[00415800, 0041588b]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00415800(CBodyPart *this_ptr,uint flags)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00415800(CBodyPart *this_ptr,uint flags)

{
  CBox *pCVar1;
  SBodyPartFire *pSVar2;
  CBodyPart *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBodyPartTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CBodyPartVTable;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_00415890(this_ptr,0,0);
  pCVar1 = core_box_cpp_CBox_dtor_FUN_005b1c70(&this_ptr->physics_box,0);
  pSVar2 = core_bodypart_cpp_SBodyPartFire_arrdtor2_FUN_00417d10
                     ((SBodyPartFire *)&pCVar1[-4].scrape_points[2].transformed_position.y,0);
  ptr = (CBodyPart *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408930
                  ((CDemonActor *)(pSVar2[-3].flame.on_event + 0x58),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
