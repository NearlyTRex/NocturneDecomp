// Name: core_chain.cpp_CChain_dtor_FUN_00431360
// Address: 00431360
// Address Range: [[00431360, 004313c4]]
// Convention: __cdecl
// Signature: CChain * core_chain.cpp_CChain_dtor_FUN_00431360(CChain * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CChainTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_chain.cpp_FUN_004313f0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_CChain_dtor_FUN_00431360(CChain *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  CChain *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CChainTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_chain_cpp_FUN_004313f0((SChainVertex **)this_ptr->field7_0x28c);
  ptr = (CChain *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar1 + -0x28c),1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00431360: PUSH EBX
//   Label: core_chain.cpp_CChain_dtor_FUN_00431360
// 00431361: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00431365: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0043136a: JNZ 0x0043139d
//   XREF to: 0043139d (CONDITIONAL_JUMP)
// 0043136c: PUSH 0x0
// 0043136e: ADD EBX,0x28c
// 00431374: PUSH EBX
// 00431375: CALL core_chain.cpp_FUN_004313f0
//   XREF to: 004313f0 (UNCONDITIONAL_CALL)
// 0043137a: ADD ESP,0x8
// 0043137d: PUSH 0x1
// 0043137f: LEA EBX,[EAX + 0xfffffd74]
// 00431385: PUSH EBX
// 00431386: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0043138b: ADD ESP,0x8
// 0043138e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00431392: MOV EBX,EAX
// 00431394: TEST DL,0x2
// 00431397: JNZ 0x004313b8
//   XREF to: 004313b8 (CONDITIONAL_JUMP)
// 00431399: MOV EAX,EBX
// 0043139b: POP EBX
// 0043139c: RET
// 0043139d: PUSH 0x65bb10
//   Label: LAB_0043139d
//   XREF to: 0065bb10 (DATA)
// 004313a2: PUSH EBX
// 004313a3: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004313a8: ADD ESP,0x8
// 004313ab: PUSH EAX
// 004313ac: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004313b1: ADD ESP,0x4
// 004313b4: MOV EAX,EBX
// 004313b6: POP EBX
// 004313b7: RET
// 004313b8: PUSH EAX
//   Label: LAB_004313b8
// 004313b9: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004313be: ADD ESP,0x4
// 004313c1: MOV EAX,EBX
// 004313c3: POP EBX
// 004313c4: RET
