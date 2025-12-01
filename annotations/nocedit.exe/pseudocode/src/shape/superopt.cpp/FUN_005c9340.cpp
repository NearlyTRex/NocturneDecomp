// Name: shape_superopt.cpp_FUN_005c9340
// Address: 005c9340
// Address Range: [[005c9340, 005c94f5]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c9340()
// Cross-references:
//   shape_superopt.cpp_FUN_005c91e0 (005c91e0) at 005c9217 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00654232 = 1.00000000000000E-10
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void shape_superopt_cpp_FUN_005c9340(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  BADSPACEBASE *in_ESP;
  uint uVar7;
  undefined4 *puVar8;
  double *pdVar9;
  byte bVar10;
  int in_stack_00000008;
  uint *in_stack_0000000c;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  uint local_18;
  uint uStack_14;
  
  bVar10 = 0;
  uVar7 = 0;
  if (*in_stack_0000000c != 0) {
    do {
      pvVar6 = (void *)(uVar7 * 0x60 + in_stack_00000008);
      dVar1 = *(double *)((int)pvVar6 + 0x28) - *(double *)((int)pvVar6 + 0x10);
      dVar3 = *(double *)((int)pvVar6 + 0x30) - *(double *)((int)pvVar6 + 0x18);
      dVar2 = *(double *)((int)pvVar6 + 0x38) - *(double *)((int)pvVar6 + 0x20);
      if (SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1) < DOUBLE_00654232) {
        crt_string_c_memmove_FUN_005fe5e0
                  (pvVar6,(void *)((uVar7 + 1) * 0x60 + in_stack_00000008),
                   ((*in_stack_0000000c - uVar7) + -1) * 0x60);
        uVar7 = uVar7 - 1;
        *in_stack_0000000c = *in_stack_0000000c - 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *in_stack_0000000c);
  }
  local_18 = 0;
  while( true ) {
    if ((*in_stack_0000000c - 1 <= local_18) || (*in_stack_0000000c < 3)) break;
    pvVar6 = (void *)(local_18 * 0x60 + in_stack_00000008);
    iVar4 = local_18 + 1;
    puVar8 = (undefined4 *)((int)pvVar6 + 0x10);
    pdVar9 = &local_c0;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pdVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pdVar9 = (double *)((int)pdVar9 + ((uint)bVar10 * -2 + 1) * 4);
    }
    puVar8 = (undefined4 *)((int)pvVar6 + 0x28);
    pdVar9 = &local_78;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pdVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pdVar9 = (double *)((int)pdVar9 + (uint)bVar10 * -8 + 4);
    }
    iVar4 = iVar4 * 0x60 + in_stack_00000008;
    puVar8 = (undefined4 *)(iVar4 + 0x10);
    pdVar9 = &local_a8;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pdVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pdVar9 = (double *)((int)pdVar9 + (uint)bVar10 * -8 + 4);
    }
    dVar1 = local_a8 - local_78;
    dVar3 = local_a0 - local_70;
    dVar2 = local_98 - local_68;
    puVar8 = (undefined4 *)(iVar4 + 0x28);
    pdVar9 = &local_90;
    for (iVar5 = 6; uVar7 = local_18, iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pdVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      pdVar9 = (double *)((int)pdVar9 + (uint)bVar10 * -8 + 4);
    }
    if ((DOUBLE_00654232 < SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1)) ||
       (DOUBLE_00654232 <
        SQRT((local_80 - local_b0) * (local_80 - local_b0) +
             (local_88 - local_b8) * (local_88 - local_b8) +
             (local_90 - local_c0) * (local_90 - local_c0)))) {
      local_18 = local_18 + 1;
    }
    else {
      crt_string_c_memmove_FUN_005fe5e0
                (pvVar6,(void *)((local_18 + 2) * 0x60 + in_stack_00000008),
                 ((*in_stack_0000000c - local_18) + -2) * 0x60);
      uStack_14 = uVar7;
      *in_stack_0000000c = *in_stack_0000000c - 2;
    }
  }
  if (2 < *in_stack_0000000c) {
    return;
  }
  *in_stack_0000000c = 0;
  return;
}


