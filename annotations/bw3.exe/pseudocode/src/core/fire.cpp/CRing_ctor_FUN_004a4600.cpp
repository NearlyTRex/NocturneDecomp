// Name: core_fire.cpp_CRing_ctor_FUN_004a4600
// Address: 004a4600
// Address Range: [[004a4600, 004a4631]]
// Convention: unknown
// Signature: CRing * core_fire_cpp_CRing_ctor_FUN_004a4600(CRing *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CRing * core_fire_cpp_CRing_ctor_FUN_004a4600(CRing *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(this_ptr->points,0x10,&g_CVectorTypeInfo);
  pvVar1 = __arrinit((void *)((int)pvVar1 + 0xc0),0x10,&g_CVectorTypeInfo)
  ;
  return (CRing *)((int)pvVar1 + -0xf0);
}
