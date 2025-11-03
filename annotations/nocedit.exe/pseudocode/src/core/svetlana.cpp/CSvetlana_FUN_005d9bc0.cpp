// Name: core_svetlana.cpp_CSvetlana_FUN_005d9bc0
// Address: 005d9bc0
// Address Range: [[005d9bc0, 005d9d23]]
// Convention: __cdecl
// Signature: int core_svetlana.cpp_CSvetlana_FUN_005d9bc0(CSvetlana * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
//   CGame g_CGameInstance
//   undefined4 DAT_02d81c90
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_0326f0fc
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_charactr.cpp_CCharacter_FUN_0042a2c0
//   core_cloth.cpp_FUN_0043bae0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

int __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9bc0(CSvetlana *this_ptr)

{
  char **ppcVar1;
  CHero *pCVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  int iVar4;
  CSvetlana *pCVar5;
  BADSPACEBASE *in_ESP;
  char *apcStack_70 [2];
  CSvetlana *pCVar6;
  
  g_CDemonSetPtr->field40_0x15ae84 = 1;
  iVar3 = 0;
  pCVar5 = this_ptr;
  do {
    iVar3 = iVar3 + 1;
    pCVar2 = &pCVar5->base_hero;
    pCVar5 = (CSvetlana *)((pCVar5->base_hero).base_character.base_actor.actor_name + 4);
    *(int *)(&stack0xffffff78 + iVar3 * 4) = (pCVar2->base_character).model.part_visibility_flags[0]
    ;
  } while (iVar3 < 0x1e);
  iVar3 = core_charactr_cpp_CCharacter_FUN_0042a2c0((CCharacter *)this_ptr);
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if ((iVar4 == 0) && ((int)g_PerspectiveReciprocal < 0x4000)) {
    pCVar5 = this_ptr;
    do {
      pCVar6 = (CSvetlana *)((pCVar5->base_hero).base_character.base_actor.actor_name + 4);
      (pCVar5->base_hero).base_character.model.part_visibility_flags[0] = 0;
      pCVar5 = pCVar6;
    } while (pCVar6 != (CSvetlana *)(this_ptr->base_hero).base_character.base_actor.create_event);
    (this_ptr->base_hero).base_character.model.part_visibility_flags
    [*(int *)(this_ptr->field1_0x1fbd4 + 0x7fcfc)] = 1;
    this_ptr_00 = g_CDemonRendererPtr;
    (this_ptr->base_hero).base_character.model.part_visibility_flags
    [*(int *)(this_ptr->field1_0x1fbd4 + 0x7fd00)] = 1;
    iVar4 = g_CGamePtr->field62_0x1f4;
    g_CGamePtr->field62_0x1f4 = 2;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,48000);
    if (iVar3 != 0) {
      core_charactr_cpp_CCharacter_FUN_0042a2c0((CCharacter *)this_ptr);
    }
    g_CGamePtr->field62_0x1f4 = iVar4;
    iVar4 = 0;
    pCVar5 = this_ptr;
    do {
      ppcVar1 = apcStack_70 + iVar4;
      iVar4 = iVar4 + 1;
      (pCVar5->base_hero).base_character.model.part_visibility_flags[0] = (int)*ppcVar1;
      pCVar5 = (CSvetlana *)((pCVar5->base_hero).base_character.base_actor.actor_name + 4);
    } while (iVar4 < 0x1e);
  }
  g_CDemonSetPtr->field40_0x15ae84 = 0;
  if (iVar3 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    apcStack_70[0] = (char *)0x0;
    core_cloth_cpp_FUN_0043bae0();
    apcStack_70[1] = (char *)0x0;
    apcStack_70[0] = this_ptr->field1_0x1fbd4 + 0x3fe78;
    core_cloth_cpp_FUN_0043bae0();
    apcStack_70[1] = (char *)0x5d9d18;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return iVar3;
  }
  return 0;
}


