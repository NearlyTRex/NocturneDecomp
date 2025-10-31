// Name: core_ammo.cpp_FUN_00411200
// Address: 00411200
// Address Range: [[00411200, 00411285]]
// Convention: unknown
// Signature: undefined core_ammo.cpp_FUN_00411200()
// Cross-references:
//   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 (00411360) at 004113c0 [DATA]
// Globals:
//   void* switchdataD_004111dc = 0041122c
//   TerminatedCString s_Generic_00614a8d
//   undefined4 s_eneric_00614a8e
//   TerminatedCString s_Holy_00614a95
//   undefined4 s_oly_00614a96
//   TerminatedCString s_Wood_00614a9a
//   undefined4 s_ood_00614a9b
//   TerminatedCString s_Silver_00614a9f
//   undefined4 s_ilver_00614aa0
//   TerminatedCString s_Gold_00614aa6
//   undefined4 s_old_00614aa7
//   TerminatedCString s_Flaming_00614aab
//   undefined4 s_laming_00614aac
//   TerminatedCString s_Blanks_00614ab3
//   undefined4 s_lanks_00614ab4
//   TerminatedCString s_Lithium_00614aba
//   undefined4 s_ithium_00614abb
//   TerminatedCString s_Mercury_00614ac2
//   undefined4 s_ercury_00614ac3
//   undefined4 s_rcury_00614ac4
//   undefined4 s_cury_00614ac5
//   undefined4 g_CAmmoClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

void core_ammo_cpp_FUN_00411200(void)

{
  char cVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000004,g_CAmmoClassInfo.name_hash)
  ;
  switch(pCVar2[2].field6_0x68) {
  case 0:
    pcVar3 = "Generic";
    break;
  case 1:
    pcVar3 = "Holy";
    break;
  case 2:
    pcVar3 = "Wood";
    break;
  case 3:
    pcVar3 = "Silver";
    break;
  case 4:
    pcVar3 = "Gold";
    break;
  case 5:
    pcVar3 = "Flaming";
    break;
  case 6:
    pcVar3 = "Blanks";
    break;
  case 7:
    pcVar3 = "Lithium";
    break;
  case 8:
    pcVar3 = "Mercury";
    break;
  default:
    goto switchD_00411225_default;
  }
  do {
    cVar1 = *pcVar3;
    *in_stack_0000000c = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    in_stack_0000000c[1] = cVar1;
    in_stack_0000000c = in_stack_0000000c + 2;
  } while (cVar1 != '\0');
switchD_00411225_default:
  return;
}


