// Name: core_box.cpp_freeScrapes_FUN_00420220
// Address: 00420220
// Address Range: [[00420220, 00420234]]
// Convention: __cdecl
// Signature: int __cdecl core_box_cpp_freeScrapes_FUN_00420220(SScrape **array)

#include "nocturne.h"

int __cdecl core_box_cpp_freeScrapes_FUN_00420220(SScrape **array)

{
  int iVar1;
  
  iVar1 = __arrfini(array,8,&g_SScrapeTypeInfo);
  return iVar1;
}
