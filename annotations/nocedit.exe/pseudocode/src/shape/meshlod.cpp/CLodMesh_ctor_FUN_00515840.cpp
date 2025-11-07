// Name: shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840
// Address: 00515840
// Address Range: [[00515840, 00515851]]
// Convention: __cdecl
// Signature: CLodMesh * shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840(CLodMesh * this_ptr)
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c52e [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00516f50 (00516f50) at 00516f8c [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051db2e [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ed60 (0051ed60) at 0051ed7a [UNCONDITIONAL_CALL]
// Function calls:
//   shape_meshlod.cpp_CLodMesh_init_FUN_00515880

#include "nocturne.h"

CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(CLodMesh *this_ptr)

{
  shape_meshlod_cpp_CLodMesh_init_FUN_00515880(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00515840: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840
// 00515841: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00515845: PUSH EBX
// 00515846: CALL shape_meshlod.cpp_CLodMesh_init_FUN_00515880
//   XREF to: 00515880 (UNCONDITIONAL_CALL)
// 0051584b: ADD ESP,0x4
// 0051584e: MOV EAX,EBX
// 00515850: POP EBX
// 00515851: RET
