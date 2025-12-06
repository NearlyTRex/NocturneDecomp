// Name: core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0
// Address: 004701f0
// Address Range: [[004701f0, 00470230]]
// Convention: __cdecl
// Signature: CDemonFilter * core_dfilter.cpp_CDemonFilter_ctor_FUN_004701f0(CDemonFilter * this_ptr)

#include "nocturne.h"

CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_ctor_FUN_004701f0(CDemonFilter *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  this_ptr->data_buffer = (void *)0x0;
  pcVar2 = "unnamed";
  this_ptr->size = 0x40;
  pcVar3 = this_ptr->name;
  this_ptr->count = 0x40;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return this_ptr;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return this_ptr;
}
