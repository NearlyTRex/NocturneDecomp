// Name: core_boxactor.cpp_FUN_00423310
// Address: 00423310
// Address Range: [[00423310, 00423379]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00423310()
// Cross-references:
//   core_boxactor.cpp_CLightActor_FUN_004234e0 (004234e0) at 004234f9 [DATA]
// Globals:
//   void* switchdataD_004232f8 = 00423338
//   TerminatedCString s_Custom_0061698f
//   undefined4 s_ustom_00616990
//   undefined4 s_stom_00616991
//   undefined4 s_tom_00616992
//   TerminatedCString s_Flashlight_00616996
//   undefined4 s_lashlight_00616997
//   undefined4 s_ashlight_00616998
//   undefined4 s_shlight_00616999
//   TerminatedCString s_Lantern_006169a1
//   undefined4 s_antern_006169a2
//   undefined4 s_ntern_006169a3
//   undefined4 s_tern_006169a4
//   TerminatedCString s_Globe_006169a9
//   undefined4 s_lobe_006169aa
//   undefined4 s_obe_006169ab
//   undefined4 s_be_006169ac
//   TerminatedCString s_anon_006169af
//   undefined4 DAT_006169b0
//   undefined4 g_CLightActorClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

void core_boxactor_cpp_FUN_00423310(void)

{
  char cVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000010;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CLightActorClassInfo.name_hash);
  switch(pCVar2[4].scale.y) {
  case 0:
    pcVar3 = "Custom";
    break;
  case 1:
    pcVar3 = "Flashlight";
    break;
  case 2:
    pcVar3 = "Lantern";
    break;
  case 3:
    pcVar3 = "Globe";
    break;
  default:
    pcVar3 = "???";
  }
  do {
    cVar1 = *pcVar3;
    *in_stack_00000010 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    in_stack_00000010[1] = cVar1;
    in_stack_00000010 = in_stack_00000010 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 00423310: PUSH ESI
//   Label: core_boxactor.cpp_FUN_00423310
// 00423311: PUSH EDI
// 00423312: MOV EDX,dword ptr [0x00822c84]
//   XREF to: 00822c84 (READ)
// 00423318: PUSH EDX
// 00423319: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0042331d: PUSH ECX
// 0042331e: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00423323: MOV EAX,dword ptr [EAX + 0x66c]
// 00423329: ADD ESP,0x8
// 0042332c: CMP EAX,0x3
// 0042332f: JA 0x00423373
//   XREF to: 00423373 (CONDITIONAL_JUMP)
// 00423331: JMP dword ptr [EAX*0x4 + 0x4232f8]
//   Label: switchD
//   XREF to: 00423338 (COMPUTED_JUMP)
//   XREF to: 0042335e (COMPUTED_JUMP)
//   XREF to: 00423365 (COMPUTED_JUMP)
//   XREF to: 0042336c (COMPUTED_JUMP)
//   XREF to: 004232f8 (DATA)
// 00423338: MOV ESI,0x61698f
//   Label: caseD_0
//   XREF to: 0061698f (DATA)
// 0042333d: MOV EDI,dword ptr [ESP + 0x14]
//   Label: LAB_0042333d
//   XREF to: Stack[0xc] (READ)
// 00423341: PUSH EDI
// 00423342: MOV AL,byte ptr [ESI]
//   Label: LAB_00423342
//   XREF to: 0061698f (READ)
//   XREF to: 00616991 (READ)
//   XREF to: 00616996 (READ)
//   XREF to: 00616998 (READ)
//   XREF to: 006169a1 (READ)
//   XREF to: 006169a3 (READ)
//   XREF to: 006169a9 (READ)
//   XREF to: 006169ab (READ)
//   XREF to: 006169af (READ)
// 00423344: MOV byte ptr [EDI],AL
// 00423346: CMP AL,0x0
// 00423348: JZ 0x0042335a
//   XREF to: 0042335a (CONDITIONAL_JUMP)
// 0042334a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00616990 (READ)
//   XREF to: 00616992 (READ)
//   XREF to: 00616997 (READ)
//   XREF to: 00616999 (READ)
//   XREF to: 006169a2 (READ)
//   XREF to: 006169a4 (READ)
//   XREF to: 006169aa (READ)
//   XREF to: 006169ac (READ)
//   XREF to: 006169b0 (READ)
// 0042334d: ADD ESI,0x2
// 00423350: MOV byte ptr [EDI + 0x1],AL
// 00423353: ADD EDI,0x2
// 00423356: CMP AL,0x0
// 00423358: JNZ 0x00423342
//   XREF to: 00423342 (CONDITIONAL_JUMP)
// 0042335a: POP EDI
//   Label: LAB_0042335a
// 0042335b: POP EDI
// 0042335c: POP ESI
// 0042335d: RET
// 0042335e: MOV ESI,0x616996
//   Label: caseD_1
//   XREF to: 00616996 (DATA)
// 00423363: JMP 0x0042333d
//   XREF to: 0042333d (UNCONDITIONAL_JUMP)
// 00423365: MOV ESI,0x6169a1
//   Label: caseD_2
//   XREF to: 006169a1 (DATA)
// 0042336a: JMP 0x0042333d
//   XREF to: 0042333d (UNCONDITIONAL_JUMP)
// 0042336c: MOV ESI,0x6169a9
//   Label: caseD_3
//   XREF to: 006169a9 (DATA)
// 00423371: JMP 0x0042333d
//   XREF to: 0042333d (UNCONDITIONAL_JUMP)
// 00423373: MOV ESI,0x6169af
//   Label: default
//   XREF to: 006169af (DATA)
// 00423378: JMP 0x0042333d
//   XREF to: 0042333d (UNCONDITIONAL_JUMP)
