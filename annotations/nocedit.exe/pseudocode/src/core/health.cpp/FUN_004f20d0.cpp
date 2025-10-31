// Name: core_health.cpp_FUN_004f20d0
// Address: 004f20d0
// Address Range: [[004f20d0, 004f211d]]
// Convention: __cdecl
// Signature: CHealthItem * core_health.cpp_FUN_004f20d0(CHealthItem * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CHealthItemTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CHealthItem * __cdecl core_health_cpp_FUN_004f20d0(CHealthItem *this_ptr,uint d1,uint d2)

{
  CHealthItem *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CHealthItemTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CHealthItem *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004f20d0: PUSH EBX
//   Label: core_health.cpp_FUN_004f20d0
// 004f20d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f20d5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004f20da: JNZ 0x004f20f6
//   XREF to: 004f20f6 (CONDITIONAL_JUMP)
// 004f20dc: PUSH 0x1
// 004f20de: PUSH EBX
// 004f20df: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004f20e4: ADD ESP,0x8
// 004f20e7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f20eb: MOV EBX,EAX
// 004f20ed: TEST DL,0x2
// 004f20f0: JNZ 0x004f2111
//   XREF to: 004f2111 (CONDITIONAL_JUMP)
// 004f20f2: MOV EAX,EBX
// 004f20f4: POP EBX
// 004f20f5: RET
// 004f20f6: PUSH 0x65f690
//   Label: LAB_004f20f6
//   XREF to: 0065f690 (DATA)
// 004f20fb: PUSH EBX
// 004f20fc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004f2101: ADD ESP,0x8
// 004f2104: PUSH EAX
// 004f2105: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004f210a: ADD ESP,0x4
// 004f210d: MOV EAX,EBX
// 004f210f: POP EBX
// 004f2110: RET
// 004f2111: PUSH EAX
//   Label: LAB_004f2111
// 004f2112: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004f2117: ADD ESP,0x4
// 004f211a: MOV EAX,EBX
// 004f211c: POP EBX
// 004f211d: RET
