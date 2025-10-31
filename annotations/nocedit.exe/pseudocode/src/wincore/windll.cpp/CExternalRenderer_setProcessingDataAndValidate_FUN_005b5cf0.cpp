// Name: wincore_windll.cpp_CExternalRenderer_setProcessingDataAndValidate_FUN_005b5cf0
// Address: 005b5cf0
// Address Range: [[005b5cf0, 005b5d09]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_CExternalRenderer_setProcessingDataAndValidate_FUN_005b5cf0(CExternalRenderer * this_ptr, char * data)
// Globals:
//   int g_DLLFunctionsMissing

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


// Assembly code:
// 005b5cf0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: wincore_windll.cpp_CExternalRenderer_setProcessingDataAndValidate_FUN_005b5cf0
//   XREF to: Stack[0x8] (READ)
// 005b5cf4: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005b5cf8: MOV dword ptr [EDX],EAX
// 005b5cfa: TEST EAX,EAX
// 005b5cfc: JZ 0x005b5cff
//   XREF to: 005b5cff (CONDITIONAL_JUMP)
// 005b5cfe: RET
// 005b5cff: MOV dword ptr [0x03f6b994],0x1
//   Label: LAB_005b5cff
//   XREF to: 03f6b994 (WRITE)
// 005b5d09: RET
