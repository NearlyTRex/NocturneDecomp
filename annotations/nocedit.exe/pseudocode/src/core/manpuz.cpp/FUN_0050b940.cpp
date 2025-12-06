// Name: core_manpuz.cpp_FUN_0050b940
// Address: 0050b940
// Address Range: [[0050b940, 0050b95a]]
// Convention: __cdecl
// Signature: SGem * core_manpuz.cpp_FUN_0050b940(SGem * this_ptr)

#include "nocturne.h"

SGem * __cdecl core_manpuz_cpp_FUN_0050b940(SGem *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->field0_0x0 + 0x3c,2,&g_CDemonTriangleTypeInfo);
  return (SGem *)((int)pvVar1 + -0x3c);
}
