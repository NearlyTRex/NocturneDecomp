// Name: crt_heap.c_AllocateFromFreeList_FUN_00609410
// Address: 00609410
// Address Range: [[00609410, 006094bc]]
// Convention: __watcallRegister
// Signature: void * crt_heap.c_AllocateFromFreeList_FUN_00609410(ulong size, HeapBlock * free_block, ushort ds_segment)
// Cross-references:
//   crt_heap.c_InternalHeapAlloc_FUN_00601bc0 (00601bc0) at 00601c5b [UNCONDITIONAL_CALL]

#include "nocturne.h"

void * crt_heap_c_AllocateFromFreeList_FUN_00609410
                 (ulong size,HeapBlock *free_block,ushort ds_segment)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_EBX;
  uint uVar5;
  
  if ((size != 0) && (size <= size + 0xb)) {
    uVar4 = size + 0xb & 0xfffffff8;
    if (uVar4 < 0x10) {
      uVar4 = 0x10;
    }
    if (uVar4 <= *(uint *)(unaff_EBX + 0x14)) {
      uVar5 = *(uint *)(unaff_EBX + 0x10);
      puVar3 = *(uint **)(unaff_EBX + 0xc);
      if (uVar4 <= uVar5) {
        puVar3 = *(uint **)(unaff_EBX + 0x28);
        uVar5 = 0;
      }
      do {
        uVar2 = *puVar3;
        if (uVar4 <= uVar2) {
          *(uint *)(unaff_EBX + 0x10) = uVar5;
          *(int *)(unaff_EBX + 0x18) = *(int *)(unaff_EBX + 0x18) + 1;
          if (uVar2 - uVar4 < 0x10) {
            *(int *)(unaff_EBX + 0x1c) = *(int *)(unaff_EBX + 0x1c) + -1;
            uVar4 = puVar3[1];
            *(uint *)(unaff_EBX + 0xc) = uVar4;
            uVar5 = puVar3[2];
            *(uint *)(uVar4 + 8) = uVar5;
            *(uint *)(uVar5 + 4) = uVar4;
          }
          else {
            puVar1 = (uint *)((int)puVar3 + uVar4);
            *(uint **)(unaff_EBX + 0xc) = puVar1;
            *puVar1 = uVar2 - uVar4;
            *puVar3 = uVar4;
            uVar4 = puVar3[1];
            puVar1[1] = uVar4;
            uVar5 = puVar3[2];
            puVar1[2] = uVar5;
            *(uint **)(uVar4 + 8) = puVar1;
            *(uint **)(uVar5 + 4) = puVar1;
          }
          *(byte *)puVar3 = (byte)*puVar3 | 1;
          return puVar3 + 1;
        }
        if (uVar5 < uVar2) {
          uVar5 = uVar2;
        }
        puVar3 = (uint *)puVar3[2];
      } while (puVar3 != (uint *)(unaff_EBX + 0x20));
      *(uint *)(unaff_EBX + 0x14) = uVar5;
    }
  }
  return (void *)0x0;
}


