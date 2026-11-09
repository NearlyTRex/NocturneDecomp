// Name: unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50
// Address: 0057cd50
// Address Range: [[0057cd50, 0057cda2]]
// Convention: unknown
// Signature: CInStreamFile * unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamFile * unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile *this_ptr)

{
  CInStreamFile *pCVar1;
  
  pCVar1 = (CInStreamFile *)unkaddr_0057b9a0_cpp_FUN_0057b9c0(this_ptr);
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
