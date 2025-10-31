// Name: core_batcreat.cpp_CBatCreature_dtor_FUN_00416320
// Address: 00416320
// Address Range: [[00416320, 004163d8]]
// Convention: __cdecl
// Signature: CDemonActor * core_batcreat.cpp_CBatCreature_dtor_FUN_00416320(CBatCreature * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CBatCreatureTypeInfo
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
core_batcreat_cpp_CBatCreature_dtor_FUN_00416320
          (CBatCreature *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBatCreatureTypeInfo);
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
// 00416320: PUSH EBX
//   Label: core_batcreat.cpp_CBatCreature_dtor_FUN_00416320
// 00416321: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00416325: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0041632a: JNZ 0x004163b1
//   XREF to: 004163b1 (CONDITIONAL_JUMP)
// 00416330: PUSH 0x0
// 00416332: ADD EBX,0x33cc
// 00416338: PUSH EBX
// 00416339: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 0041633e: ADD ESP,0x8
// 00416341: PUSH 0x0
// 00416343: SUB EAX,0x4b0
// 00416348: PUSH EAX
// 00416349: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 0041634e: ADD ESP,0x8
// 00416351: PUSH 0x0
// 00416353: SUB EAX,0x20c
// 00416358: PUSH EAX
// 00416359: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0041635e: ADD ESP,0x8
// 00416361: PUSH 0x0
// 00416363: SUB EAX,0xb4
// 00416368: PUSH EAX
// 00416369: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0041636e: ADD ESP,0x8
// 00416371: PUSH 0x0
// 00416373: SUB EAX,0x1c8
// 00416378: PUSH EAX
// 00416379: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 0041637e: ADD ESP,0x8
// 00416381: PUSH 0x0
// 00416383: SUB EAX,0x293c
// 00416388: PUSH EAX
// 00416389: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 0041638e: ADD ESP,0x8
// 00416391: PUSH 0x1
// 00416393: LEA EBX,[EAX + 0xfffffea8]
// 00416399: PUSH EBX
// 0041639a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0041639f: ADD ESP,0x8
// 004163a2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004163a6: MOV EBX,EAX
// 004163a8: TEST DL,0x2
// 004163ab: JNZ 0x004163cc
//   XREF to: 004163cc (CONDITIONAL_JUMP)
// 004163ad: MOV EAX,EBX
// 004163af: POP EBX
// 004163b0: RET
// 004163b1: PUSH 0x65a730
//   Label: LAB_004163b1
//   XREF to: 0065a730 (DATA)
// 004163b6: PUSH EBX
// 004163b7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004163bc: ADD ESP,0x8
// 004163bf: PUSH EAX
// 004163c0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004163c5: ADD ESP,0x4
// 004163c8: MOV EAX,EBX
// 004163ca: POP EBX
// 004163cb: RET
// 004163cc: PUSH EAX
//   Label: LAB_004163cc
// 004163cd: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004163d2: ADD ESP,0x4
// 004163d5: MOV EAX,EBX
// 004163d7: POP EBX
// 004163d8: RET
