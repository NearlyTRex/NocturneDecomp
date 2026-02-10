// Name: core_simbox.cpp_CSimBox_dtor_FUN_005893e0
// Address: 005893e0
// Address Range: [[005893e0, 00589444]]
// Convention: __cdecl
// Signature: CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_005893e0(CSimBox *this_ptr,uint flags)

#include "nocturne.h"

CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_005893e0(CSimBox *this_ptr,uint flags)

{
  CBox *pCVar1;
  CSimBox *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CSimBoxTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00(&this_ptr->box);
  ptr = (CSimBox *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)&pCVar1[-2].scrape_points[3].local_position.z,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
