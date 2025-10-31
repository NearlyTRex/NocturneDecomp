// Name: core_imp.cpp_FUN_004fb180
// Address: 004fb180
// Address Range: [[004fb180, 004fb238]]
// Convention: __cdecl
// Signature: CImp * core_imp.cpp_FUN_004fb180(CImp * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CImpTypeInfo
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

CImp * __cdecl
core_imp_cpp_FUN_004fb180
          (CImp *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CImp *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CImpTypeInfo);
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
  ptr = (CImp *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                          ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004fb180: PUSH EBX
//   Label: core_imp.cpp_FUN_004fb180
// 004fb181: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004fb185: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004fb18a: JNZ 0x004fb211
//   XREF to: 004fb211 (CONDITIONAL_JUMP)
// 004fb190: PUSH 0x0
// 004fb192: ADD EBX,0x33cc
// 004fb198: PUSH EBX
// 004fb199: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 004fb19e: ADD ESP,0x8
// 004fb1a1: PUSH 0x0
// 004fb1a3: SUB EAX,0x4b0
// 004fb1a8: PUSH EAX
// 004fb1a9: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 004fb1ae: ADD ESP,0x8
// 004fb1b1: PUSH 0x0
// 004fb1b3: SUB EAX,0x20c
// 004fb1b8: PUSH EAX
// 004fb1b9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004fb1be: ADD ESP,0x8
// 004fb1c1: PUSH 0x0
// 004fb1c3: SUB EAX,0xb4
// 004fb1c8: PUSH EAX
// 004fb1c9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004fb1ce: ADD ESP,0x8
// 004fb1d1: PUSH 0x0
// 004fb1d3: SUB EAX,0x1c8
// 004fb1d8: PUSH EAX
// 004fb1d9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 004fb1de: ADD ESP,0x8
// 004fb1e1: PUSH 0x0
// 004fb1e3: SUB EAX,0x293c
// 004fb1e8: PUSH EAX
// 004fb1e9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 004fb1ee: ADD ESP,0x8
// 004fb1f1: PUSH 0x1
// 004fb1f3: LEA EBX,[EAX + 0xfffffea8]
// 004fb1f9: PUSH EBX
// 004fb1fa: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004fb1ff: ADD ESP,0x8
// 004fb202: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004fb206: MOV EBX,EAX
// 004fb208: TEST DL,0x2
// 004fb20b: JNZ 0x004fb22c
//   XREF to: 004fb22c (CONDITIONAL_JUMP)
// 004fb20d: MOV EAX,EBX
// 004fb20f: POP EBX
// 004fb210: RET
// 004fb211: PUSH 0x660360
//   Label: LAB_004fb211
//   XREF to: 00660360 (DATA)
// 004fb216: PUSH EBX
// 004fb217: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004fb21c: ADD ESP,0x8
// 004fb21f: PUSH EAX
// 004fb220: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004fb225: ADD ESP,0x4
// 004fb228: MOV EAX,EBX
// 004fb22a: POP EBX
// 004fb22b: RET
// 004fb22c: PUSH EAX
//   Label: LAB_004fb22c
// 004fb22d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004fb232: ADD ESP,0x4
// 004fb235: MOV EAX,EBX
// 004fb237: POP EBX
// 004fb238: RET
