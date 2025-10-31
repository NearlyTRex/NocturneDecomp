// Name: core_drone.cpp_dtor_FUN_0048f5a0
// Address: 0048f5a0
// Address Range: [[0048f5a0, 0048f658]]
// Convention: __cdecl
// Signature: CDrone * core_drone.cpp_dtor_FUN_0048f5a0(CDrone * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CDroneTypeInfo
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

CDrone * __cdecl
core_drone_cpp_dtor_FUN_0048f5a0
          (CDrone *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CDrone *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CDroneTypeInfo);
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
  ptr = (CDrone *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0048f5a0: PUSH EBX
//   Label: core_drone.cpp_dtor_FUN_0048f5a0
// 0048f5a1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0048f5a5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0048f5aa: JNZ 0x0048f631
//   XREF to: 0048f631 (CONDITIONAL_JUMP)
// 0048f5b0: PUSH 0x0
// 0048f5b2: ADD EBX,0x33cc
// 0048f5b8: PUSH EBX
// 0048f5b9: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 0048f5be: ADD ESP,0x8
// 0048f5c1: PUSH 0x0
// 0048f5c3: SUB EAX,0x4b0
// 0048f5c8: PUSH EAX
// 0048f5c9: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 0048f5ce: ADD ESP,0x8
// 0048f5d1: PUSH 0x0
// 0048f5d3: SUB EAX,0x20c
// 0048f5d8: PUSH EAX
// 0048f5d9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0048f5de: ADD ESP,0x8
// 0048f5e1: PUSH 0x0
// 0048f5e3: SUB EAX,0xb4
// 0048f5e8: PUSH EAX
// 0048f5e9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0048f5ee: ADD ESP,0x8
// 0048f5f1: PUSH 0x0
// 0048f5f3: SUB EAX,0x1c8
// 0048f5f8: PUSH EAX
// 0048f5f9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 0048f5fe: ADD ESP,0x8
// 0048f601: PUSH 0x0
// 0048f603: SUB EAX,0x293c
// 0048f608: PUSH EAX
// 0048f609: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 0048f60e: ADD ESP,0x8
// 0048f611: PUSH 0x1
// 0048f613: LEA EBX,[EAX + 0xfffffea8]
// 0048f619: PUSH EBX
// 0048f61a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0048f61f: ADD ESP,0x8
// 0048f622: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048f626: MOV EBX,EAX
// 0048f628: TEST DL,0x2
// 0048f62b: JNZ 0x0048f64c
//   XREF to: 0048f64c (CONDITIONAL_JUMP)
// 0048f62d: MOV EAX,EBX
// 0048f62f: POP EBX
// 0048f630: RET
// 0048f631: PUSH 0x65d230
//   Label: LAB_0048f631
//   XREF to: 0065d230 (DATA)
// 0048f636: PUSH EBX
// 0048f637: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0048f63c: ADD ESP,0x8
// 0048f63f: PUSH EAX
// 0048f640: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0048f645: ADD ESP,0x4
// 0048f648: MOV EAX,EBX
// 0048f64a: POP EBX
// 0048f64b: RET
// 0048f64c: PUSH EAX
//   Label: LAB_0048f64c
// 0048f64d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0048f652: ADD ESP,0x4
// 0048f655: MOV EAX,EBX
// 0048f657: POP EBX
// 0048f658: RET
