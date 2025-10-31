// Name: core_armour.cpp_CArmour_dtor_FUN_00412500
// Address: 00412500
// Address Range: [[00412500, 004125b8]]
// Convention: __cdecl
// Signature: CArmour * core_armour.cpp_CArmour_dtor_FUN_00412500(CArmour * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CArmourTypeInfo
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

CArmour * __cdecl
core_armour_cpp_CArmour_dtor_FUN_00412500
          (CArmour *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CArmour *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CArmourTypeInfo);
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
  ptr = (CArmour *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00412500: PUSH EBX
//   Label: core_armour.cpp_CArmour_dtor_FUN_00412500
// 00412501: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00412505: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0041250a: JNZ 0x00412591
//   XREF to: 00412591 (CONDITIONAL_JUMP)
// 00412510: PUSH 0x0
// 00412512: ADD EBX,0x33cc
// 00412518: PUSH EBX
// 00412519: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 0041251e: ADD ESP,0x8
// 00412521: PUSH 0x0
// 00412523: SUB EAX,0x4b0
// 00412528: PUSH EAX
// 00412529: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 0041252e: ADD ESP,0x8
// 00412531: PUSH 0x0
// 00412533: SUB EAX,0x20c
// 00412538: PUSH EAX
// 00412539: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0041253e: ADD ESP,0x8
// 00412541: PUSH 0x0
// 00412543: SUB EAX,0xb4
// 00412548: PUSH EAX
// 00412549: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0041254e: ADD ESP,0x8
// 00412551: PUSH 0x0
// 00412553: SUB EAX,0x1c8
// 00412558: PUSH EAX
// 00412559: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 0041255e: ADD ESP,0x8
// 00412561: PUSH 0x0
// 00412563: SUB EAX,0x293c
// 00412568: PUSH EAX
// 00412569: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 0041256e: ADD ESP,0x8
// 00412571: PUSH 0x1
// 00412573: LEA EBX,[EAX + 0xfffffea8]
// 00412579: PUSH EBX
// 0041257a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0041257f: ADD ESP,0x8
// 00412582: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00412586: MOV EBX,EAX
// 00412588: TEST DL,0x2
// 0041258b: JNZ 0x004125ac
//   XREF to: 004125ac (CONDITIONAL_JUMP)
// 0041258d: MOV EAX,EBX
// 0041258f: POP EBX
// 00412590: RET
// 00412591: PUSH 0x659ea0
//   Label: LAB_00412591
//   XREF to: 00659ea0 (DATA)
// 00412596: PUSH EBX
// 00412597: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0041259c: ADD ESP,0x8
// 0041259f: PUSH EAX
// 004125a0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004125a5: ADD ESP,0x4
// 004125a8: MOV EAX,EBX
// 004125aa: POP EBX
// 004125ab: RET
// 004125ac: PUSH EAX
//   Label: LAB_004125ac
// 004125ad: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004125b2: ADD ESP,0x4
// 004125b5: MOV EAX,EBX
// 004125b7: POP EBX
// 004125b8: RET
