// Name: crt_unknown.c_FUN_00604478
// Address: 00604478
// Address Range: [[00604478, 00604778]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00604478()
// Cross-references:
//   crt_unknown.c_FUN_0060411c (0060411c) at 00604254 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00604468 = 00604643
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 FUN_00604478(undefined4 param_1, undefined4 param_2, undefined4 param_3,
   undefined4 param_4, undefined4 param_5) */

void crt_unknown_c_FUN_00604478(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined2 in_ES;
  byte bVar11;
  int *in_stack_00000004;
  undefined4 *in_stack_00000008;
  ulong in_stack_0000000c;
  char cStack00000010;
  undefined4 *in_stack_00000014;
  ulong local_14;
  
  bVar11 = 0;
  iVar8 = in_stack_00000004[1];
  if (iVar8 < 1) {
    uVar1 = *in_stack_00000004 + iVar8;
  }
  else {
    uVar1 = (*in_stack_00000004 - iVar8) + 1;
  }
  if ((*(byte *)(in_stack_00000004 + 2) & 4) != 0) {
    if ((int)in_stack_0000000c < (int)uVar1) {
      uVar1 = in_stack_0000000c;
    }
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
  }
  local_14 = in_stack_00000004[1];
  if ((int)local_14 < 1) {
    local_14 = 1;
    *(undefined1 *)in_stack_00000014 = 0x30;
  }
  else {
    if ((int)in_stack_0000000c < (int)local_14) {
      local_14 = in_stack_0000000c;
    }
    puVar9 = in_stack_00000008;
    puVar10 = in_stack_00000014;
    for (uVar7 = local_14 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_14 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    in_stack_00000008 = (undefined4 *)((int)in_stack_00000008 + local_14);
    in_stack_0000000c = in_stack_0000000c - local_14;
    if ((int)local_14 < in_stack_00000004[1]) {
      uVar4 = in_stack_00000004[1] - local_14;
      crt_memory_c_memset_FUN_005fde40((undefined1 *)((int)in_stack_00000014 + local_14),0x30,uVar4)
      ;
      local_14 = local_14 + uVar4;
    }
  }
  in_stack_00000004[6] = local_14;
  uVar7 = local_14;
  if (((*(byte *)(in_stack_00000004 + 2) & 8) == 0) &&
     ((0 < (int)uVar1 || ((*(byte *)(in_stack_00000004 + 2) & 0x10) != 0)))) {
    uVar7 = local_14 + 1;
    *(undefined1 *)(local_14 + (int)in_stack_00000014) = 0x2e;
  }
  if (in_stack_00000004[1] < 0) {
    uVar4 = -in_stack_00000004[1];
    uVar1 = uVar4;
    crt_memory_c_memset_FUN_005fde40((undefined1 *)((int)in_stack_00000014 + uVar7),0x30,uVar4);
    uVar7 = uVar7 + uVar4;
  }
  if (0 < (int)uVar1) {
    if ((int)uVar1 < (int)in_stack_0000000c) {
      in_stack_0000000c = uVar1;
    }
    if (in_stack_0000000c != 0) {
      uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_ES);
      puVar9 = (undefined4 *)((int)in_stack_00000014 + uVar7);
      for (uVar5 = in_stack_0000000c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *in_stack_00000008;
        in_stack_00000008 = in_stack_00000008 + (uint)bVar11 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      }
      for (uVar5 = in_stack_0000000c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)in_stack_00000008;
        in_stack_00000008 = (undefined4 *)((int)in_stack_00000008 + (uint)bVar11 * -2 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar11 * -2 + 1);
      }
      uVar7 = uVar7 + in_stack_0000000c;
    }
    in_stack_00000004[7] = uVar7;
    in_stack_00000004[8] = uVar1 - in_stack_0000000c;
  }
  if (in_stack_00000004[3] != 0) {
    puVar2 = (undefined1 *)(uVar7 + (int)in_stack_00000014);
    uVar7 = uVar7 + 1;
    *puVar2 = (char)in_stack_00000004[3];
  }
  iVar8 = uVar7 + 1;
  if (_cStack00000010 < 0) {
    _cStack00000010 = -_cStack00000010;
    *(undefined1 *)(uVar7 + (int)in_stack_00000014) = 0x2d;
  }
  else {
    *(undefined1 *)(uVar7 + (int)in_stack_00000014) = 0x2b;
  }
  iVar6 = in_stack_00000004[4];
  switch(iVar6) {
  case 0:
    if (_cStack00000010 < 1000) {
      iVar6 = 3;
      goto switchD_0060463b_default;
    }
    goto LAB_00604672;
  case 1:
    if (9 < _cStack00000010) {
      iVar6 = 2;
    }
  case 2:
    break;
  case 3:
    goto switchD_0060463b_caseD_3;
  default:
    goto switchD_0060463b_default;
  }
  if (99 < _cStack00000010) {
    iVar6 = 3;
  }
