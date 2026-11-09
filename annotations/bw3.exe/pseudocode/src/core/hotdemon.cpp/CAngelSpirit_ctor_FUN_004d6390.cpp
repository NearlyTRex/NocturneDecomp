// Name: core_hotdemon.cpp_CAngelSpirit_ctor_FUN_004d6390
// Address: 004d6390
// Address Range: [[004d6390, 004d63db]]
// Convention: unknown
// Signature: CAngelSpirit * core_hotdemon_cpp_CAngelSpirit_ctor_FUN_004d6390(CAngelSpirit *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAngelSpirit * core_hotdemon_cpp_CAngelSpirit_ctor_FUN_004d6390(CAngelSpirit *this_ptr)

{
  CHotDemon *pCVar1;
  
  pCVar1 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004d5430((CHotDemon *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CAngel_SpiritVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,"hotdemon.dfm");
  *(uint *)&pCVar1->field_0x2538 = 0x42480000;
  *(uint *)&pCVar1->field_0xce5c = 0x41c80000;
  *(uint *)&pCVar1->field_0xce60 = 0x41700000;
  return (CAngelSpirit *)pCVar1;
}
