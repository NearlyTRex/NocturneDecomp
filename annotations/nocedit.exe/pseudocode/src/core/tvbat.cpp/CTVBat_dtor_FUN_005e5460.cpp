// Name: core_tvbat.cpp_CTVBat_dtor_FUN_005e5460
// Address: 005e5460
// Address Range: [[005e5460, 005e5518]]
// Convention: __cdecl
// Signature: CTVBat * core_tvbat.cpp_CTVBat_dtor_FUN_005e5460(CTVBat * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CTVBatTypeInfo
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

CTVBat * __cdecl
core_tvbat_cpp_CTVBat_dtor_FUN_005e5460
          (CTVBat *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CTVBat *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTVBatTypeInfo);
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
  ptr = (CTVBat *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005e5460: PUSH EBX
//   Label: core_tvbat.cpp_CTVBat_dtor_FUN_005e5460
// 005e5461: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e5465: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005e546a: JNZ 0x005e54f1
//   XREF to: 005e54f1 (CONDITIONAL_JUMP)
// 005e5470: PUSH 0x0
// 005e5472: ADD EBX,0x33cc
// 005e5478: PUSH EBX
// 005e5479: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 005e547e: ADD ESP,0x8
// 005e5481: PUSH 0x0
// 005e5483: SUB EAX,0x4b0
// 005e5488: PUSH EAX
// 005e5489: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 005e548e: ADD ESP,0x8
// 005e5491: PUSH 0x0
// 005e5493: SUB EAX,0x20c
// 005e5498: PUSH EAX
// 005e5499: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005e549e: ADD ESP,0x8
// 005e54a1: PUSH 0x0
// 005e54a3: SUB EAX,0xb4
// 005e54a8: PUSH EAX
// 005e54a9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005e54ae: ADD ESP,0x8
// 005e54b1: PUSH 0x0
// 005e54b3: SUB EAX,0x1c8
// 005e54b8: PUSH EAX
// 005e54b9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 005e54be: ADD ESP,0x8
// 005e54c1: PUSH 0x0
// 005e54c3: SUB EAX,0x293c
// 005e54c8: PUSH EAX
// 005e54c9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 005e54ce: ADD ESP,0x8
// 005e54d1: PUSH 0x1
// 005e54d3: LEA EBX,[EAX + 0xfffffea8]
// 005e54d9: PUSH EBX
// 005e54da: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005e54df: ADD ESP,0x8
// 005e54e2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e54e6: MOV EBX,EAX
// 005e54e8: TEST DL,0x2
// 005e54eb: JNZ 0x005e550c
//   XREF to: 005e550c (CONDITIONAL_JUMP)
// 005e54ed: MOV EAX,EBX
// 005e54ef: POP EBX
// 005e54f0: RET
// 005e54f1: PUSH 0x664e40
//   Label: LAB_005e54f1
//   XREF to: 00664e40 (DATA)
// 005e54f6: PUSH EBX
// 005e54f7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005e54fc: ADD ESP,0x8
// 005e54ff: PUSH EAX
// 005e5500: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005e5505: ADD ESP,0x4
// 005e5508: MOV EAX,EBX
// 005e550a: POP EBX
// 005e550b: RET
// 005e550c: PUSH EAX
//   Label: LAB_005e550c
// 005e550d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005e5512: ADD ESP,0x4
// 005e5515: MOV EAX,EBX
// 005e5517: POP EBX
// 005e5518: RET
