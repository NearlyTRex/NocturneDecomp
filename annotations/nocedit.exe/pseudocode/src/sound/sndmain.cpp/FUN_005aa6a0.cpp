// Name: sound_sndmain.cpp_FUN_005aa6a0
// Address: 005aa6a0
// Address Range: [[005aa6a0, 005aa7ac]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aa6a0()
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da7a2 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00681b44
//   SfxSample[64] DAT_03f6282c
//   undefined4 DAT_03f6298c
//   undefined4 DAT_03f629ac
//   undefined4 DAT_03f62afc
//   undefined4 DAT_03f62b00
//   undefined4 DAT_03f62b0c
// Function calls:
//   sound_sndmain.cpp_FUN_005a8550

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_FUN_005aa6a0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6) */

void sound_sndmain_cpp_FUN_005aa6a0(void)

{
  int iVar1;
  SfxSample *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int *in_stack_00000010;
  int *in_stack_00000014;
  int *in_stack_00000018;
  int local_1c;
  int local_14;
  
  pSVar2 = DAT_03f6282c;
  iVar3 = 0;
  iVar4 = 0;
  local_1c = 0;
  local_14 = 0;
  do {
    if (0 < *(int *)DAT_03f6282c[iVar4].field_160) {
      if ((DAT_03f6282c[iVar4].ref_count == 0) && (DAT_03f6282c[iVar4].field_150 == 0)) {
        local_1c = local_1c + 1;
        sound_sndmain_cpp_FUN_005a8550();
      }
      else {
        iVar1 = sound_sndmain_cpp_FUN_005a8550();
        local_14 = local_14 + 1;
        iVar3 = iVar3 + iVar1 * *(int *)pSVar2->field_160;
      }
    }
    iVar4 = iVar4 + 1;
    pSVar2 = pSVar2 + 1;
  } while (iVar4 < 0x40);
  if (in_stack_00000004 != (undefined4 *)0x0) {
    *in_stack_00000004 = 0;
  }
  if (in_stack_00000008 != (int *)0x0) {
    *in_stack_00000008 = iVar3;
  }
  if (in_stack_0000000c != (int *)0x0) {
    *in_stack_0000000c = local_1c;
  }
  if (in_stack_00000010 != (int *)0x0) {
    *in_stack_00000010 = local_14;
  }
  if (in_stack_00000014 != (int *)0x0) {
    *in_stack_00000014 = 0x40 - local_1c;
  }
  if ((in_stack_00000018 != (int *)0x0) &&
     (iVar3 = DAT_00681b44 - (iVar3 + local_14), *in_stack_00000018 = iVar3, iVar3 < 0)) {
    *in_stack_00000018 = 0;
    return;
  }
  return;
}


