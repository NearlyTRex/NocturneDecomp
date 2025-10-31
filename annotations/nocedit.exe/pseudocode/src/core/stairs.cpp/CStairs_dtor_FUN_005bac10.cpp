// Name: core_stairs.cpp_CStairs_dtor_FUN_005bac10
// Address: 005bac10
// Address Range: [[005bac10, 005bac74]]
// Convention: __cdecl
// Signature: CStairs * core_stairs.cpp_CStairs_dtor_FUN_005bac10(CStairs * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CStairsTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_stairs.cpp_FUN_005bac80
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CStairs * __cdecl
core_stairs_cpp_CStairs_dtor_FUN_005bac10(CStairs *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  CStairs *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CStairsTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_stairs_cpp_FUN_005bac80();
  ptr = (CStairs *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar1 + -0x170),1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005bac10: PUSH EBX
//   Label: core_stairs.cpp_CStairs_dtor_FUN_005bac10
// 005bac11: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005bac15: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005bac1a: JNZ 0x005bac4d
//   XREF to: 005bac4d (CONDITIONAL_JUMP)
// 005bac1c: PUSH 0x0
// 005bac1e: ADD EBX,0x170
// 005bac24: PUSH EBX
// 005bac25: CALL core_stairs.cpp_FUN_005bac80
//   XREF to: 005bac80 (UNCONDITIONAL_CALL)
// 005bac2a: ADD ESP,0x8
// 005bac2d: PUSH 0x1
// 005bac2f: LEA EBX,[EAX + 0xfffffe90]
// 005bac35: PUSH EBX
// 005bac36: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005bac3b: ADD ESP,0x8
// 005bac3e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005bac42: MOV EBX,EAX
// 005bac44: TEST DL,0x2
// 005bac47: JNZ 0x005bac68
//   XREF to: 005bac68 (CONDITIONAL_JUMP)
// 005bac49: MOV EAX,EBX
// 005bac4b: POP EBX
// 005bac4c: RET
// 005bac4d: PUSH 0x6635c0
//   Label: LAB_005bac4d
//   XREF to: 006635c0 (DATA)
// 005bac52: PUSH EBX
// 005bac53: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005bac58: ADD ESP,0x8
// 005bac5b: PUSH EAX
// 005bac5c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005bac61: ADD ESP,0x4
// 005bac64: MOV EAX,EBX
// 005bac66: POP EBX
// 005bac67: RET
// 005bac68: PUSH EAX
//   Label: LAB_005bac68
// 005bac69: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005bac6e: ADD ESP,0x4
// 005bac71: MOV EAX,EBX
// 005bac73: POP EBX
// 005bac74: RET
