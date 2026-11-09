// Name: support_codec.cpp_CInStreamPipe_ctor_FUN_00434e70
// Address: 00434e70
// Address Range: [[00434e70, 00434ebb]]
// Convention: unknown
// Signature: CInStreamPipe * support_codec_cpp_CInStreamPipe_ctor_FUN_00434e70(CInStreamPipe *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamPipe * support_codec_cpp_CInStreamPipe_ctor_FUN_00434e70(CInStreamPipe *this_ptr)

{
  CInStreamPipe *pCVar1;
  
  pCVar1 = (CInStreamPipe *)unkaddr_0057b9a0_cpp_FUN_0057b9c0(this_ptr);
  *(byte ***)pCVar1 = &g_CInStreamPipeVTable;
  *(uint *)&pCVar1->field_0x4 = 0;
  *(uint *)&pCVar1->field_0x8 = 0;
  *(uint *)&pCVar1->field_0xc = 0;
  *(uint *)&pCVar1->field_0x10 = 0;
  *(uint *)&pCVar1->field_0x14 = 0;
  *(uint *)&pCVar1->field_0x18 = 0;
  *(uint *)&pCVar1->field_0x1c = 0;
  *(uint *)&pCVar1->field_0x20 = 0;
  return pCVar1;
}
