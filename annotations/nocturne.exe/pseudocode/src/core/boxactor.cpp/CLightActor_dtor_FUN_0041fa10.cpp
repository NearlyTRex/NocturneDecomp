// Name: core_boxactor.cpp_CLightActor_dtor_FUN_0041fa10
// Address: 0041fa10
// Address Range: [[0041fa10, 0041fa84]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_0041fa10(CLightActor *this_ptr,uint flags)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_0041fa10(CLightActor *this_ptr,uint flags)

{
  CDemonLight *pCVar1;
  CBox *pCVar2;
  CLightActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLightActorTypeInfo_0059acb0);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_dlight_cpp_CDemonLight_dtor_FUN_0044e1c0(&this_ptr->light,0);
  pCVar2 = core_box_cpp_CBox_dtor_FUN_0041a6c0
                     ((CBox *)(pCVar1[-1].saved_screen_buffer_rows + 0x3ff),0);
  ptr = (CLightActor *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                  ((CDemonActor *)&pCVar2[-2].scrape_points[2].local_position.z,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
