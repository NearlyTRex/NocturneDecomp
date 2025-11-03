// Name: core_sentinel.cpp_CSentinel_dtor_FUN_00568f80
// Address: 00568f80
// Address Range: [[00568f80, 00569038]]
// Convention: __cdecl
// Signature: CSentinel * core_sentinel.cpp_CSentinel_dtor_FUN_00568f80(CSentinel * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CSentinelTypeInfo
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

CSentinel * __cdecl
core_sentinel_cpp_CSentinel_dtor_FUN_00568f80
          (CSentinel *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CSentinel *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CSentinelTypeInfo);
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
  ptr = (CSentinel *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00568f80: PUSH EBX
//   Label: core_sentinel.cpp_CSentinel_dtor_FUN_00568f80
// 00568f81: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00568f85: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00568f8a: JNZ 0x00569011
//   XREF to: 00569011 (CONDITIONAL_JUMP)
// 00568f90: PUSH 0x0
// 00568f92: ADD EBX,0x33cc
// 00568f98: PUSH EBX
// 00568f99: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 00568f9e: ADD ESP,0x8
// 00568fa1: PUSH 0x0
// 00568fa3: SUB EAX,0x4b0
// 00568fa8: PUSH EAX
// 00568fa9: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 00568fae: ADD ESP,0x8
// 00568fb1: PUSH 0x0
// 00568fb3: SUB EAX,0x20c
// 00568fb8: PUSH EAX
// 00568fb9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00568fbe: ADD ESP,0x8
// 00568fc1: PUSH 0x0
// 00568fc3: SUB EAX,0xb4
// 00568fc8: PUSH EAX
// 00568fc9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00568fce: ADD ESP,0x8
// 00568fd1: PUSH 0x0
// 00568fd3: SUB EAX,0x1c8
// 00568fd8: PUSH EAX
// 00568fd9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 00568fde: ADD ESP,0x8
// 00568fe1: PUSH 0x0
// 00568fe3: SUB EAX,0x293c
// 00568fe8: PUSH EAX
// 00568fe9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 00568fee: ADD ESP,0x8
// 00568ff1: PUSH 0x1
// 00568ff3: LEA EBX,[EAX + 0xfffffea8]
// 00568ff9: PUSH EBX
// 00568ffa: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00568fff: ADD ESP,0x8
// 00569002: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00569006: MOV EBX,EAX
// 00569008: TEST DL,0x2
// 0056900b: JNZ 0x0056902c
//   XREF to: 0056902c (CONDITIONAL_JUMP)
// 0056900d: MOV EAX,EBX
// 0056900f: POP EBX
// 00569010: RET
// 00569011: PUSH 0x662800
//   Label: LAB_00569011
//   XREF to: 00662800 (DATA)
// 00569016: PUSH EBX
// 00569017: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0056901c: ADD ESP,0x8
// 0056901f: PUSH EAX
// 00569020: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00569025: ADD ESP,0x4
// 00569028: MOV EAX,EBX
// 0056902a: POP EBX
// 0056902b: RET
// 0056902c: PUSH EAX
//   Label: LAB_0056902c
// 0056902d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00569032: ADD ESP,0x4
// 00569035: MOV EAX,EBX
// 00569037: POP EBX
// 00569038: RET
