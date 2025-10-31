// Name: core_cloth.cpp_freeVectors_FUN_0043e460
// Address: 0043e460
// Address Range: [[0043e460, 0043e474]]
// Convention: __cdecl
// Signature: int core_cloth.cpp_freeVectors_FUN_0043e460(CVector3f * * array)
// Cross-references:
//   core_cloth.cpp_SClothVertex_dtor_FUN_0043e440 (0043e440) at 0043e44c [UNCONDITIONAL_CALL]
//   core_fire.cpp_CCrater_dtor_FUN_004c95a0 (004c95a0) at 004c95aa [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_dtor_FUN_004c9660 (004c9660) at 004c966a [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_SVert_dtor_FUN_005a1f90 (005a1f90) at 005a1f9a [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051bd30 (0051bd30) at 0051c05c [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051efc0 (0051efc0) at 0051efca [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

int __cdecl core_cloth_cpp_freeVectors_FUN_0043e460(CVector3f **array)

{
  int iVar1;
  
  iVar1 = crt_memory_c_freeTypeArray_FUN_005feee9(array,3,&g_CVectorTypeInfo);
  return iVar1;
}


// Assembly code:
// 0043e460: PUSH 0x6598c0
//   Label: core_cloth.cpp_freeVectors_FUN_0043e460
//   XREF to: 006598c0 (DATA)
// 0043e465: PUSH 0x3
// 0043e467: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0043e46b: PUSH EDX
// 0043e46c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 0043e471: ADD ESP,0xc
// 0043e474: RET
