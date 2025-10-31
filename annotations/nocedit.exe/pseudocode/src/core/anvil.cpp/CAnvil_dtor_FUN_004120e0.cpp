// Name: core_anvil.cpp_CAnvil_dtor_FUN_004120e0
// Address: 004120e0
// Address Range: [[004120e0, 0041212d]]
// Convention: __cdecl
// Signature: CAnvil * core_anvil.cpp_CAnvil_dtor_FUN_004120e0(CAnvil * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CAnvilTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_004120e0(CAnvil *this_ptr,uint d1,uint d2)

{
  CAnvil *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CAnvilTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CAnvil *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004120e0: PUSH EBX
//   Label: core_anvil.cpp_CAnvil_dtor_FUN_004120e0
// 004120e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004120e5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004120ea: JNZ 0x00412106
//   XREF to: 00412106 (CONDITIONAL_JUMP)
// 004120ec: PUSH 0x1
// 004120ee: PUSH EBX
// 004120ef: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004120f4: ADD ESP,0x8
// 004120f7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004120fb: MOV EBX,EAX
// 004120fd: TEST DL,0x2
// 00412100: JNZ 0x00412121
//   XREF to: 00412121 (CONDITIONAL_JUMP)
// 00412102: MOV EAX,EBX
// 00412104: POP EBX
// 00412105: RET
// 00412106: PUSH 0x659cf0
//   Label: LAB_00412106
//   XREF to: 00659cf0 (DATA)
// 0041210b: PUSH EBX
// 0041210c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00412111: ADD ESP,0x8
// 00412114: PUSH EAX
// 00412115: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0041211a: ADD ESP,0x4
// 0041211d: MOV EAX,EBX
// 0041211f: POP EBX
// 00412120: RET
// 00412121: PUSH EAX
//   Label: LAB_00412121
// 00412122: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00412127: ADD ESP,0x4
// 0041212a: MOV EAX,EBX
// 0041212c: POP EBX
// 0041212d: RET
