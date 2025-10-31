// Name: wincore_windll.cpp_CExternalRenderer_setProcessingData_FUN_005b5d10
// Address: 005b5d10
// Address Range: [[005b5d10, 005b5d1a]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_CExternalRenderer_setProcessingData_FUN_005b5d10(CExternalRenderer * this_ptr, char * other)

#include "nocturne.h"

void __cdecl
wincore_windll_cpp_CExternalRenderer_setProcessingData_FUN_005b5d10
          (CExternalRenderer *this_ptr,char *other)

{
  *(char **)this_ptr->processing_data = other;
  return;
}


// Assembly code:
// 005b5d10: MOV EDX,dword ptr [ESP + 0x4]
//   Label: wincore_windll.cpp_CExternalRenderer_setProcessingData_FUN_005b5d10
//   XREF to: Stack[0x4] (READ)
// 005b5d14: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005b5d18: MOV dword ptr [EDX],EAX
// 005b5d1a: RET
