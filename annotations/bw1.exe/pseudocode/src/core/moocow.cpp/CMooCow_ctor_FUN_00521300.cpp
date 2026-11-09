// Name: core_moocow.cpp_CMooCow_ctor_FUN_00521300
// Address: 00521300
// Address Range: [[00521300, 0052136f]]
// Convention: unknown
// Signature: CMooCow * core_moocow_cpp_CMooCow_ctor_FUN_00521300(CMooCow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMooCow * core_moocow_cpp_CMooCow_ctor_FUN_00521300(CMooCow *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CMooCow *pCVar3;
  
  pCVar3 = (CMooCow *)core_charactr_cpp_CCharacter_ctor_FUN_0042c080((CCharacter *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CMooCowVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar3->field_0x158,"moocow.dfm");
  *(uint *)&pCVar3->field_0x2fec = 0x3fe00000;
  uVar1 = _DAT_006040a8;
  *(uint *)&pCVar3->field_0x2ff0 = 0x40600000;
  uVar2 = _DAT_006040ac;
  *(uint *)&pCVar3->field_0xc1d8 = 0;
  *(uint *)&pCVar3->field_0x252c = 0x3f490fdb;
  *(uint *)&pCVar3->field_0x2ff4 = uVar1;
  *(uint *)&pCVar3->field_0x2ff8 = uVar2;
  return pCVar3;
}
