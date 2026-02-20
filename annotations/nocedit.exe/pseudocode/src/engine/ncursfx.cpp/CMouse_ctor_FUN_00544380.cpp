// Name: engine_ncursfx.cpp_CMouse_ctor_FUN_00544380
// Address: 00544380
// Address Range: [[00544380, 005443d7]]
// Convention: __cdecl
// Signature: CMouse * __cdecl engine_ncursfx_cpp_CMouse_ctor_FUN_00544380(CMouse *ptr)

#include "nocturne.h"

CMouse * __cdecl engine_ncursfx_cpp_CMouse_ctor_FUN_00544380(CMouse *ptr)

{
  CMouse *pvVar1;
  CMouse_ptr_160 pvVar2;
  CMouse_ptr_300 pvVar3;
  
  pvVar1 = __arrinit(ptr,8,&g_CAlphaBitmapTypeInfo);
  pvVar2 = __arrinit(pvVar1->flames,7,&g_CAlphaBitmapTypeInfo);
  pvVar3 = __arrinit(ADJ(pvVar2)->skulls,0xf,&g_CAlphaBitmapTypeInfo);
  ADJ(pvVar3)->anim_timer = 0;
  ADJ(pvVar3)->effect_mode = 0;
  return ADJ(pvVar3);
}
