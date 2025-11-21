// Name: core_set.cpp_CDemonSet_FUN_00570ca0
// Address: 00570ca0
// Address Range: [[00570ca0, 00570cc2]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570ca0(CDemonSet * this_ptr)
// Cross-references:
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 005042d4 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509d50 (00509d50) at 00509e46 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_render_FUN_00529ed0 (00529ed0) at 00529faa [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056aca0 (0056aca0) at 0056ad83 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056cd60 (0056cd60) at 0056cee7 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056cf00 (0056cf00) at 0056d073 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570ca0(CDemonSet *this_ptr)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  this_ptr->light_scale_factor = in_stack_00000008;
  this_ptr->color_scale_factor = in_stack_0000000c;
  this_ptr->fog_scale_factor = in_stack_00000010;
  return;
}


// Assembly code:
// 00570ca0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_set.cpp_CDemonSet_FUN_00570ca0
//   XREF to: Stack[0x4] (READ)
// 00570ca4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00570ca8: MOV dword ptr [EAX + 0x15ae88],EDX
// 00570cae: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 00570cb2: MOV dword ptr [EAX + 0x15ae8c],EDX
// 00570cb8: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 00570cbc: MOV dword ptr [EAX + 0x15ae90],EDX
// 00570cc2: RET
