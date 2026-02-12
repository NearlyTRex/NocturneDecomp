// Name: core_actor.cpp_CVector3f_arrdtor_FUN_00410500
// Address: 00410500
// Address Range: [[00410500, 00410514]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_actor_cpp_CVector3f_arrdtor_FUN_00410500(CVector3f *objs,uint flags)

#include "nocturne.h"

CVector3f * __cdecl core_actor_cpp_CVector3f_arrdtor_FUN_00410500(CVector3f *objs,uint flags)

{
  CVector3f *pCVar1;
  
  pCVar1 = (CVector3f *)__arrfini(objs,10,&g_CVectorTypeInfo);
  return pCVar1;
}
