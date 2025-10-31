// Name: core_flamecan.cpp_FUN_004cb7a0
// Address: 004cb7a0
// Address Range: [[004cb7a0, 004cb804]]
// Convention: __cdecl
// Signature: CFlameCan * core_flamecan.cpp_FUN_004cb7a0(CFlameCan * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CFlameCanTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_FUN_004cb7a0(CFlameCan *this_ptr,uint d1,uint d2,uint d3)

{
  CDemonActor *pCVar1;
  CFlameCan *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CFlameCanTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                     ((CDemonActor *)(this_ptr->field6_0x2e0 + 0x60),1);
  ptr = (CFlameCan *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar1[-3].create_event + 0x50),1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004cb7a0: PUSH EBX
//   Label: core_flamecan.cpp_FUN_004cb7a0
// 004cb7a1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cb7a5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004cb7aa: JNZ 0x004cb7dd
//   XREF to: 004cb7dd (CONDITIONAL_JUMP)
// 004cb7ac: PUSH 0x1
// 004cb7ae: ADD EBX,0x340
// 004cb7b4: PUSH EBX
// 004cb7b5: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004cb7ba: ADD ESP,0x8
// 004cb7bd: PUSH 0x1
// 004cb7bf: LEA EBX,[EAX + 0xfffffcc0]
// 004cb7c5: PUSH EBX
// 004cb7c6: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004cb7cb: ADD ESP,0x8
// 004cb7ce: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004cb7d2: MOV EBX,EAX
// 004cb7d4: TEST DL,0x2
// 004cb7d7: JNZ 0x004cb7f8
//   XREF to: 004cb7f8 (CONDITIONAL_JUMP)
// 004cb7d9: MOV EAX,EBX
// 004cb7db: POP EBX
// 004cb7dc: RET
// 004cb7dd: PUSH 0x65e230
//   Label: LAB_004cb7dd
//   XREF to: 0065e230 (DATA)
// 004cb7e2: PUSH EBX
// 004cb7e3: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004cb7e8: ADD ESP,0x8
// 004cb7eb: PUSH EAX
// 004cb7ec: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004cb7f1: ADD ESP,0x4
// 004cb7f4: MOV EAX,EBX
// 004cb7f6: POP EBX
// 004cb7f7: RET
// 004cb7f8: PUSH EAX
//   Label: LAB_004cb7f8
// 004cb7f9: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004cb7fe: ADD ESP,0x4
// 004cb801: MOV EAX,EBX
// 004cb803: POP EBX
// 004cb804: RET
