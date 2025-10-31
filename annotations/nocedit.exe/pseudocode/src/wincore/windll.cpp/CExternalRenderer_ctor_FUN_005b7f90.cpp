// Name: wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90
// Address: 005b7f90
// Address Range: [[005b7f90, 005b7fd1]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90(CExternalRenderer * this_ptr)
// Cross-references:
//   wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0 (005b5ec0) at 005b5f1f [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 (005b6750) at 005b67e0 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl wincore_windll_cpp_CExternalRenderer_ctor_FUN_005b7f90(CExternalRenderer *this_ptr)

{
  crt_memory_c_memset_FUN_005fde40(this_ptr,0,0x1dc8);
  this_ptr->hardware_flag1 = 0x100;
  this_ptr->feature_flags = 0;
  this_ptr->api_version = 1;
  *(byte *)&this_ptr->feature_flags = (byte)this_ptr->feature_flags | 1;
  return;
}


// Assembly code:
// 005b7f90: PUSH EBX
//   Label: wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90
// 005b7f91: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b7f95: PUSH 0x1dc8
// 005b7f9a: PUSH 0x0
// 005b7f9c: PUSH EBX
// 005b7f9d: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005b7fa2: MOV word ptr [EBX + 0x200],0x100
// 005b7fab: MOV dword ptr [EBX + 0x208],0x0
// 005b7fb5: MOV AH,byte ptr [EBX + 0x208]
// 005b7fbb: MOV word ptr [EBX + 0x204],0x1
// 005b7fc4: OR AH,0x1
// 005b7fc7: ADD ESP,0xc
// 005b7fca: MOV byte ptr [EBX + 0x208],AH
// 005b7fd0: POP EBX
// 005b7fd1: RET