// Assembly code:
// 00609410: PUSH ESI
//   Label: crt_heap.c_AllocateFromFreeList_FUN_00609410
// 00609411: PUSH EDI
// 00609412: PUSH EBP
// 00609413: XOR EBP,EBP
// 00609415: TEST EAX,EAX
// 00609417: JZ 0x006094b7
//   XREF to: 006094b7 (CONDITIONAL_JUMP)
// 0060941d: LEA ECX,[EAX + 0xb]
// 00609420: CMP ECX,EAX
// 00609422: JC 0x006094b7
//   XREF to: 006094b7 (CONDITIONAL_JUMP)
// 00609428: MOV EDI,EBX
// 0060942a: AND CL,0xf8
// 0060942d: MOV EAX,dword ptr [EBX + 0x14]
// 00609430: CMP ECX,0x10
// 00609433: JNC 0x0060943a
//   XREF to: 0060943a (CONDITIONAL_JUMP)
// 00609435: MOV ECX,0x10
// 0060943a: CMP ECX,EAX
//   Label: LAB_0060943a
// 0060943c: JA 0x006094b7
//   XREF to: 006094b7 (CONDITIONAL_JUMP)
// 00609442: MOV EBX,dword ptr [EDI + 0x10]
// 00609445: MOV EAX,dword ptr [EDI + 0xc]
// 00609448: CMP ECX,EBX
// 0060944a: JA 0x00609451
//   XREF to: 00609451 (CONDITIONAL_JUMP)
// 0060944c: MOV EAX,dword ptr [EDI + 0x28]
// 0060944f: XOR EBX,EBX
// 00609451: LEA ESI,[EDI + 0x20]
//   Label: LAB_00609451
// 00609454: MOV EDX,dword ptr [EAX]
//   Label: LAB_00609454
// 00609456: CMP ECX,EDX
// 00609458: JBE 0x0060946c
//   XREF to: 0060946c (CONDITIONAL_JUMP)
// 0060945a: CMP EDX,EBX
// 0060945c: JBE 0x00609460
//   XREF to: 00609460 (CONDITIONAL_JUMP)
// 0060945e: MOV EBX,EDX
// 00609460: MOV EAX,dword ptr [EAX + 0x8]
//   Label: LAB_00609460
// 00609463: CMP EAX,ESI
// 00609465: JNZ 0x00609454
//   XREF to: 00609454 (CONDITIONAL_JUMP)
// 00609467: MOV dword ptr [EDI + 0x14],EBX
// 0060946a: JMP 0x006094b7
//   XREF to: 006094b7 (UNCONDITIONAL_JUMP)
// 0060946c: MOV dword ptr [EDI + 0x10],EBX
//   Label: LAB_0060946c
// 0060946f: MOV EBX,dword ptr [EDI + 0x18]
// 00609472: INC EBX
// 00609473: SUB EDX,ECX
// 00609475: MOV dword ptr [EDI + 0x18],EBX
// 00609478: CMP EDX,0x10
// 0060947b: JC 0x0060949b
//   XREF to: 0060949b (CONDITIONAL_JUMP)
// 0060947d: LEA EBX,[EAX + ECX*0x1]
// 00609480: MOV dword ptr [EDI + 0xc],EBX
// 00609483: MOV dword ptr [EBX],EDX
// 00609485: MOV dword ptr [EAX],ECX
// 00609487: MOV ECX,dword ptr [EAX + 0x4]
// 0060948a: MOV dword ptr [EBX + 0x4],ECX
// 0060948d: MOV EDX,dword ptr [EAX + 0x8]
// 00609490: MOV dword ptr [EBX + 0x8],EDX
// 00609493: MOV dword ptr [ECX + 0x8],EBX
// 00609496: MOV dword ptr [EDX + 0x4],EBX
// 00609499: JMP 0x006094ad
//   XREF to: 006094ad (UNCONDITIONAL_JUMP)
// 0060949b: DEC dword ptr [EDI + 0x1c]
//   Label: LAB_0060949b
// 0060949e: MOV EDX,dword ptr [EAX + 0x4]
// 006094a1: MOV dword ptr [EDI + 0xc],EDX
// 006094a4: MOV EBX,dword ptr [EAX + 0x8]
// 006094a7: MOV dword ptr [EDX + 0x8],EBX
// 006094aa: MOV dword ptr [EBX + 0x4],EDX
// 006094ad: MOV DL,byte ptr [EAX]
//   Label: LAB_006094ad
// 006094af: OR DL,0x1
// 006094b2: LEA EBP,[EAX + 0x4]
// 006094b5: MOV byte ptr [EAX],DL
// 006094b7: MOV EAX,EBP
//   Label: LAB_006094b7
// 006094b9: POP EBP
// 006094ba: POP EDI
// 006094bb: POP ESI
// 006094bc: RET
