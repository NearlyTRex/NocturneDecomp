// Name: core_bugs.cpp_CBugs_dtor_FUN_00427bd0
// Address: 00427bd0
// Address Range: [[00427bd0, 00427c98]]
// Convention: __cdecl
// Signature: CBugs * core_bugs.cpp_CBugs_dtor_FUN_00427bd0(CBugs * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9)
// Globals:
//   WatcomTypeInfo g_CBugsTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_backgnd.cpp_cleanupVector_FUN_004126e0
//   core_backgnd.cpp_freeFires_FUN_00412700
//   core_backgnd.cpp_freeFlames_FUN_00412720
//   core_bugs.cpp_FUN_00427cc0
//   core_cloth.cpp_FUN_0043bf80
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CBugs * __cdecl
core_bugs_cpp_CBugs_dtor_FUN_00427bd0
          (CBugs *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,uint d9)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CBugs *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBugsTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_bugs_cpp_FUN_00427cc0((SBug **)this_ptr->field3_0xbec4);
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720((CFlame **)(iVar1 + -0x8af8));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,d4,d5,d6);
  ptr = (CBugs *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                           ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d9 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00427bd0: PUSH EBX
//   Label: core_bugs.cpp_CBugs_dtor_FUN_00427bd0
// 00427bd1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00427bd5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00427bda: JNZ 0x00427c71
//   XREF to: 00427c71 (CONDITIONAL_JUMP)
// 00427be0: PUSH 0x0
// 00427be2: ADD EBX,0xbec4
// 00427be8: PUSH EBX
// 00427be9: CALL core_bugs.cpp_FUN_00427cc0
//   XREF to: 00427cc0 (UNCONDITIONAL_CALL)
// 00427bee: ADD ESP,0x8
// 00427bf1: PUSH 0x0
// 00427bf3: SUB EAX,0x8af8
// 00427bf8: PUSH EAX
// 00427bf9: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 00427bfe: ADD ESP,0x8
// 00427c01: PUSH 0x0
// 00427c03: SUB EAX,0x4b0
// 00427c08: PUSH EAX
// 00427c09: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 00427c0e: ADD ESP,0x8
// 00427c11: PUSH 0x0
// 00427c13: SUB EAX,0x20c
// 00427c18: PUSH EAX
// 00427c19: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00427c1e: ADD ESP,0x8
// 00427c21: PUSH 0x0
// 00427c23: SUB EAX,0xb4
// 00427c28: PUSH EAX
// 00427c29: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00427c2e: ADD ESP,0x8
// 00427c31: PUSH 0x0
// 00427c33: SUB EAX,0x1c8
// 00427c38: PUSH EAX
// 00427c39: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 00427c3e: ADD ESP,0x8
// 00427c41: PUSH 0x0
// 00427c43: SUB EAX,0x293c
// 00427c48: PUSH EAX
// 00427c49: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 00427c4e: ADD ESP,0x8
// 00427c51: PUSH 0x1
// 00427c53: LEA EBX,[EAX + 0xfffffea8]
// 00427c59: PUSH EBX
// 00427c5a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00427c5f: ADD ESP,0x8
// 00427c62: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00427c66: MOV EBX,EAX
// 00427c68: TEST DL,0x2
// 00427c6b: JNZ 0x00427c8c
//   XREF to: 00427c8c (CONDITIONAL_JUMP)
// 00427c6d: MOV EAX,EBX
// 00427c6f: POP EBX
// 00427c70: RET
// 00427c71: PUSH 0x65b790
//   Label: LAB_00427c71
//   XREF to: 0065b790 (DATA)
// 00427c76: PUSH EBX
// 00427c77: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00427c7c: ADD ESP,0x8
// 00427c7f: PUSH EAX
// 00427c80: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00427c85: ADD ESP,0x4
// 00427c88: MOV EAX,EBX
// 00427c8a: POP EBX
// 00427c8b: RET
// 00427c8c: PUSH EAX
//   Label: LAB_00427c8c
// 00427c8d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00427c92: ADD ESP,0x4
// 00427c95: MOV EAX,EBX
// 00427c97: POP EBX
// 00427c98: RET
