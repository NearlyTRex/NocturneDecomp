// Name: unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0
// Address: 005738c0
// Address Range: [[005738c0, 00573912]]
// Convention: unknown
// Signature: CInStreamFile * unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamFile * unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile *this_ptr)

{
  CInStreamFile *pCVar1;
  
  pCVar1 = (CInStreamFile *)unkafter_turret_cpp_FUN_00572530(this_ptr);
  *(byte ***)pCVar1 = &g_CInStreamFileVTable;
  *(uint *)&pCVar1->field_0x4 = 0;
  *(uint *)&pCVar1->field_0x8 = 0;
  *(uint *)&pCVar1->field_0xc = 0;
  *(uint *)&pCVar1->field_0x10 = 0;
  *(uint *)&pCVar1->field_0x14 = 0;
  *(uint *)&pCVar1->field_0x18 = 0;
  *(uint *)&pCVar1->field_0x1c = 0;
  *(uint *)&pCVar1->field_0x20 = 0;
  *(uint *)&pCVar1->field_0x24 = 0;
  return pCVar1;
}
