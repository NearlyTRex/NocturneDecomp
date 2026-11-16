// Name: core_cross.cpp_CSimpleCross_dtor_FUN_005a7a60
// Address: 005a7a60
// Address Range: [[005a7a60, 005a7aad]]
// Convention: __cdecl
// Signature: CSimpleCross * __cdecl core_cross_cpp_CSimpleCross_dtor_FUN_005a7a60(CSimpleCross *this_ptr,uint flags)

#include "nocturne.h"

CSimpleCross * __cdecl core_cross_cpp_CSimpleCross_dtor_FUN_005a7a60(CSimpleCross *this_ptr,uint flags)

{
  CWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CSimpleCrossTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = core_weapon_cpp_CWeapon_dtor_FUN_00589ae0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CSimpleCross *)ptr;
  }
  debugFreeChecked(ptr);
  return (CSimpleCross *)ptr;
}
