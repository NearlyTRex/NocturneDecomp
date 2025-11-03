// Name: core_enemy.cpp_CEnemy_dtor_FUN_004125c0
// Address: 004125c0
// Address Range: [[004125c0, 00412678]]
// Convention: __cdecl
// Signature: CEnemy * core_enemy.cpp_CEnemy_dtor_FUN_004125c0(CEnemy * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CEnemyTypeInfo
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

CEnemy * __cdecl
core_enemy_cpp_CEnemy_dtor_FUN_004125c0
          (CEnemy *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CEnemy *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CEnemyTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720
                    ((CFlame **)((this_ptr->base_character).cloth_data + 0x934));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,d3,d4,d5);
  ptr = (CEnemy *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004125c0: PUSH EBX
//   Label: core_enemy.cpp_CEnemy_dtor_FUN_004125c0
// 004125c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004125c5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004125ca: JNZ 0x00412651
//   XREF to: 00412651 (CONDITIONAL_JUMP)
// 004125d0: PUSH 0x0
// 004125d2: ADD EBX,0x33cc
// 004125d8: PUSH EBX
// 004125d9: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 004125de: ADD ESP,0x8
// 004125e1: PUSH 0x0
// 004125e3: SUB EAX,0x4b0
// 004125e8: PUSH EAX
// 004125e9: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 004125ee: ADD ESP,0x8
// 004125f1: PUSH 0x0
// 004125f3: SUB EAX,0x20c
// 004125f8: PUSH EAX
// 004125f9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004125fe: ADD ESP,0x8
// 00412601: PUSH 0x0
// 00412603: SUB EAX,0xb4
// 00412608: PUSH EAX
// 00412609: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0041260e: ADD ESP,0x8
// 00412611: PUSH 0x0
// 00412613: SUB EAX,0x1c8
// 00412618: PUSH EAX
// 00412619: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 0041261e: ADD ESP,0x8
// 00412621: PUSH 0x0
// 00412623: SUB EAX,0x293c
// 00412628: PUSH EAX
// 00412629: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 0041262e: ADD ESP,0x8
// 00412631: PUSH 0x1
// 00412633: LEA EBX,[EAX + 0xfffffea8]
// 00412639: PUSH EBX
// 0041263a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0041263f: ADD ESP,0x8
// 00412642: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00412646: MOV EBX,EAX
// 00412648: TEST DL,0x2
// 0041264b: JNZ 0x0041266c
//   XREF to: 0041266c (CONDITIONAL_JUMP)
// 0041264d: MOV EAX,EBX
// 0041264f: POP EBX
// 00412650: RET
// 00412651: PUSH 0x659ec0
//   Label: LAB_00412651
//   XREF to: 00659ec0 (DATA)
// 00412656: PUSH EBX
// 00412657: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0041265c: ADD ESP,0x8
// 0041265f: PUSH EAX
// 00412660: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00412665: ADD ESP,0x4
// 00412668: MOV EAX,EBX
// 0041266a: POP EBX
// 0041266b: RET
// 0041266c: PUSH EAX
//   Label: LAB_0041266c
// 0041266d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00412672: ADD ESP,0x4
// 00412675: MOV EAX,EBX
// 00412677: POP EBX
// 00412678: RET
