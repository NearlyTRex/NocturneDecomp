// Name: engine_pod.cpp_CPod_ctor_FUN_004f8810
// Address: 004f8810
// Address Range: [[004f8810, 004f883b]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl engine_pod_cpp_CPod_ctor_FUN_004f8810(undefined4 *param_1)

#include "nocturne.h"

uint * __cdecl engine_pod_cpp_CPod_ctor_FUN_004f8810(uint *param_1)

{
  uint *puVar1;
  
  *param_1 = 0;
  param_1[0x65] = &PTR_engine_pod_cpp_CPod_dtor_FUN_004f8840_005a1484;
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
  } while (puVar1 != param_1 + 100);
  return param_1;
}
