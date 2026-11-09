// Name: unkclass_instream.cpp_CInStreamFile_ctor_FUN_005a08d0
// Address: 005a08d0
// Address Range: [[005a08d0, 005a0922]]
// Convention: unknown
// Signature: CInStreamFile * unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamFile * unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile *this_ptr)

{
  CInStreamFile *pCVar1;
  
  pCVar1 = (CInStreamFile *)unkaddr_0059f520_cpp_FUN_0059f540(this_ptr);
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
