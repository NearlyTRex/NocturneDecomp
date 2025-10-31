// Name: core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0
// Address: 0042f9f0
// Address Range: [[0042f9f0, 0042faa8]]
// Convention: __cdecl
// Signature: CDemonActor * core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0(CCharacter * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CCharacterTypeInfo
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

CDemonActor * __cdecl
core_charactr_cpp_CCharacter_dtor_FUN_0042f9f0
          (CCharacter *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CCharacterTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return &this_ptr->base_actor;
  }
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720((CFlame **)(this_ptr->cloth_data + 0x934));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,d3,d4,d5);
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0042f9f0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0
// 0042f9f1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0042f9f5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0042f9fa: JNZ 0x0042fa81
//   XREF to: 0042fa81 (CONDITIONAL_JUMP)
// 0042fa00: PUSH 0x0
// 0042fa02: ADD EBX,0x33cc
// 0042fa08: PUSH EBX
// 0042fa09: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 0042fa0e: ADD ESP,0x8
// 0042fa11: PUSH 0x0
// 0042fa13: SUB EAX,0x4b0
// 0042fa18: PUSH EAX
// 0042fa19: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 0042fa1e: ADD ESP,0x8
// 0042fa21: PUSH 0x0
// 0042fa23: SUB EAX,0x20c
// 0042fa28: PUSH EAX
// 0042fa29: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0042fa2e: ADD ESP,0x8
// 0042fa31: PUSH 0x0
// 0042fa33: SUB EAX,0xb4
// 0042fa38: PUSH EAX
// 0042fa39: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0042fa3e: ADD ESP,0x8
// 0042fa41: PUSH 0x0
// 0042fa43: SUB EAX,0x1c8
// 0042fa48: PUSH EAX
// 0042fa49: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 0042fa4e: ADD ESP,0x8
// 0042fa51: PUSH 0x0
// 0042fa53: SUB EAX,0x293c
// 0042fa58: PUSH EAX
// 0042fa59: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 0042fa5e: ADD ESP,0x8
// 0042fa61: PUSH 0x1
// 0042fa63: LEA EBX,[EAX + 0xfffffea8]
// 0042fa69: PUSH EBX
// 0042fa6a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0042fa6f: ADD ESP,0x8
// 0042fa72: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0042fa76: MOV EBX,EAX
// 0042fa78: TEST DL,0x2
// 0042fa7b: JNZ 0x0042fa9c
//   XREF to: 0042fa9c (CONDITIONAL_JUMP)
// 0042fa7d: MOV EAX,EBX
// 0042fa7f: POP EBX
// 0042fa80: RET
// 0042fa81: PUSH 0x65b9c0
//   Label: LAB_0042fa81
//   XREF to: 0065b9c0 (DATA)
// 0042fa86: PUSH EBX
// 0042fa87: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0042fa8c: ADD ESP,0x8
// 0042fa8f: PUSH EAX
// 0042fa90: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0042fa95: ADD ESP,0x4
// 0042fa98: MOV EAX,EBX
// 0042fa9a: POP EBX
// 0042fa9b: RET
// 0042fa9c: PUSH EAX
//   Label: LAB_0042fa9c
// 0042fa9d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0042faa2: ADD ESP,0x4
// 0042faa5: MOV EAX,EBX
// 0042faa7: POP EBX
// 0042faa8: RET