// Assembly code:
// 00411200: PUSH ESI
//   Label: core_ammo.cpp_FUN_00411200
// 00411201: PUSH EDI
// 00411202: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00411206: MOV EDX,dword ptr [0x008223a4]
//   XREF to: 008223a4 (READ)
// 0041120c: PUSH EDX
// 0041120d: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00411211: PUSH ECX
// 00411212: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00411217: MOV EAX,dword ptr [EAX + 0x318]
// 0041121d: ADD ESP,0x8
// 00411220: CMP EAX,0x8
// 00411223: JA 0x0041124b
//   XREF to: 0041124b (CONDITIONAL_JUMP)
// 00411225: JMP dword ptr [EAX*0x4 + 0x4111dc]
//   Label: switchD
//   XREF to: 0041122c (COMPUTED_JUMP)
//   XREF to: 0041124e (COMPUTED_JUMP)
//   XREF to: 00411255 (COMPUTED_JUMP)
//   XREF to: 0041125c (COMPUTED_JUMP)
//   XREF to: 00411263 (COMPUTED_JUMP)
//   XREF to: 0041126a (COMPUTED_JUMP)
//   XREF to: 00411271 (COMPUTED_JUMP)
//   XREF to: 00411278 (COMPUTED_JUMP)
//   XREF to: 0041127f (COMPUTED_JUMP)
//   XREF to: 004111dc (DATA)
// 0041122c: MOV ESI,0x614a8d
//   Label: caseD_0
//   XREF to: 00614a8d (DATA)
// 00411231: PUSH EDI
//   Label: LAB_00411231
// 00411232: MOV AL,byte ptr [ESI]
//   Label: LAB_00411232
//   XREF to: 00614ac2 (READ)
//   XREF to: 00614ac4 (READ)
//   XREF to: 00614aba (READ)
//   XREF to: 00614ab3 (READ)
//   XREF to: 00614aab (READ)
//   XREF to: 00614aa6 (READ)
//   XREF to: 00614a9f (READ)
//   XREF to: 00614a9a (READ)
//   XREF to: 00614a95 (READ)
//   XREF to: 00614a8d (READ)
// 00411234: MOV byte ptr [EDI],AL
// 00411236: CMP AL,0x0
// 00411238: JZ 0x0041124a
//   XREF to: 0041124a (CONDITIONAL_JUMP)
// 0041123a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00614ac3 (READ)
//   XREF to: 00614ac5 (READ)
//   XREF to: 00614abb (READ)
//   XREF to: 00614ab4 (READ)
//   XREF to: 00614aac (READ)
//   XREF to: 00614aa7 (READ)
//   XREF to: 00614aa0 (READ)
//   XREF to: 00614a9b (READ)
//   XREF to: 00614a96 (READ)
//   XREF to: 00614a8e (READ)
// 0041123d: ADD ESI,0x2
// 00411240: MOV byte ptr [EDI + 0x1],AL
// 00411243: ADD EDI,0x2
// 00411246: CMP AL,0x0
// 00411248: JNZ 0x00411232
//   XREF to: 00411232 (CONDITIONAL_JUMP)
// 0041124a: POP EDI
//   Label: LAB_0041124a
// 0041124b: POP EDI
//   Label: default
// 0041124c: POP ESI
// 0041124d: RET
// 0041124e: MOV ESI,0x614a95
//   Label: caseD_1
//   XREF to: 00614a95 (DATA)
// 00411253: JMP 0x00411231
//   XREF to: 00411231 (UNCONDITIONAL_JUMP)
// 00411255: MOV ESI,0x614a9a
//   Label: caseD_2
//   XREF to: 00614a9a (DATA)
// 0041125a: JMP 0x00411231
//   XREF to: 00411231 (UNCONDITIONAL_JUMP)
// 0041125c: MOV ESI,0x614a9f
//   Label: caseD_3
//   XREF to: 00614a9f (DATA)
// 00411261: JMP 0x00411231
//   XREF to: 00411231 (UNCONDITIONAL_JUMP)
// 00411263: MOV ESI,0x614aa6
//   Label: caseD_4
//   XREF to: 00614aa6 (DATA)
// 00411268: JMP 0x00411231
//   XREF to: 00411231 (UNCONDITIONAL_JUMP)
// 0041126a: MOV ESI,0x614aab
//   Label: caseD_5
//   XREF to: 00614aab (DATA)
// 0041126f: JMP 0x00411231
//   XREF to: 00411231 (UNCONDITIONAL_JUMP)
// 00411271: MOV ESI,0x614ab3
//   Label: caseD_6
//   XREF to: 00614ab3 (DATA)
// 00411276: JMP 0x00411231
//   XREF to: 00411231 (UNCONDITIONAL_JUMP)
// 00411278: MOV ESI,0x614aba
//   Label: caseD_7
//   XREF to: 00614aba (DATA)
// 0041127d: JMP 0x00411231
//   XREF to: 00411231 (UNCONDITIONAL_JUMP)
// 0041127f: MOV ESI,0x614ac2
//   Label: caseD_8
//   XREF to: 00614ac2 (DATA)
// 00411284: JMP 0x00411231
//   XREF to: 00411231 (UNCONDITIONAL_JUMP)
