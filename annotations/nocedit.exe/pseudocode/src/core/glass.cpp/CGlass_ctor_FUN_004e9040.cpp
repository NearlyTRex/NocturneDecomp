// Name: core_glass.cpp_CGlass_ctor_FUN_004e9040
// Address: 004e9040
// Address Range: [[004e9040, 004e9174]]
// Convention: __cdecl
// Signature: CGlass * __cdecl core_glass_cpp_CGlass_ctor_FUN_004e9040(CGlass *this_ptr)

#include "nocturne.h"

CGlass * __cdecl core_glass_cpp_CGlass_ctor_FUN_004e9040(CGlass *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CGlass_ptr_492 pCVar3;
  CGlass_ptr_908 pvVar3;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar3 = core_mirror_cpp_CMirror_ctor_FUN_005213c0((CMirror *)(pCVar2[1].create_event + 0x1c));
  pvVar3 = __arrinit(ADJ(pCVar3)->broken_vertices,0x19,&g_CVectorTypeInfo)
  ;
  ADJ(pvVar3)->base.vtable._ub = &g_CGlassVTable;
  pcVar3 = "HEADLITE.RAW";
  (ADJ(pvVar3)->glass_size).x = 4.0;
  (ADJ(pvVar3)->glass_size).y = 4.0;
  pcVar4 = (ADJ(pvVar3)->glass_texture).texture_name;
  (ADJ(pvVar3)->glass_size).z = 0.1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  (ADJ(pvVar3)->glass_texture).base.count = 0;
  (ADJ(pvVar3)->glass_texture).base.type = 0xd;
  ADJ(pvVar3)->opacity = 0x8000;
  ADJ(pvVar3)->shattered = 0;
  pcVar3 = "true";
  ADJ(pvVar3)->break_event[0] = '\0';
  pcVar4 = ADJ(pvVar3)->breakable_condition;
  ADJ(pvVar3)->mirror_flag = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "7YEARS.RAW";
  pcVar4 = (ADJ(pvVar3)->broken_texture).texture_name;
  ADJ(pvVar3)->background_flag = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  (ADJ(pvVar3)->broken_texture).base.count = 0;
  (ADJ(pvVar3)->broken_texture).base.type = 0xd;
  ADJ(pvVar3)->pending_background_render = 0;
  return ADJ(pvVar3);
}
