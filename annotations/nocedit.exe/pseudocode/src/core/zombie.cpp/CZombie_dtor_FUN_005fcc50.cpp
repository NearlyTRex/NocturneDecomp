// Name: core_zombie.cpp_CZombie_dtor_FUN_005fcc50
// Address: 005fcc50
// Address Range: [[005fcc50, 005fcd08]]
// Convention: __cdecl
// Signature: CZombie * core_zombie.cpp_CZombie_dtor_FUN_005fcc50(CZombie * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CZombieTypeInfo
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

CZombie * __cdecl
core_zombie_cpp_CZombie_dtor_FUN_005fcc50
          (CZombie *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CZombie *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CZombieTypeInfo);
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
  ptr = (CZombie *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005fcc50: PUSH EBX
//   Label: core_zombie.cpp_CZombie_dtor_FUN_005fcc50
// 005fcc51: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005fcc55: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005fcc5a: JNZ 0x005fcce1
//   XREF to: 005fcce1 (CONDITIONAL_JUMP)
// 005fcc60: PUSH 0x0
// 005fcc62: ADD EBX,0x33cc
// 005fcc68: PUSH EBX
// 005fcc69: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 005fcc6e: ADD ESP,0x8
// 005fcc71: PUSH 0x0
// 005fcc73: SUB EAX,0x4b0
// 005fcc78: PUSH EAX
// 005fcc79: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 005fcc7e: ADD ESP,0x8
// 005fcc81: PUSH 0x0
// 005fcc83: SUB EAX,0x20c
// 005fcc88: PUSH EAX
// 005fcc89: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005fcc8e: ADD ESP,0x8
// 005fcc91: PUSH 0x0
// 005fcc93: SUB EAX,0xb4
// 005fcc98: PUSH EAX
// 005fcc99: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005fcc9e: ADD ESP,0x8
// 005fcca1: PUSH 0x0
// 005fcca3: SUB EAX,0x1c8
// 005fcca8: PUSH EAX
// 005fcca9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 005fccae: ADD ESP,0x8
// 005fccb1: PUSH 0x0
// 005fccb3: SUB EAX,0x293c
// 005fccb8: PUSH EAX
// 005fccb9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 005fccbe: ADD ESP,0x8
// 005fccc1: PUSH 0x1
// 005fccc3: LEA EBX,[EAX + 0xfffffea8]
// 005fccc9: PUSH EBX
// 005fccca: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005fcccf: ADD ESP,0x8
// 005fccd2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005fccd6: MOV EBX,EAX
// 005fccd8: TEST DL,0x2
// 005fccdb: JNZ 0x005fccfc
//   XREF to: 005fccfc (CONDITIONAL_JUMP)
// 005fccdd: MOV EAX,EBX
// 005fccdf: POP EBX
// 005fcce0: RET
// 005fcce1: PUSH 0x665b50
//   Label: LAB_005fcce1
//   XREF to: 00665b50 (DATA)
// 005fcce6: PUSH EBX
// 005fcce7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005fccec: ADD ESP,0x8
// 005fccef: PUSH EAX
// 005fccf0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005fccf5: ADD ESP,0x4
// 005fccf8: MOV EAX,EBX
// 005fccfa: POP EBX
// 005fccfb: RET
// 005fccfc: PUSH EAX
//   Label: LAB_005fccfc
// 005fccfd: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005fcd02: ADD ESP,0x4
// 005fcd05: MOV EAX,EBX
// 005fcd07: POP EBX
// 005fcd08: RET
