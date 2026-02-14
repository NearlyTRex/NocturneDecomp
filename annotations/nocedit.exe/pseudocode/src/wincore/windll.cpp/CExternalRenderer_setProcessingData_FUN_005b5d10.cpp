// Name: wincore_windll.cpp_CExternalRenderer_setProcessingData_FUN_005b5d10
// Address: 005b5d10
// Address Range: [[005b5d10, 005b5d1a]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_CExternalRenderer_setProcessingData_FUN_005b5d10(CExternalRenderer *this_ptr,char *other)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_CExternalRenderer_setProcessingData_FUN_005b5d10(CExternalRenderer *this_ptr,char *other)

{
  *(char **)this_ptr->processing_data = other;
  return;
}
