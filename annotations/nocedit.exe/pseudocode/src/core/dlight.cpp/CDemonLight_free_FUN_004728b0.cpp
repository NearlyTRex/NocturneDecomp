// Name: core_dlight.cpp_CDemonLight_free_FUN_004728b0
// Address: 004728b0
// Address Range: [[004728b0, 0047294d]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_free_FUN_004728b0(CDemonLight * this_ptr)
// Cross-references:
//   core_dlight.cpp_CDemonLight_dtor_FUN_00472760 (00472760) at 00472774 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_init_FUN_004727c0 (004727c0) at 004727ca [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dlight_cpp_0061eec3
//   TerminatedCString s_core_dlight_cpp_0061eed6
//   TerminatedCString s_core_dlight_cpp_0061eee9
// Function calls:
//   core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_free_FUN_004728b0(CDemonLight *this_ptr)

{
  if (this_ptr->shadow_depth_buffer != (ushort *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->shadow_buffer_raw,"..\\core\\dlight.cpp",0x84);
    this_ptr->shadow_depth_buffer = (ushort *)0x0;
    this_ptr->shadow_buffer_raw = (void *)0x0;
  }
  core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50(this_ptr);
  if (this_ptr->lightmap_visibility_bits != (uchar *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->lightmap_visibility_bits,"..\\core\\dlight.cpp",0x8c);
    this_ptr->lightmap_visibility_bits = (uchar *)0x0;
  }
  if (this_ptr->filter_buffer == (uchar *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->filter_buffer,"..\\core\\dlight.cpp",0x91);
  this_ptr->filter_buffer = (uchar *)0x0;
  return;
}


// Assembly code:
// 004728b0: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_free_FUN_004728b0
// 004728b1: PUSH ESI
// 004728b2: PUSH EBP
// 004728b3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004728b7: CMP dword ptr [EBX + 0x2f94],0x0
// 004728be: JNZ 0x004728fe
//   XREF to: 004728fe (CONDITIONAL_JUMP)
// 004728c0: PUSH EBX
//   Label: LAB_004728c0
// 004728c1: CALL core_dlight.cpp_CDemonLight_freeMasterZBuffer_FUN_00472a50
//   XREF to: 00472a50 (UNCONDITIONAL_CALL)
// 004728c6: MOV ESI,dword ptr [EBX + 0x2fa0]
// 004728cc: ADD ESP,0x4
// 004728cf: TEST ESI,ESI
// 004728d1: JZ 0x004728f0
//   XREF to: 004728f0 (CONDITIONAL_JUMP)
// 004728d3: PUSH 0x8c
// 004728d8: PUSH 0x61eed6
//   XREF to: 0061eed6 (DATA)
// 004728dd: PUSH ESI
// 004728de: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004728e3: ADD ESP,0xc
// 004728e6: MOV dword ptr [EBX + 0x2fa0],0x0
// 004728f0: MOV EBP,dword ptr [EBX + 0x1c6c]
//   Label: LAB_004728f0
// 004728f6: TEST EBP,EBP
// 004728f8: JNZ 0x0047292d
//   XREF to: 0047292d (CONDITIONAL_JUMP)
// 004728fa: POP EBP
// 004728fb: POP ESI
// 004728fc: POP EBX
// 004728fd: RET
// 004728fe: PUSH 0x84
//   Label: LAB_004728fe
// 00472903: PUSH 0x61eec3
//   XREF to: 0061eec3 (DATA)
// 00472908: MOV ECX,dword ptr [EBX + 0x2f98]
// 0047290e: PUSH ECX
// 0047290f: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00472914: MOV dword ptr [EBX + 0x2f94],0x0
// 0047291e: ADD ESP,0xc
// 00472921: MOV dword ptr [EBX + 0x2f98],0x0
// 0047292b: JMP 0x004728c0
//   XREF to: 004728c0 (UNCONDITIONAL_JUMP)
// 0047292d: PUSH 0x91
//   Label: LAB_0047292d
// 00472932: PUSH 0x61eee9
//   XREF to: 0061eee9 (DATA)
// 00472937: PUSH EBP
// 00472938: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0047293d: ADD ESP,0xc
// 00472940: MOV dword ptr [EBX + 0x1c6c],0x0
// 0047294a: POP EBP
// 0047294b: POP ESI
// 0047294c: POP EBX
// 0047294d: RET