// Assembly code:
// 005aa6a0: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005aa6a0
// 005aa6a1: PUSH ESI
// 005aa6a2: PUSH EDI
// 005aa6a3: PUSH EBP
// 005aa6a4: SUB ESP,0xc
// 005aa6a7: MOV EBX,0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005aa6ac: XOR EDX,EDX
// 005aa6ae: XOR EBP,EBP
// 005aa6b0: XOR ESI,ESI
// 005aa6b2: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 005aa6b5: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005aa6b9: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005aa6bd: IMUL EAX,ESI,0x180
//   Label: LAB_005aa6bd
// 005aa6c3: CMP dword ptr [EAX + 0x3f6298c],0x1
//   XREF to: 03f6298c (READ)
//   XREF to: 03f62b0c (READ)
// 005aa6ca: JGE 0x005aa74f
//   XREF to: 005aa74f (CONDITIONAL_JUMP)
// 005aa6d0: INC ESI
//   Label: LAB_005aa6d0
// 005aa6d1: ADD EBX,0x180
//   XREF to: 03f629ac (PARAM)
// 005aa6d7: CMP ESI,0x40
// 005aa6da: JL 0x005aa6bd
//   XREF to: 005aa6bd (CONDITIONAL_JUMP)
// 005aa6dc: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005aa6e0: TEST ECX,ECX
// 005aa6e2: JZ 0x005aa6ea
//   XREF to: 005aa6ea (CONDITIONAL_JUMP)
// 005aa6e4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 005aa6e8: MOV dword ptr [ECX],EAX
// 005aa6ea: MOV EBX,dword ptr [ESP + 0x24]
//   Label: LAB_005aa6ea
//   XREF to: Stack[0x8] (READ)
// 005aa6ee: TEST EBX,EBX
// 005aa6f0: JZ 0x005aa6f4
//   XREF to: 005aa6f4 (CONDITIONAL_JUMP)
// 005aa6f2: MOV dword ptr [EBX],EBP
// 005aa6f4: MOV ESI,dword ptr [ESP + 0x28]
//   Label: LAB_005aa6f4
//   XREF to: Stack[0xc] (READ)
// 005aa6f8: TEST ESI,ESI
// 005aa6fa: JZ 0x005aa701
//   XREF to: 005aa701 (CONDITIONAL_JUMP)
// 005aa6fc: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 005aa6ff: MOV dword ptr [ESI],EAX
// 005aa701: MOV EDI,dword ptr [ESP + 0x2c]
//   Label: LAB_005aa701
//   XREF to: Stack[0x10] (READ)
// 005aa705: TEST EDI,EDI
// 005aa707: JZ 0x005aa70f
//   XREF to: 005aa70f (CONDITIONAL_JUMP)
// 005aa709: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 005aa70d: MOV dword ptr [EDI],EAX
// 005aa70f: CMP dword ptr [ESP + 0x30],0x0
//   Label: LAB_005aa70f
//   XREF to: Stack[0x14] (READ)
// 005aa714: JZ 0x005aa72c
//   XREF to: 005aa72c (CONDITIONAL_JUMP)
// 005aa716: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 005aa71a: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 005aa71d: MOV EBX,0x40
// 005aa722: ADD EAX,EDX
// 005aa724: SUB EBX,EAX
// 005aa726: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x14] (READ)
// 005aa72a: MOV dword ptr [EAX],EBX
// 005aa72c: MOV ECX,dword ptr [ESP + 0x34]
//   Label: LAB_005aa72c
//   XREF to: Stack[0x18] (READ)
// 005aa730: TEST ECX,ECX
// 005aa732: JZ 0x005aa747
//   XREF to: 005aa747 (CONDITIONAL_JUMP)
// 005aa734: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 005aa738: MOV EAX,[0x00681b44]
//   XREF to: 00681b44 (READ)
// 005aa73d: ADD EBP,EBX
// 005aa73f: SUB EAX,EBP
// 005aa741: MOV dword ptr [ECX],EAX
// 005aa743: TEST EAX,EAX
// 005aa745: JL 0x005aa79f
//   XREF to: 005aa79f (CONDITIONAL_JUMP)
// 005aa747: ADD ESP,0xc
//   Label: LAB_005aa747
// 005aa74a: POP EBP
// 005aa74b: POP EDI
// 005aa74c: POP ESI
// 005aa74d: POP EBX
// 005aa74e: RET
// 005aa74f: CMP dword ptr [EAX + 0x3f62980],0x0
//   Label: LAB_005aa74f
//   XREF to: 03f62b00 (READ)
// 005aa756: JNZ 0x005aa761
//   XREF to: 005aa761 (CONDITIONAL_JUMP)
// 005aa758: CMP dword ptr [EAX + 0x3f6297c],0x0
//   XREF to: 03f62afc (READ)
// 005aa75f: JZ 0x005aa77c
//   XREF to: 005aa77c (CONDITIONAL_JUMP)
// 005aa761: PUSH EBX
//   Label: LAB_005aa761
//   XREF to: 03f629ac (DATA)
// 005aa762: CALL sound_sndmain.cpp_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005aa767: IMUL EAX,dword ptr [EBX + 0x160]
//   XREF to: 03f6298c (READ)
//   XREF to: 03f62b0c (READ)
// 005aa76e: INC dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 005aa772: ADD ESP,0x4
// 005aa775: ADD EBP,EAX
// 005aa777: JMP 0x005aa6d0
//   XREF to: 005aa6d0 (UNCONDITIONAL_JUMP)
// 005aa77c: INC dword ptr [ESP]
//   Label: LAB_005aa77c
//   XREF to: Stack[-0x1c] (DATA)
// 005aa77f: MOV EDI,0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005aa784: ADD EDI,EAX
// 005aa786: PUSH EDI
//   XREF to: 03f629ac (DATA)
// 005aa787: CALL sound_sndmain.cpp_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005aa78c: IMUL EAX,dword ptr [EDI + 0x160]
//   XREF to: 03f6298c (READ)
//   XREF to: 03f62b0c (READ)
// 005aa793: ADD ESP,0x4
// 005aa796: ADD dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (READ_WRITE)
// 005aa79a: JMP 0x005aa6d0
//   XREF to: 005aa6d0 (UNCONDITIONAL_JUMP)
// 005aa79f: MOV dword ptr [ECX],0x0
//   Label: LAB_005aa79f
// 005aa7a5: ADD ESP,0xc
// 005aa7a8: POP EBP
// 005aa7a9: POP EDI
// 005aa7aa: POP ESI
// 005aa7ab: POP EBX
// 005aa7ac: RET
