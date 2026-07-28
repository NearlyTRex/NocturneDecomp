// Name: core_dtri.cpp_FUN_0046c3c0
// Address: 0046c3c0
// Address Range: [[0046c3c0, 0046c40d]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0046c3c0(void *param_1,_FILE *param_2)

#include "nocturne.h"

void core_dtri_cpp_FUN_0046c3c0(void *param_1,_FILE *param_2)

{
  _fread(param_1,0xc,1,param_2);
  _fread((void *)((int)param_1 + 0xc),0xc,1,param_2);
  _fread((void *)((int)param_1 + 0x18),0xc,1,param_2);
  _fread((void *)((int)param_1 + 0x24),0x14,1,param_2);
  return;
}
