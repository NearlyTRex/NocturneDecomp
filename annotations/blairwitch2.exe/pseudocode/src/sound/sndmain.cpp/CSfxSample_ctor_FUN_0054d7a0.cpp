// Name: sound_sndmain.cpp_CSfxSample_ctor_FUN_0054d7a0
// Address: 0054d7a0
// Address Range: [[0054d7a0, 0054d806]]
// Convention: unknown
// Signature: CSfxSample * sound_sndmain_cpp_CSfxSample_ctor_FUN_0054d7a0(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSfxSample * sound_sndmain_cpp_CSfxSample_ctor_FUN_0054d7a0(CSfxSample *this_ptr)

{
  CSfxSample *pCVar1;
  CInStreamFile *pCVar2;
  
  pCVar1 = sound_sndmain_cpp_CSfxSample_init_FUN_0054fcd0(this_ptr);
  pCVar2 = unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50
                     ((CInStreamFile *)&pCVar1->field_0x17c);
  *(uint *)&pCVar2[-3].field_0x1c = 0;
  *(uint *)(pCVar2 + -1) = 0;
  *(uint *)&pCVar2[-1].field_0x4 = 0;
  *(uint *)&pCVar2[-2].field_0x24 = 0;
  *(uint *)&pCVar2[-1].field_0x8 = 0;
  *(uint *)&pCVar2[-1].field_0xc = 0xffffffff;
  *(uint *)&pCVar2[-1].field_0x20 = 0;
  *(uint *)&pCVar2[1].field_0x4 = 0;
  *(uint *)&pCVar2[-1].field_0x10 = 0;
  *(uint *)&pCVar2[-1].field_0x14 = 0;
  return (CSfxSample *)&pCVar2[-10].field_0x14;
}
