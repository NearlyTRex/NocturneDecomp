// Name: core_boxactor.cpp_CLightActor_dtor_FUN_004235f0
// Address: 004235f0
// Address Range: [[004235f0, 00423664]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_004235f0(CLightActor *this_ptr,uint flags)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_004235f0(CLightActor *this_ptr,uint flags)

{
  CDemonLight *pCVar1;
  CBox *pCVar2;
  CLightActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLightActorTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_dlight_cpp_CDemonLight_dtor_FUN_00472760(&this_ptr->light,0);
  pCVar2 = core_box_cpp_CBox_dtor_FUN_0041dd00
                     ((CBox *)(pCVar1[-1].saved_screen_buffer_rows + 0x3ff),0);
  ptr = (CLightActor *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-2].scrape_points + 2),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