// Assembly code:
// 005d9bc0: PUSH EBX
//   Label: core_svetlana.cpp_CSvetlana_FUN_005d9bc0
// 005d9bc1: PUSH ESI
// 005d9bc2: PUSH EBP
// 005d9bc3: SUB ESP,0x78
// 005d9bc6: MOV ESI,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 005d9bcd: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005d9bd2: MOV EDX,ESI
// 005d9bd4: MOV dword ptr [EAX + 0x15ae84],0x1
//   XREF to: 0326f0fc (WRITE)
// 005d9bde: XOR EAX,EAX
// 005d9be0: INC EAX
//   Label: LAB_005d9be0
// 005d9be1: MOV ECX,dword ptr [EDX + 0x2298]
// 005d9be7: ADD EDX,0x4
// 005d9bea: MOV dword ptr [ESP + EAX*0x4 + -0x4],ECX
//   XREF to: Stack[-0x84] (DATA)
// 005d9bee: CMP EAX,0x1e
// 005d9bf1: JL 0x005d9be0
//   XREF to: 005d9be0 (CONDITIONAL_JUMP)
// 005d9bf3: PUSH ESI
// 005d9bf4: CALL core_charactr.cpp_CCharacter_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 005d9bf9: ADD ESP,0x4
// 005d9bfc: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005d9c02: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005d9c03: MOV EBX,EAX
// 005d9c05: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005d9c0a: ADD ESP,0x4
// 005d9c0d: TEST EAX,EAX
// 005d9c0f: JNZ 0x005d9cc0
//   XREF to: 005d9cc0 (CONDITIONAL_JUMP)
// 005d9c15: CMP dword ptr [0x02d051f4],0x4000
//   XREF to: 02d051f4 (READ)
// 005d9c1f: JGE 0x005d9cc0
//   XREF to: 005d9cc0 (CONDITIONAL_JUMP)
// 005d9c25: MOV EAX,ESI
// 005d9c27: LEA EDX,[ESI + 0x78]
// 005d9c2a: ADD EAX,0x4
//   Label: LAB_005d9c2a
// 005d9c2d: MOV dword ptr [EAX + 0x2294],0x0
// 005d9c37: CMP EAX,EDX
// 005d9c39: JNZ 0x005d9c2a
//   XREF to: 005d9c2a (CONDITIONAL_JUMP)
// 005d9c3b: PUSH EDI
// 005d9c3c: MOV EAX,dword ptr [ESI + 0x9f8d0]
// 005d9c42: MOV dword ptr [ESI + EAX*0x4 + 0x2298],0x1
// 005d9c4d: MOV EAX,dword ptr [ESI + 0x9f8d4]
// 005d9c53: PUSH 0x0
// 005d9c55: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005d9c5b: MOV dword ptr [ESI + EAX*0x4 + 0x2298],0x1
// 005d9c66: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005d9c6b: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 005d9c6c: MOV EDI,dword ptr [EAX + 0x1f4]
//   XREF to: 02d81c90 (READ)
// 005d9c72: MOV dword ptr [EAX + 0x1f4],0x2
//   XREF to: 02d81c90 (WRITE)
// 005d9c7c: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 005d9c81: ADD ESP,0x8
// 005d9c84: PUSH 0xbb80
// 005d9c89: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005d9c8e: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005d9c8f: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 005d9c94: ADD ESP,0x8
// 005d9c97: TEST EBX,EBX
// 005d9c99: JNZ 0x005d9cdc
//   XREF to: 005d9cdc (CONDITIONAL_JUMP)
// 005d9c9b: MOV EAX,[0x0067b654]
//   Label: LAB_005d9c9b
//   XREF to: 0067b654 (READ)
// 005d9ca0: MOV EDX,ESI
// 005d9ca2: MOV dword ptr [EAX + 0x1f4],EDI
//   XREF to: 02d81c90 (WRITE)
// 005d9ca8: XOR EAX,EAX
// 005d9caa: POP EDI
// 005d9cab: ADD EDX,0x4
//   Label: LAB_005d9cab
// 005d9cae: MOV ECX,dword ptr [ESP + EAX*0x4]
//   XREF to: Stack[-0x84] (DATA)
// 005d9cb1: INC EAX
// 005d9cb2: MOV dword ptr [EDX + 0x2294],ECX
// 005d9cb8: CMP EAX,0x1e
// 005d9cbb: JL 0x005d9cab
//   XREF to: 005d9cab (CONDITIONAL_JUMP)
// 005d9cbd: LEA EAX,[EAX]
// 005d9cc0: MOV EAX,[0x006810c8]
//   Label: LAB_005d9cc0
//   XREF to: 006810c8 (READ)
// 005d9cc5: MOV dword ptr [EAX + 0x15ae84],0x0
//   XREF to: 0326f0fc (WRITE)
// 005d9ccf: TEST EBX,EBX
// 005d9cd1: JNZ 0x005d9ce7
//   XREF to: 005d9ce7 (CONDITIONAL_JUMP)
// 005d9cd3: MOV EAX,EBX
// 005d9cd5: ADD ESP,0x78
// 005d9cd8: POP EBP
// 005d9cd9: POP ESI
// 005d9cda: POP EBX
// 005d9cdb: RET
// 005d9cdc: PUSH ESI
//   Label: LAB_005d9cdc
// 005d9cdd: CALL core_charactr.cpp_CCharacter_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 005d9ce2: ADD ESP,0x4
// 005d9ce5: JMP 0x005d9c9b
//   XREF to: 005d9c9b (UNCONDITIONAL_JUMP)
// 005d9ce7: PUSH ESI
//   Label: LAB_005d9ce7
// 005d9ce8: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005d9ced: ADD ESP,0x4
// 005d9cf0: PUSH 0x0
// 005d9cf2: LEA EAX,[ESI + 0x1fbdc]
// 005d9cf8: PUSH EAX
// 005d9cf9: CALL core_cloth.cpp_FUN_0043bae0
//   XREF to: 0043bae0 (UNCONDITIONAL_CALL)
// 005d9cfe: ADD ESP,0x8
// 005d9d01: PUSH 0x0
// 005d9d03: LEA EAX,[ESI + 0x5fa4c]
// 005d9d09: PUSH EAX
// 005d9d0a: CALL core_cloth.cpp_FUN_0043bae0
//   XREF to: 0043bae0 (UNCONDITIONAL_CALL)
// 005d9d0f: ADD ESP,0x8
// 005d9d12: PUSH ESI
// 005d9d13: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005d9d18: ADD ESP,0x4
// 005d9d1b: MOV EAX,EBX
// 005d9d1d: ADD ESP,0x78
// 005d9d20: POP EBP
// 005d9d21: POP ESI
// 005d9d22: POP EBX
// 005d9d23: RET
