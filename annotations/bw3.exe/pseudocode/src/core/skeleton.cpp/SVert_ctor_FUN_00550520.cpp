// Name: core_skeleton.cpp_SVert_ctor_FUN_00550520
// Address: 00550520
// Address Range: [[00550520, 0055053a]]
// Convention: __cdecl
// Signature: SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_00550520(SVert *this_ptr)

#include "nocturne.h"

SVert * __cdecl core_skeleton_cpp_SVert_ctor_FUN_00550520(SVert *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit(this_ptr->bone_offsets,3,&g_CVectorTypeInfo);
  return (SVert *)((int)pvVar1 + -0x10);
}
