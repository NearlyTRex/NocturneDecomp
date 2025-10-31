// Name: core_cow.cpp_FUN_00444cd0
// Address: 00444cd0
// Address Range: [[00444cd0, 00444d88]]
// Convention: __cdecl
// Signature: CZombieCow * core_cow.cpp_FUN_00444cd0(CZombieCow * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CZombieCowTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_backgnd.cpp_cleanupVector_FUN_004126e0
//   core_backgnd.cpp_freeFires_FUN_00412700
//   core_backgnd.cpp_freeFlames_FUN_00412720
//   core_cloth.cpp_FUN_0043bf80
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CZombieCow * __cdecl
core_cow_cpp_FUN_00444cd0
          (CZombieCow *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CZombieCow *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CZombieCowTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720
                    ((CFlame **)((this_ptr->base_enemy).base_character.cloth_data + 0x934));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,d3,d4,d5);
  ptr = (CZombieCow *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00444cd0: PUSH EBX
//   Label: core_cow.cpp_FUN_00444cd0
// 00444cd1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00444cd5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00444cda: JNZ 0x00444d61
//   XREF to: 00444d61 (CONDITIONAL_JUMP)
// 00444ce0: PUSH 0x0
// 00444ce2: ADD EBX,0x33cc
// 00444ce8: PUSH EBX
// 00444ce9: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 00444cee: ADD ESP,0x8
// 00444cf1: PUSH 0x0
// 00444cf3: SUB EAX,0x4b0
// 00444cf8: PUSH EAX
// 00444cf9: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 00444cfe: ADD ESP,0x8
// 00444d01: PUSH 0x0
// 00444d03: SUB EAX,0x20c
// 00444d08: PUSH EAX
// 00444d09: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00444d0e: ADD ESP,0x8
// 00444d11: PUSH 0x0
// 00444d13: SUB EAX,0xb4
// 00444d18: PUSH EAX
// 00444d19: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00444d1e: ADD ESP,0x8
// 00444d21: PUSH 0x0
// 00444d23: SUB EAX,0x1c8
// 00444d28: PUSH EAX
// 00444d29: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 00444d2e: ADD ESP,0x8
// 00444d31: PUSH 0x0
// 00444d33: SUB EAX,0x293c
// 00444d38: PUSH EAX
// 00444d39: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 00444d3e: ADD ESP,0x8
// 00444d41: PUSH 0x1
// 00444d43: LEA EBX,[EAX + 0xfffffea8]
// 00444d49: PUSH EBX
// 00444d4a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00444d4f: ADD ESP,0x8
// 00444d52: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00444d56: MOV EBX,EAX
// 00444d58: TEST DL,0x2
// 00444d5b: JNZ 0x00444d7c
//   XREF to: 00444d7c (CONDITIONAL_JUMP)
// 00444d5d: MOV EAX,EBX
// 00444d5f: POP EBX
// 00444d60: RET
// 00444d61: PUSH 0x65c220
//   Label: LAB_00444d61
//   XREF to: 0065c220 (DATA)
// 00444d66: PUSH EBX
// 00444d67: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00444d6c: ADD ESP,0x8
// 00444d6f: PUSH EAX
// 00444d70: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00444d75: ADD ESP,0x4
// 00444d78: MOV EAX,EBX
// 00444d7a: POP EBX
// 00444d7b: RET
// 00444d7c: PUSH EAX
//   Label: LAB_00444d7c
// 00444d7d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00444d82: ADD ESP,0x4
// 00444d85: MOV EAX,EBX
// 00444d87: POP EBX
// 00444d88: RET
