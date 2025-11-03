// Name: core_bat.cpp_CBat_FUN_00414fb0
// Address: 00414fb0
// Address Range: [[00414fb0, 00414fde]]
// Convention: __cdecl
// Signature: void core_bat.cpp_CBat_FUN_00414fb0(CBat * this_ptr)
// Globals:
//   undefined4 s_Move_bat_along_course._0061542e
//   TerminatedCString s_anon_00615445
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_00414fb0(CBat *this_ptr)

{
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base_actor,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"</>","?Move bat along course." + 1);
  return;
}


// Assembly code:
// 00414fb0: PUSH EBX
//   Label: core_bat.cpp_CBat_FUN_00414fb0
// 00414fb1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00414fb5: PUSH EBX
// 00414fb6: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00414fba: PUSH EDX
// 00414fbb: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 00414fc0: ADD ESP,0x8
// 00414fc3: PUSH 0x61542e
//   XREF to: 0061542e (DATA)
// 00414fc8: MOV ECX,dword ptr [EBX]
// 00414fca: PUSH 0x615445
//   XREF to: 00615445 (DATA)
// 00414fcf: ADD ECX,0xb
// 00414fd2: PUSH EBX
// 00414fd3: MOV dword ptr [EBX],ECX
// 00414fd5: CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
//   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)
// 00414fda: ADD ESP,0xc
// 00414fdd: POP EBX
// 00414fde: RET
