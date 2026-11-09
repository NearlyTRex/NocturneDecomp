// Name: core_hostage.cpp_CHostage_ctor_FUN_004ed500
// Address: 004ed500
// Address Range: [[004ed500, 004ed622]]
// Convention: __cdecl
// Signature: CHostage * __cdecl core_hostage_cpp_CHostage_ctor_FUN_004ed500(CHostage *this_ptr)

#include "nocturne.h"

CHostage * __cdecl core_hostage_cpp_CHostage_ctor_FUN_004ed500(CHostage *this_ptr)

{
  char cVar1;
  CHostage *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CHostage *)core_npc_cpp_CNPC_ctor_FUN_00531670((CNPC *)this_ptr);
  *(byte ***)&pCVar2->field_0x154 = &g_CHostageVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar2->field_0x158,"hickdad.dfm");
  *(uint *)&pCVar2->field_0x1fe64 = 0;
  *(uint *)&pCVar2->field_0x1fe6c = 0;
  pcVar3 = "true";
  *(uint *)&pCVar2->field_0x1fe70 = 0;
  *(uint *)&pCVar2->field_0x1fe74 = 0;
  pcVar4 = &pCVar2->field_0x1fabc;
  *(uint *)&pCVar2->field_0x1fab8 = 0x40a00000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar2->field_0x1fe78 = 0;
  *(uint *)&pCVar2->field_0x26fc = 0;
  *(uint *)&pCVar2->field_0x1fe90 = 0;
  *(uint *)&pCVar2->field_0x1fe94 = 0;
  pCVar2->field_0x1fb20 = 0;
  pCVar2->field_0x1fb40 = 0;
  pCVar2->field_0x1fba4 = 0;
  pCVar2->field_0x1fc08 = 0;
  pCVar2->field_0x1fc6c = 0;
  pCVar2->field_0x1fcd0 = 0;
  pCVar2->field_0x1fd34 = 0;
  *(uint *)&pCVar2->field_0x1fe98 = 0;
  *(uint *)&pCVar2->field_0x1fe9c = 0;
  *(uint *)&pCVar2->field_0x1fe8c = 0;
  pCVar2->field_0x2544 = 0;
  pCVar2->field_0x1fd98 = 0;
  pCVar2->field_0x1fdfc = 0;
  *(uint *)&pCVar2->field_0x2540 = 1;
  return pCVar2;
}
