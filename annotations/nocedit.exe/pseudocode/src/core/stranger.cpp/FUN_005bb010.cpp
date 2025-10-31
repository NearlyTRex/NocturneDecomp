// Name: core_stranger.cpp_FUN_005bb010
// Address: 005bb010
// Address Range: [[005bb010, 005bb0d8]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005bb010()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005bf218 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c07b0 (005c07b0) at 005c1416 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c2b09 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_006531ac
//   undefined4 g_CBoxActorClassInfo.name_hash
//   undefined4 g_CCryptVesselClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_stone.cpp_FUN_005bb010(undefined4 param_1) */

float core_stranger_cpp_FUN_005bb010(void)

{
  CDemonActor *pCVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  CKeyFramedModel *pCVar5;
  int iVar6;
  int iVar7;
  CDemonActor *in_stack_00000004;
  int iVar8;
  
  pCVar5 = (CKeyFramedModel *)0x0;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CBoxActorClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  }
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CCryptVesselClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  }
  if (pCVar5 != (CKeyFramedModel *)0x0) {
    iVar7 = 0;
    iVar6 = 0;
    iVar4 = 0;
    iVar8 = 0;
    for (iVar3 = 0; iVar3 < pCVar5->vertex_count; iVar3 = iVar3 + 1) {
      piVar2 = (int *)((int)pCVar5->vertex_list + iVar4);
      if (iVar7 < *piVar2) {
        iVar8 = piVar2[1];
        iVar7 = *piVar2;
      }
      if (iVar6 < piVar2[1]) {
        iVar6 = piVar2[1];
      }
      iVar4 = iVar4 + 0xc;
    }
    return (float)(iVar6 - iVar8) * (float)_DAT_006531ac;
  }
  return 0.0;
}


// Assembly code:
// 005bb010: PUSH EBX
//   Label: core_stranger.cpp_FUN_005bb010
// 005bb011: PUSH ESI
// 005bb012: PUSH EBP
// 005bb013: SUB ESP,0xc
// 005bb016: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005bb01a: MOV EDX,dword ptr [0x008229e8]
//   XREF to: 008229e8 (READ)
// 005bb020: PUSH EDX
// 005bb021: PUSH ESI
// 005bb022: XOR EBX,EBX
// 005bb024: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005bb029: ADD ESP,0x8
// 005bb02c: TEST EAX,EAX
// 005bb02e: JNZ 0x005bb093
//   XREF to: 005bb093 (CONDITIONAL_JUMP)
// 005bb030: MOV ECX,dword ptr [0x03f875d8]
//   Label: LAB_005bb030
//   XREF to: 03f875d8 (READ)
// 005bb036: PUSH ECX
// 005bb037: PUSH ESI
// 005bb038: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005bb03d: ADD ESP,0x8
// 005bb040: TEST EAX,EAX
// 005bb042: JZ 0x005bb054
//   XREF to: 005bb054 (CONDITIONAL_JUMP)
// 005bb044: ADD EAX,0x158
// 005bb049: PUSH EAX
// 005bb04a: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005bb04f: ADD ESP,0x4
// 005bb052: MOV EBX,EAX
// 005bb054: TEST EBX,EBX
//   Label: LAB_005bb054
// 005bb056: JZ 0x005bb0a5
//   XREF to: 005bb0a5 (CONDITIONAL_JUMP)
// 005bb058: PUSH EDI
// 005bb059: XOR EDI,EDI
// 005bb05b: XOR ESI,ESI
// 005bb05d: XOR ECX,ECX
// 005bb05f: XOR EDX,EDX
// 005bb061: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005bb065: MOV EAX,dword ptr [EBX + 0x104]
//   Label: LAB_005bb065
// 005bb06b: CMP ECX,EAX
// 005bb06d: JGE 0x005bb0b6
//   XREF to: 005bb0b6 (CONDITIONAL_JUMP)
// 005bb06f: MOV EAX,dword ptr [EBX + 0x10c]
// 005bb075: ADD EAX,EDX
// 005bb077: MOV EBP,dword ptr [EAX]
// 005bb079: CMP EDI,EBP
// 005bb07b: JGE 0x005bb086
//   XREF to: 005bb086 (CONDITIONAL_JUMP)
// 005bb07d: MOV EDI,EBP
// 005bb07f: MOV EBP,dword ptr [EAX + 0x4]
// 005bb082: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 005bb086: MOV EBP,dword ptr [EAX + 0x4]
//   Label: LAB_005bb086
// 005bb089: CMP ESI,EBP
// 005bb08b: JL 0x005bb0b2
//   XREF to: 005bb0b2 (CONDITIONAL_JUMP)
// 005bb08d: INC ECX
//   Label: LAB_005bb08d
// 005bb08e: ADD EDX,0xc
// 005bb091: JMP 0x005bb065
//   XREF to: 005bb065 (UNCONDITIONAL_JUMP)
// 005bb093: ADD EAX,0x158
//   Label: LAB_005bb093
// 005bb098: PUSH EAX
// 005bb099: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005bb09e: ADD ESP,0x4
// 005bb0a1: MOV EBX,EAX
// 005bb0a3: JMP 0x005bb030
//   XREF to: 005bb030 (UNCONDITIONAL_JUMP)
// 005bb0a5: MOV dword ptr [ESP],EBX
//   Label: LAB_005bb0a5
//   XREF to: Stack[-0x18] (DATA)
// 005bb0a8: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005bb0ab: ADD ESP,0xc
// 005bb0ae: POP EBP
// 005bb0af: POP ESI
// 005bb0b0: POP EBX
// 005bb0b1: RET
// 005bb0b2: MOV ESI,EBP
//   Label: LAB_005bb0b2
// 005bb0b4: JMP 0x005bb08d
//   XREF to: 005bb08d (UNCONDITIONAL_JUMP)
// 005bb0b6: MOV EBP,dword ptr [ESP + 0x8]
//   Label: LAB_005bb0b6
//   XREF to: Stack[-0x14] (READ)
// 005bb0ba: SUB ESI,EBP
// 005bb0bc: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 005bb0c0: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 005bb0c4: FMUL double ptr [0x006531ac]
//   XREF to: 006531ac (READ)
// 005bb0ca: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 005bb0ce: POP EDI
// 005bb0cf: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005bb0d2: ADD ESP,0xc
// 005bb0d5: POP EBP
// 005bb0d6: POP ESI
// 005bb0d7: POP EBX
// 005bb0d8: RET
