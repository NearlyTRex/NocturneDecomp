// Name: core_cloth.cpp_FUN_0043c820
// Address: 0043c820
// Address Range: [[0043c820, 0043c877]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043c820()
// Globals:
//   undefined4 DAT_0065bb3c
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_cloth.cpp_FUN_0043c6e0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_cloth_cpp_FUN_0043c820(void)

{
  BADSPACEBASE *in_ESP;
  float *in_stack_00000004;
  CVector3i local_10;
  
  local_10.x = (int)ROUND(*in_stack_00000004 * _DAT_0065bb3c);
  local_10.y = (int)ROUND(in_stack_00000004[1] * _DAT_0065bb3c);
  local_10.z = (int)ROUND(in_stack_00000004[2] * _DAT_0065bb3c);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,&local_10);
  local_10.x = 19999;
  core_cloth_cpp_FUN_0043c6e0();
  return;
}


// Assembly code:
// 0043c820: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043c820
// 0043c821: SUB ESP,0xc
// 0043c824: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043c828: MOV EBX,ESP
// 0043c82a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043c830: FLD float ptr [EAX]
// 0043c832: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043c838: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x10] (DATA)
// 0043c83a: FLD float ptr [EAX + 0x4]
// 0043c83d: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043c843: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 0043c846: FLD float ptr [EAX + 0x8]
// 0043c849: FMUL float ptr [0x0065bb3c]
//   XREF to: 0065bb3c (READ)
// 0043c84f: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x8] (WRITE)
// 0043c852: MOV EBX,ESP
// 0043c854: MOV EDX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0043c856: PUSH EBX
// 0043c857: ADD EDX,0xea5d0
// 0043c85d: PUSH EDX
// 0043c85e: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0043c863: ADD ESP,0x8
// 0043c866: PUSH 0x4e1f
// 0043c86b: CALL core_cloth.cpp_FUN_0043c6e0
//   XREF to: 0043c6e0 (UNCONDITIONAL_CALL)
// 0043c870: ADD ESP,0x4
// 0043c873: ADD ESP,0xc
// 0043c876: POP EBX
// 0043c877: RET
