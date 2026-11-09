// Name: sound_sndmain.cpp_CSfxSample_ctor_FUN_00553310
// Address: 00553310
// Address Range: [[00553310, 00553376]]
// Convention: unknown
// Signature: CSfxSample * sound_sndmain_cpp_CSfxSample_ctor_FUN_00553310(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSfxSample * sound_sndmain_cpp_CSfxSample_ctor_FUN_00553310(CSfxSample *this_ptr)

{
  CSfxSample *pCVar1;
  CInStreamFile *pCVar2;
  
  pCVar1 = sound_sndmain_cpp_CSfxSample_init_FUN_00555840(this_ptr);
  pCVar2 = unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0
                     ((CInStreamFile *)&pCVar1->field_0x17c);
  *(uint *)&pCVar2[-3].field_0x28 = 0;
  *(uint *)&pCVar2[-1].field_0x4 = 0;
  *(uint *)&pCVar2[-1].field_0x8 = 0;
  *(uint *)(pCVar2 + -1) = 0;
  *(uint *)&pCVar2[-1].field_0xc = 0;
  *(uint *)&pCVar2[-1].field_0x10 = 0xffffffff;
  *(uint *)&pCVar2[-1].field_0x24 = 0;
  *(uint *)&pCVar2[1].field_0x4 = 0;
  *(uint *)&pCVar2[-1].field_0x14 = 0;
  *(uint *)&pCVar2[-1].field_0x18 = 0;
  return (CSfxSample *)&pCVar2[-9].field_0x10;
}
