// Name: crt_heap.c_ResizeBlockInPlace_FUN_006097b8
// Address: 006097b8
// Address Range: [[006097b8, 00609971]]
// Convention: __watcallRegister
// Signature: int crt_heap.c_ResizeBlockInPlace_FUN_006097b8(ushort segment, void * ptr, ulong new_size, ulong * pExtraNeeded)
// Cross-references:
//   crt_heap.c_TryResizeInPlace_FUN_00609974 (00609974) at 00609998 [UNCONDITIONAL_CALL]
// Globals:
//   Heap* g_MainHeap = 00000000
//   undefined4 DAT_03f9b851
// Function calls:
//   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0

#include "nocturne.h"

int crt_heap_c_ResizeBlockInPlace_FUN_006097b8
              (ushort segment,void *ptr,ulong new_size,ulong *pExtraNeeded)

{
  Heap **ppHVar1;
  uint uVar2;
  Heap *pHVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  short in_DS;
  short in_stack_00000004;
  Heap *in_stack_00000008;
  uint in_stack_0000000c;
  uint *in_stack_00000010;
  
  uVar4 = in_stack_0000000c + 0xb & 0xfffffff8;
  if (uVar4 < in_stack_0000000c) {
    uVar4 = 0xffffffff;
  }
  else if (uVar4 < 0x10) {
    uVar4 = 0x10;
  }
  ppHVar1 = &in_stack_00000008[-1].next_heap_block;
  uVar7 = (uint)*ppHVar1 & 0xfffffffe;
  if (uVar7 < uVar4) {
    *in_stack_00000010 = uVar4 - uVar7;
    for (puVar8 = (uint *)((int)ppHVar1 + uVar7); uVar4 = *puVar8, uVar4 != 0xffffffff;
        puVar8 = (uint *)((int)puVar8 + uVar4)) {
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      uVar7 = puVar8[2];
      uVar2 = puVar8[1];
      if (in_DS == in_stack_00000004) {
        pHVar3 = g_MainHeap->next_heap_block;
        new_size = (ulong)g_MainHeap;
        while ((pHVar3 != (Heap *)0x0 &&
               ((in_stack_00000008 < new_size ||
                ((Heap *)((int)&((Heap *)new_size)->heap_size + ((Heap *)new_size)->heap_size) <=
                 in_stack_00000008))))) {
          new_size = (ulong)((Heap *)new_size)->next_heap_block;
          pHVar3 = ((Heap *)new_size)->next_heap_block;
        }
      }
      if (puVar8 == (uint *)((Heap *)(new_size + 0xc))->heap_size) {
        ((Heap *)(new_size + 0xc))->heap_size = ((uint *)((Heap *)(new_size + 0xc))->heap_size)[1];
      }
      if (*in_stack_00000010 <= uVar4) {
        uVar6 = uVar4 - *in_stack_00000010;
        if (0xf < uVar6) {
          puVar8 = (uint *)((int)puVar8 + *in_stack_00000010);
          *puVar8 = uVar6;
          puVar8[1] = uVar2;
          puVar8[2] = uVar7;
          *(uint **)(uVar2 + 8) = puVar8;
          *(uint **)(uVar7 + 4) = puVar8;
          *ppHVar1 = (Heap *)((int)&(*ppHVar1)->heap_size + *in_stack_00000010);
          DAT_03f9b851 = 0;
          goto LAB_00609968;
        }
      }
      *(uint *)(uVar2 + 8) = uVar7;
      *(uint *)(uVar7 + 4) = uVar2;
      *ppHVar1 = (Heap *)((int)&(*ppHVar1)->heap_size + uVar4);
      ((Heap *)(new_size + 0x18))->heap_base =
           (void *)((int)((Heap *)(new_size + 0x18))->heap_base + -1);
      DAT_03f9b851 = 0;
      if (*in_stack_00000010 <= uVar4) goto LAB_00609968;
      *in_stack_00000010 = *in_stack_00000010 - uVar4;
    }
    iVar5 = 2;
  }
  else {
    if (0xf < uVar7 - uVar4) {
      *ppHVar1 = (Heap *)(uVar4 | 1);
      *(uint *)(uVar4 + (int)ppHVar1) = uVar7 - uVar4 | 1;
      if (in_DS == in_stack_00000004) {
        pHVar3 = g_MainHeap->next_heap_block;
        new_size = (ulong)g_MainHeap;
        while ((pHVar3 != (Heap *)0x0 &&
               ((in_stack_00000008 < new_size ||
                ((Heap *)((int)&((Heap *)new_size)->heap_size + ((Heap *)new_size)->heap_size) <=
                 in_stack_00000008))))) {
          new_size = (ulong)((Heap *)new_size)->next_heap_block;
          pHVar3 = ((Heap *)new_size)->next_heap_block;
        }
      }
      ((Heap *)(new_size + 0x18))->heap_size = ((Heap *)(new_size + 0x18))->heap_size + 1;
      crt_heap_c_ValidateHeapIntegrity_FUN_00601ce0((uint *)(uVar4 + (int)ppHVar1) + 1);
    }
LAB_00609968:
    iVar5 = 0;
  }
  return iVar5;
}


