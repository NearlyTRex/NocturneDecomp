// Name: core_backgnd.cpp_freeFires_FUN_00412700
// Address: 00412700
// Address Range: [[00412700, 00412714]]
// Convention: __cdecl
// Signature: int __cdecl core_backgnd_cpp_freeFires_FUN_00412700(SFire **objs)

#include "nocturne.h"

int __cdecl core_backgnd_cpp_freeFires_FUN_00412700(SFire **objs)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(objs,0x32,&g_SFireTypeInfo);
  return iVar1;
}
