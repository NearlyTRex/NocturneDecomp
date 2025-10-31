// Name: core_trigger.cpp_CTrigger_dtor_FUN_005e1660
// Address: 005e1660
// Address Range: [[005e1660, 005e16ad]]
// Convention: __cdecl
// Signature: CTrigger * core_trigger.cpp_CTrigger_dtor_FUN_005e1660(CTrigger * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CTriggerTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_CTrigger_dtor_FUN_005e1660(CTrigger *this_ptr,uint d1,uint d2)

{
  CTrigger *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTriggerTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CTrigger *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005e1660: PUSH EBX
//   Label: core_trigger.cpp_CTrigger_dtor_FUN_005e1660
// 005e1661: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e1665: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005e166a: JNZ 0x005e1686
//   XREF to: 005e1686 (CONDITIONAL_JUMP)
// 005e166c: PUSH 0x1
// 005e166e: PUSH EBX
// 005e166f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005e1674: ADD ESP,0x8
// 005e1677: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e167b: MOV EBX,EAX
// 005e167d: TEST DL,0x2
// 005e1680: JNZ 0x005e16a1
//   XREF to: 005e16a1 (CONDITIONAL_JUMP)
// 005e1682: MOV EAX,EBX
// 005e1684: POP EBX
// 005e1685: RET
// 005e1686: PUSH 0x664b10
//   Label: LAB_005e1686
//   XREF to: 00664b10 (DATA)
// 005e168b: PUSH EBX
// 005e168c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005e1691: ADD ESP,0x8
// 005e1694: PUSH EAX
// 005e1695: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005e169a: ADD ESP,0x4
// 005e169d: MOV EAX,EBX
// 005e169f: POP EBX
// 005e16a0: RET
// 005e16a1: PUSH EAX
//   Label: LAB_005e16a1
// 005e16a2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005e16a7: ADD ESP,0x4
// 005e16aa: MOV EAX,EBX
// 005e16ac: POP EBX
// 005e16ad: RET
