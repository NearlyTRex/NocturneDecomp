// Name: core_simbox.cpp_CSimBox_dtor_FUN_00547720
// Address: 00547720
// Address Range: [[00547720, 00547784]]
// Convention: __cdecl
// Signature: CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_00547720(CSimBox *this_ptr,uint flags)

#include "nocturne.h"

CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_00547720(CSimBox *this_ptr,uint flags)

{
  CBox *pCVar1;
  CSimBox *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CSimBoxTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041adf0(&this_ptr->physics_box,0);
  ptr = (CSimBox *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408770
                  ((CDemonActor *)&pCVar1[-2].scrape_points[3].local_position.z,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
