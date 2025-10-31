// Name: core_vessel.cpp_CCryptVessel_dtor_FUN_005e9d30
// Address: 005e9d30
// Address Range: [[005e9d30, 005e9d94]]
// Convention: __cdecl
// Signature: CCryptVessel * core_vessel.cpp_CCryptVessel_dtor_FUN_005e9d30(CCryptVessel * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CCryptVesselTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CCryptVessel * __cdecl
core_vessel_cpp_CCryptVessel_dtor_FUN_005e9d30(CCryptVessel *this_ptr,uint d1,uint d2,uint d3)

{
  CDemonActor *pCVar1;
  CCryptVessel *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CCryptVesselTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                     ((CDemonActor *)(this_ptr->field14_0x3c0 + 4),1);
  ptr = (CCryptVessel *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)&pCVar1[-3].orient_matrix.m[0].z,1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005e9d30: PUSH EBX
//   Label: core_vessel.cpp_CCryptVessel_dtor_FUN_005e9d30
// 005e9d31: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e9d35: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005e9d3a: JNZ 0x005e9d6d
//   XREF to: 005e9d6d (CONDITIONAL_JUMP)
// 005e9d3c: PUSH 0x1
// 005e9d3e: ADD EBX,0x3c4
// 005e9d44: PUSH EBX
// 005e9d45: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005e9d4a: ADD ESP,0x8
// 005e9d4d: PUSH 0x1
// 005e9d4f: LEA EBX,[EAX + 0xfffffc3c]
// 005e9d55: PUSH EBX
// 005e9d56: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005e9d5b: ADD ESP,0x8
// 005e9d5e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e9d62: MOV EBX,EAX
// 005e9d64: TEST DL,0x2
// 005e9d67: JNZ 0x005e9d88
//   XREF to: 005e9d88 (CONDITIONAL_JUMP)
// 005e9d69: MOV EAX,EBX
// 005e9d6b: POP EBX
// 005e9d6c: RET
// 005e9d6d: PUSH 0x6652a0
//   Label: LAB_005e9d6d
//   XREF to: 006652a0 (DATA)
// 005e9d72: PUSH EBX
// 005e9d73: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005e9d78: ADD ESP,0x8
// 005e9d7b: PUSH EAX
// 005e9d7c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005e9d81: ADD ESP,0x4
// 005e9d84: MOV EAX,EBX
// 005e9d86: POP EBX
// 005e9d87: RET
// 005e9d88: PUSH EAX
//   Label: LAB_005e9d88
// 005e9d89: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005e9d8e: ADD ESP,0x4
// 005e9d91: MOV EAX,EBX
// 005e9d93: POP EBX
// 005e9d94: RET
