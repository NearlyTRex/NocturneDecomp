// Name: sound_sndmain.cpp_FUN_005a4530
// Address: 005a4530
// Address Range: [[005a4530, 005a45bd]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a4530()
// Globals:
//   TerminatedCString s_anon_0064f583
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_string.c_strstr_FUN_005fedd0

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a4530(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  char *in_stack_00000004;
  
  bVar5 = 0;
  pcVar2 = crt_string_c_strstr_FUN_005fedd0(in_stack_00000004,"//");
  pcVar4 = in_stack_00000004;
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  do {
    pcVar2 = pcVar4;
    if (*pcVar4 == '\0') goto joined_r0x005a456c;
    if (*pcVar4 == '\0') break;
    pcVar2 = pcVar4 + 1;
    if (*pcVar2 == '\0') goto joined_r0x005a456c;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
joined_r0x005a456c:
  while ((in_stack_00000004 < pcVar2 &&
         ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2U) != 0))) {
    pcVar2 = pcVar2 + -1;
  }
  *pcVar2 = '\0';
  do {
    if ((g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 2U) == 0) {
      return;
    }
    uVar3 = 0xffffffff;
    pcVar4 = in_stack_00000004;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    } while (cVar1 != '\0');
    crt_string_c_memmove_FUN_005fe5e0(in_stack_00000004,in_stack_00000004 + 1,~uVar3 - 1);
  } while( true );
}


// Assembly code:
// 005a4530: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a4530
// 005a4531: PUSH ESI
// 005a4532: PUSH EDI
// 005a4533: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005a4537: PUSH 0x64f583
//   XREF to: 0064f583 (DATA)
// 005a453c: PUSH EBX
// 005a453d: CALL crt_string.c_strstr_FUN_005fedd0
//   XREF to: 005fedd0 (UNCONDITIONAL_CALL)
// 005a4542: ADD ESP,0x8
// 005a4545: TEST EAX,EAX
// 005a4547: JZ 0x005a454c
//   XREF to: 005a454c (CONDITIONAL_JUMP)
// 005a4549: MOV byte ptr [EAX],0x0
// 005a454c: MOV ESI,EBX
//   Label: LAB_005a454c
// 005a454e: XOR DL,DL
// 005a4550: MOV AL,byte ptr [ESI]
//   Label: LAB_005a4550
// 005a4552: CMP AL,DL
// 005a4554: JZ 0x005a4568
//   XREF to: 005a4568 (CONDITIONAL_JUMP)
// 005a4556: CMP AL,0x0
// 005a4558: JZ 0x005a4566
//   XREF to: 005a4566 (CONDITIONAL_JUMP)
// 005a455a: INC ESI
// 005a455b: MOV AL,byte ptr [ESI]
// 005a455d: CMP AL,DL
// 005a455f: JZ 0x005a4568
//   XREF to: 005a4568 (CONDITIONAL_JUMP)
// 005a4561: INC ESI
// 005a4562: CMP AL,0x0
// 005a4564: JNZ 0x005a4550
//   XREF to: 005a4550 (CONDITIONAL_JUMP)
// 005a4566: SUB ESI,ESI
//   Label: LAB_005a4566
// 005a4568: MOV EAX,ESI
//   Label: LAB_005a4568
// 005a456a: CMP ESI,EBX
// 005a456c: JBE 0x005a4582
//   XREF to: 005a4582 (CONDITIONAL_JUMP)
// 005a456e: MOV CL,byte ptr [EAX + -0x1]
//   Label: LAB_005a456e
// 005a4571: INC CL
// 005a4573: AND ECX,0xff
// 005a4579: TEST byte ptr [ECX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005a4580: JNZ 0x005a459e
//   XREF to: 005a459e (CONDITIONAL_JUMP)
// 005a4582: LEA ESI,[EBX + 0x1]
//   Label: LAB_005a4582
// 005a4585: MOV byte ptr [EAX],0x0
// 005a4588: MOV AL,byte ptr [EBX]
//   Label: LAB_005a4588
// 005a458a: INC AL
// 005a458c: AND EAX,0xff
// 005a4591: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005a4598: JNZ 0x005a45a5
//   XREF to: 005a45a5 (CONDITIONAL_JUMP)
// 005a459a: POP EDI
// 005a459b: POP ESI
// 005a459c: POP EBX
// 005a459d: RET
// 005a459e: DEC EAX
//   Label: LAB_005a459e
// 005a459f: CMP EAX,EBX
// 005a45a1: JA 0x005a456e
//   XREF to: 005a456e (CONDITIONAL_JUMP)
// 005a45a3: JMP 0x005a4582
//   XREF to: 005a4582 (UNCONDITIONAL_JUMP)
// 005a45a5: MOV EDI,EBX
//   Label: LAB_005a45a5
// 005a45a7: SUB ECX,ECX
// 005a45a9: DEC ECX
// 005a45aa: XOR EAX,EAX
// 005a45ac: SCASB.REPNE ES:EDI
// 005a45ae: NOT ECX
// 005a45b0: DEC ECX
// 005a45b1: PUSH ECX
// 005a45b2: PUSH ESI
// 005a45b3: PUSH EBX
// 005a45b4: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005a45b9: ADD ESP,0xc
// 005a45bc: JMP 0x005a4588
//   XREF to: 005a4588 (UNCONDITIONAL_JUMP)