// Assembly code:
// 006097b8: PUSH EBX
//   Label: crt_heap.c_ResizeBlockInPlace_FUN_006097b8
// 006097b9: PUSH ESI
// 006097ba: PUSH EDI
// 006097bb: PUSH EBP
// 006097bc: SUB ESP,0xc
// 006097bf: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 006097c3: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 006097c7: LEA EAX,[EDX + 0xb]
// 006097ca: AND AL,0xf8
// 006097cc: CMP EAX,EDX
// 006097ce: JNC 0x006097d7
//   XREF to: 006097d7 (CONDITIONAL_JUMP)
// 006097d0: MOV EAX,0xffffffff
// 006097d5: JMP 0x006097e1
//   XREF to: 006097e1 (UNCONDITIONAL_JUMP)
// 006097d7: CMP EAX,0x10
//   Label: LAB_006097d7
// 006097da: JNC 0x006097e1
//   XREF to: 006097e1 (CONDITIONAL_JUMP)
// 006097dc: MOV EAX,0x10
// 006097e1: LEA EDX,[ESI + -0x4]
//   Label: LAB_006097e1
// 006097e4: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 006097e7: MOV EDX,dword ptr [EDX]
// 006097e9: AND DL,0xfe
// 006097ec: CMP EAX,EDX
// 006097ee: JBE 0x00609909
//   XREF to: 00609909 (CONDITIONAL_JUMP)
// 006097f4: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 006097f7: SUB EAX,EDX
// 006097f9: ADD EBP,EDX
// 006097fb: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 006097ff: MOV dword ptr [EDX],EAX
// 00609801: MOV EDI,dword ptr [EBP]
//   Label: LAB_00609801
// 00609804: CMP EDI,-0x1
// 00609807: JNZ 0x00609813
//   XREF to: 00609813 (CONDITIONAL_JUMP)
// 00609809: MOV EAX,0x2
// 0060980e: JMP 0x0060996a
//   XREF to: 0060996a (UNCONDITIONAL_JUMP)
// 00609813: TEST DI,0x1
//   Label: LAB_00609813
// 00609818: JNZ 0x006098fc
//   XREF to: 006098fc (CONDITIONAL_JUMP)
// 0060981e: MOV EAX,dword ptr [EBP + 0x8]
// 00609821: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00609825: MOV EAX,dword ptr [EBP + 0x4]
// 00609828: MOV DX,DS
// 0060982a: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060982e: MOV EAX,0x684ed4
//   XREF to: 00684ed4 (DATA)
// 00609833: CMP DX,word ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00609838: JNZ 0x0060985b
//   XREF to: 0060985b (CONDITIONAL_JUMP)
// 0060983a: MOV EBX,dword ptr [0x00684ed4]
//   XREF to: 00684ed4 (READ)
// 00609840: CMP dword ptr [EBX + 0x8],0x0
// 00609844: JZ 0x0060985b
//   XREF to: 0060985b (CONDITIONAL_JUMP)
// 00609846: CMP EBX,ESI
//   Label: LAB_00609846
// 00609848: JA 0x00609852
//   XREF to: 00609852 (CONDITIONAL_JUMP)
// 0060984a: MOV EAX,dword ptr [EBX]
// 0060984c: ADD EAX,EBX
// 0060984e: CMP EAX,ESI
// 00609850: JA 0x0060985b
//   XREF to: 0060985b (CONDITIONAL_JUMP)
// 00609852: MOV EBX,dword ptr [EBX + 0x8]
//   Label: LAB_00609852
// 00609855: CMP dword ptr [EBX + 0x8],0x0
// 00609859: JNZ 0x00609846
//   XREF to: 00609846 (CONDITIONAL_JUMP)
// 0060985b: MOV EAX,dword ptr [EBX + 0xc]
//   Label: LAB_0060985b
// 0060985e: CMP EBP,EAX
// 00609860: JNZ 0x00609868
//   XREF to: 00609868 (CONDITIONAL_JUMP)
// 00609862: MOV EAX,dword ptr [EAX + 0x4]
// 00609865: MOV dword ptr [EBX + 0xc],EAX
// 00609868: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00609868
//   XREF to: Stack[0x10] (READ)
// 0060986c: CMP EDI,dword ptr [EAX]
// 0060986e: JC 0x0060987f
//   XREF to: 0060987f (CONDITIONAL_JUMP)
// 00609870: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 00609874: MOV EAX,EDI
// 00609876: MOV ECX,dword ptr [EDX]
// 00609878: SUB EAX,ECX
// 0060987a: CMP EAX,0x10
// 0060987d: JNC 0x006098b6
//   XREF to: 006098b6 (CONDITIONAL_JUMP)
// 0060987f: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0060987f
//   XREF to: Stack[-0x14] (READ)
// 00609883: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 00609887: MOV dword ptr [EAX + 0x8],EDX
// 0060988a: MOV EAX,EDX
// 0060988c: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00609890: MOV dword ptr [EAX + 0x4],EDX
// 00609893: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00609896: ADD dword ptr [EAX],EDI
// 00609898: MOV ECX,dword ptr [EBX + 0x1c]
// 0060989b: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 0060989f: DEC ECX
// 006098a0: XOR DL,DL
// 006098a2: MOV dword ptr [EBX + 0x1c],ECX
// 006098a5: MOV byte ptr [0x03f9b851],DL
//   XREF to: 03f9b851 (WRITE)
// 006098ab: MOV EDX,dword ptr [EAX]
// 006098ad: CMP EDI,EDX
// 006098af: JC 0x006098ef
//   XREF to: 006098ef (CONDITIONAL_JUMP)
// 006098b1: JMP 0x00609968
//   XREF to: 00609968 (UNCONDITIONAL_JUMP)
// 006098b6: ADD EBP,ECX
//   Label: LAB_006098b6
// 006098b8: MOV dword ptr [EBP],EAX
// 006098bb: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 006098bf: MOV dword ptr [EBP + 0x4],EAX
// 006098c2: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 006098c6: MOV dword ptr [EBP + 0x8],EAX
// 006098c9: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 006098cd: MOV dword ptr [EAX + 0x8],EBP
// 006098d0: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 006098d4: MOV dword ptr [EAX + 0x4],EBP
// 006098d7: MOV EAX,dword ptr [EDX]
// 006098d9: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 006098dc: MOV EDI,dword ptr [EDX]
// 006098de: ADD EDI,EAX
// 006098e0: XOR AH,AH
// 006098e2: MOV dword ptr [EDX],EDI
// 006098e4: MOV byte ptr [0x03f9b851],AH
//   XREF to: 03f9b851 (WRITE)
// 006098ea: JMP 0x00609968
//   XREF to: 00609968 (UNCONDITIONAL_JUMP)
// 006098ef: MOV ECX,EDX
//   Label: LAB_006098ef
// 006098f1: SUB ECX,EDI
// 006098f3: ADD EBP,EDI
// 006098f5: MOV dword ptr [EAX],ECX
// 006098f7: JMP 0x00609801
//   XREF to: 00609801 (UNCONDITIONAL_JUMP)
// 006098fc: MOV EAX,0x1
//   Label: LAB_006098fc
// 00609901: ADD ESP,0xc
// 00609904: POP EBP
// 00609905: POP EDI
// 00609906: POP ESI
// 00609907: POP EBX
// 00609908: RET
// 00609909: SUB EDX,EAX
//   Label: LAB_00609909
// 0060990b: CMP EDX,0x10
// 0060990e: JC 0x00609968
//   XREF to: 00609968 (CONDITIONAL_JUMP)
// 00609910: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00609913: MOV EDI,EAX
// 00609915: OR DL,0x1
// 00609918: OR DI,0x1
// 0060991c: LEA ECX,[EAX + EBP*0x1]
// 0060991f: MOV dword ptr [EBP],EDI
// 00609922: MOV EAX,0x684ed4
//   XREF to: 00684ed4 (DATA)
// 00609927: MOV dword ptr [ECX],EDX
// 00609929: MOV DX,DS
// 0060992b: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x1c] (DATA)
// 0060992e: CMP DX,word ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00609933: JNZ 0x00609956
//   XREF to: 00609956 (CONDITIONAL_JUMP)
// 00609935: MOV EBX,dword ptr [0x00684ed4]
//   XREF to: 00684ed4 (READ)
// 0060993b: CMP dword ptr [EBX + 0x8],0x0
// 0060993f: JZ 0x00609956
//   XREF to: 00609956 (CONDITIONAL_JUMP)
// 00609941: CMP EBX,ESI
//   Label: LAB_00609941
// 00609943: JA 0x0060994d
//   XREF to: 0060994d (CONDITIONAL_JUMP)
// 00609945: MOV EAX,dword ptr [EBX]
// 00609947: ADD EAX,EBX
// 00609949: CMP EAX,ESI
// 0060994b: JA 0x00609956
//   XREF to: 00609956 (CONDITIONAL_JUMP)
// 0060994d: MOV EBX,dword ptr [EBX + 0x8]
//   Label: LAB_0060994d
// 00609950: CMP dword ptr [EBX + 0x8],0x0
// 00609954: JNZ 0x00609941
//   XREF to: 00609941 (CONDITIONAL_JUMP)
// 00609956: INC dword ptr [EBX + 0x18]
//   Label: LAB_00609956
// 00609959: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0060995c: ADD EAX,0x4
// 0060995f: PUSH EAX
// 00609960: CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
//   XREF to: 00601ce0 (UNCONDITIONAL_CALL)
// 00609965: ADD ESP,0x4
// 00609968: XOR EAX,EAX
//   Label: LAB_00609968
// 0060996a: ADD ESP,0xc
//   Label: LAB_0060996a
// 0060996d: POP EBP
// 0060996e: POP EDI
// 0060996f: POP ESI
// 00609970: POP EBX
// 00609971: RET