// Assembly code:
// 005c9340: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005c9340
// 005c9341: PUSH ESI
// 005c9342: PUSH EDI
// 005c9343: PUSH EBP
// 005c9344: MOV EBP,ESP
// 005c9346: SUB ESP,0xac
// 005c934c: AND ESP,0xfffffff8
// 005c934f: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005c9352: MOV EDX,dword ptr [EBX]
// 005c9354: XOR ESI,ESI
// 005c9356: TEST EDX,EDX
// 005c9358: JBE 0x005c939a
//   XREF to: 005c939a (CONDITIONAL_JUMP)
// 005c935a: IMUL EDX,ESI,0x60
//   Label: LAB_005c935a
// 005c935d: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c9360: ADD EDX,EDI
// 005c9362: LEA ECX,[EDX + 0x10]
// 005c9365: LEA EAX,[EDX + 0x28]
// 005c9368: FLD double ptr [EAX]
// 005c936a: FSUB double ptr [ECX]
// 005c936c: FMUL ST0
// 005c936e: FLD double ptr [EAX + 0x8]
// 005c9371: FSUB double ptr [ECX + 0x8]
// 005c9374: FMUL ST0
// 005c9376: FLD double ptr [EAX + 0x10]
// 005c9379: FXCH
// 005c937b: FADDP ST2,ST0
// 005c937d: FSUB double ptr [ECX + 0x10]
// 005c9380: FMUL ST0
// 005c9382: FADDP
// 005c9384: FSQRT
// 005c9386: FCOMP double ptr [0x00654232]
//   XREF to: 00654232 (READ)
// 005c938c: FNSTSW AX
// 005c938e: SAHF
// 005c938f: JC 0x005c9445
//   XREF to: 005c9445 (CONDITIONAL_JUMP)
// 005c9395: INC ESI
//   Label: LAB_005c9395
// 005c9396: CMP ESI,dword ptr [EBX]
// 005c9398: JC 0x005c935a
//   XREF to: 005c935a (CONDITIONAL_JUMP)
// 005c939a: XOR ESI,ESI
//   Label: LAB_005c939a
// 005c939c: MOV dword ptr [ESP + 0xa8],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005c93a3: MOV EAX,dword ptr [EBX]
//   Label: LAB_005c93a3
// 005c93a5: MOV EDX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (READ)
// 005c93ac: DEC EAX
// 005c93ad: CMP EAX,EDX
// 005c93af: JBE 0x005c94dd
//   XREF to: 005c94dd (CONDITIONAL_JUMP)
// 005c93b5: CMP dword ptr [EBX],0x2
// 005c93b8: JBE 0x005c94dd
//   XREF to: 005c94dd (CONDITIONAL_JUMP)
// 005c93be: IMUL EDX,EDX,0x60
// 005c93c1: ADD EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c93c4: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (READ)
// 005c93cb: INC EAX
// 005c93cc: IMUL EAX,EAX,0x60
// 005c93cf: MOV ECX,0x6
// 005c93d4: MOV EDI,ESP
// 005c93d6: LEA ESI,[EDX + 0x10]
// 005c93d9: MOVSD.REP ES:EDI,ESI
// 005c93db: MOV ECX,0x6
// 005c93e0: LEA EDI,[ESP + 0x48]
//   XREF to: Stack[-0x78] (DATA)
// 005c93e4: LEA ESI,[EDX + 0x28]
// 005c93e7: MOVSD.REP ES:EDI,ESI
// 005c93e9: ADD EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c93ec: LEA EDI,[ESP + 0x18]
//   XREF to: Stack[-0xa8] (DATA)
// 005c93f0: MOV ECX,0x6
// 005c93f5: LEA ESI,[EAX + 0x10]
// 005c93f8: MOVSD.REP ES:EDI,ESI
// 005c93fa: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xa8] (READ)
// 005c93fe: FSUB double ptr [ESP + 0x48]
//   XREF to: Stack[-0x78] (READ)
// 005c9402: FMUL ST0
// 005c9404: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xa0] (READ)
// 005c9408: FSUB double ptr [ESP + 0x50]
//   XREF to: Stack[-0x70] (READ)
// 005c940c: FMUL ST0
// 005c940e: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x98] (READ)
// 005c9412: FXCH
// 005c9414: FADDP ST2,ST0
// 005c9416: FSUB double ptr [ESP + 0x58]
//   XREF to: Stack[-0x68] (READ)
// 005c941a: FMUL ST0
// 005c941c: FADDP
// 005c941e: LEA ESI,[EAX + 0x28]
// 005c9421: FSQRT
// 005c9423: MOV ECX,0x6
// 005c9428: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x90] (DATA)
// 005c942c: MOVSD.REP ES:EDI,ESI
// 005c942e: FCOMP double ptr [0x00654232]
//   XREF to: 00654232 (READ)
// 005c9434: FNSTSW AX
// 005c9436: SAHF
// 005c9437: JBE 0x005c946b
//   XREF to: 005c946b (CONDITIONAL_JUMP)
// 005c9439: INC dword ptr [ESP + 0xa8]
//   Label: LAB_005c9439
//   XREF to: Stack[-0x18] (READ_WRITE)
// 005c9440: JMP 0x005c93a3
//   XREF to: 005c93a3 (UNCONDITIONAL_JUMP)
// 005c9445: MOV EAX,dword ptr [EBX]
//   Label: LAB_005c9445
// 005c9447: SUB EAX,ESI
// 005c9449: DEC EAX
// 005c944a: IMUL EAX,EAX,0x60
// 005c944d: PUSH EAX
// 005c944e: LEA EAX,[ESI + 0x1]
// 005c9451: IMUL EAX,EAX,0x60
// 005c9454: ADD EAX,EDI
// 005c9456: PUSH EAX
// 005c9457: PUSH EDX
// 005c9458: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005c945d: MOV EDI,dword ptr [EBX]
// 005c945f: DEC ESI
// 005c9460: DEC EDI
// 005c9461: ADD ESP,0xc
// 005c9464: MOV dword ptr [EBX],EDI
// 005c9466: JMP 0x005c9395
//   XREF to: 005c9395 (UNCONDITIONAL_JUMP)
// 005c946b: FLD double ptr [ESP + 0x30]
//   Label: LAB_005c946b
//   XREF to: Stack[-0x90] (READ)
// 005c946f: FSUB double ptr [ESP]
//   XREF to: Stack[-0xc0] (DATA)
// 005c9472: FMUL ST0
// 005c9474: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x88] (READ)
// 005c9478: FSUB double ptr [ESP + 0x8]
//   XREF to: Stack[-0xb8] (READ)
// 005c947c: FMUL ST0
// 005c947e: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x80] (READ)
// 005c9482: FXCH
// 005c9484: FADDP ST2,ST0
// 005c9486: FSUB double ptr [ESP + 0x10]
//   XREF to: Stack[-0xb0] (READ)
// 005c948a: FMUL ST0
// 005c948c: FADDP
// 005c948e: FSQRT
// 005c9490: FCOMP double ptr [0x00654232]
//   XREF to: 00654232 (READ)
// 005c9496: FNSTSW AX
// 005c9498: SAHF
// 005c9499: JA 0x005c9439
//   XREF to: 005c9439 (CONDITIONAL_JUMP)
// 005c949b: MOV ESI,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (READ)
// 005c94a2: MOV EAX,dword ptr [EBX]
// 005c94a4: SUB EAX,ESI
// 005c94a6: SUB EAX,0x2
// 005c94a9: IMUL EAX,EAX,0x60
// 005c94ac: PUSH EAX
// 005c94ad: LEA EAX,[ESI + 0x2]
// 005c94b0: IMUL EAX,EAX,0x60
// 005c94b3: ADD EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005c94b6: PUSH EAX
// 005c94b7: PUSH EDX
// 005c94b8: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005c94bd: ADD ESP,0xc
// 005c94c0: MOV EAX,dword ptr [EBX]
// 005c94c2: LEA EDX,[ESI + -0x1]
// 005c94c5: SUB EAX,0x2
// 005c94c8: MOV dword ptr [ESP + 0xa8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005c94cf: MOV dword ptr [EBX],EAX
// 005c94d1: INC dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 005c94d8: JMP 0x005c93a3
//   XREF to: 005c93a3 (UNCONDITIONAL_JUMP)
// 005c94dd: CMP dword ptr [EBX],0x3
//   Label: LAB_005c94dd
// 005c94e0: JC 0x005c94e9
//   XREF to: 005c94e9 (CONDITIONAL_JUMP)
// 005c94e2: MOV ESP,EBP
// 005c94e4: POP EBP
// 005c94e5: POP EDI
// 005c94e6: POP ESI
// 005c94e7: POP EBX
// 005c94e8: RET
// 005c94e9: MOV dword ptr [EBX],0x0
//   Label: LAB_005c94e9
// 005c94ef: MOV ESP,EBP
// 005c94f1: POP EBP
// 005c94f2: POP EDI
// 005c94f3: POP ESI
// 005c94f4: POP EBX
// 005c94f5: RET
