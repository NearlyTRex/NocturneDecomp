// Name: sound_sndmain.cpp_FUN_00523890
// Address: 00523890
// Address Range: [[00523890, 005238ed]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00523890(CSfxSample *param_1)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_00523890(CSfxSample *param_1)

{
  CSfxSample *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(param_1);
  pCVar1->sample_data = (short *)0x0;
  pCVar1->loop_endpoints[1] = 0;
  pCVar1->loop_endpoints[2] = 0;
  pCVar1->loop_endpoints[0] = 0;
  pCVar1->loop_endpoints[3] = -1;
  pCVar1->loop_destinations[4] = 0;
  pCVar1->loop_destinations[2] = 0;
  pCVar1->ref_count = 0;
  return;
}
