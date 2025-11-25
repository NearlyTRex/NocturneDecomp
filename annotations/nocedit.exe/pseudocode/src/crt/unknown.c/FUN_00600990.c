// Name: crt_unknown.c_FUN_00600990
// Address: 00600990
// Address Range: [[00600990, 00600a61]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00600990()
// Cross-references:
//   crt_watcom.c_heapchk_FUN_00600ad0 (00600ad0) at 00600af5 [UNCONDITIONAL_CALL]
// Globals:
//   Heap* g_MainHeap = 00000000
//   undefined4 DAT_03f9b1f0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 crt_unknown_c_FUN_00600990(void)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  Heap *pHVar5;
  uint uVar6;
  uint uVar7;
  uint *in_stack_00000004;
  
  uVar6 = 0;
  pHVar5 = g_MainHeap;
  if (g_MainHeap != (Heap *)0x0) {
    do {
      _DAT_03f9b1f0 = (byte *)pHVar5[3].heap_base;
      if (((*(undefined1 **)(_DAT_03f9b1f0 + 4) == (undefined1 *)0x0) ||
          (*(undefined1 **)(_DAT_03f9b1f0 + 4) < &pHVar5[2].next_heap_block)) ||
         ((uint)((int)&pHVar5->heap_size + pHVar5->heap_size) < *(uint *)(_DAT_03f9b1f0 + 4))) {
        return 3;
      }
      pbVar1 = *(byte **)(*(uint *)(_DAT_03f9b1f0 + 4) + 8);
      if (_DAT_03f9b1f0 != pbVar1) {
        return 3;
      }
      iVar2 = *(int *)(pbVar1 + 8);
      pbVar4 = _DAT_03f9b1f0;
      uVar7 = uVar6;
      while( true ) {
        if (((iVar2 == 0) || (*(undefined1 **)(pbVar4 + 8) < &pHVar5[2].next_heap_block)) ||
           (_DAT_03f9b1f0 = *(byte **)(pbVar4 + 8),
           (byte *)((int)&pHVar5->heap_size + pHVar5->heap_size) < _DAT_03f9b1f0)) {
          _DAT_03f9b1f0 = pbVar4;
          return 3;
        }
        pbVar3 = *(byte **)(_DAT_03f9b1f0 + 4);
        if (pbVar4 != pbVar3) {
          _DAT_03f9b1f0 = pbVar4;
          return 3;
        }
        if ((*pbVar3 & 1) != 0) {
          _DAT_03f9b1f0 = pbVar4;
          return 3;
        }
        uVar6 = *(int *)pbVar3 + uVar7;
        if (uVar6 < uVar7) {
          _DAT_03f9b1f0 = pbVar4;
          return 3;
        }
        if (_DAT_03f9b1f0 == pbVar1) break;
        iVar2 = *(int *)(_DAT_03f9b1f0 + 8);
        pbVar4 = _DAT_03f9b1f0;
        uVar7 = uVar6;
      }
      pHVar5 = pHVar5->next_heap_block;
    } while (pHVar5 != (Heap *)0x0);
  }
  *in_stack_00000004 = uVar6;
  return 0;
}


