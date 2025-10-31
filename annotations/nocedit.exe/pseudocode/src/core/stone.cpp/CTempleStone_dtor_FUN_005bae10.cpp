// Name: core_stone.cpp_CTempleStone_dtor_FUN_005bae10
// Address: 005bae10
// Address Range: [[005bae10, 005bae74]]
// Convention: __cdecl
// Signature: CTempleStone * core_stone.cpp_CTempleStone_dtor_FUN_005bae10(CTempleStone * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CTempleStoneTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_box.cpp_CBox_dtor_FUN_0041dd00
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CTempleStone * __cdecl
core_stone_cpp_CTempleStone_dtor_FUN_005bae10(CTempleStone *this_ptr,uint d1,uint d2,uint d3)

{
  CBox *pCVar1;
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTempleStoneTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00((CBox *)(this_ptr->field0_0x0 + 0x394));
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar1[-2].scrape_points + 2),1);
  if ((d3 & 2) == 0) {
    return (CTempleStone *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CTempleStone *)ptr;
}


// Assembly code:
// 005bae10: PUSH EBX
//   Label: core_stone.cpp_CTempleStone_dtor_FUN_005bae10
// 005bae11: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005bae15: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005bae1a: JNZ 0x005bae4d
//   XREF to: 005bae4d (CONDITIONAL_JUMP)
// 005bae1c: PUSH 0x0
// 005bae1e: ADD EBX,0x394
// 005bae24: PUSH EBX
// 005bae25: CALL core_box.cpp_CBox_dtor_FUN_0041dd00
//   XREF to: 0041dd00 (UNCONDITIONAL_CALL)
// 005bae2a: ADD ESP,0x8
// 005bae2d: PUSH 0x1
// 005bae2f: LEA EBX,[EAX + 0xfffffc6c]
// 005bae35: PUSH EBX
// 005bae36: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005bae3b: ADD ESP,0x8
// 005bae3e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005bae42: MOV EBX,EAX
// 005bae44: TEST DL,0x2
// 005bae47: JNZ 0x005bae68
//   XREF to: 005bae68 (CONDITIONAL_JUMP)
// 005bae49: MOV EAX,EBX
// 005bae4b: POP EBX
// 005bae4c: RET
// 005bae4d: PUSH 0x6636f0
//   Label: LAB_005bae4d
//   XREF to: 006636f0 (DATA)
// 005bae52: PUSH EBX
// 005bae53: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005bae58: ADD ESP,0x8
// 005bae5b: PUSH EAX
// 005bae5c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005bae61: ADD ESP,0x4
// 005bae64: MOV EAX,EBX
// 005bae66: POP EBX
// 005bae67: RET
// 005bae68: PUSH EAX
//   Label: LAB_005bae68
// 005bae69: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005bae6e: ADD ESP,0x4
// 005bae71: MOV EAX,EBX
// 005bae73: POP EBX
// 005bae74: RET
