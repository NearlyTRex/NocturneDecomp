// Name: core_boxactor.cpp_CLightActor_ctor_FUN_0041cf60
// Address: 0041cf60
// Address Range: [[0041cf60, 0041cfe2]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_0041cf60(CLightActor *this_ptr)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_0041cf60(CLightActor *this_ptr)

{
  CBoxActor *pCVar1;
  CDemonLight *pCVar2;
  
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30((CBoxActor *)this_ptr);
  pCVar2 = core_dlight_cpp_CDemonLight_ctor_FUN_00449c70
                     ((CDemonLight *)&pCVar1[1].field_0x4,0x100,0x100);
  *(byte **)&pCVar2[-1].field_0x2a88 = &g_CLightActorVTable;
  *(uint *)&pCVar2->field_0x1cb4 = 1;
  *(uint *)&pCVar2[1].field_0x8 = 0;
  *(uint *)&pCVar2[1].field_0x4 = *(uint *)&pCVar2[1].field_0x8;
  *(uint *)(pCVar2 + 1) = *(uint *)&pCVar2[1].field_0x4;
  *(uint *)&pCVar2[1].field_0x14 = 0;
  *(uint *)&pCVar2[1].field_0x10 = *(uint *)&pCVar2[1].field_0x14;
  *(uint *)&pCVar2[1].field_0xc = *(uint *)&pCVar2[1].field_0x10;
  *(uint *)&pCVar2[1].field_0x18 = 0;
  *(uint *)&pCVar2[-1].field_0x2fac = 1;
  return (CLightActor *)&pCVar2[-1].field_0x27d8;
}