switchD_0060463b_caseD_3:
  if (999 < _cStack00000010) {
LAB_00604672:
    iVar6 = 4;
  }
switchD_0060463b_default:
  in_stack_00000004[4] = iVar6;
  if (3 < iVar6) {
    local_14._0_1_ = '\0';
    if (999 < _cStack00000010) {
      local_14._0_1_ = (char)(_cStack00000010 / 1000);
      _cStack00000010 = _cStack00000010 % 1000;
    }
    pcVar3 = (char *)(iVar8 + (int)in_stack_00000014);
    iVar8 = uVar7 + 2;
    *pcVar3 = (char)local_14 + '0';
  }
  if (2 < iVar6) {
    local_14._0_1_ = '\0';
    if (99 < _cStack00000010) {
      local_14._0_1_ = (char)(_cStack00000010 / 100);
      _cStack00000010 = _cStack00000010 % 100;
    }
    pcVar3 = (char *)(iVar8 + (int)in_stack_00000014);
    iVar8 = iVar8 + 1;
    *pcVar3 = (char)local_14 + '0';
  }
  if (1 < iVar6) {
    local_14._0_1_ = '\0';
    if (9 < _cStack00000010) {
      local_14._0_1_ = (char)(_cStack00000010 / 10);
      _cStack00000010 = _cStack00000010 % 10;
    }
    pcVar3 = (char *)(iVar8 + (int)in_stack_00000014);
    iVar8 = iVar8 + 1;
    *pcVar3 = (char)local_14 + '0';
  }
  *(char *)(iVar8 + (int)in_stack_00000014) = cStack00000010 + '0';
  in_stack_00000004[9] = (iVar8 + 1) - in_stack_00000004[7];
  *(undefined1 *)(iVar8 + 1 + (int)in_stack_00000014) = 0;
  return;
}


