// Name: unkafter_darkwolf.cpp_CWhitewolf_ctor_FUN_00598fe0
// Address: 00598fe0
// Address Range: [[00598fe0, 0059902b]]
// Convention: unknown
// Signature: CWhitewolf * unkafter_darkwolf_cpp_CWhitewolf_ctor_FUN_00598fe0(CWhitewolf *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CWhitewolf * unkafter_darkwolf_cpp_CWhitewolf_ctor_FUN_00598fe0(CWhitewolf *this_ptr)

{
  CDarkwolf *pCVar1;
  
  pCVar1 = unkafter_darkwolf_cpp_CDarkwolf_ctor_FUN_00598780((CDarkwolf *)this_ptr);
  *(CEnemy_full_vtable **)&pCVar1->field_0x154 = &g_CWhitewolfVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)&pCVar1->field_0x158,(char *)0x5d98bf);
  *(uint *)&pCVar1->field_0x2538 = 0x41f00000;
  *(uint *)&pCVar1->field_0xce5c = 0x41200000;
  *(uint *)&pCVar1->field_0xce60 = 0x41200000;
  return (CWhitewolf *)pCVar1;
}
