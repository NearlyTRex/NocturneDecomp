// Name: core_manpuz.cpp_FUN_0050b890
// Address: 0050b890
// Address Range: [[0050b890, 0050b914]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * core_manpuz.cpp_FUN_0050b890(CMansionPuzzleCircle * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5)
// Globals:
//   WatcomTypeInfo g_CMansionPuzzleCircleTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_manpuz.cpp_FUN_0050ba90
//   core_manpuz.cpp_FUN_0050bab0
//   core_manpuz.cpp_FUN_0050bad0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl
core_manpuz_cpp_FUN_0050b890(CMansionPuzzleCircle *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5)

{
  int iVar1;
  CMansionPuzzleCircle *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMansionPuzzleCircleTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_manpuz_cpp_FUN_0050bad0();
  core_manpuz_cpp_FUN_0050bab0();
  iVar1 = core_manpuz_cpp_FUN_0050ba90();
  ptr = (CMansionPuzzleCircle *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar1 + -0x5f0),1);
  if ((d5 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0050b890: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b890
// 0050b891: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050b895: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0050b89a: JNZ 0x0050b8ed
//   XREF to: 0050b8ed (CONDITIONAL_JUMP)
// 0050b89c: PUSH 0x0
// 0050b89e: ADD EBX,0x1340
// 0050b8a4: PUSH EBX
// 0050b8a5: CALL core_manpuz.cpp_FUN_0050bad0
//   XREF to: 0050bad0 (UNCONDITIONAL_CALL)
// 0050b8aa: ADD ESP,0x8
// 0050b8ad: PUSH 0x0
// 0050b8af: SUB EAX,0x8a0
// 0050b8b4: PUSH EAX
// 0050b8b5: CALL core_manpuz.cpp_FUN_0050bab0
//   XREF to: 0050bab0 (UNCONDITIONAL_CALL)
// 0050b8ba: ADD ESP,0x8
// 0050b8bd: PUSH 0x0
// 0050b8bf: SUB EAX,0x4b0
// 0050b8c4: PUSH EAX
// 0050b8c5: CALL core_manpuz.cpp_FUN_0050ba90
//   XREF to: 0050ba90 (UNCONDITIONAL_CALL)
// 0050b8ca: ADD ESP,0x8
// 0050b8cd: PUSH 0x1
// 0050b8cf: LEA EBX,[EAX + 0xfffffa10]
// 0050b8d5: PUSH EBX
// 0050b8d6: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0050b8db: ADD ESP,0x8
// 0050b8de: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050b8e2: MOV EBX,EAX
// 0050b8e4: TEST DL,0x2
// 0050b8e7: JNZ 0x0050b908
//   XREF to: 0050b908 (CONDITIONAL_JUMP)
// 0050b8e9: MOV EAX,EBX
// 0050b8eb: POP EBX
// 0050b8ec: RET
// 0050b8ed: PUSH 0x661000
//   Label: LAB_0050b8ed
//   XREF to: 00661000 (DATA)
// 0050b8f2: PUSH EBX
// 0050b8f3: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0050b8f8: ADD ESP,0x8
// 0050b8fb: PUSH EAX
// 0050b8fc: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0050b901: ADD ESP,0x4
// 0050b904: MOV EAX,EBX
// 0050b906: POP EBX
// 0050b907: RET
// 0050b908: PUSH EAX
//   Label: LAB_0050b908
// 0050b909: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0050b90e: ADD ESP,0x4
// 0050b911: MOV EAX,EBX
// 0050b913: POP EBX
// 0050b914: RET