// Assembly code:
// 00604478: PUSH EBP
//   Label: crt_unknown.c_FUN_00604478
// 00604479: MOV EBP,ESP
// 0060447b: PUSH EBX
// 0060447c: PUSH ESI
// 0060447d: PUSH EDI
// 0060447e: SUB ESP,0x8
// 00604481: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00604484: MOV EAX,dword ptr [EAX]
// 00604486: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00604489: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060448c: MOV EDX,dword ptr [EAX + 0x4]
// 0060448f: TEST EDX,EDX
// 00604491: JG 0x00604498
//   XREF to: 00604498 (CONDITIONAL_JUMP)
// 00604493: ADD dword ptr [EBP + -0x14],EDX
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00604496: JMP 0x006044a6
//   XREF to: 006044a6 (UNCONDITIONAL_JUMP)
// 00604498: MOV EBX,dword ptr [EBP + -0x14]
//   Label: LAB_00604498
//   XREF to: Stack[-0x18] (READ)
// 0060449b: SUB EBX,EDX
// 0060449d: MOV dword ptr [EBP + -0x14],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 006044a0: LEA ECX,[EBX + 0x1]
// 006044a3: MOV dword ptr [EBP + -0x14],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 006044a6: MOV EAX,dword ptr [EBP + 0x8]
//   Label: LAB_006044a6
//   XREF to: Stack[0x4] (READ)
// 006044a9: MOV DL,byte ptr [EAX + 0x8]
// 006044ac: XOR EBX,EBX
// 006044ae: TEST DL,0x4
// 006044b1: JZ 0x006044ce
//   XREF to: 006044ce (CONDITIONAL_JUMP)
// 006044b3: MOV EAX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 006044b6: CMP EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x18] (READ)
// 006044b9: JGE 0x006044be
//   XREF to: 006044be (CONDITIONAL_JUMP)
// 006044bb: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 006044be: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_006044be
//   XREF to: Stack[-0x18] (READ)
// 006044c1: DEC EAX
// 006044c2: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 006044c5: TEST EAX,EAX
// 006044c7: JGE 0x006044ce
//   XREF to: 006044ce (CONDITIONAL_JUMP)
// 006044c9: XOR ECX,ECX
// 006044cb: MOV dword ptr [EBP + -0x14],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 006044ce: MOV EAX,dword ptr [EBP + 0x8]
//   Label: LAB_006044ce
//   XREF to: Stack[0x4] (READ)
// 006044d1: MOV ESI,dword ptr [EAX + 0x4]
// 006044d4: TEST ESI,ESI
// 006044d6: JG 0x006044e5
//   XREF to: 006044e5 (CONDITIONAL_JUMP)
// 006044d8: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 006044db: MOV EAX,EBX
// 006044dd: ADD EAX,ECX
// 006044df: INC EBX
// 006044e0: MOV byte ptr [EAX],0x30
// 006044e3: JMP 0x00604552
//   XREF to: 00604552 (UNCONDITIONAL_JUMP)
// 006044e5: MOV EDI,dword ptr [EBP + 0x10]
//   Label: LAB_006044e5
//   XREF to: Stack[0xc] (READ)
// 006044e8: MOV dword ptr [EBP + -0x10],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 006044eb: CMP ESI,EDI
// 006044ed: JLE 0x006044f2
//   XREF to: 006044f2 (CONDITIONAL_JUMP)
// 006044ef: MOV dword ptr [EBP + -0x10],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 006044f2: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_006044f2
//   XREF to: Stack[0x14] (READ)
// 006044f5: MOV ECX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 006044f8: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 006044fb: ADD EDI,EBX
// 006044fd: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00604500: PUSH ES
// 00604501: MOV AX,DS
// 00604503: MOV ES,AX
// 00604505: PUSH EDI
// 00604506: MOV EAX,ECX
// 00604508: SHR ECX,0x2
// 0060450b: MOVSD.REP ES:EDI,ESI
// 0060450d: MOV CL,AL
// 0060450f: AND CL,0x3
// 00604512: MOVSB.REP ES:EDI,ESI
// 00604514: POP EDI
// 00604515: POP ES
// 00604516: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 00604519: ADD EDX,EAX
// 0060451b: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060451e: MOV dword ptr [EBP + 0xc],EDX
//   XREF to: Stack[0x8] (WRITE)
// 00604521: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00604524: ADD EBX,EAX
// 00604526: SUB ECX,EAX
// 00604528: MOV ESI,dword ptr [EDX + 0x4]
// 0060452b: MOV dword ptr [EBP + 0x10],ECX
//   XREF to: Stack[0xc] (WRITE)
// 0060452e: CMP EAX,ESI
// 00604530: JGE 0x00604552
//   XREF to: 00604552 (CONDITIONAL_JUMP)
// 00604532: MOV EDI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 00604535: MOV EAX,ESI
// 00604537: SUB EAX,EDI
// 00604539: PUSH EAX
// 0060453a: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060453d: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00604540: PUSH 0x30
// 00604542: ADD EAX,EBX
// 00604544: PUSH EAX
// 00604545: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0060454a: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060454d: ADD ESP,0xc
// 00604550: ADD EBX,EDX
// 00604552: MOV EAX,dword ptr [EBP + 0x8]
//   Label: LAB_00604552
//   XREF to: Stack[0x4] (READ)
// 00604555: MOV DH,byte ptr [EAX + 0x8]
// 00604558: MOV dword ptr [EAX + 0x18],EBX
// 0060455b: TEST DH,0x8
// 0060455e: JNZ 0x00604576
//   XREF to: 00604576 (CONDITIONAL_JUMP)
// 00604560: CMP dword ptr [EBP + -0x14],0x0
//   XREF to: Stack[-0x18] (READ)
// 00604564: JG 0x0060456b
//   XREF to: 0060456b (CONDITIONAL_JUMP)
// 00604566: TEST DH,0x10
// 00604569: JZ 0x00604576
//   XREF to: 00604576 (CONDITIONAL_JUMP)
// 0060456b: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_0060456b
//   XREF to: Stack[0x14] (READ)
// 0060456e: MOV EAX,EBX
// 00604570: ADD EAX,EDI
// 00604572: INC EBX
// 00604573: MOV byte ptr [EAX],0x2e
// 00604576: MOV EAX,dword ptr [EBP + 0x8]
//   Label: LAB_00604576
//   XREF to: Stack[0x4] (READ)
// 00604579: MOV EDX,dword ptr [EAX + 0x4]
// 0060457c: TEST EDX,EDX
// 0060457e: JGE 0x006045a1
//   XREF to: 006045a1 (CONDITIONAL_JUMP)
// 00604580: MOV ECX,EDX
// 00604582: NEG ECX
// 00604584: PUSH ECX
// 00604585: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00604588: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0060458b: PUSH 0x30
// 0060458d: ADD EAX,EBX
// 0060458f: MOV ESI,ECX
// 00604591: PUSH EAX
// 00604592: MOV dword ptr [EBP + -0x10],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00604595: MOV EDI,ESI
// 00604597: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0060459c: ADD EBX,EDI
// 0060459e: ADD ESP,0xc
// 006045a1: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_006045a1
//   XREF to: Stack[-0x18] (READ)
// 006045a4: TEST EAX,EAX
// 006045a6: JLE 0x006045ec
//   XREF to: 006045ec (CONDITIONAL_JUMP)
// 006045a8: CMP EAX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 006045ab: JGE 0x006045b0
//   XREF to: 006045b0 (CONDITIONAL_JUMP)
// 006045ad: MOV dword ptr [EBP + 0x10],EAX
//   XREF to: Stack[0xc] (WRITE)
// 006045b0: MOV ECX,dword ptr [EBP + 0x10]
//   Label: LAB_006045b0
//   XREF to: Stack[0xc] (READ)
// 006045b3: TEST ECX,ECX
// 006045b5: JZ 0x006045d8
//   XREF to: 006045d8 (CONDITIONAL_JUMP)
// 006045b7: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 006045ba: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 006045bd: ADD EDI,EBX
// 006045bf: PUSH ES
// 006045c0: MOV AX,DS
// 006045c2: MOV ES,AX
// 006045c4: PUSH EDI
// 006045c5: MOV EAX,ECX
// 006045c7: SHR ECX,0x2
// 006045ca: MOVSD.REP ES:EDI,ESI
// 006045cc: MOV CL,AL
// 006045ce: AND CL,0x3
// 006045d1: MOVSB.REP ES:EDI,ESI
// 006045d3: POP EDI
// 006045d4: POP ES
// 006045d5: ADD EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 006045d8: MOV EAX,dword ptr [EBP + 0x8]
//   Label: LAB_006045d8
//   XREF to: Stack[0x4] (READ)
// 006045db: MOV EDI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 006045de: MOV dword ptr [EAX + 0x1c],EBX
// 006045e1: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x18] (READ)
// 006045e4: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 006045e7: SUB EAX,EDI
// 006045e9: MOV dword ptr [EDX + 0x20],EAX
// 006045ec: MOV EAX,dword ptr [EBP + 0x8]
//   Label: LAB_006045ec
//   XREF to: Stack[0x4] (READ)
// 006045ef: CMP dword ptr [EAX + 0xc],0x0
// 006045f3: JZ 0x00604605
//   XREF to: 00604605 (CONDITIONAL_JUMP)
// 006045f5: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 006045f8: MOV EAX,EBX
// 006045fa: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 006045fd: ADD EAX,ECX
// 006045ff: MOV DL,byte ptr [EDX + 0xc]
// 00604602: INC EBX
// 00604603: MOV byte ptr [EAX],DL
// 00604605: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_00604605
//   XREF to: Stack[0x10] (READ)
// 00604608: LEA EAX,[EBX + 0x1]
// 0060460b: TEST ESI,ESI
// 0060460d: JL 0x0060461c
//   XREF to: 0060461c (CONDITIONAL_JUMP)
// 0060460f: MOV EDX,EBX
// 00604611: MOV EBX,EAX
// 00604613: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00604616: MOV byte ptr [EDX + EAX*0x1],0x2b
// 0060461a: JMP 0x0060462e
//   XREF to: 0060462e (UNCONDITIONAL_JUMP)
// 0060461c: MOV EDX,EBX
//   Label: LAB_0060461c
// 0060461e: MOV EDI,ESI
// 00604620: MOV EBX,EAX
// 00604622: NEG EDI
// 00604624: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00604627: MOV dword ptr [EBP + 0x14],EDI
//   XREF to: Stack[0x10] (WRITE)
// 0060462a: MOV byte ptr [EDX + EAX*0x1],0x2d
// 0060462e: MOV ECX,dword ptr [EBP + 0x8]
//   Label: LAB_0060462e
//   XREF to: Stack[0x4] (READ)
// 00604631: MOV ECX,dword ptr [ECX + 0x10]
// 00604634: CMP ECX,0x3
// 00604637: JA 0x00604677
//   XREF to: 00604677 (CONDITIONAL_JUMP)
// 00604639: MOV EAX,ECX
// 0060463b: JMP dword ptr CS:[EAX*0x4 + 0x604468]
//   Label: switchD
//   XREF to: 00604643 (COMPUTED_JUMP)
//   XREF to: 00604653 (COMPUTED_JUMP)
//   XREF to: 0060465e (COMPUTED_JUMP)
//   XREF to: 00604669 (COMPUTED_JUMP)
//   XREF to: 00604468 (DATA)
// 00604643: CMP dword ptr [EBP + 0x14],0x3e8
//   Label: caseD_0
//   XREF to: Stack[0x10] (READ)
// 0060464a: JGE 0x00604672
//   XREF to: 00604672 (CONDITIONAL_JUMP)
// 0060464c: MOV ECX,0x3
// 00604651: JMP 0x00604677
//   XREF to: 00604677 (UNCONDITIONAL_JUMP)
// 00604653: CMP dword ptr [EBP + 0x14],0xa
//   Label: caseD_1
//   XREF to: Stack[0x10] (READ)
// 00604657: JL 0x0060465e
//   XREF to: 0060465e (CONDITIONAL_JUMP)
// 00604659: MOV ECX,0x2
// 0060465e: CMP dword ptr [EBP + 0x14],0x64
//   Label: caseD_2
//   XREF to: Stack[0x10] (READ)
// 00604662: JL 0x00604669
//   XREF to: 00604669 (CONDITIONAL_JUMP)
// 00604664: MOV ECX,0x3
// 00604669: CMP dword ptr [EBP + 0x14],0x3e8
//   Label: caseD_3
//   XREF to: Stack[0x10] (READ)
// 00604670: JL 0x00604677
//   XREF to: 00604677 (CONDITIONAL_JUMP)
// 00604672: MOV ECX,0x4
//   Label: LAB_00604672
// 00604677: MOV EAX,dword ptr [EBP + 0x8]
//   Label: default
//   XREF to: Stack[0x4] (READ)
// 0060467a: MOV dword ptr [EAX + 0x10],ECX
// 0060467d: CMP ECX,0x4
// 00604680: JL 0x006046c8
//   XREF to: 006046c8 (CONDITIONAL_JUMP)
// 00604682: XOR EAX,EAX
// 00604684: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00604687: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060468a: CMP EDX,0x3e8
// 00604690: JL 0x006046b8
//   XREF to: 006046b8 (CONDITIONAL_JUMP)
// 00604692: MOV EDI,0x3e8
// 00604697: MOV EAX,EDX
// 00604699: SAR EDX,0x1f
// 0060469c: IDIV EDI
// 0060469e: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 006046a1: MOV EDX,EAX
// 006046a3: SHL EAX,0x5
// 006046a6: SUB EAX,EDX
// 006046a8: SHL EAX,0x2
// 006046ab: ADD EAX,EDX
// 006046ad: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 006046b0: SHL EAX,0x3
// 006046b3: SUB ESI,EAX
// 006046b5: MOV dword ptr [EBP + 0x14],ESI
//   XREF to: Stack[0x10] (WRITE)
// 006046b8: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_006046b8
//   XREF to: Stack[0x14] (READ)
// 006046bb: MOV EAX,EBX
// 006046bd: MOV DL,byte ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 006046c0: ADD EAX,EDI
// 006046c2: ADD DL,0x30
// 006046c5: INC EBX
// 006046c6: MOV byte ptr [EAX],DL
// 006046c8: CMP ECX,0x3
//   Label: LAB_006046c8
// 006046cb: JL 0x00604710
//   XREF to: 00604710 (CONDITIONAL_JUMP)
// 006046cd: XOR EAX,EAX
// 006046cf: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 006046d2: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 006046d5: CMP EDX,0x64
// 006046d8: JL 0x00604700
//   XREF to: 00604700 (CONDITIONAL_JUMP)
// 006046da: MOV EDI,0x64
// 006046df: MOV EAX,EDX
// 006046e1: SAR EDX,0x1f
// 006046e4: IDIV EDI
// 006046e6: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 006046e9: MOV EDX,EAX
// 006046eb: SHL EAX,0x2
// 006046ee: SUB EAX,EDX
// 006046f0: SHL EAX,0x3
// 006046f3: ADD EAX,EDX
// 006046f5: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 006046f8: SHL EAX,0x2
// 006046fb: SUB ESI,EAX
// 006046fd: MOV dword ptr [EBP + 0x14],ESI
//   XREF to: Stack[0x10] (WRITE)
// 00604700: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_00604700
//   XREF to: Stack[0x14] (READ)
// 00604703: MOV EAX,EBX
// 00604705: MOV DL,byte ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 00604708: ADD EAX,EDI
// 0060470a: ADD DL,0x30
// 0060470d: INC EBX
// 0060470e: MOV byte ptr [EAX],DL
// 00604710: CMP ECX,0x2
//   Label: LAB_00604710
// 00604713: JL 0x00604752
//   XREF to: 00604752 (CONDITIONAL_JUMP)
// 00604715: XOR EAX,EAX
// 00604717: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0060471a: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060471d: CMP EDX,0xa
// 00604720: JL 0x00604742
//   XREF to: 00604742 (CONDITIONAL_JUMP)
// 00604722: MOV ECX,0xa
// 00604727: MOV EAX,EDX
// 00604729: SAR EDX,0x1f
// 0060472c: IDIV ECX
// 0060472e: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00604731: MOV EDX,EAX
// 00604733: SHL EAX,0x2
// 00604736: ADD EAX,EDX
// 00604738: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0060473b: ADD EAX,EAX
// 0060473d: SUB ECX,EAX
// 0060473f: MOV dword ptr [EBP + 0x14],ECX
//   XREF to: Stack[0x10] (WRITE)
// 00604742: MOV ESI,dword ptr [EBP + 0x18]
//   Label: LAB_00604742
//   XREF to: Stack[0x14] (READ)
// 00604745: MOV EAX,EBX
// 00604747: MOV DL,byte ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060474a: ADD EAX,ESI
// 0060474c: ADD DL,0x30
// 0060474f: INC EBX
// 00604750: MOV byte ptr [EAX],DL
// 00604752: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_00604752
//   XREF to: Stack[0x14] (READ)
// 00604755: MOV EAX,EBX
// 00604757: MOV DL,byte ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0060475a: ADD EAX,EDI
// 0060475c: ADD DL,0x30
// 0060475f: INC EBX
// 00604760: MOV byte ptr [EAX],DL
// 00604762: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00604765: MOV EDX,EBX
// 00604767: MOV EAX,dword ptr [EAX + 0x1c]
// 0060476a: SUB EDX,EAX
// 0060476c: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060476f: ADD EBX,EDI
// 00604771: MOV dword ptr [EAX + 0x24],EDX
// 00604774: JMP 0x0060445b
//   XREF to: 0060445b (UNCONDITIONAL_JUMP)
