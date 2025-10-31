// Name: core_wateract.cpp_CWaterActor_dtor_FUN_005ebc60
// Address: 005ebc60
// Address Range: [[005ebc60, 005ebcc4]]
// Convention: __cdecl
// Signature: CWaterActor * core_wateract.cpp_CWaterActor_dtor_FUN_005ebc60(CWaterActor * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CWaterActorTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_wateract.cpp_FUN_005ebcf0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CWaterActor * __cdecl
core_wateract_cpp_CWaterActor_dtor_FUN_005ebc60(CWaterActor *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  CWaterActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CWaterActorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_wateract_cpp_FUN_005ebcf0();
  ptr = (CWaterActor *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar1 + -0x29c),1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005ebc60: PUSH EBX
//   Label: core_wateract.cpp_CWaterActor_dtor_FUN_005ebc60
// 005ebc61: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ebc65: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005ebc6a: JNZ 0x005ebc9d
//   XREF to: 005ebc9d (CONDITIONAL_JUMP)
// 005ebc6c: PUSH 0x0
// 005ebc6e: ADD EBX,0x29c
// 005ebc74: PUSH EBX
// 005ebc75: CALL core_wateract.cpp_FUN_005ebcf0
//   XREF to: 005ebcf0 (UNCONDITIONAL_CALL)
// 005ebc7a: ADD ESP,0x8
// 005ebc7d: PUSH 0x1
// 005ebc7f: LEA EBX,[EAX + 0xfffffd64]
// 005ebc85: PUSH EBX
// 005ebc86: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005ebc8b: ADD ESP,0x8
// 005ebc8e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005ebc92: MOV EBX,EAX
// 005ebc94: TEST DL,0x2
// 005ebc97: JNZ 0x005ebcb8
//   XREF to: 005ebcb8 (CONDITIONAL_JUMP)
// 005ebc99: MOV EAX,EBX
// 005ebc9b: POP EBX
// 005ebc9c: RET
// 005ebc9d: PUSH 0x665440
//   Label: LAB_005ebc9d
//   XREF to: 00665440 (DATA)
// 005ebca2: PUSH EBX
// 005ebca3: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005ebca8: ADD ESP,0x8
// 005ebcab: PUSH EAX
// 005ebcac: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005ebcb1: ADD ESP,0x4
// 005ebcb4: MOV EAX,EBX
// 005ebcb6: POP EBX
// 005ebcb7: RET
// 005ebcb8: PUSH EAX
//   Label: LAB_005ebcb8
// 005ebcb9: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005ebcbe: ADD ESP,0x4
// 005ebcc1: MOV EAX,EBX
// 005ebcc3: POP EBX
// 005ebcc4: RET
