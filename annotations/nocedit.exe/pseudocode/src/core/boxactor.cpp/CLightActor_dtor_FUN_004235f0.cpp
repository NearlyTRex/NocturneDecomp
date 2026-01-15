// Name: core_boxactor.cpp_CLightActor_dtor_FUN_004235f0
// Address: 004235f0
// Address Range: [[004235f0, 00423664]]
// Convention: __cdecl
// Signature: CLightActor * core_boxactor.cpp_CLightActor_dtor_FUN_004235f0(CLightActor * this_ptr, uint d1)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_004235f0(CLightActor *this_ptr,uint d1)

{
  CDemonLight *pCVar1;
  CBox *pCVar2;
  CLightActor *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CLightActorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_dlight_cpp_CDemonLight_dtor_FUN_00472760
                     ((CDemonLight *)(this_ptr->field1_0x66c + 4),0,unaff_EBX,unaff_retaddr);
  pCVar2 = core_box_cpp_CBox_dtor_FUN_0041dd00
                     ((CBox *)(pCVar1[-1].saved_screen_buffer_rows + 0x3ff));
  ptr = (CLightActor *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-2].scrape_points + 2),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
