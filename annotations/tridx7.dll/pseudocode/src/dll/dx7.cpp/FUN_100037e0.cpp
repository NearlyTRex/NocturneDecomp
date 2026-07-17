// Name: dll_dx7.cpp_FUN_100037e0
// Address: 100037e0
// Address Range: [[100037e0, 10003824]]
// Convention: unknown
// Signature: void dll_dx7_cpp_FUN_100037e0(uint param_1,DWORD param_2)

#include "nocturne.h"

void dll_dx7_cpp_FUN_100037e0(uint param_1,DWORD param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xff;
  if (((&DAT_101390c8)[uVar1] != param_1) || ((&DAT_101394c8)[uVar1] != param_2)) {
    (&DAT_101390c8)[uVar1] = param_1;
    (&DAT_101394c8)[uVar1] = param_2;
    dll_dx7_cpp_flushBatch_FUN_100047b0();
    (*g_Device->vtable->SetRenderState)(g_Device,param_1,param_2);
  }
  return;
}
