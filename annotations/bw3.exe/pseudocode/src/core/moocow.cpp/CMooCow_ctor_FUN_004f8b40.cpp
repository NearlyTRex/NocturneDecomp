// Name: core_moocow.cpp_CMooCow_ctor_FUN_004f8b40
// Address: 004f8b40
// Address Range: [[004f8b40, 004f8baf]]
// Convention: unknown
// Signature: CMooCow * core_moocow_cpp_CMooCow_ctor_FUN_004f8b40(CMooCow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMooCow * core_moocow_cpp_CMooCow_ctor_FUN_004f8b40(CMooCow *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CMooCow *pCVar3;
  
  pCVar3 = (CMooCow *)core_charactr_cpp_CCharacter_ctor_FUN_0042ac20((CCharacter *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CMooCowVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar3->field_0x158,0x5c916c);
  *(uint *)&pCVar3->field_0x326c = 0x3fe00000;
  uVar1 = _DAT_005e2a38;
  *(uint *)&pCVar3->field_0x3270 = 0x40600000;
  uVar2 = _DAT_005e2a3c;
  *(uint *)&pCVar3->field_0xcdd4 = 0;
  *(uint *)&pCVar3->field_0x252c = 0x3f490fdb;
  *(uint *)&pCVar3->field_0x3274 = uVar1;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  return pCVar3;
}
