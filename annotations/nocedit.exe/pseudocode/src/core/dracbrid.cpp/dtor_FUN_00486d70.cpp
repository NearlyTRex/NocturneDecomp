// Name: core_dracbrid.cpp_dtor_FUN_00486d70
// Address: 00486d70
// Address Range: [[00486d70, 00486e28]]
// Convention: __cdecl
// Signature: CDraculaBride * core_dracbrid.cpp_dtor_FUN_00486d70(CDraculaBride * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CDraculaBrideTypeInfo
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

CDraculaBride * __cdecl
core_dracbrid_cpp_dtor_FUN_00486d70
          (CDraculaBride *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CDraculaBride *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CDraculaBrideTypeInfo);
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
  ptr = (CDraculaBride *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00486d70: PUSH EBX
//   Label: core_dracbrid.cpp_dtor_FUN_00486d70
// 00486d71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00486d75: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00486d7a: JNZ 0x00486e01
//   XREF to: 00486e01 (CONDITIONAL_JUMP)
// 00486d80: PUSH 0x0
// 00486d82: ADD EBX,0x33cc
// 00486d88: PUSH EBX
// 00486d89: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 00486d8e: ADD ESP,0x8
// 00486d91: PUSH 0x0
// 00486d93: SUB EAX,0x4b0
// 00486d98: PUSH EAX
// 00486d99: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 00486d9e: ADD ESP,0x8
// 00486da1: PUSH 0x0
// 00486da3: SUB EAX,0x20c
// 00486da8: PUSH EAX
// 00486da9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00486dae: ADD ESP,0x8
// 00486db1: PUSH 0x0
// 00486db3: SUB EAX,0xb4
// 00486db8: PUSH EAX
// 00486db9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00486dbe: ADD ESP,0x8
// 00486dc1: PUSH 0x0
// 00486dc3: SUB EAX,0x1c8
// 00486dc8: PUSH EAX
// 00486dc9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 00486dce: ADD ESP,0x8
// 00486dd1: PUSH 0x0
// 00486dd3: SUB EAX,0x293c
// 00486dd8: PUSH EAX
// 00486dd9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 00486dde: ADD ESP,0x8
// 00486de1: PUSH 0x1
// 00486de3: LEA EBX,[EAX + 0xfffffea8]
// 00486de9: PUSH EBX
// 00486dea: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00486def: ADD ESP,0x8
// 00486df2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00486df6: MOV EBX,EAX
// 00486df8: TEST DL,0x2
// 00486dfb: JNZ 0x00486e1c
//   XREF to: 00486e1c (CONDITIONAL_JUMP)
// 00486dfd: MOV EAX,EBX
// 00486dff: POP EBX
// 00486e00: RET
// 00486e01: PUSH 0x65cf20
//   Label: LAB_00486e01
//   XREF to: 0065cf20 (DATA)
// 00486e06: PUSH EBX
// 00486e07: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00486e0c: ADD ESP,0x8
// 00486e0f: PUSH EAX
// 00486e10: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00486e15: ADD ESP,0x4
// 00486e18: MOV EAX,EBX
// 00486e1a: POP EBX
// 00486e1b: RET
// 00486e1c: PUSH EAX
//   Label: LAB_00486e1c
// 00486e1d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00486e22: ADD ESP,0x4
// 00486e25: MOV EAX,EBX
// 00486e27: POP EBX
// 00486e28: RET