// Assembly code:
// 00600990: PUSH EBX
//   Label: crt_unknown.c_FUN_00600990
// 00600991: PUSH ESI
// 00600992: PUSH EDI
// 00600993: PUSH EBP
// 00600994: MOV ECX,dword ptr [0x00684ed4]
//   XREF to: 00684ed4 (READ)
// 0060099a: XOR EBX,EBX
// 0060099c: TEST ECX,ECX
// 0060099e: JZ 0x00600a55
//   XREF to: 00600a55 (CONDITIONAL_JUMP)
// 006009a4: MOV EAX,dword ptr [ECX + 0x28]
//   Label: LAB_006009a4
// 006009a7: MOV EDX,dword ptr [EAX + 0x4]
// 006009aa: MOV [0x03f9b1f0],EAX
//   XREF to: 03f9b1f0 (WRITE)
// 006009af: TEST EDX,EDX
// 006009b1: JZ 0x006009c5
//   XREF to: 006009c5 (CONDITIONAL_JUMP)
// 006009b3: LEA EDI,[ECX + 0x20]
// 006009b6: CMP EDI,EDX
// 006009b8: JA 0x006009c5
//   XREF to: 006009c5 (CONDITIONAL_JUMP)
// 006009ba: MOV EDX,dword ptr [ECX]
// 006009bc: MOV EBP,dword ptr [EAX + 0x4]
// 006009bf: ADD EDX,ECX
// 006009c1: CMP EDX,EBP
// 006009c3: JNC 0x006009cf
//   XREF to: 006009cf (CONDITIONAL_JUMP)
// 006009c5: MOV EAX,0x3
//   Label: LAB_006009c5
// 006009ca: POP EBP
// 006009cb: POP EDI
// 006009cc: POP ESI
// 006009cd: POP EBX
// 006009ce: RET
// 006009cf: MOV ESI,dword ptr [EBP + 0x8]
//   Label: LAB_006009cf
// 006009d2: CMP EAX,ESI
// 006009d4: JZ 0x006009e0
//   XREF to: 006009e0 (CONDITIONAL_JUMP)
// 006009d6: MOV EAX,0x3
// 006009db: POP EBP
// 006009dc: POP EDI
// 006009dd: POP ESI
// 006009de: POP EBX
// 006009df: RET
// 006009e0: CMP dword ptr [ESI + 0x8],0x0
//   Label: LAB_006009e0
// 006009e4: JZ 0x006009f6
//   Label: LAB_006009e4
//   XREF to: 006009f6 (CONDITIONAL_JUMP)
// 006009e6: CMP EDI,dword ptr [EAX + 0x8]
// 006009e9: JA 0x006009f6
//   XREF to: 006009f6 (CONDITIONAL_JUMP)
// 006009eb: MOV EDX,dword ptr [ECX]
// 006009ed: MOV EBP,dword ptr [EAX + 0x8]
// 006009f0: ADD EDX,ECX
// 006009f2: CMP EDX,EBP
// 006009f4: JNC 0x00600a00
//   XREF to: 00600a00 (CONDITIONAL_JUMP)
// 006009f6: MOV EAX,0x3
//   Label: LAB_006009f6
// 006009fb: POP EBP
// 006009fc: POP EDI
// 006009fd: POP ESI
// 006009fe: POP EBX
// 006009ff: RET
// 00600a00: MOV EDX,EBP
//   Label: LAB_00600a00
// 00600a02: MOV EBP,dword ptr [EBP + 0x4]
// 00600a05: CMP EAX,EBP
// 00600a07: JZ 0x00600a13
//   XREF to: 00600a13 (CONDITIONAL_JUMP)
// 00600a09: MOV EAX,0x3
// 00600a0e: POP EBP
// 00600a0f: POP EDI
// 00600a10: POP ESI
// 00600a11: POP EBX
// 00600a12: RET
// 00600a13: TEST byte ptr [EBP],0x1
//   Label: LAB_00600a13
// 00600a17: JZ 0x00600a23
//   XREF to: 00600a23 (CONDITIONAL_JUMP)
// 00600a19: MOV EAX,0x3
// 00600a1e: POP EBP
// 00600a1f: POP EDI
// 00600a20: POP ESI
// 00600a21: POP EBX
// 00600a22: RET
// 00600a23: MOV EAX,dword ptr [EBP]
//   Label: LAB_00600a23
// 00600a26: ADD EAX,EBX
// 00600a28: CMP EAX,EBX
// 00600a2a: JNC 0x00600a36
//   XREF to: 00600a36 (CONDITIONAL_JUMP)
// 00600a2c: MOV EAX,0x3
// 00600a31: POP EBP
// 00600a32: POP EDI
// 00600a33: POP ESI
// 00600a34: POP EBX
// 00600a35: RET
// 00600a36: MOV EBX,EAX
//   Label: LAB_00600a36
// 00600a38: MOV dword ptr [0x03f9b1f0],EDX
//   XREF to: 03f9b1f0 (WRITE)
// 00600a3e: MOV EAX,EDX
// 00600a40: CMP EDX,ESI
// 00600a42: JZ 0x00600a4a
//   XREF to: 00600a4a (CONDITIONAL_JUMP)
// 00600a44: CMP dword ptr [EDX + 0x8],0x0
// 00600a48: JMP 0x006009e4
//   XREF to: 006009e4 (UNCONDITIONAL_JUMP)
// 00600a4a: MOV ECX,dword ptr [ECX + 0x8]
//   Label: LAB_00600a4a
// 00600a4d: TEST ECX,ECX
// 00600a4f: JNZ 0x006009a4
//   XREF to: 006009a4 (CONDITIONAL_JUMP)
// 00600a55: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00600a55
//   XREF to: Stack[0x4] (READ)
// 00600a59: MOV dword ptr [EAX],EBX
// 00600a5b: XOR EAX,EAX
// 00600a5d: POP EBP
// 00600a5e: POP EDI
// 00600a5f: POP ESI
// 00600a60: POP EBX
// 00600a61: RET
