// Name: support_codec.cpp_CInStreamPipe_ctor_FUN_004417f0
// Address: 004417f0
// Address Range: [[004417f0, 0044183b]]
// Convention: unknown
// Signature: CInStreamPipe * support_codec_cpp_CInStreamPipe_ctor_FUN_004417f0(CInStreamPipe *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamPipe * support_codec_cpp_CInStreamPipe_ctor_FUN_004417f0(CInStreamPipe *this_ptr)

{
  CInStreamPipe *pCVar1;
  
  pCVar1 = (CInStreamPipe *)unkafter_turret_cpp_FUN_00572530(this_ptr);
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
