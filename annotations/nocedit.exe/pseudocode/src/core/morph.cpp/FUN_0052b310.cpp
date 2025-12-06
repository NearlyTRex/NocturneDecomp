// Name: core_morph.cpp_FUN_0052b310
// Address: 0052b310
// Address Range: [[0052b310, 0052b32e]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b310()

#include "nocturne.h"

void core_morph_cpp_FUN_0052b310(void)

{
  void *pvVar1;
  void *in_stack_00000004;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (in_stack_00000004,2,&g_CMorphModelTypeInfo);
  *(uint *)((int)pvVar1 + 0xc28) = 1;
  return;
}
