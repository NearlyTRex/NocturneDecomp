// Name: core_cross.cpp_CSimpleCross_dtor_FUN_005a7a60
// Address: 005a7a60
// Address Range: [[005a7a60, 005a7aad]]
// Convention: unknown
// Signature: CSimpleCross * core_cross_cpp_CSimpleCross_dtor_FUN_005a7a60(CSimpleCross *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSimpleCross * core_cross_cpp_CSimpleCross_dtor_FUN_005a7a60(CSimpleCross *this_ptr,uint flags)

{
  CWeapon *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CSimpleCrossTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_weapon_cpp_CWeapon_dtor_FUN_00589ae0((CWeapon *)this_ptr,1);
  if ((flags & 2) == 0) {
    return (CSimpleCross *)pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return (CSimpleCross *)pCVar1;
}
