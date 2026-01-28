// Name: core_boxactor.cpp_CBoxActor_dtor_FUN_00423670
// Address: 00423670
// Address Range: [[00423670, 004236d4]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_dtor_FUN_00423670(CBoxActor *this_ptr,uint d1,uint d2,uint d3)

#include "nocturne.h"

CBoxActor * __cdecl
core_boxactor_cpp_CBoxActor_dtor_FUN_00423670(CBoxActor *this_ptr,uint d1,uint d2,uint d3)

{
  CBox *pCVar1;
  CBoxActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBoxActorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00((CBox *)&this_ptr->sim_box);
  ptr = (CBoxActor *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar1[-2].scrape_points + 2),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
