// Name: shape_meshlod.cpp_LodMesh_copy_FUN_00515860
// Address: 00515860
// Address Range: [[00515860, 0051587f]]
// Convention: __cdecl
// Signature: SLodMesh * shape_meshlod.cpp_LodMesh_copy_FUN_00515860(SLodMesh * this_ptr, SLodMesh * other)
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d08a [UNCONDITIONAL_CALL]
// Function calls:
//   shape_meshlod.cpp_FUN_00515880
//   shape_meshlod.cpp_FUN_0051a8c0

#include "nocturne.h"

SLodMesh * __cdecl shape_meshlod_cpp_LodMesh_copy_FUN_00515860(SLodMesh *this_ptr,SLodMesh *other)

{
  shape_meshlod_cpp_FUN_00515880();
  shape_meshlod_cpp_FUN_0051a8c0();
  return this_ptr;
}


// Assembly code:
// 00515860: PUSH EBX
//   Label: shape_meshlod.cpp_LodMesh_copy_FUN_00515860
// 00515861: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00515865: PUSH EBX
// 00515866: CALL shape_meshlod.cpp_FUN_00515880
//   XREF to: 00515880 (UNCONDITIONAL_CALL)
// 0051586b: ADD ESP,0x4
// 0051586e: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00515872: PUSH EDX
// 00515873: PUSH EBX
// 00515874: CALL shape_meshlod.cpp_FUN_0051a8c0
//   XREF to: 0051a8c0 (UNCONDITIONAL_CALL)
// 00515879: ADD ESP,0x8
// 0051587c: MOV EAX,EBX
// 0051587e: POP EBX
// 0051587f: RET
