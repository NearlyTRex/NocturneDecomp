// Name: core_boxactor.cpp_CLightActor_ctor_FUN_00420360
// Address: 00420360
// Address Range: [[00420360, 004203e2]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_00420360(CLightActor *this_ptr)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_00420360(CLightActor *this_ptr)

{
  CBoxActor *pCVar1;
  CDemonLight *pCVar2;
  
  pCVar1 = core_boxactor_cpp_CBoxActor_ctor_FUN_0041efe0((CBoxActor *)this_ptr);
  pCVar2 = core_dlight_cpp_CDemonLight_ctor_FUN_0045c180
                     ((CDemonLight *)&pCVar1[1].field_0x4,0x100,0x100);
  *(byte **)&pCVar2[-1].field_0x2a14 = &g_CLightActorVTable;
  *(uint *)&pCVar2->field_0x1cb4 = 1;
  *(uint *)&pCVar2[1].field_0x8 = 0;
  *(uint *)&pCVar2[1].field_0x4 = *(uint *)&pCVar2[1].field_0x8;
  *(uint *)(pCVar2 + 1) = *(uint *)&pCVar2[1].field_0x4;
  *(uint *)&pCVar2[1].field_0x14 = 0;
  *(uint *)&pCVar2[1].field_0x10 = *(uint *)&pCVar2[1].field_0x14;
  *(uint *)&pCVar2[1].field_0xc = *(uint *)&pCVar2[1].field_0x10;
  *(uint *)&pCVar2[1].field_0x18 = 0;
  *(uint *)&pCVar2[-1].field_0x2fa8 = 1;
  return (CLightActor *)&pCVar2[-1].field_0x28c0;
}
