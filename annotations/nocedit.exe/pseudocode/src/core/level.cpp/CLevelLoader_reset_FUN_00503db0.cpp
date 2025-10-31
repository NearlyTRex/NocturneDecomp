// Name: core_level.cpp_CLevelLoader_reset_FUN_00503db0
// Address: 00503db0
// Address Range: [[00503db0, 00503dbb]]
// Convention: __cdecl
// Signature: void core_level.cpp_CLevelLoader_reset_FUN_00503db0(CLevelLoader * this_ptr)
// Cross-references:
//   core_level.cpp_staticInit_FUN_00503d80 (00503d80) at 00503d85 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_level_cpp_CLevelLoader_reset_FUN_00503db0(CLevelLoader *this_ptr)

{
  this_ptr->enabled = 0;
  return;
}


// Assembly code:
// 00503db0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_level.cpp_CLevelLoader_reset_FUN_00503db0
//   XREF to: Stack[0x4] (READ)
// 00503db4: MOV dword ptr [EAX + 0xc],0x0
// 00503dbb: RET
