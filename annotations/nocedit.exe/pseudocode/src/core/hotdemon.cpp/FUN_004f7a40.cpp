// Name: core_hotdemon.cpp_FUN_004f7a40
// Address: 004f7a40
// Address Range: [[004f7a40, 004f7af8]]
// Convention: __cdecl
// Signature: CDemonActor * core_hotdemon.cpp_FUN_004f7a40(CHotDemon * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CHotDemonTypeInfo
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
core_hotdemon_cpp_FUN_004f7a40
          (CHotDemon *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CHotDemonTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return (CDemonActor *)this_ptr;
  }
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720
                    ((CFlame **)((this_ptr->base_enemy).base_character.cloth_data + 0x934));
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
// 004f7a40: PUSH EBX
//   Label: core_hotdemon.cpp_FUN_004f7a40
// 004f7a41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f7a45: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004f7a4a: JNZ 0x004f7ad1
//   XREF to: 004f7ad1 (CONDITIONAL_JUMP)
// 004f7a50: PUSH 0x0
// 004f7a52: ADD EBX,0x33cc
// 004f7a58: PUSH EBX
// 004f7a59: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 004f7a5e: ADD ESP,0x8
// 004f7a61: PUSH 0x0
// 004f7a63: SUB EAX,0x4b0
// 004f7a68: PUSH EAX
// 004f7a69: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 004f7a6e: ADD ESP,0x8
// 004f7a71: PUSH 0x0
// 004f7a73: SUB EAX,0x20c
// 004f7a78: PUSH EAX
// 004f7a79: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004f7a7e: ADD ESP,0x8
// 004f7a81: PUSH 0x0
// 004f7a83: SUB EAX,0xb4
// 004f7a88: PUSH EAX
// 004f7a89: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004f7a8e: ADD ESP,0x8
// 004f7a91: PUSH 0x0
// 004f7a93: SUB EAX,0x1c8
// 004f7a98: PUSH EAX
// 004f7a99: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 004f7a9e: ADD ESP,0x8
// 004f7aa1: PUSH 0x0
// 004f7aa3: SUB EAX,0x293c
// 004f7aa8: PUSH EAX
// 004f7aa9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 004f7aae: ADD ESP,0x8
// 004f7ab1: PUSH 0x1
// 004f7ab3: LEA EBX,[EAX + 0xfffffea8]
// 004f7ab9: PUSH EBX
// 004f7aba: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004f7abf: ADD ESP,0x8
// 004f7ac2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f7ac6: MOV EBX,EAX
// 004f7ac8: TEST DL,0x2
// 004f7acb: JNZ 0x004f7aec
//   XREF to: 004f7aec (CONDITIONAL_JUMP)
// 004f7acd: MOV EAX,EBX
// 004f7acf: POP EBX
// 004f7ad0: RET
// 004f7ad1: PUSH 0x65fe50
//   Label: LAB_004f7ad1
//   XREF to: 0065fe50 (DATA)
// 004f7ad6: PUSH EBX
// 004f7ad7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004f7adc: ADD ESP,0x8
// 004f7adf: PUSH EAX
// 004f7ae0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004f7ae5: ADD ESP,0x4
// 004f7ae8: MOV EAX,EBX
// 004f7aea: POP EBX
// 004f7aeb: RET
// 004f7aec: PUSH EAX
//   Label: LAB_004f7aec
// 004f7aed: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004f7af2: ADD ESP,0x4
// 004f7af5: MOV EAX,EBX
// 004f7af7: POP EBX
// 004f7af8: RET
