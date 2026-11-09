// Name: core_dfilter.cpp_CDemonFilter_ctor_FUN_0045d950
// Address: 0045d950
// Address Range: [[0045d950, 0045d990]]
// Convention: __cdecl
// Signature: CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_ctor_FUN_0045d950(CDemonFilter *this_ptr)

#include "nocturne.h"

CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_ctor_FUN_0045d950(CDemonFilter *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  *(uint *)&this_ptr->field_0x48 = 0;
  pcVar2 = "unnamed";
  *(uint *)this_ptr = 0x40;
  pcVar3 = &this_ptr->field_0x8;
  *(uint *)&this_ptr->field_0x4 = 0x40;
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
