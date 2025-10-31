// Name: wincore_windll.cpp_CExternalRenderer_switchRenderer_FUN_005b8117
// Address: 005b8117
// Address Range: [[005b8117, 005b8137]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_CExternalRenderer_switchRenderer_FUN_005b8117(CExternalRenderer * this_ptr, int renderer_handle)
// Function calls:
//   wincore_windll.cpp_switchRenderer_FUN_005b8140

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_CExternalRenderer_switchRenderer_FUN_005b8117
          (CExternalRenderer *this_ptr,int renderer_handle)

{
  int iVar1;
  
  iVar1 = wincore_windll_cpp_switchRenderer_FUN_005b8140
                    (this_ptr->renderer_dll_name,renderer_handle);
  return iVar1;
}


// Assembly code:
// 005b8117: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_CExternalRenderer_switchRenderer_FUN_005b8117
// 005b811d: LEA EDX,[EDX]
// 005b8120: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005b8124: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005b8128: PUSH EDX
// 005b8129: ADD EAX,0x1dc8
// 005b812e: PUSH EAX
// 005b812f: CALL wincore_windll.cpp_switchRenderer_FUN_005b8140
//   XREF to: 005b8140 (UNCONDITIONAL_CALL)
// 005b8134: ADD ESP,0x8
// 005b8137: RET
