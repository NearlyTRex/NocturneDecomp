// Name: wincore_windll.cpp_CExternalRenderer_setProcessingDataAndValidate_FUN_005b5cf0
// Address: 005b5cf0
// Address Range: [[005b5cf0, 005b5d09]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_CExternalRenderer_setProcessingDataAndValidate_FUN_005b5cf0 (CExternalRenderer *this_ptr,char *data)

#include "nocturne.h"

void __cdecl
wincore_windll_cpp_CExternalRenderer_setProcessingDataAndValidate_FUN_005b5cf0
          (CExternalRenderer *this_ptr,char *data)

{
  *(char **)this_ptr->processing_data = data;
  if (data != (char *)0x0) {
    return;
  }
  g_DLLFunctionsMissing = 1;
  return;
}
