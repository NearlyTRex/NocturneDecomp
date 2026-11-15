// Name: core_bodypart.cpp_CBodyPart_dtor_FUN_00418c70
// Address: 00418c70
// Address Range: [[00418c70, 00418cfb]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00418c70(CBodyPart *this_ptr,uint flags)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00418c70(CBodyPart *this_ptr,uint flags)

{
  CBox *pCVar1;
  SBodyPartFire *pSVar2;
  CBodyPart *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CBodyPartTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CBodyPartVTable;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_00418d00(this_ptr,0,0);
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dab0(&this_ptr->physics_box,0);
  pSVar2 = core_bodypart_cpp_SBodyPartFire_arrdtor2_FUN_0041b190
                     ((SBodyPartFire *)&pCVar1[-3].scrape_points[4].local_position.y,0);
  pCVar3 = (CBodyPart *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730
                     ((CDemonActor *)(pSVar2[-3].flame.base.create_event + 0x3c),1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005c0344(pCVar3);
  return pCVar3;
}
