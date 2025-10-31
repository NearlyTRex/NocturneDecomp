// Name: core_zombie.cpp_CZombie_FUN_005fc220
// Address: 005fc220
// Address Range: [[005fc220, 005fc4ea]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005fc220()
// Cross-references:
//   core_zombie.cpp_CZombie_FUN_005fc4f0 (005fc4f0) at 005fc4fd [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_005fc200 = 005fc25d
//   TerminatedCString s_limb_wav_006589b9
//   undefined4 DAT_006589c5
//   undefined4 DAT_006589cd
//   undefined4 DAT_006589d5
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.blood_flag
//   undefined4 g_CGameInstance.field57_0x1e0
// Function calls:
//   core_actor.cpp_FUN_0040cd10
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   core_bodypart.cpp_FUN_0041a050
//   core_charactr.cpp_CCharacter_FUN_0042bcc0
//   core_charactr.cpp_CCharacter_FUN_0042bd30
//   core_charactr.cpp_CCharacter_FUN_0042f300
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_zombie.cpp_CZombie_FUN_005fc220(CZombie* param_1, undefined4
   param_2) */

void core_zombie_cpp_CZombie_FUN_005fc220(void)

{
  int iVar1;
  CDemonActor_vtable *pCVar2;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar1 % 6) {
    case 0:
      pCVar2 = in_stack_00000004[1].base_actor.metadata.vtable;
      break;
    case 1:
      pCVar2 = *(CDemonActor_vtable **)in_stack_00000004[1].model.padding_0x0;
      break;
    case 2:
      pCVar2 = *(CDemonActor_vtable **)(in_stack_00000004[1].model.padding_0x0 + 4);
      break;
    case 3:
      pCVar2 = *(CDemonActor_vtable **)(in_stack_00000004[1].model.padding_0x0 + 8);
      break;
    case 4:
      pCVar2 = *(CDemonActor_vtable **)(in_stack_00000004[1].model.padding_0x0 + 0x14);
      break;
    case 5:
      pCVar2 = *(CDemonActor_vtable **)(in_stack_00000004[1].model.padding_0x0 + 0x10);
      break;
    default:
      goto switchD_005fc256_default;
    }
    *in_stack_00000008 = (int)pCVar2;
  }
switchD_005fc256_default:
  pCVar2 = (CDemonActor_vtable *)*in_stack_00000008;
  if ((((((pCVar2 == in_stack_00000004[1].base_actor.metadata.vtable) ||
         (pCVar2 == *(CDemonActor_vtable **)in_stack_00000004[1].model.padding_0x0)) ||
        (pCVar2 == *(CDemonActor_vtable **)(in_stack_00000004[1].model.padding_0x0 + 4))) ||
       ((pCVar2 == *(CDemonActor_vtable **)(in_stack_00000004[1].model.padding_0x0 + 8) ||
        (pCVar2 == *(CDemonActor_vtable **)(in_stack_00000004[1].model.padding_0x0 + 0x10))))) ||
      (pCVar2 == *(CDemonActor_vtable **)(in_stack_00000004[1].model.padding_0x0 + 0x14))) &&
     (iVar1 = core_actor_cpp_FUN_0040cd10(), iVar1 != 0)) {
    core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    if ((CDemonActor_vtable *)*in_stack_00000008 == in_stack_00000004[1].base_actor.metadata.vtable)
    {
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    }
    if (*(int *)(in_stack_00000004[1].model.padding_0x0 + 4) == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    }
    if (*(int *)(in_stack_00000004[1].model.padding_0x0 + 0x10) == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
    }
    core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
    core_bodypart_cpp_FUN_0041a050();
    if (*(int *)((in_stack_00000004->model).padding_0x0 +
                *(int *)(in_stack_00000004[1].model.padding_0x0 + 0x14) * 4 + 0x2140) == 0) {
      in_stack_00000008[1] = 0x461c3c00;
    }
    in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)_DAT_006589c5);
    if (*(int *)(in_stack_00000004[1].model.padding_0x0 + 0xc) < 0) {
      in_stack_00000008[1] = 0x4479c000;
    }
  }
  iVar1 = *in_stack_00000008;
  if (iVar1 != *(int *)(in_stack_00000004[1].model.padding_0x0 + 0x14)) {
    if ((iVar1 != *(int *)(in_stack_00000004[1].model.padding_0x0 + 0xc)) &&
       (iVar1 != *(int *)(in_stack_00000004[1].model.padding_0x0 + 0x10))) {
      in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)_DAT_006589cd);
      return;
    }
    in_stack_00000008[1] = in_stack_00000008[1];
    return;
  }
  in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)_DAT_006589d5);
  return;
}


