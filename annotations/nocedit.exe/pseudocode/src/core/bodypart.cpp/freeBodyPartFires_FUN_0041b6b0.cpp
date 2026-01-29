// Name: core_bodypart.cpp_freeBodyPartFires_FUN_0041b6b0
// Address: 0041b6b0
// Address Range: [[0041b6b0, 0041b6c4]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_freeBodyPartFires_FUN_0041b6b0(SBodyPartFire **objs)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_freeBodyPartFires_FUN_0041b6b0(SBodyPartFire **objs)

{
  int iVar1;
  
  iVar1 = __arrfini(objs,2,&g_SBodyPartFireTypeInfo);
  return iVar1;
}
