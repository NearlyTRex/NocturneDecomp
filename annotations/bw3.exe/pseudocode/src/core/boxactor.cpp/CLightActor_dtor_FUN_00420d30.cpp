// Name: core_boxactor.cpp_CLightActor_dtor_FUN_00420d30
// Address: 00420d30
// Address Range: [[00420d30, 00420da4]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_00420d30(CLightActor *this_ptr,uint flags)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_00420d30(CLightActor *this_ptr,uint flags)

{
  CDemonLight *pCVar1;
  CBox *pCVar2;
  CLightActor *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CLightActorTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_dlight_cpp_CDemonLight_dtor_FUN_0045c240(&this_ptr->light,0);
  pCVar2 = core_box_cpp_CBox_dtor_FUN_0041adf0
                     ((CBox *)(pCVar1[-1].saved_screen_buffer_rows + 0x3e0),0);
  pCVar3 = (CLightActor *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770
                     ((CDemonActor *)(pCVar2[-2].scrape_points + 2),1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005a30c4(pCVar3);
  return pCVar3;
}
