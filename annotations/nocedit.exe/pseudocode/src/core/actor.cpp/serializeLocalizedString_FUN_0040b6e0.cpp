// Name: core_actor.cpp_serializeLocalizedString_FUN_0040b6e0
// Address: 0040b6e0
// Address Range: [[0040b6e0, 0040b765]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeLocalizedString_FUN_0040b6e0(char * * string_buffer, char * localization_key)
// Cross-references:
//   core_charactr.cpp_CCharacter_serialize_FUN_004283a0 (004283a0) at 004285a5 [UNCONDITIONAL_CALL]
//   core_health.cpp_CHealthItem_serialize_FUN_004f1f20 (004f1f20) at 004f1f90 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_load_FUN_004f6170 (004f6170) at 004f630a [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_CKeyActor_serialize_FUN_00501880 (00501880) at 005018dc [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_serialize_FUN_005ee250 (005ee250) at 005ee2de [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_LOCALIZE_00613f14
//   undefined4 s_!LOCALIZE!_00613f15
//   undefined4 s_LOCALIZE!_00613f16
//   undefined4 s_OCALIZE!_00613f17
//   char[300] g_LocalizationTemplate
//   undefined4 s__0066e1e4
// Function calls:
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

void __cdecl
core_actor_cpp_serializeLocalizedString_FUN_0040b6e0(char **string_buffer,char *localization_key)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char local_134 [300];
  
  pcVar5 = local_134;
  pcVar3 = g_LocalizationTemplate;
  pcVar4 = local_134;
  for (iVar2 = 0x4b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = (char *)((int)pcVar4 + 4);
  }
  if (localization_key != (char *)0x0) {
    do {
      cVar1 = *localization_key;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = localization_key[1];
      localization_key = localization_key + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  pcVar4 = " !LOCALIZE!";
  iVar2 = -1;
  pcVar3 = local_134;
  do {
    pcVar5 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar5 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  core_actor_cpp_serializeString_FUN_0040b5c0(string_buffer,local_134);
  return;
}


// Assembly code:
// 0040b6e0: PUSH ESI
//   Label: core_actor.cpp_serializeLocalizedString_FUN_0040b6e0
// 0040b6e1: PUSH EDI
// 0040b6e2: SUB ESP,0x12c
// 0040b6e8: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x8] (READ)
// 0040b6ef: MOV ECX,0x4b
// 0040b6f4: MOV EDI,ESP
// 0040b6f6: MOV ESI,0x66e1e0
//   XREF to: 0066e1e0 (DATA)
// 0040b6fb: MOVSD.REP ES:EDI,ESI
//   XREF to: 0066e1e0 (READ)
//   XREF to: 0066e1e4 (READ)
// 0040b6fd: TEST EAX,EAX
// 0040b6ff: JNZ 0x0040b746
//   XREF to: 0040b746 (CONDITIONAL_JUMP)
// 0040b701: MOV ESI,0x613f14
//   Label: LAB_0040b701
//   XREF to: 00613f14 (DATA)
// 0040b706: MOV EDI,ESP
// 0040b708: PUSH EDI
// 0040b709: SUB ECX,ECX
// 0040b70b: DEC ECX
// 0040b70c: MOV AL,0x0
// 0040b70e: SCASB.REPNE ES:EDI
// 0040b710: DEC EDI
// 0040b711: MOV AL,byte ptr [ESI]
//   Label: LAB_0040b711
//   XREF to: 00613f14 (READ)
//   XREF to: 00613f16 (READ)
// 0040b713: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x134] (DATA)
// 0040b715: CMP AL,0x0
// 0040b717: JZ 0x0040b729
//   XREF to: 0040b729 (CONDITIONAL_JUMP)
// 0040b719: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00613f15 (READ)
//   XREF to: 00613f17 (READ)
// 0040b71c: ADD ESI,0x2
// 0040b71f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x133] (WRITE)
// 0040b722: ADD EDI,0x2
// 0040b725: CMP AL,0x0
// 0040b727: JNZ 0x0040b711
//   XREF to: 0040b711 (CONDITIONAL_JUMP)
// 0040b729: POP EDI
//   Label: LAB_0040b729
// 0040b72a: MOV EDI,ESP
// 0040b72c: PUSH EDI
// 0040b72d: MOV EDX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x4] (READ)
// 0040b734: PUSH EDX
// 0040b735: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0040b73a: ADD ESP,0x8
// 0040b73d: ADD ESP,0x12c
// 0040b743: POP EDI
// 0040b744: POP ESI
// 0040b745: RET
// 0040b746: MOV EDI,ESP
//   Label: LAB_0040b746
// 0040b748: MOV ESI,EAX
// 0040b74a: PUSH EDI
// 0040b74b: MOV AL,byte ptr [ESI]
//   Label: LAB_0040b74b
// 0040b74d: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x134] (DATA)
// 0040b74f: CMP AL,0x0
// 0040b751: JZ 0x0040b763
//   XREF to: 0040b763 (CONDITIONAL_JUMP)
// 0040b753: MOV AL,byte ptr [ESI + 0x1]
// 0040b756: ADD ESI,0x2
// 0040b759: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x133] (WRITE)
// 0040b75c: ADD EDI,0x2
// 0040b75f: CMP AL,0x0
// 0040b761: JNZ 0x0040b74b
//   XREF to: 0040b74b (CONDITIONAL_JUMP)
// 0040b763: POP EDI
//   Label: LAB_0040b763
// 0040b764: JMP 0x0040b701
//   XREF to: 0040b701 (UNCONDITIONAL_JUMP)
