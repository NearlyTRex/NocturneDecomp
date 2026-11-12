// Name: support_trstream.cpp_FUN_0057d1d0
// Address: 0057d1d0
// Address Range: [[0057d1d0, 0057d23c]]
// Convention: unknown
// Signature: void support_trstream_cpp_FUN_0057d1d0(CInStreamFile *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void support_trstream_cpp_FUN_0057d1d0(CInStreamFile *param_1)

{
  void *pvVar1;
  
  support_trstream_cpp_CInStreamFile_freeBuffer_FUN_0057d240(param_1);
  param_1->buffer_capacity = 0x1000;
  pvVar1 = malloc(param_1->buffer_capacity + 0x1f);
  param_1->buffer_alloc = pvVar1;
  if (pvVar1 == (void *)0x0) {
    _DAT_01d046a0 = "..\\support\\trstream.cpp";
    _DAT_01d046a4 = 0x605;
    core_main_c_FUN_004e4500("Out of memory");
  }
  param_1->buffer_start = 0;
  param_1->buffer_length = 0;
  param_1->buffer = (char *)((int)param_1->buffer_alloc + 0x1fU & 0xffffffe0);
  return;
}
