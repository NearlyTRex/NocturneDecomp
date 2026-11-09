// Name: core_minecar.cpp_CMineCar_ctor_FUN_004f2100
// Address: 004f2100
// Address Range: [[004f2100, 004f2117]]
// Convention: __cdecl
// Signature: CMineCar * __cdecl core_minecar_cpp_CMineCar_ctor_FUN_004f2100(CMineCar *this_ptr)

#include "nocturne.h"

CMineCar * __cdecl core_minecar_cpp_CMineCar_ctor_FUN_004f2100(CMineCar *this_ptr)

{
  CMineCar *pCVar1;
  
  pCVar1 = (CMineCar *)core_platfrm_cpp_CPlatform_ctor_FUN_005180b0((CPlatform *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CMineCarVTable;
  return pCVar1;
}
