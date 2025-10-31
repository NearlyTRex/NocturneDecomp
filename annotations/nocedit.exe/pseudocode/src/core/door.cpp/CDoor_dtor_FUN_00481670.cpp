// Name: core_door.cpp_CDoor_dtor_FUN_00481670
// Address: 00481670
// Address Range: [[00481670, 004816bd]]
// Convention: __cdecl
// Signature: CDoor * core_door.cpp_CDoor_dtor_FUN_00481670(CDoor * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CDoorTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_CDoor_dtor_FUN_00481670(CDoor *this_ptr,uint d1,uint d2)

{
  CDoor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CDoorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CDoor *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00481670: PUSH EBX
//   Label: core_door.cpp_CDoor_dtor_FUN_00481670
// 00481671: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00481675: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0048167a: JNZ 0x00481696
//   XREF to: 00481696 (CONDITIONAL_JUMP)
// 0048167c: PUSH 0x1
// 0048167e: PUSH EBX
// 0048167f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00481684: ADD ESP,0x8
// 00481687: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048168b: MOV EBX,EAX
// 0048168d: TEST DL,0x2
// 00481690: JNZ 0x004816b1
//   XREF to: 004816b1 (CONDITIONAL_JUMP)
// 00481692: MOV EAX,EBX
// 00481694: POP EBX
// 00481695: RET
// 00481696: PUSH 0x65cce0
//   Label: LAB_00481696
//   XREF to: 0065cce0 (DATA)
// 0048169b: PUSH EBX
// 0048169c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004816a1: ADD ESP,0x8
// 004816a4: PUSH EAX
// 004816a5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004816aa: ADD ESP,0x4
// 004816ad: MOV EAX,EBX
// 004816af: POP EBX
// 004816b0: RET
// 004816b1: PUSH EAX
//   Label: LAB_004816b1
// 004816b2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004816b7: ADD ESP,0x4
// 004816ba: MOV EAX,EBX
// 004816bc: POP EBX
// 004816bd: RET
