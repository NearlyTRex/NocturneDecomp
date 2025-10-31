// Name: core_hero.cpp_CHero_dtor_FUN_004f2470
// Address: 004f2470
// Address Range: [[004f2470, 004f2535]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHero_dtor_FUN_004f2470(CHero * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Cross-references:
//   core_baron.cpp_CBaron_dtor_FUN_00414100 (00414100) at 0041410f [UNCONDITIONAL_CALL]
//   core_colonel.cpp_CColonel_dtor_FUN_00440670 (00440670) at 0044067f [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_freeMaybe_FUN_004d7660 (004d7660) at 004d7686 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1d10 (004f1d10) at 004f1d1f [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f97e0 (004f97e0) at 004f97ef [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_dtor_FUN_00528bf0 (00528bf0) at 00528c30 [UNCONDITIONAL_CALL]
//   core_scat.cpp_CScat_dtor_FUN_00559160 (00559160) at 0055916f [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_dtor_FUN_005c69c0 (005c69c0) at 005c69cf [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50 (005d9f50) at 005d9f86 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable g_CHeroVTable
//   CHero*[4] g_HeroActors
//   undefined4 DAT_02db87c4
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_backgnd.cpp_cleanupVector_FUN_004126e0
//   core_backgnd.cpp_freeFires_FUN_00412700
//   core_backgnd.cpp_freeFlames_FUN_00412720
//   core_cloth.cpp_FUN_0043bf80
//   core_inv.cpp_CInventory_dtor_FUN_004fd0c0
//   core_path.cpp_CPathMap_dtor_FUN_005464d0
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40

#include "nocturne.h"

void __cdecl
core_hero_cpp_CHero_dtor_FUN_004f2470
          (CHero *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CPathMap *pCVar2;
  CDeformableModelInstance *pCVar3;
  
  (this_ptr->base_character).base_actor.metadata.vtable = &g_CHeroVTable;
  iVar1 = 0;
  do {
    if (this_ptr == *(CHero **)((int)g_HeroActors + iVar1)) {
      *(undefined4 *)((int)g_HeroActors + iVar1) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  iVar1 = core_inv_cpp_CInventory_dtor_FUN_004fd0c0(&this_ptr->inventory);
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_005464d0((CPathMap *)(iVar1 + -0x138e0));
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720
                    ((CFlame **)(pCVar2[-1].height_cache_tags[0xb] + 0x2c));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,d5,d6,d7);
  core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(pCVar3[-1].padding_0x0 + 0x215c),1);
  return;
}


// Assembly code:
// 004f2470: PUSH EBX
//   Label: core_hero.cpp_CHero_dtor_FUN_004f2470
// 004f2471: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f2475: MOV dword ptr [EDX + 0x154],0x65f6d4
//   XREF to: 0065f6d4 (DATA)
// 004f247f: XOR EAX,EAX
// 004f2481: CMP EDX,dword ptr [EAX + 0x2db87c0]
//   Label: LAB_004f2481
//   XREF to: 02db87c0 (READ)
//   XREF to: 02db87c4 (READ)
// 004f2487: JZ 0x004f2529
//   XREF to: 004f2529 (CONDITIONAL_JUMP)
// 004f248d: ADD EAX,0x4
//   Label: LAB_004f248d
// 004f2490: CMP EAX,0x10
// 004f2493: JNZ 0x004f2481
//   XREF to: 004f2481 (CONDITIONAL_JUMP)
// 004f2495: PUSH 0x0
// 004f2497: ADD EDX,0x1f738
// 004f249d: PUSH EDX
// 004f249e: CALL core_inv.cpp_CInventory_dtor_FUN_004fd0c0
//   XREF to: 004fd0c0 (UNCONDITIONAL_CALL)
// 004f24a3: ADD ESP,0x8
// 004f24a6: PUSH 0x0
// 004f24a8: SUB EAX,0x138e0
// 004f24ad: PUSH EAX
// 004f24ae: CALL core_path.cpp_CPathMap_dtor_FUN_005464d0
//   XREF to: 005464d0 (UNCONDITIONAL_CALL)
// 004f24b3: ADD ESP,0x8
// 004f24b6: PUSH 0x0
// 004f24b8: SUB EAX,0x8a8c
// 004f24bd: PUSH EAX
// 004f24be: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 004f24c3: ADD ESP,0x8
// 004f24c6: PUSH 0x0
// 004f24c8: SUB EAX,0x4b0
// 004f24cd: PUSH EAX
// 004f24ce: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 004f24d3: ADD ESP,0x8
// 004f24d6: PUSH 0x0
// 004f24d8: SUB EAX,0x20c
// 004f24dd: PUSH EAX
// 004f24de: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004f24e3: ADD ESP,0x8
// 004f24e6: PUSH 0x0
// 004f24e8: SUB EAX,0xb4
// 004f24ed: PUSH EAX
// 004f24ee: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004f24f3: ADD ESP,0x8
// 004f24f6: PUSH 0x0
// 004f24f8: SUB EAX,0x1c8
// 004f24fd: PUSH EAX
// 004f24fe: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 004f2503: ADD ESP,0x8
// 004f2506: PUSH 0x0
// 004f2508: SUB EAX,0x293c
// 004f250d: PUSH EAX
// 004f250e: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 004f2513: ADD ESP,0x8
// 004f2516: PUSH 0x1
// 004f2518: LEA EDX,[EAX + 0xfffffea8]
// 004f251e: PUSH EDX
// 004f251f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004f2524: ADD ESP,0x8
// 004f2527: POP EBX
// 004f2528: RET
// 004f2529: XOR EBX,EBX
//   Label: LAB_004f2529
// 004f252b: MOV dword ptr [EAX + 0x2db87c0],EBX
//   XREF to: 02db87c4 (WRITE)
// 004f2531: JMP 0x004f248d
//   XREF to: 004f248d (UNCONDITIONAL_JUMP)
