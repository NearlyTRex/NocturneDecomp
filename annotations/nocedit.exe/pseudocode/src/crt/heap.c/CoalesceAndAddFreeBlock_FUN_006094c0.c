// Name: crt_heap.c_CoalesceAndAddFreeBlock_FUN_006094c0
// Address: 006094c0
// Address Range: [[006094c0, 006095ed]]
// Convention: __watcallRegister
// Signature: void crt_heap.c_CoalesceAndAddFreeBlock_FUN_006094c0(void * ptr, HeapBlock * heap_block, ushort segment)
// Cross-references:
//   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0 (00601ce0) at 00601dad [UNCONDITIONAL_CALL]

#include "nocturne.h"

void crt_heap_c_CoalesceAndAddFreeBlock_FUN_006094c0(void *ptr,HeapBlock *heap_block,ushort segment)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined2 unaff_0000000e;
  int iVar7;
  uint *puVar8;
  
  iVar7 = CONCAT22(unaff_0000000e,segment);
  if (ptr == (void *)0x0) {
    return;
  }
  puVar1 = (uint *)((int)ptr - 4);
  if ((*puVar1 & 1) == 0) {
    return;
  }
  uVar6 = *puVar1 & 0xfffffffe;
  pbVar2 = (byte *)((int)puVar1 + uVar6);
  if ((*pbVar2 & 1) == 0) {
    *puVar1 = uVar6 + *(int *)pbVar2;
    if (pbVar2 == *(byte **)(iVar7 + 0xc)) {
      *(uint **)(iVar7 + 0xc) = puVar1;
    }
    uVar6 = *(uint *)(pbVar2 + 4);
    puVar4 = *(uint **)(pbVar2 + 8);
    *(uint **)(uVar6 + 8) = puVar4;
    puVar4[1] = uVar6;
    *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x1c) + -1;
  }
  else {
    *puVar1 = uVar6;
    puVar4 = *(uint **)(iVar7 + 0xc);
    if (puVar1 < puVar4) {
      if (((uint *)puVar4[1] < puVar1) || (puVar4 = *(uint **)(iVar7 + 0x28), puVar1 < puVar4))
      goto LAB_0060959e;
    }
    else {
      puVar4 = (uint *)puVar4[2];
      if ((puVar1 < puVar4) || (puVar4 = (uint *)(iVar7 + 0x20), *(uint **)(iVar7 + 0x24) < puVar1))
      goto LAB_0060959e;
    }
    uVar6 = *(uint *)(iVar7 + 0x1c);
    uVar3 = *(uint *)(iVar7 + 0x18) / (uVar6 + 1);
    if (uVar3 < uVar6) {
      iVar5 = uVar3 * 2;
      if (*(int *)(iVar7 + 0x18) - uVar6 <= uVar6) {
        iVar5 = -1;
      }
      puVar4 = (uint *)(*puVar1 + (int)puVar1);
      do {
        uVar6 = *puVar4;
        if ((uVar6 & 1) == 0) goto LAB_0060959e;
        if (uVar6 == 0xffffffff) break;
        puVar4 = (uint *)((int)puVar4 + (uVar6 & 0xfffffffe));
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar4 = *(uint **)(iVar7 + 0xc);
    if (puVar1 < puVar4) {
      puVar4 = *(uint **)(iVar7 + 0x28);
    }
    while (((puVar4 <= puVar1 && (puVar4 = (uint *)puVar4[2], puVar4 <= puVar1)) &&
           (puVar4 = (uint *)puVar4[2], puVar4 <= puVar1))) {
      puVar4 = (uint *)puVar4[2];
    }
  }
LAB_0060959e:
  puVar8 = (uint *)puVar4[1];
  uVar6 = *puVar1;
  if ((uint *)(*puVar8 + (int)puVar8) == puVar1) {
    uVar6 = uVar6 + *puVar8;
    *puVar8 = uVar6;
    if (puVar1 == *(uint **)(iVar7 + 0xc)) {
      *(uint **)(iVar7 + 0xc) = puVar8;
    }
  }
  else {
    *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x1c) + 1;
    *(uint **)((int)ptr + 4) = puVar4;
    *(uint **)ptr = puVar8;
    puVar8[2] = (uint)puVar1;
    puVar4[1] = (uint)puVar1;
    puVar8 = puVar1;
  }
  *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + -1;
  if ((puVar8 < *(uint **)(iVar7 + 0xc)) && (*(uint *)(iVar7 + 0x10) < uVar6)) {
    *(uint *)(iVar7 + 0x10) = uVar6;
  }
  if (*(uint *)(iVar7 + 0x14) < uVar6) {
    *(uint *)(iVar7 + 0x14) = uVar6;
  }
  return;
}


