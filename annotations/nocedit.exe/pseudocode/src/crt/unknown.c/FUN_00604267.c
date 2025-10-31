// Name: crt_unknown.c_FUN_00604267
// Address: 00604267
// Address Range: [[00604267, 0060445d]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00604267()
// Cross-references:
//   crt_unknown.c_FUN_0060411c (0060411c) at 00604242 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 FUN_00604267(undefined4 param_1, undefined4 param_2, undefined4 param_3,
   undefined4 param_4, undefined4 param_5) */

void crt_unknown_c_FUN_00604267(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint *in_stack_00000004;
  char *in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  char *in_stack_00000014;
  uint local_14;
  
  local_14 = *in_stack_00000004;
  uVar1 = in_stack_00000010 + 1;
  uVar3 = 0;
  if ((in_stack_00000004[2] & 4) != 0) {
    if (((int)in_stack_0000000c < (int)local_14) && ((in_stack_00000004[2] & 0x10) == 0)) {
      local_14 = in_stack_0000000c;
    }
    local_14 = local_14 - uVar1;
    if ((int)local_14 < 0) {
      local_14 = 0;
    }
  }
  if ((int)uVar1 < 1) {
    if ((in_stack_00000004[2] & 8) == 0) {
      *in_stack_00000014 = '0';
      uVar3 = 1;
      if ((0 < (int)local_14) || ((in_stack_00000004[2] & 0x10) != 0)) {
        uVar3 = 2;
        in_stack_00000014[1] = '.';
      }
    }
    in_stack_00000004[7] = uVar3;
    in_stack_00000010 = uVar1;
    if (-local_14 != uVar1 && (int)local_14 <= (int)-uVar1) {
      in_stack_00000010 = -local_14;
    }
    in_stack_00000004[6] = in_stack_00000010;
    local_14 = local_14 + in_stack_00000010;
    in_stack_00000004[8] = in_stack_00000010;
    in_stack_00000004[8] = -in_stack_00000010;
    if ((int)local_14 < (int)in_stack_0000000c) {
      in_stack_0000000c = local_14;
    }
    pcVar4 = in_stack_00000014 + uVar3;
    for (uVar1 = in_stack_0000000c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *pcVar4 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 1;
      pcVar4 = pcVar4 + 1;
    }
    in_stack_00000004[9] = in_stack_0000000c;
    local_14 = local_14 - in_stack_0000000c;
    uVar3 = uVar3 + in_stack_0000000c;
  }
  else {
    if ((int)uVar1 <= (int)in_stack_0000000c) {
      pcVar4 = in_stack_00000008;
      pcVar5 = in_stack_00000014;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      in_stack_0000000c = in_stack_0000000c - uVar1;
      in_stack_00000004[6] = uVar1;
      uVar3 = uVar1;
      if ((in_stack_00000004[2] & 8) == 0) {
        if ((0 < (int)local_14) || ((in_stack_00000004[2] & 0x10) != 0)) {
          in_stack_00000014[uVar1] = '.';
          uVar3 = in_stack_00000010 + 2;
        }
      }
      else if (*in_stack_00000014 == '0') {
        in_stack_00000004[6] = 0;
      }
      if ((int)local_14 < (int)in_stack_0000000c) {
        in_stack_0000000c = local_14;
      }
      pcVar4 = in_stack_00000008 + uVar1;
      pcVar5 = in_stack_00000014 + uVar3;
      for (uVar2 = in_stack_0000000c >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      uVar3 = uVar3 + in_stack_0000000c;
      in_stack_00000004[7] = uVar3;
      in_stack_00000004[8] = local_14 - in_stack_0000000c;
      goto LAB_00604458;
    }
    pcVar4 = in_stack_00000014;
    for (uVar3 = in_stack_0000000c >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar3 = in_stack_0000000c & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar4 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 1;
      pcVar4 = pcVar4 + 1;
    }
    in_stack_00000004[7] = in_stack_0000000c;
    in_stack_00000004[8] = uVar1 - in_stack_0000000c;
    in_stack_00000004[6] = uVar1;
    uVar3 = in_stack_0000000c;
    if (((in_stack_00000004[2] & 8) == 0) &&
       ((0 < (int)local_14 || ((in_stack_00000004[2] & 0x10) != 0)))) {
      in_stack_00000014[in_stack_0000000c] = '.';
      uVar3 = in_stack_0000000c + 1;
      in_stack_00000004[9] = 1;
    }
  }
  in_stack_00000004[10] = local_14;
LAB_00604458:
  in_stack_00000014[uVar3] = '\0';
  return;
}


// Assembly code:
// 00604267: PUSH EBP
//   Label: crt_unknown.c_FUN_00604267
// 00604268: MOV EBP,ESP
// 0060426a: PUSH EBX
// 0060426b: PUSH ESI
// 0060426c: PUSH EDI
// 0060426d: SUB ESP,0x4
// 00604270: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00604273: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00604276: MOV EBX,dword ptr [EDX]
// 00604278: MOV AH,byte ptr [EDX + 0x8]
// 0060427b: INC ECX
// 0060427c: MOV dword ptr [EBP + -0x10],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0060427f: MOV dword ptr [EBP + 0x14],ECX
//   XREF to: Stack[0x10] (WRITE)
// 00604282: XOR EBX,EBX
// 00604284: TEST AH,0x4
// 00604287: JZ 0x006042ad
//   XREF to: 006042ad (CONDITIONAL_JUMP)
// 00604289: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060428c: CMP ESI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060428f: JGE 0x00604299
//   XREF to: 00604299 (CONDITIONAL_JUMP)
// 00604291: TEST AH,0x10
// 00604294: JNZ 0x00604299
//   XREF to: 00604299 (CONDITIONAL_JUMP)
// 00604296: MOV dword ptr [EBP + -0x10],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00604299: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_00604299
//   XREF to: Stack[0x10] (READ)
// 0060429c: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060429f: SUB EAX,ESI
// 006042a1: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 006042a4: TEST EAX,EAX
// 006042a6: JGE 0x006042ad
//   XREF to: 006042ad (CONDITIONAL_JUMP)
// 006042a8: XOR ESI,ESI
// 006042aa: MOV dword ptr [EBP + -0x10],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 006042ad: MOV EDI,dword ptr [EBP + 0x14]
//   Label: LAB_006042ad
//   XREF to: Stack[0x10] (READ)
// 006042b0: TEST EDI,EDI
// 006042b2: JG 0x00604355
//   XREF to: 00604355 (CONDITIONAL_JUMP)
// 006042b8: TEST byte ptr [EDX + 0x8],0x8
// 006042bc: JNZ 0x006042e1
//   XREF to: 006042e1 (CONDITIONAL_JUMP)
// 006042be: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 006042c1: MOV ESI,EBX
// 006042c3: ADD ESI,ECX
// 006042c5: MOV byte ptr [ESI],0x30
// 006042c8: MOV ESI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 006042cb: INC EBX
// 006042cc: TEST ESI,ESI
// 006042ce: JG 0x006042d6
//   XREF to: 006042d6 (CONDITIONAL_JUMP)
// 006042d0: TEST byte ptr [EDX + 0x8],0x10
// 006042d4: JZ 0x006042e1
//   XREF to: 006042e1 (CONDITIONAL_JUMP)
// 006042d6: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_006042d6
//   XREF to: Stack[0x14] (READ)
// 006042d9: MOV EDI,EBX
// 006042db: ADD EDI,EAX
// 006042dd: INC EBX
// 006042de: MOV byte ptr [EDI],0x2e
// 006042e1: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_006042e1
//   XREF to: Stack[0x10] (READ)
// 006042e4: MOV ECX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 006042e7: NEG ESI
// 006042e9: MOV dword ptr [EDX + 0x1c],EBX
// 006042ec: CMP ESI,ECX
// 006042ee: JLE 0x006042fa
//   XREF to: 006042fa (CONDITIONAL_JUMP)
// 006042f0: MOV ESI,ECX
// 006042f2: MOV dword ptr [EBP + 0x14],ECX
//   XREF to: Stack[0x10] (WRITE)
// 006042f5: NEG ESI
// 006042f7: MOV dword ptr [EBP + 0x14],ESI
//   XREF to: Stack[0x10] (WRITE)
// 006042fa: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_006042fa
//   XREF to: Stack[0x10] (READ)
// 006042fd: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 00604300: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00604303: MOV EDI,ESI
// 00604305: MOV dword ptr [EDX + 0x18],ESI
// 00604308: ADD EAX,ESI
// 0060430a: MOV dword ptr [EDX + 0x20],ESI
// 0060430d: NEG EDI
// 0060430f: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00604312: MOV dword ptr [EDX + 0x20],EDI
// 00604315: CMP EAX,ECX
// 00604317: JGE 0x0060431c
//   XREF to: 0060431c (CONDITIONAL_JUMP)
// 00604319: MOV dword ptr [EBP + 0x10],EAX
//   XREF to: Stack[0xc] (WRITE)
// 0060431c: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_0060431c
//   XREF to: Stack[0x14] (READ)
// 0060431f: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00604322: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00604325: ADD EDI,EBX
// 00604327: PUSH ES
// 00604328: MOV AX,DS
// 0060432a: MOV ES,AX
// 0060432c: PUSH EDI
// 0060432d: MOV EAX,ECX
// 0060432f: SHR ECX,0x2
// 00604332: MOVSD.REP ES:EDI,ESI
// 00604334: MOV CL,AL
// 00604336: AND CL,0x3
// 00604339: MOVSB.REP ES:EDI,ESI
// 0060433b: POP EDI
// 0060433c: POP ES
// 0060433d: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00604340: MOV EDI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00604343: ADD EBX,ESI
// 00604345: MOV dword ptr [EDX + 0x24],ESI
// 00604348: MOV ESI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060434b: SUB ESI,EDI
// 0060434d: MOV dword ptr [EDX + 0x28],ESI
//   Label: LAB_0060434d
// 00604350: JMP 0x00604458
//   XREF to: 00604458 (UNCONDITIONAL_JUMP)
// 00604355: MOV ESI,dword ptr [EBP + 0x10]
//   Label: LAB_00604355
//   XREF to: Stack[0xc] (READ)
// 00604358: CMP ESI,EDI
// 0060435a: JGE 0x006043ba
//   XREF to: 006043ba (CONDITIONAL_JUMP)
// 0060435c: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 0060435f: MOV ECX,ESI
// 00604361: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00604364: PUSH ES
// 00604365: MOV AX,DS
// 00604367: MOV ES,AX
// 00604369: PUSH EDI
// 0060436a: MOV EAX,ECX
// 0060436c: SHR ECX,0x2
// 0060436f: MOVSD.REP ES:EDI,ESI
// 00604371: MOV CL,AL
// 00604373: AND CL,0x3
// 00604376: MOVSB.REP ES:EDI,ESI
// 00604378: POP EDI
// 00604379: POP ES
// 0060437a: MOV EAX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060437d: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00604380: MOV dword ptr [EDX + 0x1c],EAX
// 00604383: SUB ESI,EAX
// 00604385: MOV CL,byte ptr [EDX + 0x8]
// 00604388: MOV dword ptr [EDX + 0x20],ESI
// 0060438b: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0060438e: ADD EBX,EAX
// 00604390: MOV dword ptr [EDX + 0x18],ESI
// 00604393: TEST CL,0x8
// 00604396: JNZ 0x006043b5
//   XREF to: 006043b5 (CONDITIONAL_JUMP)
// 00604398: CMP dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x14] (READ)
// 0060439c: JG 0x006043a3
//   XREF to: 006043a3 (CONDITIONAL_JUMP)
// 0060439e: TEST CL,0x10
// 006043a1: JZ 0x006043b5
//   XREF to: 006043b5 (CONDITIONAL_JUMP)
// 006043a3: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_006043a3
//   XREF to: Stack[0x14] (READ)
// 006043a6: MOV EDI,EBX
// 006043a8: ADD EDI,EAX
// 006043aa: MOV byte ptr [EDI],0x2e
// 006043ad: INC EBX
// 006043ae: MOV dword ptr [EDX + 0x24],0x1
// 006043b5: MOV ESI,dword ptr [EBP + -0x10]
//   Label: LAB_006043b5
//   XREF to: Stack[-0x14] (READ)
// 006043b8: JMP 0x0060434d
//   XREF to: 0060434d (UNCONDITIONAL_JUMP)
// 006043ba: MOV ESI,dword ptr [EBP + 0xc]
//   Label: LAB_006043ba
//   XREF to: Stack[0x8] (READ)
// 006043bd: MOV ECX,EDI
// 006043bf: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 006043c2: PUSH ES
// 006043c3: MOV AX,DS
// 006043c5: MOV ES,AX
// 006043c7: PUSH EDI
// 006043c8: MOV EAX,ECX
// 006043ca: SHR ECX,0x2
// 006043cd: MOVSD.REP ES:EDI,ESI
// 006043cf: MOV CL,AL
// 006043d1: AND CL,0x3
// 006043d4: MOVSB.REP ES:EDI,ESI
// 006043d6: POP EDI
// 006043d7: POP ES
// 006043d8: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 006043db: MOV EDI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 006043de: MOV CH,byte ptr [EDX + 0x8]
// 006043e1: ADD EBX,ESI
// 006043e3: SUB EDI,ESI
// 006043e5: MOV dword ptr [EDX + 0x18],ESI
// 006043e8: MOV dword ptr [EBP + 0x10],EDI
//   XREF to: Stack[0xc] (WRITE)
// 006043eb: TEST CH,0x8
// 006043ee: JNZ 0x00604408
//   XREF to: 00604408 (CONDITIONAL_JUMP)
// 006043f0: CMP dword ptr [EBP + -0x10],0x0
//   XREF to: Stack[-0x14] (READ)
// 006043f4: JG 0x006043fb
//   XREF to: 006043fb (CONDITIONAL_JUMP)
// 006043f6: TEST CH,0x10
// 006043f9: JZ 0x00604417
//   XREF to: 00604417 (CONDITIONAL_JUMP)
// 006043fb: MOV ECX,dword ptr [EBP + 0x18]
//   Label: LAB_006043fb
//   XREF to: Stack[0x14] (READ)
// 006043fe: MOV EDI,EBX
// 00604400: ADD EDI,ECX
// 00604402: INC EBX
// 00604403: MOV byte ptr [EDI],0x2e
// 00604406: JMP 0x00604417
//   XREF to: 00604417 (UNCONDITIONAL_JUMP)
// 00604408: MOV ESI,dword ptr [EBP + 0x18]
//   Label: LAB_00604408
//   XREF to: Stack[0x14] (READ)
// 0060440b: CMP byte ptr [ESI],0x30
// 0060440e: JNZ 0x00604417
//   XREF to: 00604417 (CONDITIONAL_JUMP)
// 00604410: MOV dword ptr [EDX + 0x18],0x0
// 00604417: MOV ESI,dword ptr [EBP + -0x10]
//   Label: LAB_00604417
//   XREF to: Stack[-0x14] (READ)
// 0060441a: CMP ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060441d: JGE 0x00604422
//   XREF to: 00604422 (CONDITIONAL_JUMP)
// 0060441f: MOV dword ptr [EBP + 0x10],ESI
//   XREF to: Stack[0xc] (WRITE)
// 00604422: MOV ESI,dword ptr [EBP + 0xc]
//   Label: LAB_00604422
//   XREF to: Stack[0x8] (READ)
// 00604425: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00604428: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 0060442b: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060442e: ADD ESI,EAX
// 00604430: ADD EDI,EBX
// 00604432: PUSH ES
// 00604433: MOV AX,DS
// 00604435: MOV ES,AX
// 00604437: PUSH EDI
// 00604438: MOV EAX,ECX
// 0060443a: SHR ECX,0x2
// 0060443d: MOVSD.REP ES:EDI,ESI
// 0060443f: MOV CL,AL
// 00604441: AND CL,0x3
// 00604444: MOVSB.REP ES:EDI,ESI
// 00604446: POP EDI
// 00604447: POP ES
// 00604448: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060444b: MOV ESI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060444e: ADD EBX,ECX
// 00604450: SUB ESI,ECX
// 00604452: MOV dword ptr [EDX + 0x1c],EBX
// 00604455: MOV dword ptr [EDX + 0x20],ESI
// 00604458: ADD EBX,dword ptr [EBP + 0x18]
//   Label: LAB_00604458
//   XREF to: Stack[0x14] (READ)
// 0060445b: MOV byte ptr [EBX],0x0
//   Label: LAB_0060445b
