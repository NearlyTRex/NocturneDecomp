// Name: core_spike.cpp_CSpike_dtor_FUN_005b9050
// Address: 005b9050
// Address Range: [[005b9050, 005b909d]]
// Convention: __cdecl
// Signature: CSpike * core_spike.cpp_CSpike_dtor_FUN_005b9050(CSpike * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CSpikeTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_005b9050(CSpike *this_ptr,uint d1,uint d2)

{
  CSpike *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CSpikeTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CSpike *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005b9050: PUSH EBX
//   Label: core_spike.cpp_CSpike_dtor_FUN_005b9050
// 005b9051: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b9055: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005b905a: JNZ 0x005b9076
//   XREF to: 005b9076 (CONDITIONAL_JUMP)
// 005b905c: PUSH 0x1
// 005b905e: PUSH EBX
// 005b905f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005b9064: ADD ESP,0x8
// 005b9067: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005b906b: MOV EBX,EAX
// 005b906d: TEST DL,0x2
// 005b9070: JNZ 0x005b9091
//   XREF to: 005b9091 (CONDITIONAL_JUMP)
// 005b9072: MOV EAX,EBX
// 005b9074: POP EBX
// 005b9075: RET
// 005b9076: PUSH 0x663450
//   Label: LAB_005b9076
//   XREF to: 00663450 (DATA)
// 005b907b: PUSH EBX
// 005b907c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005b9081: ADD ESP,0x8
// 005b9084: PUSH EAX
// 005b9085: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005b908a: ADD ESP,0x4
// 005b908d: MOV EAX,EBX
// 005b908f: POP EBX
// 005b9090: RET
// 005b9091: PUSH EAX
//   Label: LAB_005b9091
// 005b9092: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005b9097: ADD ESP,0x4
// 005b909a: MOV EAX,EBX
// 005b909c: POP EBX
// 005b909d: RET
