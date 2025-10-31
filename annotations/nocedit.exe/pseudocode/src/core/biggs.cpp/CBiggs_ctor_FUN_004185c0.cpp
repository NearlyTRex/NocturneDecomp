// Name: core_biggs.cpp_CBiggs_ctor_FUN_004185c0
// Address: 004185c0
// Address Range: [[004185c0, 0041867c]]
// Convention: __cdecl
// Signature: CBiggs * core_biggs.cpp_CBiggs_ctor_FUN_004185c0(CBiggs * this_ptr)
// Cross-references:
//   core_biggs.cpp_constructor_FUN_00418580 (00418580) at 0041859a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_biggs_dfm_00615aba
//   TerminatedCString s_question_kfm_00615ac4
//   TerminatedCString s_bigAlien_00615ad1
//   undefined4 s_igAlien_00615ad2
//   undefined4 s_gAlien_00615ad3
//   undefined4 s_Alien_00615ad4
//   undefined4 DAT_0065ac08
//   undefined4 PTR_FUN_0065ac09+3
//   CDemonActor_vtable g_CBiggsVTable
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   core_morph.cpp_FUN_0052b310
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_004185c0(CBiggs *this_ptr)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CEnemy *pCVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
            ((CKeyFramedModelInstance *)(pCVar4[1].base_character.base_actor.actor_name + 8));
  iVar5 = core_morph_cpp_FUN_0052b310();
  *(CDemonActor_vtable **)(iVar5 + -0xbeec) = &g_CBiggsVTable;
  core_skeleton_cpp_FUN_005a0840();
  pcVar6 = "bigAlien";
  pcVar7 = (char *)(iVar5 + 0xc2c);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(iVar5 + -0x184),"question.kfm");
  uVar2 = _DAT_0065ac08;
  *(undefined4 *)(iVar5 + -0x9264) = 0x3f19999a;
  uVar3 = _PTR_FUN_0065ac09_3;
  *(undefined4 *)(iVar5 + -0x9260) = 0x3f666666;
  *(undefined4 *)(iVar5 + -0x925c) = uVar2;
  *(undefined4 *)(iVar5 + -0x9258) = uVar3;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') {
      return (CBiggs *)(iVar5 + -0xc040);
    }
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  return (CBiggs *)(iVar5 + -0xc040);
}


// Assembly code:
// 004185c0: PUSH EBX
//   Label: core_biggs.cpp_CBiggs_ctor_FUN_004185c0
// 004185c1: PUSH ESI
// 004185c2: PUSH EDI
// 004185c3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004185c7: PUSH EBX
// 004185c8: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 004185cd: ADD ESP,0x4
// 004185d0: ADD EAX,0xbebc
// 004185d5: PUSH EAX
// 004185d6: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004185db: ADD ESP,0x4
// 004185de: ADD EAX,0x184
// 004185e3: PUSH EAX
// 004185e4: CALL core_morph.cpp_FUN_0052b310
//   XREF to: 0052b310 (UNCONDITIONAL_CALL)
// 004185e9: ADD ESP,0x4
// 004185ec: LEA EBX,[EAX + 0xffff3fc0]
// 004185f2: PUSH 0x615aba
//   XREF to: 00615aba (DATA)
// 004185f7: LEA EAX,[EBX + 0x158]
// 004185fd: PUSH EAX
// 004185fe: MOV dword ptr [EBX + 0x154],0x65ac24
//   XREF to: 0065ac24 (DATA)
// 00418608: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0041860d: ADD ESP,0x8
// 00418610: PUSH 0x615ac4
//   XREF to: 00615ac4 (DATA)
// 00418615: LEA EAX,[EBX + 0xbebc]
// 0041861b: PUSH EAX
// 0041861c: MOV ESI,0x615ad1
//   XREF to: 00615ad1 (DATA)
// 00418621: LEA EDI,[EBX + 0xcc6c]
// 00418627: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0041862c: FLD float ptr [0x0065ac08]
//   XREF to: 0065ac08 (READ)
// 00418632: MOV dword ptr [EBX + 0x2ddc],0x3f19999a
// 0041863c: FLD float ptr [0x0065ac0c]
//   XREF to: 0065ac0c (READ)
// 00418642: MOV dword ptr [EBX + 0x2de0],0x3f666666
// 0041864c: ADD ESP,0x8
// 0041864f: FXCH
// 00418651: FSTP float ptr [EBX + 0x2de4]
// 00418657: FSTP float ptr [EBX + 0x2de8]
// 0041865d: PUSH EDI
// 0041865e: MOV AL,byte ptr [ESI]
//   Label: LAB_0041865e
//   XREF to: 00615ad1 (READ)
//   XREF to: 00615ad3 (READ)
// 00418660: MOV byte ptr [EDI],AL
// 00418662: CMP AL,0x0
// 00418664: JZ 0x00418676
//   XREF to: 00418676 (CONDITIONAL_JUMP)
// 00418666: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00615ad2 (READ)
//   XREF to: 00615ad4 (READ)
// 00418669: ADD ESI,0x2
// 0041866c: MOV byte ptr [EDI + 0x1],AL
// 0041866f: ADD EDI,0x2
// 00418672: CMP AL,0x0
// 00418674: JNZ 0x0041865e
//   XREF to: 0041865e (CONDITIONAL_JUMP)
// 00418676: POP EDI
//   Label: LAB_00418676
// 00418677: MOV EAX,EBX
// 00418679: POP EDI
// 0041867a: POP ESI
// 0041867b: POP EBX
// 0041867c: RET
