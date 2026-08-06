// Name: core_simbox.cpp_CSimBox_dtor_FUN_005170d0
// Address: 005170d0
// Address Range: [[005170d0, 00517134]]
// Convention: __cdecl
// Signature: CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_005170d0(CSimBox *this_ptr,uint flags)

#include "nocturne.h"

CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_005170d0(CSimBox *this_ptr,uint flags)

{
  CBox *pCVar1;
  CSimBox *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CSimBoxTypeInfo_005a1e50);
    shape_memdbg_cpp_free_FUN_00564486(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0(&this_ptr->physics_box,0);
  ptr = (CSimBox *)
        core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                  ((CDemonActor *)&pCVar1[-2].scrape_points[3].transformed_position.y,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  operator_delete(ptr);
  return ptr;
}
