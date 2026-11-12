// Name: core_bodypart.cpp_CBodyPart_dtor_FUN_00415800
// Address: 00415800
// Address Range: [[00415800, 0041588b]]
// Convention: unknown
// Signature: CBodyPart * core_bodypart_cpp_CBodyPart_dtor_FUN_00415800(CBodyPart *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBodyPart * core_bodypart_cpp_CBodyPart_dtor_FUN_00415800(CBodyPart *this_ptr,uint flags)

{
  CBox *pCVar1;
  int iVar2;
  CBodyPart *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBodyPartTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CBodyPartVTable;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_00415890(this_ptr,0,0);
  pCVar1 = core_box_cpp_CBox_dtor_FUN_005b1c70(&this_ptr->physics_box,0);
  iVar2 = core_bodypart_cpp_FUN_00417d10(&pCVar1[-4].scrape_points[2].transformed_position.y,0);
  pCVar3 = (CBodyPart *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)(iVar2 + -0x8ac),1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005b7fdc(pCVar3);
  return pCVar3;
}