// Assembly code:
// 005fc220: PUSH EBX
//   Label: core_zombie.cpp_CZombie_FUN_005fc220
// 005fc221: PUSH ESI
// 005fc222: PUSH EDI
// 005fc223: PUSH EBP
// 005fc224: SUB ESP,0xc
// 005fc227: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005fc22b: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005fc22f: FLD float ptr [ESI + 0x2c]
// 005fc232: FLDZ
// 005fc234: FCOMPP
// 005fc236: FNSTSW AX
// 005fc238: SAHF
// 005fc239: JNC 0x005fc265
//   XREF to: 005fc265 (CONDITIONAL_JUMP)
// 005fc23b: CMP dword ptr [ESI],-0x1
// 005fc23e: JNZ 0x005fc265
//   XREF to: 005fc265 (CONDITIONAL_JUMP)
// 005fc240: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 005fc245: MOV EDX,EAX
// 005fc247: MOV EDI,0x6
// 005fc24c: SAR EDX,0x1f
// 005fc24f: IDIV EDI
// 005fc251: CMP EDX,0x5
// 005fc254: JA 0x005fc265
//   XREF to: 005fc265 (CONDITIONAL_JUMP)
// 005fc256: JMP dword ptr [EDX*0x4 + 0x5fc200]
//   Label: switchD
//   XREF to: 005fc25d (COMPUTED_JUMP)
//   XREF to: 005fc42b (COMPUTED_JUMP)
//   XREF to: 005fc436 (COMPUTED_JUMP)
//   XREF to: 005fc441 (COMPUTED_JUMP)
//   XREF to: 005fc44c (COMPUTED_JUMP)
//   XREF to: 005fc457 (COMPUTED_JUMP)
//   XREF to: 005fc200 (DATA)
// 005fc25d: MOV EAX,dword ptr [EBX + 0xbf78]
//   Label: caseD_0
// 005fc263: MOV dword ptr [ESI],EAX
//   Label: LAB_005fc263
// 005fc265: MOV ECX,dword ptr [EBX + 0xbf78]
//   Label: default
// 005fc26b: MOV EAX,dword ptr [ESI]
// 005fc26d: CMP EAX,ECX
// 005fc26f: JNZ 0x005fc462
//   XREF to: 005fc462 (CONDITIONAL_JUMP)
// 005fc275: MOV EAX,dword ptr [ESI + 0x2c]
//   Label: LAB_005fc275
// 005fc278: MOV EBP,dword ptr [EBX + 0xbf90]
// 005fc27e: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005fc282: CMP EBP,dword ptr [ESI]
// 005fc284: JNZ 0x005fc28e
//   XREF to: 005fc28e (CONDITIONAL_JUMP)
// 005fc286: MOV dword ptr [ESP + 0x8],0x3d4ccccd
//   XREF to: Stack[-0x14] (WRITE)
// 005fc28e: MOV EDX,dword ptr [EBX + 0xbf8c]
//   Label: LAB_005fc28e
// 005fc294: CMP EDX,dword ptr [ESI]
// 005fc296: JNZ 0x005fc2a0
//   XREF to: 005fc2a0 (CONDITIONAL_JUMP)
// 005fc298: MOV dword ptr [ESP + 0x8],0x3ca3d70a
//   XREF to: Stack[-0x14] (WRITE)
// 005fc2a0: MOV EAX,[0x0067b654]
//   Label: LAB_005fc2a0
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005fc2a5: CMP dword ptr [EAX + 0x1e0],0x0
//   XREF to: 02d81c7c (READ)
// 005fc2ac: JZ 0x005fc2b6
//   XREF to: 005fc2b6 (CONDITIONAL_JUMP)
// 005fc2ae: MOV dword ptr [ESP + 0x8],0x3f800000
//   XREF to: Stack[-0x14] (WRITE)
// 005fc2b6: MOV EAX,[0x0067b654]
//   Label: LAB_005fc2b6
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005fc2bb: MOV EDX,dword ptr [EAX + 0x14]
//   XREF to: 02d81ab0 (READ)
// 005fc2be: TEST EDX,EDX
// 005fc2c0: JNZ 0x005fc2c6
//   XREF to: 005fc2c6 (CONDITIONAL_JUMP)
// 005fc2c2: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005fc2c6: PUSH dword ptr [ESP + 0x8]
//   Label: LAB_005fc2c6
//   XREF to: Stack[-0x14] (READ)
// 005fc2ca: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005fc2cf: ADD ESP,0x4
// 005fc2d2: TEST EAX,EAX
// 005fc2d4: JZ 0x005fc3f9
//   XREF to: 005fc3f9 (CONDITIONAL_JUMP)
// 005fc2da: PUSH 0x0
// 005fc2dc: PUSH 0x0
// 005fc2de: PUSH 0x0
// 005fc2e0: PUSH EBX
// 005fc2e1: LEA EAX,[ESI + 0xc]
// 005fc2e4: PUSH EAX
// 005fc2e5: LEA EAX,[EBX + 0x30]
// 005fc2e8: PUSH EAX
// 005fc2e9: LEA EAX,[EBX + 0x20]
// 005fc2ec: PUSH EAX
// 005fc2ed: CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   XREF to: 00418e10 (UNCONDITIONAL_CALL)
// 005fc2f2: ADD ESP,0x1c
// 005fc2f5: MOV EDI,EAX
// 005fc2f7: PUSH 0x0
// 005fc2f9: MOV EBP,EAX
// 005fc2fb: MOV EAX,dword ptr [ESI]
// 005fc2fd: PUSH EAX
// 005fc2fe: PUSH EDI
// 005fc2ff: PUSH EBX
// 005fc300: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 005fc305: MOV EAX,dword ptr [ESI]
// 005fc307: MOV EDX,dword ptr [EBX + 0xbf78]
// 005fc30d: ADD ESP,0x10
// 005fc310: CMP EAX,EDX
// 005fc312: JNZ 0x005fc327
//   XREF to: 005fc327 (CONDITIONAL_JUMP)
// 005fc314: PUSH 0x0
// 005fc316: MOV ECX,dword ptr [EBX + 0xbf7c]
// 005fc31c: PUSH ECX
// 005fc31d: PUSH EDI
// 005fc31e: PUSH EBX
// 005fc31f: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 005fc324: ADD ESP,0x10
// 005fc327: MOV EDI,dword ptr [EBX + 0xbf80]
//   Label: LAB_005fc327
// 005fc32d: CMP EDI,dword ptr [ESI]
// 005fc32f: JNZ 0x005fc344
//   XREF to: 005fc344 (CONDITIONAL_JUMP)
// 005fc331: PUSH 0x0
// 005fc333: MOV EAX,dword ptr [EBX + 0xbf84]
// 005fc339: PUSH EAX
// 005fc33a: PUSH EBP
// 005fc33b: PUSH EBX
// 005fc33c: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 005fc341: ADD ESP,0x10
// 005fc344: MOV EDX,dword ptr [EBX + 0xbf8c]
//   Label: LAB_005fc344
// 005fc34a: CMP EDX,dword ptr [ESI]
// 005fc34c: JNZ 0x005fc3b0
//   XREF to: 005fc3b0 (CONDITIONAL_JUMP)
// 005fc34e: PUSH 0x0
// 005fc350: LEA EDI,[ESI + 0xc]
// 005fc353: PUSH EDI
// 005fc354: MOV ECX,dword ptr [EBX + 0xbf80]
// 005fc35a: PUSH ECX
// 005fc35b: PUSH EBX
// 005fc35c: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 005fc361: ADD ESP,0x10
// 005fc364: PUSH 0x0
// 005fc366: PUSH EDI
// 005fc367: MOV EAX,dword ptr [EBX + 0xbf84]
// 005fc36d: PUSH EAX
// 005fc36e: PUSH EBX
// 005fc36f: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 005fc374: ADD ESP,0x10
// 005fc377: PUSH 0x0
// 005fc379: PUSH EDI
// 005fc37a: MOV EDX,dword ptr [EBX + 0xbf78]
// 005fc380: PUSH EDX
// 005fc381: PUSH EBX
// 005fc382: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 005fc387: ADD ESP,0x10
// 005fc38a: PUSH 0x0
// 005fc38c: PUSH EDI
// 005fc38d: MOV ECX,dword ptr [EBX + 0xbf7c]
// 005fc393: PUSH ECX
// 005fc394: PUSH EBX
// 005fc395: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 005fc39a: ADD ESP,0x10
// 005fc39d: PUSH 0x0
// 005fc39f: PUSH EDI
// 005fc3a0: MOV EDI,dword ptr [EBX + 0xbf90]
// 005fc3a6: PUSH EDI
// 005fc3a7: PUSH EBX
// 005fc3a8: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 005fc3ad: ADD ESP,0x10
// 005fc3b0: PUSH 0x6589b9
//   Label: LAB_005fc3b0
//   XREF to: 006589b9 (DATA)
// 005fc3b5: PUSH EBX
// 005fc3b6: CALL core_charactr.cpp_CCharacter_FUN_0042f300
//   XREF to: 0042f300 (UNCONDITIONAL_CALL)
// 005fc3bb: ADD ESP,0x8
// 005fc3be: PUSH EBP
// 005fc3bf: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 005fc3c4: MOV EAX,dword ptr [EBX + 0xbf90]
// 005fc3ca: MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298]
// 005fc3d1: ADD ESP,0x4
// 005fc3d4: TEST EBP,EBP
// 005fc3d6: JZ 0x005fc4a3
//   XREF to: 005fc4a3 (CONDITIONAL_JUMP)
// 005fc3dc: FLD float ptr [ESI + 0x8]
//   Label: LAB_005fc3dc
// 005fc3df: FLD ST0
// 005fc3e1: FMUL double ptr [0x006589c5]
//   XREF to: 006589c5 (READ)
// 005fc3e7: FSTP ST1
// 005fc3e9: FSTP float ptr [ESI + 0x8]
// 005fc3ec: CMP dword ptr [EBX + 0xbf88],0x0
// 005fc3f3: JL 0x005fc4af
//   XREF to: 005fc4af (CONDITIONAL_JUMP)
// 005fc3f9: MOV EDX,dword ptr [EBX + 0xbf90]
//   Label: LAB_005fc3f9
// 005fc3ff: MOV EAX,dword ptr [ESI]
// 005fc401: CMP EAX,EDX
// 005fc403: JZ 0x005fc4bb
//   XREF to: 005fc4bb (CONDITIONAL_JUMP)
// 005fc409: CMP EAX,dword ptr [EBX + 0xbf88]
// 005fc40f: JZ 0x005fc41d
//   XREF to: 005fc41d (CONDITIONAL_JUMP)
// 005fc411: CMP EAX,dword ptr [EBX + 0xbf8c]
// 005fc417: JNZ 0x005fc4d3
//   XREF to: 005fc4d3 (CONDITIONAL_JUMP)
// 005fc41d: MOV EAX,dword ptr [ESI + 0x4]
//   Label: LAB_005fc41d
// 005fc420: MOV dword ptr [ESI + 0x4],EAX
// 005fc423: ADD ESP,0xc
// 005fc426: POP EBP
// 005fc427: POP EDI
// 005fc428: POP ESI
// 005fc429: POP EBX
// 005fc42a: RET
// 005fc42b: MOV EAX,dword ptr [EBX + 0xbf7c]
//   Label: caseD_1
// 005fc431: JMP 0x005fc263
//   XREF to: 005fc263 (UNCONDITIONAL_JUMP)
// 005fc436: MOV EAX,dword ptr [EBX + 0xbf80]
//   Label: caseD_2
// 005fc43c: JMP 0x005fc263
//   XREF to: 005fc263 (UNCONDITIONAL_JUMP)
// 005fc441: MOV EAX,dword ptr [EBX + 0xbf84]
//   Label: caseD_3
// 005fc447: JMP 0x005fc263
//   XREF to: 005fc263 (UNCONDITIONAL_JUMP)
// 005fc44c: MOV EAX,dword ptr [EBX + 0xbf90]
//   Label: caseD_4
// 005fc452: JMP 0x005fc263
//   XREF to: 005fc263 (UNCONDITIONAL_JUMP)
// 005fc457: MOV EAX,dword ptr [EBX + 0xbf8c]
//   Label: caseD_5
// 005fc45d: JMP 0x005fc263
//   XREF to: 005fc263 (UNCONDITIONAL_JUMP)
// 005fc462: CMP EAX,dword ptr [EBX + 0xbf7c]
//   Label: LAB_005fc462
// 005fc468: JZ 0x005fc275
//   XREF to: 005fc275 (CONDITIONAL_JUMP)
// 005fc46e: CMP EAX,dword ptr [EBX + 0xbf80]
// 005fc474: JZ 0x005fc275
//   XREF to: 005fc275 (CONDITIONAL_JUMP)
// 005fc47a: CMP EAX,dword ptr [EBX + 0xbf84]
// 005fc480: JZ 0x005fc275
//   XREF to: 005fc275 (CONDITIONAL_JUMP)
// 005fc486: CMP EAX,dword ptr [EBX + 0xbf8c]
// 005fc48c: JZ 0x005fc275
//   XREF to: 005fc275 (CONDITIONAL_JUMP)
// 005fc492: CMP EAX,dword ptr [EBX + 0xbf90]
// 005fc498: JZ 0x005fc275
//   XREF to: 005fc275 (CONDITIONAL_JUMP)
// 005fc49e: JMP 0x005fc3f9
//   XREF to: 005fc3f9 (UNCONDITIONAL_JUMP)
// 005fc4a3: MOV dword ptr [ESI + 0x4],0x461c3c00
//   Label: LAB_005fc4a3
// 005fc4aa: JMP 0x005fc3dc
//   XREF to: 005fc3dc (UNCONDITIONAL_JUMP)
// 005fc4af: MOV dword ptr [ESI + 0x4],0x4479c000
//   Label: LAB_005fc4af
// 005fc4b6: JMP 0x005fc3f9
//   XREF to: 005fc3f9 (UNCONDITIONAL_JUMP)
// 005fc4bb: FLD float ptr [ESI + 0x4]
//   Label: LAB_005fc4bb
// 005fc4be: FLD ST0
// 005fc4c0: FMUL double ptr [0x006589d5]
//   XREF to: 006589d5 (READ)
// 005fc4c6: FSTP ST1
// 005fc4c8: FSTP float ptr [ESI + 0x4]
// 005fc4cb: ADD ESP,0xc
// 005fc4ce: POP EBP
// 005fc4cf: POP EDI
// 005fc4d0: POP ESI
// 005fc4d1: POP EBX
// 005fc4d2: RET
// 005fc4d3: FLD float ptr [ESI + 0x4]
//   Label: LAB_005fc4d3
// 005fc4d6: FLD ST0
// 005fc4d8: FMUL double ptr [0x006589cd]
//   XREF to: 006589cd (READ)
// 005fc4de: FSTP ST1
// 005fc4e0: FSTP float ptr [ESI + 0x4]
// 005fc4e3: ADD ESP,0xc
// 005fc4e6: POP EBP
// 005fc4e7: POP EDI
// 005fc4e8: POP ESI
// 005fc4e9: POP EBX
// 005fc4ea: RET
