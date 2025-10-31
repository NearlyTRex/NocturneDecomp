// Name: core_dfilter.cpp_CFilterFX_free_FUN_00470700
// Address: 00470700
// Address Range: [[00470700, 00470729]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CFilterFX_free_FUN_00470700(CFilterFx * this_ptr)
// Cross-references:
//   core_dfilter.cpp_CFilterFX_dtor_FUN_004706e0 (004706e0) at 004706e6 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 (00470730) at 00470748 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dfilter_cpp_0061e776
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_free_FUN_00470700(CFilterFx *this_ptr)

{
  if (this_ptr->movie_data == (void *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->movie_data,"..\\core\\dfilter.cpp",0x13f);
  this_ptr->movie_data = (void *)0x0;
  return;
}


// Assembly code:
// 00470700: PUSH EBX
//   Label: core_dfilter.cpp_CFilterFX_free_FUN_00470700
// 00470701: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00470705: MOV EDX,dword ptr [EBX + 0x4]
// 00470708: TEST EDX,EDX
// 0047070a: JNZ 0x0047070e
//   XREF to: 0047070e (CONDITIONAL_JUMP)
// 0047070c: POP EBX
// 0047070d: RET
// 0047070e: PUSH 0x13f
//   Label: LAB_0047070e
// 00470713: PUSH 0x61e776
//   XREF to: 0061e776 (DATA)
// 00470718: PUSH EDX
// 00470719: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0047071e: ADD ESP,0xc
// 00470721: MOV dword ptr [EBX + 0x4],0x0
// 00470728: POP EBX
// 00470729: RET
