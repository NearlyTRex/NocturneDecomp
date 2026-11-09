// Name: core_hotdemon.cpp_CAngelDemon_ctor_FUN_004d6410
// Address: 004d6410
// Address Range: [[004d6410, 004d645b]]
// Convention: unknown
// Signature: CAngelDemon * core_hotdemon_cpp_CAngelDemon_ctor_FUN_004d6410(CAngelDemon *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAngelDemon * core_hotdemon_cpp_CAngelDemon_ctor_FUN_004d6410(CAngelDemon *this_ptr)

{
  CHotDemon *pCVar1;
  
  pCVar1 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004d5430((CHotDemon *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CAngel_DemonVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,"hotdemon.dfm");
  *(uint *)&pCVar1->field_0x2538 = 0x42700000;
  *(uint *)&pCVar1->field_0xce5c = 0x41c80000;
  *(uint *)&pCVar1->field_0xce60 = 0x41a00000;
  return (CAngelDemon *)pCVar1;
}
