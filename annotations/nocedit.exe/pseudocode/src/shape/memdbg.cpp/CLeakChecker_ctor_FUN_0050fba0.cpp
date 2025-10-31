// Name: shape_memdbg.cpp_CLeakChecker_ctor_FUN_0050fba0
// Address: 0050fba0
// Address Range: [[0050fba0, 0050fbbc]]
// Convention: __cdecl
// Signature: CLeakChecker * shape_memdbg.cpp_CLeakChecker_ctor_FUN_0050fba0(CLeakChecker * this_ptr)
// Cross-references:
//   core_menu.cpp_staticInit_FUN_0050ee40 (0050ee40) at 0050ee45 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_ags_006363d9
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

CLeakChecker * __cdecl shape_memdbg_cpp_CLeakChecker_ctor_FUN_0050fba0(CLeakChecker *this_ptr)

{
  BADSPACEBASE *in_ESP;
  CLeakChecker *in_stack_00000008;
  char local_64 [100];
  
  crt_stdio_c_sprintf_FUN_005fdbd0(local_64,"ags");
  return in_stack_00000008;
}


// Assembly code:
// 0050fba0: SUB ESP,0x64
//   Label: shape_memdbg.cpp_CLeakChecker_ctor_FUN_0050fba0
// 0050fba3: PUSH 0x6363d9
//   XREF to: 006363d9 (DATA)
// 0050fba8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x64] (DATA)
// 0050fbac: PUSH EAX
// 0050fbad: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0050fbb2: ADD ESP,0x8
// 0050fbb5: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x4] (READ)
// 0050fbb9: ADD ESP,0x64
// 0050fbbc: RET
