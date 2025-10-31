// Name: core_larva.cpp_FUN_00503cc0
// Address: 00503cc0
// Address Range: [[00503cc0, 00503d78]]
// Convention: __cdecl
// Signature: CDemonActor * core_larva.cpp_FUN_00503cc0(CLarva * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CLarvaTypeInfo
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
core_larva_cpp_FUN_00503cc0
          (CLarva *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CLarvaTypeInfo);
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
// 00503cc0: PUSH EBX
//   Label: core_larva.cpp_FUN_00503cc0
// 00503cc1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00503cc5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00503cca: JNZ 0x00503d51
//   XREF to: 00503d51 (CONDITIONAL_JUMP)
// 00503cd0: PUSH 0x0
// 00503cd2: ADD EBX,0x33cc
// 00503cd8: PUSH EBX
// 00503cd9: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 00503cde: ADD ESP,0x8
// 00503ce1: PUSH 0x0
// 00503ce3: SUB EAX,0x4b0
// 00503ce8: PUSH EAX
// 00503ce9: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 00503cee: ADD ESP,0x8
// 00503cf1: PUSH 0x0
// 00503cf3: SUB EAX,0x20c
// 00503cf8: PUSH EAX
// 00503cf9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00503cfe: ADD ESP,0x8
// 00503d01: PUSH 0x0
// 00503d03: SUB EAX,0xb4
// 00503d08: PUSH EAX
// 00503d09: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00503d0e: ADD ESP,0x8
// 00503d11: PUSH 0x0
// 00503d13: SUB EAX,0x1c8
// 00503d18: PUSH EAX
// 00503d19: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 00503d1e: ADD ESP,0x8
// 00503d21: PUSH 0x0
// 00503d23: SUB EAX,0x293c
// 00503d28: PUSH EAX
// 00503d29: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 00503d2e: ADD ESP,0x8
// 00503d31: PUSH 0x1
// 00503d33: LEA EBX,[EAX + 0xfffffea8]
// 00503d39: PUSH EBX
// 00503d3a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00503d3f: ADD ESP,0x8
// 00503d42: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00503d46: MOV EBX,EAX
// 00503d48: TEST DL,0x2
// 00503d4b: JNZ 0x00503d6c
//   XREF to: 00503d6c (CONDITIONAL_JUMP)
// 00503d4d: MOV EAX,EBX
// 00503d4f: POP EBX
// 00503d50: RET
// 00503d51: PUSH 0x6608a0
//   Label: LAB_00503d51
//   XREF to: 006608a0 (DATA)
// 00503d56: PUSH EBX
// 00503d57: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00503d5c: ADD ESP,0x8
// 00503d5f: PUSH EAX
// 00503d60: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00503d65: ADD ESP,0x4
// 00503d68: MOV EAX,EBX
// 00503d6a: POP EBX
// 00503d6b: RET
// 00503d6c: PUSH EAX
//   Label: LAB_00503d6c
// 00503d6d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00503d72: ADD ESP,0x4
// 00503d75: MOV EAX,EBX
// 00503d77: POP EBX
// 00503d78: RET
