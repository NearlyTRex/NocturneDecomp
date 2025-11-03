// Name: core_beast.cpp_CBeast_dtor_FUN_00418490
// Address: 00418490
// Address Range: [[00418490, 00418548]]
// Convention: __cdecl
// Signature: CBeast * core_beast.cpp_CBeast_dtor_FUN_00418490(CBeast * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CBeastTypeInfo
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

CBeast * __cdecl
core_beast_cpp_CBeast_dtor_FUN_00418490
          (CBeast *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CBeast *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBeastTypeInfo);
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
  ptr = (CBeast *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00418490: PUSH EBX
//   Label: core_beast.cpp_CBeast_dtor_FUN_00418490
// 00418491: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00418495: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0041849a: JNZ 0x00418521
//   XREF to: 00418521 (CONDITIONAL_JUMP)
// 004184a0: PUSH 0x0
// 004184a2: ADD EBX,0x33cc
// 004184a8: PUSH EBX
// 004184a9: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 004184ae: ADD ESP,0x8
// 004184b1: PUSH 0x0
// 004184b3: SUB EAX,0x4b0
// 004184b8: PUSH EAX
// 004184b9: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 004184be: ADD ESP,0x8
// 004184c1: PUSH 0x0
// 004184c3: SUB EAX,0x20c
// 004184c8: PUSH EAX
// 004184c9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004184ce: ADD ESP,0x8
// 004184d1: PUSH 0x0
// 004184d3: SUB EAX,0xb4
// 004184d8: PUSH EAX
// 004184d9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004184de: ADD ESP,0x8
// 004184e1: PUSH 0x0
// 004184e3: SUB EAX,0x1c8
// 004184e8: PUSH EAX
// 004184e9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 004184ee: ADD ESP,0x8
// 004184f1: PUSH 0x0
// 004184f3: SUB EAX,0x293c
// 004184f8: PUSH EAX
// 004184f9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 004184fe: ADD ESP,0x8
// 00418501: PUSH 0x1
// 00418503: LEA EBX,[EAX + 0xfffffea8]
// 00418509: PUSH EBX
// 0041850a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0041850f: ADD ESP,0x8
// 00418512: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00418516: MOV EBX,EAX
// 00418518: TEST DL,0x2
// 0041851b: JNZ 0x0041853c
//   XREF to: 0041853c (CONDITIONAL_JUMP)
// 0041851d: MOV EAX,EBX
// 0041851f: POP EBX
// 00418520: RET
// 00418521: PUSH 0x65abd0
//   Label: LAB_00418521
//   XREF to: 0065abd0 (DATA)
// 00418526: PUSH EBX
// 00418527: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0041852c: ADD ESP,0x8
// 0041852f: PUSH EAX
// 00418530: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00418535: ADD ESP,0x4
// 00418538: MOV EAX,EBX
// 0041853a: POP EBX
// 0041853b: RET
// 0041853c: PUSH EAX
//   Label: LAB_0041853c
// 0041853d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00418542: ADD ESP,0x4
// 00418545: MOV EAX,EBX
// 00418547: POP EBX
// 00418548: RET
