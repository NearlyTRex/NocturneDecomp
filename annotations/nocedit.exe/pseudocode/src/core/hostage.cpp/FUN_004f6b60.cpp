// Name: core_hostage.cpp_FUN_004f6b60
// Address: 004f6b60
// Address Range: [[004f6b60, 004f6c28]]
// Convention: __cdecl
// Signature: CHostage * core_hostage.cpp_FUN_004f6b60(CHostage * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9)
// Globals:
//   WatcomTypeInfo g_CHostageTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_backgnd.cpp_cleanupVector_FUN_004126e0
//   core_backgnd.cpp_freeFires_FUN_00412700
//   core_backgnd.cpp_freeFlames_FUN_00412720
//   core_cloth.cpp_FUN_0043bf80
//   core_path.cpp_CPathMap_dtor_FUN_005464d0
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CHostage * __cdecl
core_hostage_cpp_FUN_004f6b60
          (CHostage *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,
          uint d9)

{
  CPathMap *pCVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  CHostage *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CHostageTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_005464d0((CPathMap *)&(this_ptr->base_npc).model_name);
  iVar2 = core_backgnd_cpp_freeFlames_FUN_00412720
                    ((CFlame **)(pCVar1[-1].height_cache_tags[0xb] + 0x39));
  iVar2 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar2 + -0x4b0));
  iVar2 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar2 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar2 + -0xb4));
  iVar2 = core_cloth_cpp_FUN_0043bf80();
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar2 + -0x293c),0,d4,d5,d6);
  ptr = (CHostage *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar3[-1].padding_0x0 + 0x215c),1);
  if ((d9 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004f6b60: PUSH EBX
//   Label: core_hostage.cpp_FUN_004f6b60
// 004f6b61: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f6b65: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004f6b6a: JNZ 0x004f6c01
//   XREF to: 004f6c01 (CONDITIONAL_JUMP)
// 004f6b70: PUSH 0x0
// 004f6b72: ADD EBX,0xbe24
// 004f6b78: PUSH EBX
// 004f6b79: CALL core_path.cpp_CPathMap_dtor_FUN_005464d0
//   XREF to: 005464d0 (UNCONDITIONAL_CALL)
// 004f6b7e: ADD ESP,0x8
// 004f6b81: PUSH 0x0
// 004f6b83: SUB EAX,0x8a58
// 004f6b88: PUSH EAX
// 004f6b89: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 004f6b8e: ADD ESP,0x8
// 004f6b91: PUSH 0x0
// 004f6b93: SUB EAX,0x4b0
// 004f6b98: PUSH EAX
// 004f6b99: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 004f6b9e: ADD ESP,0x8
// 004f6ba1: PUSH 0x0
// 004f6ba3: SUB EAX,0x20c
// 004f6ba8: PUSH EAX
// 004f6ba9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004f6bae: ADD ESP,0x8
// 004f6bb1: PUSH 0x0
// 004f6bb3: SUB EAX,0xb4
// 004f6bb8: PUSH EAX
// 004f6bb9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004f6bbe: ADD ESP,0x8
// 004f6bc1: PUSH 0x0
// 004f6bc3: SUB EAX,0x1c8
// 004f6bc8: PUSH EAX
// 004f6bc9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 004f6bce: ADD ESP,0x8
// 004f6bd1: PUSH 0x0
// 004f6bd3: SUB EAX,0x293c
// 004f6bd8: PUSH EAX
// 004f6bd9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 004f6bde: ADD ESP,0x8
// 004f6be1: PUSH 0x1
// 004f6be3: LEA EBX,[EAX + 0xfffffea8]
// 004f6be9: PUSH EBX
// 004f6bea: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004f6bef: ADD ESP,0x8
// 004f6bf2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f6bf6: MOV EBX,EAX
// 004f6bf8: TEST DL,0x2
// 004f6bfb: JNZ 0x004f6c1c
//   XREF to: 004f6c1c (CONDITIONAL_JUMP)
// 004f6bfd: MOV EAX,EBX
// 004f6bff: POP EBX
// 004f6c00: RET
// 004f6c01: PUSH 0x65fc90
//   Label: LAB_004f6c01
//   XREF to: 0065fc90 (DATA)
// 004f6c06: PUSH EBX
// 004f6c07: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004f6c0c: ADD ESP,0x8
// 004f6c0f: PUSH EAX
// 004f6c10: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004f6c15: ADD ESP,0x4
// 004f6c18: MOV EAX,EBX
// 004f6c1a: POP EBX
// 004f6c1b: RET
// 004f6c1c: PUSH EAX
//   Label: LAB_004f6c1c
// 004f6c1d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004f6c22: ADD ESP,0x4
// 004f6c25: MOV EAX,EBX
// 004f6c27: POP EBX
// 004f6c28: RET
