// Name: core_dog.cpp_CZombieDog_dtor_FUN_0047f9a0
// Address: 0047f9a0
// Address Range: [[0047f9a0, 0047fa58]]
// Convention: __cdecl
// Signature: CZombieDog * core_dog.cpp_CZombieDog_dtor_FUN_0047f9a0(CZombieDog * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CZombieDogTypeInfo
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

CZombieDog * __cdecl
core_dog_cpp_CZombieDog_dtor_FUN_0047f9a0
          (CZombieDog *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CZombieDog *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CZombieDogTypeInfo);
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
  ptr = (CZombieDog *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0047f9a0: PUSH EBX
//   Label: core_dog.cpp_CZombieDog_dtor_FUN_0047f9a0
// 0047f9a1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0047f9a5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0047f9aa: JNZ 0x0047fa31
//   XREF to: 0047fa31 (CONDITIONAL_JUMP)
// 0047f9b0: PUSH 0x0
// 0047f9b2: ADD EBX,0x33cc
// 0047f9b8: PUSH EBX
// 0047f9b9: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 0047f9be: ADD ESP,0x8
// 0047f9c1: PUSH 0x0
// 0047f9c3: SUB EAX,0x4b0
// 0047f9c8: PUSH EAX
// 0047f9c9: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 0047f9ce: ADD ESP,0x8
// 0047f9d1: PUSH 0x0
// 0047f9d3: SUB EAX,0x20c
// 0047f9d8: PUSH EAX
// 0047f9d9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0047f9de: ADD ESP,0x8
// 0047f9e1: PUSH 0x0
// 0047f9e3: SUB EAX,0xb4
// 0047f9e8: PUSH EAX
// 0047f9e9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0047f9ee: ADD ESP,0x8
// 0047f9f1: PUSH 0x0
// 0047f9f3: SUB EAX,0x1c8
// 0047f9f8: PUSH EAX
// 0047f9f9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 0047f9fe: ADD ESP,0x8
// 0047fa01: PUSH 0x0
// 0047fa03: SUB EAX,0x293c
// 0047fa08: PUSH EAX
// 0047fa09: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 0047fa0e: ADD ESP,0x8
// 0047fa11: PUSH 0x1
// 0047fa13: LEA EBX,[EAX + 0xfffffea8]
// 0047fa19: PUSH EBX
// 0047fa1a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0047fa1f: ADD ESP,0x8
// 0047fa22: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0047fa26: MOV EBX,EAX
// 0047fa28: TEST DL,0x2
// 0047fa2b: JNZ 0x0047fa4c
//   XREF to: 0047fa4c (CONDITIONAL_JUMP)
// 0047fa2d: MOV EAX,EBX
// 0047fa2f: POP EBX
// 0047fa30: RET
// 0047fa31: PUSH 0x65cbb0
//   Label: LAB_0047fa31
//   XREF to: 0065cbb0 (DATA)
// 0047fa36: PUSH EBX
// 0047fa37: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0047fa3c: ADD ESP,0x8
// 0047fa3f: PUSH EAX
// 0047fa40: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0047fa45: ADD ESP,0x4
// 0047fa48: MOV EAX,EBX
// 0047fa4a: POP EBX
// 0047fa4b: RET
// 0047fa4c: PUSH EAX
//   Label: LAB_0047fa4c
// 0047fa4d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0047fa52: ADD ESP,0x4
// 0047fa55: MOV EAX,EBX
// 0047fa57: POP EBX
// 0047fa58: RET