// Assembly code:
// 006094c0: PUSH ESI
//   Label: crt_heap.c_CoalesceAndAddFreeBlock_FUN_006094c0
// 006094c1: PUSH EDI
// 006094c2: PUSH EBP
// 006094c3: MOV ECX,EBX
// 006094c5: TEST EAX,EAX
// 006094c7: JZ 0x006095ea
//   XREF to: 006095ea (CONDITIONAL_JUMP)
// 006094cd: LEA EBX,[EAX + -0x4]
// 006094d0: TEST byte ptr [EBX],0x1
// 006094d3: JZ 0x006095ea
//   XREF to: 006095ea (CONDITIONAL_JUMP)
// 006094d9: MOV EDX,dword ptr [EBX]
// 006094db: AND DL,0xfe
// 006094de: LEA EAX,[EBX + EDX*0x1]
// 006094e1: MOV ESI,ECX
// 006094e3: TEST byte ptr [EAX],0x1
// 006094e6: JNZ 0x0060950a
//   XREF to: 0060950a (CONDITIONAL_JUMP)
// 006094e8: MOV EDI,dword ptr [EAX]
// 006094ea: ADD EDX,EDI
// 006094ec: MOV dword ptr [EBX],EDX
// 006094ee: CMP EAX,dword ptr [ECX + 0xc]
// 006094f1: JNZ 0x006094f6
//   XREF to: 006094f6 (CONDITIONAL_JUMP)
// 006094f3: MOV dword ptr [ECX + 0xc],EBX
// 006094f6: MOV EDX,dword ptr [EAX + 0x4]
//   Label: LAB_006094f6
// 006094f9: MOV EAX,dword ptr [EAX + 0x8]
// 006094fc: MOV dword ptr [EDX + 0x8],EAX
// 006094ff: MOV dword ptr [EAX + 0x4],EDX
// 00609502: DEC dword ptr [ESI + 0x1c]
// 00609505: JMP 0x0060959e
//   XREF to: 0060959e (UNCONDITIONAL_JUMP)
// 0060950a: MOV dword ptr [EBX],EDX
//   Label: LAB_0060950a
// 0060950c: MOV EAX,dword ptr [ECX + 0xc]
// 0060950f: CMP EBX,EAX
// 00609511: JNC 0x00609529
//   XREF to: 00609529 (CONDITIONAL_JUMP)
// 00609513: CMP EBX,dword ptr [EAX + 0x4]
// 00609516: JA 0x0060959e
//   XREF to: 0060959e (CONDITIONAL_JUMP)
// 0060951c: MOV EAX,dword ptr [ECX + 0x28]
// 0060951f: CMP EBX,EAX
// 00609521: JC 0x0060959e
//   XREF to: 0060959e (CONDITIONAL_JUMP)
// 00609527: JMP 0x00609542
//   XREF to: 00609542 (UNCONDITIONAL_JUMP)
// 00609529: MOV EAX,dword ptr [EAX + 0x8]
//   Label: LAB_00609529
// 0060952c: CMP EBX,EAX
// 0060952e: JC 0x0060959e
//   XREF to: 0060959e (CONDITIONAL_JUMP)
// 00609534: LEA EAX,[ECX + 0x20]
// 00609537: MOV EDX,dword ptr [EAX + 0x4]
// 0060953a: CMP EBX,EDX
// 0060953c: JA 0x0060959e
//   XREF to: 0060959e (CONDITIONAL_JUMP)
// 00609542: MOV EDI,dword ptr [ESI + 0x1c]
//   Label: LAB_00609542
// 00609545: MOV EAX,dword ptr [ESI + 0x18]
// 00609548: XOR EDX,EDX
// 0060954a: LEA ECX,[EDI + 0x1]
// 0060954d: DIV ECX
// 0060954f: MOV ECX,EAX
// 00609551: CMP EAX,EDI
// 00609553: JNC 0x0060957d
//   XREF to: 0060957d (CONDITIONAL_JUMP)
// 00609555: MOV EAX,dword ptr [ESI + 0x18]
// 00609558: SUB EAX,EDI
// 0060955a: ADD ECX,ECX
// 0060955c: CMP EAX,EDI
// 0060955e: JA 0x00609565
//   XREF to: 00609565 (CONDITIONAL_JUMP)
// 00609560: MOV ECX,0xffffffff
// 00609565: MOV EAX,dword ptr [EBX]
//   Label: LAB_00609565
// 00609567: ADD EAX,EBX
// 00609569: MOV EDX,dword ptr [EAX]
//   Label: LAB_00609569
// 0060956b: TEST DL,0x1
// 0060956e: JZ 0x0060959e
//   XREF to: 0060959e (CONDITIONAL_JUMP)
// 00609570: CMP EDX,-0x1
// 00609573: JZ 0x0060957d
//   XREF to: 0060957d (CONDITIONAL_JUMP)
// 00609575: AND DL,0xfe
// 00609578: ADD EAX,EDX
// 0060957a: DEC ECX
// 0060957b: JNZ 0x00609569
//   XREF to: 00609569 (CONDITIONAL_JUMP)
// 0060957d: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_0060957d
// 00609580: CMP EBX,EAX
// 00609582: JNC 0x00609587
//   XREF to: 00609587 (CONDITIONAL_JUMP)
// 00609584: MOV EAX,dword ptr [ESI + 0x28]
// 00609587: CMP EBX,EAX
//   Label: LAB_00609587
// 00609589: JC 0x0060959e
//   XREF to: 0060959e (CONDITIONAL_JUMP)
// 0060958b: MOV EAX,dword ptr [EAX + 0x8]
// 0060958e: CMP EBX,EAX
// 00609590: JC 0x0060959e
//   XREF to: 0060959e (CONDITIONAL_JUMP)
// 00609592: MOV EAX,dword ptr [EAX + 0x8]
// 00609595: CMP EBX,EAX
// 00609597: JC 0x0060959e
//   XREF to: 0060959e (CONDITIONAL_JUMP)
// 00609599: MOV EAX,dword ptr [EAX + 0x8]
// 0060959c: JMP 0x00609587
//   XREF to: 00609587 (UNCONDITIONAL_JUMP)
// 0060959e: MOV EDX,dword ptr [EAX + 0x4]
//   Label: LAB_0060959e
// 006095a1: MOV EDI,dword ptr [EDX]
// 006095a3: ADD EDI,EDX
// 006095a5: MOV ECX,dword ptr [EBX]
// 006095a7: CMP EDI,EBX
// 006095a9: JNZ 0x006095bd
//   XREF to: 006095bd (CONDITIONAL_JUMP)
// 006095ab: MOV EBP,dword ptr [EDX]
// 006095ad: ADD ECX,EBP
// 006095af: MOV dword ptr [EDX],ECX
// 006095b1: CMP EBX,dword ptr [ESI + 0xc]
// 006095b4: JNZ 0x006095b9
//   XREF to: 006095b9 (CONDITIONAL_JUMP)
// 006095b6: MOV dword ptr [ESI + 0xc],EDX
// 006095b9: MOV EBX,EDX
//   Label: LAB_006095b9
// 006095bb: JMP 0x006095cc
//   XREF to: 006095cc (UNCONDITIONAL_JUMP)
// 006095bd: INC dword ptr [ESI + 0x1c]
//   Label: LAB_006095bd
// 006095c0: MOV dword ptr [EBX + 0x8],EAX
// 006095c3: MOV dword ptr [EBX + 0x4],EDX
// 006095c6: MOV dword ptr [EDX + 0x8],EBX
// 006095c9: MOV dword ptr [EAX + 0x4],EBX
// 006095cc: MOV EDX,dword ptr [ESI + 0x18]
//   Label: LAB_006095cc
// 006095cf: DEC EDX
// 006095d0: MOV EDI,dword ptr [ESI + 0xc]
// 006095d3: MOV dword ptr [ESI + 0x18],EDX
// 006095d6: CMP EBX,EDI
// 006095d8: JNC 0x006095e2
//   XREF to: 006095e2 (CONDITIONAL_JUMP)
// 006095da: CMP ECX,dword ptr [ESI + 0x10]
// 006095dd: JBE 0x006095e2
//   XREF to: 006095e2 (CONDITIONAL_JUMP)
// 006095df: MOV dword ptr [ESI + 0x10],ECX
// 006095e2: CMP ECX,dword ptr [ESI + 0x14]
//   Label: LAB_006095e2
// 006095e5: JBE 0x006095ea
//   XREF to: 006095ea (CONDITIONAL_JUMP)
// 006095e7: MOV dword ptr [ESI + 0x14],ECX
// 006095ea: POP EBP
//   Label: LAB_006095ea
// 006095eb: POP EDI
// 006095ec: POP ESI
// 006095ed: RET
