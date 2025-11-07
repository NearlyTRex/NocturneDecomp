// Name: shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950
// Address: 00515950
// Address Range: [[00515950, 00515961]]
// Convention: __cdecl
// Signature: CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr)
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c60b [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00516f50 (00516f50) at 00516fae [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051e66b [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_free_FUN_00515970 (00515970) at 00515a96 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ed60 (0051ed60) at 0051edbc [UNCONDITIONAL_CALL]
// Function calls:
//   shape_meshlod.cpp_CLodMesh_free_FUN_00515970

#include "nocturne.h"

CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(CLodMesh *this_ptr)

{
  shape_meshlod_cpp_CLodMesh_free_FUN_00515970(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00515950: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950
// 00515951: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00515955: PUSH EBX
// 00515956: CALL shape_meshlod.cpp_CLodMesh_free_FUN_00515970
//   XREF to: 00515970 (UNCONDITIONAL_CALL)
// 0051595b: ADD ESP,0x4
// 0051595e: MOV EAX,EBX
// 00515960: POP EBX
// 00515961: RET
